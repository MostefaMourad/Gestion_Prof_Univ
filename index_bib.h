#include <stdio.h>
#include <stdlib.h>
#define Max1 1500
#define Max 1000
char date_creation[50];
char date_modificarion[50];
typedef struct table_index
{   int cle;
    int adr ;
    int posi;
    int efface;
    int spec;
    int etab;
} table_index;
table_index tab[1000000];
table_index tableau[1000000];
typedef struct repeat
{
  int taille;
  table_index repeter[100000];
} repeat;
repeat repett;
typedef struct  specialite
{
  int taille;
  table_index tab_sppec[100000];
}specialite;
specialite speccc;
typedef struct  univ
{
  int taille;
  table_index tab_etab_univ[100000];
}univ;
univ etablissement;
typedef struct Tbloc_index
{
  table_index tab[1500];
  int NB;
}Tbloc_index;

 typedef struct Entete_index
    {
        int adrDerBloc;
        int nbEnreg;
    } Entete_index;

typedef struct TOF_index
{
    FILE *fichier;
    Entete_index entete;
}TOF_index;


///**********************************************************************///
///                          machine abstraite                           ///
///**********************************************************************///
struct table_index *Allouer_E_index ()
{ return ((struct table_index *) malloc( sizeof(struct table_index ))); }

struct Tbloc_index *Allouer_B_index ()
{ return ((struct Tbloc_index *) malloc( sizeof(struct Tbloc_index ))); }

struct TOF_index *Allouer_T_index ()
{ return ((TOF_index *) malloc( sizeof(struct TOF_index ))); }

/**--------------Fonction d'ouverture d'un fichier--------------**/


int ouvrir_index(TOF_index **f,char *chemin,char mode)
{
    char s[3];
    *f = Allouer_T_index();
    if((mode == 'A') || (mode == 'a')) sprintf(s,"rb+");
    else if ((mode == 'N') || (mode == 'n')) sprintf(s,"wb+");
    else return 0;

    (*f)->fichier = fopen(chemin, s);
    if((*f)->fichier == NULL)   return 0;

    if((mode == 'A') || (mode == 'a'))
    {
        fread(&((*f)->entete), sizeof(Entete_index), 1, (*f)->fichier);
    }
    else if ((mode == 'N') || (mode == 'n'))
    {

        (*f)->entete.adrDerBloc =0;
        (*f)->entete.nbEnreg = 0;
        Entete_index *r;
        r=malloc(sizeof(Entete_index));
        r->adrDerBloc=0;
        r->nbEnreg=0;
        fseek((*f)->fichier,0,SEEK_SET);
        fwrite(r,sizeof(Entete_index),1,(*f)->fichier);
    }
    return 1;
}
/**--------------Fonction de fermeture d'un fichier--------------**/

void fermer_index(TOF_index* *f)
{
    fseek((*f)->fichier,0,SEEK_SET);
    fwrite(&((*f)->entete), sizeof(Entete_index), 1, (*f)->fichier);
    fclose((*f)->fichier);
}
/**-----------------Fonction de lecture d'un bloc----------------**/
void lireDir_index(TOF_index *f,int N_Bloc,Tbloc_index* *buffer)
{
    if(N_Bloc <= (f->entete).adrDerBloc)
    {
        fseek(f->fichier, sizeof(Entete_index) + ((N_Bloc-1)*sizeof(Tbloc_index)),SEEK_SET);
        fread(*buffer, sizeof(Tbloc_index),1, f->fichier);
    }
}
/**-----------------Fonction d'écriture d'un bloc----------------**/
void ecrireDir_index(TOF_index* *f,int N_Bloc,Tbloc_index *buffer)
{
    fseek((*f)->fichier, sizeof(Entete_index) + ((N_Bloc-1)*sizeof(Tbloc_index)),SEEK_SET);
    fwrite(buffer,sizeof(Tbloc_index),1, (*f)->fichier);
}
/**----------------Fonction de lecture de l'entête---------------**/
/** lorsque i=1 ====> lecture de l'adresse du dernier bloc
   lorsque i=2 ====> lecture du nombre d'enregistrement **/
int entete_index(TOF_index *f,int i)
{
    if(i == 1) return (f->entete).adrDerBloc;
    else if(i == 2) return (f->entete).nbEnreg;
    else return -1;
}
/**-------------Fonction de modification de l'entête-------------*/
/** lorsque i=1 ====> modification de l'adresse du dernier bloc
   lorsque i=2 ====> modification du nombre d'enregistrement **/
void aff_entete_index(TOF_index* *f, int i, int val)
{
    if(i == 1) (*f)->entete.adrDerBloc = val;
    else if(i == 2) (*f)->entete.nbEnreg = val;
}
void alloc_bloc_index(TOF_index* *f,int emplacement)
{
    Tbloc_index *buffer;
    buffer=Allouer_B_index();
    buffer->NB=0;
    ecrireDir_index(f,emplacement,buffer);
}
/*************************** RECHERCHE ******************/
void Rech_tof_index( int c,char nomfich[80],int *x ,int *y,int *z)
{

         TOF_index *f;
         ouvrir_index(&f,nomfich,'a');
         int bi,bs,sup,inf,stop,i,j,trouv;
         j=0;
         bi=1;
         bs=entete_index(f,1);
         int a,d;
         trouv=0;
         stop=0;
         Tbloc_index *buff,*buff1;
         buff = Allouer_B_index();
         buff1=Allouer_B_index();
         lireDir_index(f,bi,&buff1);
         lireDir_index(f,bs,&buff);
         if((c > buff->tab[(buff->NB)-1].cle))
            {

                if(buff->NB<1500)
                {
                    i=bs;
                    j=buff->NB;
                    trouv=0;
                }
                else
                {
                    i=bs+1;
                    j=0;
                    trouv=0;
                }
            }
         else if((c < buff1->tab[0].cle))
         {
            i=1;
            j=0;
            trouv=0;
         }
         else
         {
         while((bi<=bs)&&(trouv==0)&&(stop==0))
         {
             i=(int)((bs+bi)/2);
             lireDir_index(f,i,&buff);
             a=buff->tab[0].cle;
             d=buff->tab[(buff->NB)-1].cle;
             if((c>=a)&&(c<=d))
             {
                 inf=0;
                 sup=(buff->NB)-1;
                 j=(int)((inf+sup)/2);
                 while((inf<=sup)&&(!trouv))
                 {
                     j=(int)((inf+sup)/2);
                     if((c==buff->tab[j].cle)&&(buff->tab[j].efface==0))
                     {
                         trouv=1;
                     }
                     else
                     {
                         if(c>buff->tab[j].cle)
                         {
                             inf=j+1;
                         }
                         else
                         {
                             sup=j-1;
                         }
                     }
                 }
                 if(!trouv)
                 {
                     j=inf;
                 }
                 stop=1;
                 }
                 else
                 {
                     if(c<a)
                     {
                         bs=i-1;
                     }
                     if(c>d)
                     {
                         bi=i+1;
                     }
                 }

             }
             if(!trouv)
             {
                 i=bi;
             }
         }
             fermer_index(&f);
             *x=i;
             *y=j;
             *z=trouv;

}
/** Insersion ***/
void inser_tof_index(table_index e,TOF_index* *F,char nomfich[80])
{
    int i,j,trouv;
    Rech_tof_index(e.cle,nomfich,&i,&j,&trouv);
    if(trouv==0)
    {
    int bs=entete_index(*F,1);
    Tbloc_index *BUFF;
    BUFF=Allouer_B_index();
    lireDir_index(*F,bs,&BUFF);
    if((i==bs)&&(j==BUFF->NB))
    {
        BUFF->tab[j].adr=e.adr;
        BUFF->tab[j].posi=e.posi;
        BUFF->tab[j].cle=e.cle;
        BUFF->tab[j].efface=e.efface;
        BUFF->NB=(BUFF->NB)+1;
        ecrireDir_index(F,bs,BUFF);
        aff_entete_index(F,2,entete_index(*F,2)+1);
    }
    else
    {
    Tbloc_index *buffer;
    buffer = Allouer_B_index();
    int continu=1;
    int bs=entete_index(*F,1),k;
    table_index x;
    while((continu==1)&&(i<=bs))
    {
     lireDir_index(*F,i,&buffer);
     x.adr=buffer->tab[(buffer->NB)-1].adr;
     x.cle=buffer->tab[(buffer->NB)-1].cle;
     x.posi=buffer->tab[(buffer->NB)-1].posi;
     x.efface=buffer->tab[(buffer->NB)-1].efface;
     k=buffer->NB-1;
     while(k>j)
     {
         buffer->tab[k]=buffer->tab[k-1];
         k=k-1;
     }
     buffer->tab[j].adr=e.adr;
     buffer->tab[j].cle=e.cle;
     buffer->tab[j].posi=e.posi;
     buffer->tab[j].efface=e.efface;
     if((buffer->NB)<(1500))
     {
         buffer->tab[(buffer->NB)].adr=x.adr;
         buffer->tab[(buffer->NB)].cle=x.cle;
         buffer->tab[(buffer->NB)].posi=x.posi;
         buffer->tab[(buffer->NB)].efface=x.efface;
         buffer->NB=(buffer->NB)+1;
         ecrireDir_index(F,i,buffer);
         continu=0;
     }
     else
     {
         ecrireDir_index(F,i,buffer);
         i=i+1;
         j=0;
         e.cle=x.cle;
         e.adr=x.adr;
         e.posi=x.posi;
         e.efface=x.efface;
     }
    }
    if(i>bs)
    {
        buffer->tab[0].cle=e.cle;
        buffer->tab[0].adr=e.adr;
        buffer->tab[0].posi=e.posi;
        buffer->tab[0].efface=e.efface;
        buffer->NB=1;
        ecrireDir_index(F,i,buffer);
        aff_entete_index(F,1,i);
    }
    aff_entete_index(F,2,(entete_index(*F,2))+1);
   }
    }
}
/******* Affichage index **************/
void affich_index(Tbloc_index *buffer,int n_en)
{
    int i;
        for(i=0;i<(n_en-1);i++)
        {
            if(buffer->tab[i].efface==0)
            {
            printf("< cl%c :%d, bloc :%d , position %d , spec %d ,etab %d >\n",130,buffer->tab[i].cle,buffer->tab[i].adr,buffer->tab[i].posi,buffer->tab[i].spec,buffer->tab[i].etab);
            printf("------------------------------------------------------------------------------------------------\n");
            }
        }
}/**** les Algorithmes de Tri ********/
int Partitionnement_en_place(table_index tab[],int debut,int fin)
{
  int j=debut,i;
  table_index e;
  for(i=debut;i<fin;i++)
  {
      if((tab[i].cle)<=(tab[fin].cle))
      {
          e=tab[i];
          tab[i]=tab[j];
          tab[j]=e;
          j++;
      }
  }
  e=tab[j];
  tab[j]=(tab[fin]);
  tab[fin]=e;
  return j;
}
int Partitionnement_en_place_bloc(table_index tab[],int debut,int fin)
{
  int j=debut,i;
  table_index e;
  for(i=debut;i<fin;i++)
  {
      if((tab[i].adr)<=(tab[fin].adr))
      {
          e=tab[i];
          tab[i]=tab[j];
          tab[j]=e;
          j++;
      }
  }
  e=tab[j];
  tab[j]=(tab[fin]);
  tab[fin]=e;
  return j;
}
void Tri_Rapide(table_index tab[],int debut,int fin)
{
    int premier,dernier,position_pivot;
    premier=debut;
    dernier=fin;
    if(premier<dernier)
    {
        position_pivot=Partitionnement_en_place(tab,debut,fin);
        Tri_Rapide(tab,debut,position_pivot-1);
        Tri_Rapide(tab,position_pivot+1,fin);
    }
}
void Tri_Rapide_bloc(table_index tab[],int debut,int fin)
{
    int premier,dernier,position_pivot;
    premier=debut;
    dernier=fin;
    if(premier<dernier)
    {
        position_pivot=Partitionnement_en_place_bloc(tab,debut,fin);
        Tri_Rapide_bloc(tab,debut,position_pivot-1);
        Tri_Rapide_bloc(tab,position_pivot+1,fin);
    }
}

void ecrir_tab(TOF_index* *F,table_index tab[],int n)
{
        Tbloc_index *buffer;
        buffer = Allouer_B_index();
        int b=1;
        int i=0;
        int k=0;
        repett.taille=0;
        while(i<n)
        {
            k=0;
            while((k<1000)&&(i<n))
            {
              if(tab[i].efface==0)
              {
              buffer->tab[k].cle=tab[i].cle;
              buffer->tab[k].adr=tab[i].adr;
              buffer->tab[k].posi=tab[i].posi;
              buffer->tab[k].spec=tab[i].spec;
              buffer->tab[k].etab=tab[i].etab;
              k=k+1;
              }
              i=i+1;
              if((tab[i].cle==tab[i+1].cle)&&(k!=1000))
                {
                   repett.repeter[repett.taille]=tab[i];
                   repett.taille=repett.taille+1;
                }

            }
            buffer->NB=k;
            ecrireDir_index(F,b,buffer);
            b=b+1;
        }
}
void Lire_tab(TOF_index *F,table_index tab[])
{
        Tbloc_index *buffer;
        buffer = Allouer_B_index();
        int b=entete_index(F,1);
        int i=1;
        int k=0;
        while(i<=b)
        {
            k=0;
            lireDir_index(F,i,&buffer);
            while(k<(buffer->NB-1))
            {
             tab[i].cle=buffer->tab[k].cle;
             tab[i].adr=buffer->tab[k].adr;
             tab[i].posi=buffer->tab[k].posi;
             tab[i].efface=buffer->tab[k].efface;
             tab[i].spec=buffer->tab[k].spec;
             tab[i].etab=buffer->tab[k].etab;
             i=i+1;
             k=k+1;
            }
            i=i+1;
        }
}
void Rech_tnof( int c,char nomfich[80],int *x ,int *y,int *z)
{

         TOF_index *f;
         ouvrir_index(&f,nomfich,'a');
         int bi,bs,sup,inf,stop,i,j,trouv;
         j=0;
         bi=1;
         bs=entete_index(f,1);
         int a,d;
         trouv=0;
         stop=0;
         *z=0;
         Tbloc_index *buff,*buff1;
         buff = Allouer_B_index();
         buff1=Allouer_B_index();
         lireDir_index(f,bi,&buff1);
         lireDir_index(f,bs,&buff);
         if((c > buff->tab[(buff->NB)-1].cle))
            {

                if(buff->NB<1500)
                {
                    i=bs;
                    j=buff->NB;
                    trouv=0;
                }
                else
                {
                    i=bs+1;
                    j=0;
                    trouv=0;
                }
            }
         else if((c < buff1->tab[0].cle))
         {
            i=1;
            j=0;
            trouv=0;
         }
         else
         {
         while((bi<=bs)&&(trouv==0)&&(stop==0))
         {
             i=(int)((bs+bi)/2);
             lireDir_index(f,i,&buff);
             a=buff->tab[0].cle;
             d=buff->tab[(buff->NB)-1].cle;
             if((c>=a)&&(c<=d))
             {
                 inf=0;
                 sup=(buff->NB)-1;
                 j=(int)((inf+sup)/2);
                 while((inf<=sup)&&(!trouv))
                 {
                     j=(int)((inf+sup)/2);
                     if((c==buff->tab[j].cle)&&(buff->tab[j].efface==0))
                     {
                         trouv=1;
                         *x=buff->tab[j].adr;
                         *y=buff->tab[j].posi;
                         *z=1;
                     }
                     else
                     {
                         if(c>buff->tab[j].cle)
                         {
                             inf=j+1;
                         }
                         else
                         {
                             sup=j-1;
                         }
                     }
                 }
                 if(!trouv)
                 {
                     j=inf;
                 }
                 stop=1;
                 }
                 else
                 {
                     if(c<a)
                     {
                         bs=i-1;
                     }
                     if(c>d)
                     {
                         bi=i+1;
                     }
                 }

             }
             if(!trouv)
             {
                 i=bi;
             }
         }
             fermer_index(&f);

}
void recherche_dych(table_index tab[],int N,int c,int *indice,int *trv)
{

                int inf=0,j,trouv=0;
                int sup=N-1;
                *trv=0;
                 while((inf<=sup)&&(!trouv))
                 {
                     j=(int)((inf+sup)/2);
                     if((c==tab[j].cle)&&(tab[j].efface==0))
                     {
                         trouv=1;
                         *indice=j;
                         *trv=trouv;
                     }
                     else
                     {
                         if(c>tab[j].cle)
                         {
                             inf=j+1;
                         }
                         else
                         {
                             sup=j-1;
                         }
                     }

}
if(!trouv)
{
    *indice=inf;
    *trv=trouv;
}
}
 void inserion(table_index tab[],int N,table_index e)
{
    int i,x,y;
    i=N;
    recherche_dych(tab,N,e.cle,&x,&y);
    if(y==0)
    {
     while(i>x)
    {
        tab[i]=tab[i-1];
        i=i-1;
    }
    tab[x].adr=e.adr;
    tab[x].cle=e.cle;
    tab[x].posi=e.posi;
    tab[x].efface=e.efface;
    tab[x].spec=e.spec;
    tab[x].etab=e.etab;
    }
}
 void remp_tab_spec(specialite *spc,int speci,int N)
{
    TOF_index *M;
    ouvrir_index(&M,"Index_Matricule.bin",'a');
    Lire_tab(M,tab);
    int i,x=0;
    i=N;
    (*spc).taille=0;
    for(i=0;i<N;i++)
    {
        if((tab[i].spec==speci)&&(tab[i].efface==0))
        {
            (*spc).tab_sppec[x].adr=tab[i].adr;
            (*spc).tab_sppec[x].posi=tab[i].posi;
            (*spc).tab_sppec[x].efface=tab[i].efface;
            (*spc).tab_sppec[x].cle=tab[i].cle;
            (*spc).tab_sppec[x].spec=tab[i].spec;
            (*spc).tab_sppec[x].etab=tab[i].etab;
            x=x+1;
            (*spc).taille=x-1;
        }
    }
    fermer_index(&M);
}
 void remp_tab_etabliss(univ *etb,int etab,int N)
{
    TOF_index *M;
    ouvrir_index(&M,"Index_Matricule.bin",'a');
    Lire_tab(M,tab);
    int i,x=0;
    i=N;
    (*etb).taille=0;
    for(i=0;i<N;i++)
    {
        if((tab[i].etab==etab)&&(tab[i].efface==0))
        {
            (*etb).tab_etab_univ[x].adr=tab[i].adr;
            (*etb).tab_etab_univ[x].posi=tab[i].posi;
            (*etb).tab_etab_univ[x].efface=tab[i].efface;
            (*etb).tab_etab_univ[x].cle=tab[i].cle;
            (*etb).tab_etab_univ[x].spec=tab[i].spec;
            (*etb).tab_etab_univ[x].etab=tab[i].etab;
            x=x+1;
            (*etb).taille=x-1;
        }
    }
    fermer_index(&M);
}


