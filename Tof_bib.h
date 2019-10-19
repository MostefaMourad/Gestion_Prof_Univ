#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define Max 1000
#define Max1 1500
const char tab_char[26] = "abcdefghijklmnopqrstuvwxyz";
const char tab_char_M[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char* tab_wilaya[49]= {".","Adrar","Chlef","Laghouat","Oum El Bouaghi","Batna","Bejaia","Biskra","Bechar","Blida",
"Bouira","Tamanrasset","Tebessa","Tlemcen","Tiaret","Tizi-Ouzou","Alger","Djelfa","Jijel","Setif","Saida",
"Skikda","Sidi Bel Abbes","Annaba","Guelma","Constantine","Medea","Mostaganem","M'Sila","Mascara","Ouargla",
"Oran","El Bayadh","Illizi","Bordj Bou Arreridj","Boumerdes","El Tarf","Tindouf","Tissemsilt","El Oued",
"Khenchela","Souk Ahras","Tipaza","Mila","Ain Defla","Naama","Ain Temouchent","Ghardaia","Relizane"};
const char* tab_groupe[10] = {".","O+","A+","B+","O-","A-","AB+","B-","AB-"};
const char* tab_grade[7]={".","Professeur"," Maitre de conferences Rang A"," Maitre de conferences Rang B"," Maitre assistant RangA, "," Maitre assistant(e) Rang B",
" Assistant"};
const char* tab_specialite[25] ={".",/*1*/"Droit",/*2*/"Sciences politiques",/*3*/"Anglais",/*4*/"Francais",/*5*/
"Langue et Litterature arabe",/*6*/"Informatique",/*7*/"Mathematiques",/*8*/"Chimie",/*9*/"Physique",/*10*/"Sciences Biologie",/*11*/"Biologie vegetale",/*12*/"Sciences commerciales",/*13*/
"Sciences de gestion",/*14*/"Sciences economiques",/*15*/"electronique",/*16*/"Architecture",/*17*/"Genie des procedes ",/*18*/"Genie Mecanique",/*19*/"Hydraulique",/*20*/"Electrotechnique",/*21*/"SCiences Humaine",/*22*/"Sciences Sociales",/*23*/"Sociologie"};


const char* tab_univ[108]={".",/*1*/"Universite  de Bouira - Akli Mohand Oulhadj",/*2*/"Universite  de Djelfa - Ziane Achour",
/*3*/"Universite de Ghardaia",/*4*/"Universite  de Khemis Miliana - Djilali Bounaama",/*5*/"Universite  Medea - Yahia Fares",/*6*/
/*7*/"Universite des sciences et de la technologie d'Alger, Houari Boumediene ",/*8*/"Universite de Bejaia - Abderrahmane Mira",/*9*/"Universite  de Chlef - Hassiba Benbouali",/*10*/
"Universite  de Boumerdes - M'hamed Bougara ",/*11*/"Universite de Tizi Ouzou - Mouloud Maameri",/*12*/"Universite  de Laghouat - Amar Telidji",/*13*/
"Universite  Blida 1 - Saad Dahlab",/*14*/"Universite de Blida 2 - Lounici Ali",/*15*/"Universite d'Alger 1 - Benyoucef Benkhedda",/*16*/"Universite de la Formation Continue",/*17*/"Universite d'Alger 2 - Abou el Kacem Saadallah",/*18*/
"Universite d'Alger 3 - Brahim Soltane Chaibout",/*19*/"Centre universitaire  de Tamanrasset - Amine Elokkal El Hadj Moussa Eg Akhamouk",/*20*/
"Centre universitaire  de Tipaza - Abdallah Morsli",/*21*/"Centre Universitaire d'Illizi-Cheikh Amoud ben Mokhtar",/*22*/
"Centre universitaire Aflou",/*23*/"Ecole Nationale Polytechnique",/*24*/
"Ecole nationale superieure des travaux publics -  Francis Jeanson",/*25*/
"Ecole nationale superieure veterinaire-Rabie Bouchama",/*26*/
"Ecole Polytechnique d'architecture et d'Urbanisme-Hocine Ait Ahmed",/*27*/"Ecole nationale superieure agronomique-Khalef Abdellah alias Kasdi Merbah",/*28*/
"Ecole des hautes etudes commerciales",/*29*/"Ecole nationale superieure d'informatique",/*30*/"Ecole nationale superieure en statistique et en economie appliquee",/*31*/
"Ecole Superieure de Commerce-Mouloud Kacem Nait Belkacem",/*32*/"Ecole Superieure de Commerce-Mouloud Kacem Nait Belkacem",/*33*/
"Ecole nationale superieure de management",/*34*/"Ecole nationale superieure des sciences de la mer et de l'amenagement du littoral",/*35*/
"Ecole Nationale Superieure de Technologie",/*36*/"Ecole nationale superieure de journalisme et des sciences de l'information",/*37*/
"Ecole nationale superieure de journalisme et des sciences de l'information",/*38*/"Ecole nationale superieure de journalisme et des sciences de l'information",/*39*/
"Ecole Nationale Superieure des sciences politiques",/*40*/"Ecole Superieure des Sciences de l'Aliment et des Industries Agroalimentaires d'Alger ex EP SNV Alger",/*41*/
"Ecole Superieure des Sciences appliquees d'Alger ex EP ST Alger",/*42*/"Ecole normale superieure de Bouzareah - Cheikh Mubarak Ben Mohamed Brahimi El Mili-",/*43*/
" Ecole normale superieure de Kouba - Mohamed Bachir El Ibrahimi-",/*44*/"Ecole normale superieure de Laghouat - Taleb Abderrahmane",/*45*/
"École preparatoire en sciences economiques commerciales et sciences de gestion , Kolea"/** c est la fin de la region centre avec**/,/*46*/" Universite  de Jijel - Mohammed Seddik Ben yahia",/*47*/
"Universite de Tebessa - Larbi Tebessi",/*48*/"Universite de Bordj Bou Arreridj - Mohamed Bachir El Ibrahimi",/*49*/"Universite d'El Tarf - Chadli Bendjedid ",/*50*/
"Universite  de Khenchela - Abbas Laghrour",/*51*/"Universite  de Oum El Bouaghi - Larbi Ben M'hidi",/*52*/"Universite d'El Oued - Hamma Lakhdar-",/*53*/
"Universite de Souk Ahras - Mohammed-Cherif Messaadia",/*54*/"Universite  de Annaba - Badji Mokhtar",/*55*/"Universite  du 20 Aout 1955 de Skikda",/*56*/
"Universite  8 Mai 1945 de Guelma",/*57*/"Universite de Batna 1 - Hadj Lakhder",/*58*/"Universite  de Biskra - Mohamed Khider",/*59*/"Universite  de M'sila - Mohamed Boudiaf",/*60*/
"Universite  de Ouargla - Kasdi Merbah",/*61*/"Universite des sciences islamiques Emir Abdelkader de Constantine",/*62*/"Universite  de Setif 1 - Ferhat Abbas",/*63*/
"Universite  de Setif 2 - Mohamed Lamine Debaghine",/*64*/"Universite  de Constantine 1 - Freres Mentouri",/*65*/"Universite  de Constantine 2 - Abdelhamid Mehri",/*66*/
"Universite de Constantine 3 -Salah Boubnider-",/*67*/" Universite de Batna 2 - Mustapha Ben Boulaid",/*68*/"Centre Universitaire de Mila - Abdelhafid Boussouf",/*69*/
"Centre Universitaire de Barika - Si El Haoues",/*70*/"Ecole nationale superieure des mines et de la métallurgie-Amar Laskri",/*71*/"Ecole Nationale Polytechnique de Constantine-Malek Bennabi"/*72*/,
"Ecole Nationale Superieure de Biotechnologie de Constantine - Tewfik Khaznadar-",/*73*/"Ecole Superieure des Sciences de Gestion de Annaba ex EPSECG Annaba",/*74*/
"Ecole Superieure des Technologies Industrielles de Annaba ex EP ST Annaba",/*75*/"Ecole Superieure de Comptabilite et de Finance de Constantine ex EPSECG Constantine",/*76*/
"Ecole normale superieure de Constantine -Assia Djebar-",/*77*/"Ecole normale superieure d'enseignement technologique de Skikda",/*78*/"Ecole normale superieure de setif - Messaoud Zeghar-",/*79*/
"Ecole normale superieure de Bou Saada",/*80*/"Ecole normale superieure de Ouargla",/** c est la fin de la partie Est**//*81*/"Universite de Bechar - Mohamed Tahri",/*82*/
"Universite  de Mascara - Mustapha Stambouli",/*83*/"Universite de Saida - Tahar Moulay",/*84*/"Universite  de Tlemcen - Abou Bekr Belkaid",/*85*/"Universite  d'Adrar - Ahmed Draya",/*86*/"Universite  de Tiaret - Ibn Khaldoun",/*87*/
"Universite  Sidi Bel Abbes - Djillali Liabes",/*88*/"Universite de Mostaganem - Abdelhamid Ibn Badis",/*89*/"Universite d'Oran1 - Ahmed Ben Bella",/*90*/"Universite Mohamed Boudiaf  des sciences et de la technologie - Mohamed Boudiaf d'Oran",/*91*/
"Universite  d'Oran 2 - Mohamed Ben Ahmed",/*92*/"Centre Universitaire de Tissemsilt- Ahmed ben yahia el-wancharissi",/*93*/"Centre Universitaire  de Ain Temouchent - Belhadj Bouchaib",/*94*/
"Centre universitaire de Relizane - Ahmed Zabana",/*95*/" Centre universitaire   de Naama - Ahmed Salhi",/*96*/"Centre universitaire   d'El Bayadh - Nour Bachir",/*97*/
"Centre universitaire de Tindouf-Ali Kafi","Centre universitaire de Maghnia",/*98*/"Ecole Nationale Polytechnique d'Oran - Maurice Audin",/*99*/"Ecole  Superieure d'Informatique (Sidi Bel Abbes)-08 Mai 1945",/*100*/
"Ecole Superieure des Sciences Appliquees de Tlemcen ex EP ST Tlemcen",/*101*/"Ecole Superieure de Management de Tlemcen ex EPSECG Tlemcen",/*102*/"Ecole Superieure d'Economie d'Oran ex EPSECG Oran",/*103*/
" Ecole Superieure en Genie Electrique et Energetique d'Oran ex EP ST Oran",/*104*/"Ecole Superieure Agronomique de Mostaganem ex EP SNV Mostaganem",/*105*/
"Ecole Superieure des sciences Biologiques  d' Oran ex EP SNV Oran",/*106*/"Ecole Normale Superieure de Mostaganem","Ecole Normale Superieure d'Oran"};

const char* tab_diplome[7] = {".","doctorat d etat","doctorat en sciences","phD","HDR","magistere"};



/***** les Structure ************/
typedef struct date
{
    int jour;
    int annee;
    int mois;
}date;
typedef struct Enreg
{
    int Matricule;
    char Nom[35];
    char Prenom[35];
    date *Date_Naissance;
    char Wilaya_Naissance[30];
    char Sexe[20];
    char Groupe_Sanguin[4];
    date *Date_Recrutement;
    char Grade[45];
    char Specialite[45];
    char Dernier_Diplome[45];
    char Etablissement_Univ[300];
    int region;
    int  efface;
}Enreg;

typedef struct Tbloc
{
  Enreg tab[Max];
  int NB;
}Tbloc;
 typedef struct Entete
    {
        int adrDerBloc;
        int nbEnreg;
        char* Date_creation;
        char* Date_modification;
    } Entete;
typedef struct TnOF
{
    FILE *fichier;
    Entete entete;
}TnOF;

///**********************************************************************///
///                          machine abstraite TO~F                      ///
///**********************************************************************///
struct Enreg *Allouer_E ()
{ return ((struct Enreg *) malloc( sizeof(struct Enreg ))); }

struct Tbloc *Allouer_B ()
{ return ((struct Tbloc *) malloc( sizeof(struct Tbloc ))); }

struct TnOF *Allouer_T ()
{ return ((TnOF *) malloc( sizeof(struct TnOF ))); }
///--------------------------------------------------------------///

/**--------------Fonction d'ouverture d'un fichier--------------**/


int ouvrir(TnOF **f,char *chemin,char mode)
{
    char s[3];
    *f = Allouer_T();
    if((mode == 'A') || (mode == 'a')) sprintf(s,"rb+");
    else if ((mode == 'N') || (mode == 'n')) sprintf(s,"wb+");
    else return 0;

    (*f)->fichier = fopen(chemin, s);
    if((*f)->fichier == NULL)   return 0;

    if((mode == 'A') || (mode == 'a'))
    {
        fread(&((*f)->entete), sizeof(Entete), 1, (*f)->fichier);
    }
    else if ((mode == 'N') || (mode == 'n'))
    {

        (*f)->entete.adrDerBloc =0;
        (*f)->entete.nbEnreg = 0;
        Entete *r;
        r=malloc(sizeof(Entete));
        r->adrDerBloc=0;
        r->nbEnreg=0;
        fseek((*f)->fichier,0,SEEK_SET);
        fwrite(r,sizeof(Entete),1,(*f)->fichier);
    }
    return 1;
}
/**--------------Fonction de fermeture d'un fichier--------------**/

void fermer(TnOF* *f)
{
    fseek((*f)->fichier,0,SEEK_SET);
    fwrite(&((*f)->entete), sizeof(Entete), 1, (*f)->fichier);
    fclose((*f)->fichier);
}
/**-----------------Fonction de lecture d'un bloc----------------**/
void lireDir(TnOF *f,int N_Bloc,Tbloc* *buffer)
{
    if(N_Bloc <= (f->entete).adrDerBloc)
    {
        fseek(f->fichier, sizeof(Entete) + ((N_Bloc-1)*sizeof(Tbloc)),SEEK_SET);
        fread(*buffer, sizeof(Tbloc),1, f->fichier);
    }
}
/**-----------------Fonction d'écriture d'un bloc----------------**/
void ecrireDir(TnOF* *f,int N_Bloc,Tbloc *buffer)
{
    fseek((*f)->fichier, sizeof(Entete) + ((N_Bloc-1)*sizeof(Tbloc)),SEEK_SET);
    fwrite(buffer,sizeof(Tbloc),1, (*f)->fichier);
}

/**----------------Fonction de lecture de l'entête---------------**/
/** lorsque i=1 ====> lecture de l'adresse du dernier bloc
   lorsque i=2 ====> lecture du nombre d'enregistrement **/
int entete(TnOF *f,int i)
{
    if(i == 1) return (f->entete).adrDerBloc;
    else if(i == 2) return (f->entete).nbEnreg;
    else return -1;
}
/**-------------Fonction de modification de l'entête-------------*/
/** lorsque i=1 ====> modification de l'adresse du dernier bloc
   lorsque i=2 ====> modification du nombre d'enregistrement **/
void aff_entete(TnOF* *f, int i, int val)
{
    if(i == 1) (*f)->entete.adrDerBloc = val;
    else if(i == 2) (*f)->entete.nbEnreg = val;

}
/****** Remplir aleatoire *********/
char* gettime ()
{
    time_t t= time(NULL);
	struct tm *tm= localtime(&t);
	static char s[25];
	char v[3];
	strftime(s,sizeof(s),"%c",tm);
	v[0] = s[0];
	v[1] = s[1];
	v[2] = '\0';
	s[0] = s[3];
	s[1] = s[4];
	s[3] = v[0];
	s[4] = v[1];
	s[17] = '\0';


    return s;
}
char *gener_nom ()
{

    int tainom=0,i=1,indice = 0;
    static char *nom=NULL ;
    nom = NULL;
    nom = malloc(sizeof(char)*35);
    tainom = (rand() % 26) + 4;
    indice = (rand() % 26);
    nom[0]=tab_char_M[indice];
    while (i <= tainom)
    {
        indice = (rand() % (26)) ;
        nom[i] = tab_char[indice];
        i++;
    }
   nom[i] = '\0';
   return nom;

}
char *gener_prenom()
{

    int tainom=0,i=1,indice = 0;
    static char *nom=NULL ;
    nom = NULL;
    nom = malloc(sizeof(char)*35);
    tainom = (rand() % 26)+4;
    indice = (rand() % 26);
    nom[0]=tab_char_M[indice];
    while (i <= tainom)
    {
        indice = (rand() % 25);
        nom[i] = tab_char[indice];
        i++;
    }
   nom[i] = '\0';
   return nom;

}
int gener_nombre()
{
     long k=0;
     k = (rand() * rand() % 888889)+111111;
     return k;
}
char* gener_wilaya()
{
  int numwilaya=0;
  static char *wila=NULL ;
  wila = NULL;
  wila = malloc(sizeof(char)*30);
  numwilaya = (rand() % (48) + 1);
  strcpy(wila,tab_wilaya[numwilaya]);
  return wila;
}
char* gener_sang()
{
  int numb=0;
  static char *grpsang=NULL ;
  grpsang = NULL;
  grpsang = malloc(sizeof(char)*4);
  numb = (rand() % (8) + 1);
  strcpy(grpsang,tab_groupe[numb]);
  return grpsang;
}

char* gener_grade()
{
  int numb=0;
  static char *grad=NULL ;
  grad = NULL;
  grad = malloc(sizeof(char)*30);
  numb = (rand() % (6) + 1);
  strcpy(grad,tab_grade[numb]);
  return grad;
}
char* gener_specialite(int *specialite)
{
  int numb=0;
  static char *speci=NULL ;
  speci = NULL;
  speci = malloc(sizeof(char)*45);
  numb = (rand() % (23) + 1);
  *specialite=numb;
  strcpy(speci,tab_specialite[numb]);
  return speci;
}
char* gener_univ(int* regi,int *etab_univ)
{
  int numb=0;
  static char *etab=NULL ;
  etab = NULL;
  etab = malloc(sizeof(char)*200);
  numb=(rand() % 106)+1;
  *etab_univ=numb;
  if(numb<=45)
  {
      *regi=1;
  }
  else if((numb>45)&&(numb<=79))
  {
      *regi=2;
  }
  else
  {
      *regi=3;
  }
  strcpy(etab,tab_univ[numb]);
  return etab;
}
char* gener_diplome()
{
  int numb=0;
  static char *dipl=NULL ;
  dipl = NULL;
  dipl = malloc(sizeof(char)*100);
  numb = (rand() % (5) + 1);
  strcpy(dipl,tab_diplome[numb]);
  return dipl;
}

int bissextile (int Year)
{
    if (( ((Year % 4) == 0) && ((Year % 100 ) != 0) ) || ((Year % 400) == 0 ))
    {
        return 1;
    }

    else
        {
            return 0;
        }
}
date* gener_date(int i,int j)
{
    date *x;
    x=malloc(sizeof(date));
    x->annee = (rand() % (i - j )) + j+1;
    x->mois = (rand() % 12) + 1;
    if( (bissextile(x->annee)==1)&&(x->mois==2))
       {
           x->jour= (rand() % 29 )+1;
       }
    else if((x->annee==2018)&&(x->mois)==12)
    {
        x->mois=x->mois-4;
    }
    else
        {
            x->jour=(rand() % 28)+1;
        }
    return x;
}
char* gener_sexe()
{
  int numb;
  numb = (rand() % (2) + 1);
  if (numb==2)
  {
      return  "feminin";
  }
  else
  {
      return "masculin";
  }
}
void gener_aleat(Tbloc* *buff,int indice,int *region,int *specialit,int *universite)
{
     (*buff)->tab[indice].Date_Naissance=gener_date(1992,1953);
     (*buff)->tab[indice].Date_Recrutement=gener_date(2018,1979);
     (*buff)->tab[indice].Matricule=gener_nombre();
     strcpy((*buff)->tab[indice].Nom,gener_nom());
     strcpy((*buff)->tab[indice].Prenom,gener_prenom());
     strcpy((*buff)->tab[indice].Wilaya_Naissance,gener_wilaya());
     strcpy((*buff)->tab[indice].Groupe_Sanguin,gener_sang());
     strcpy((*buff)->tab[indice].Grade,gener_grade());
     int j;
     strcpy((*buff)->tab[indice].Specialite,gener_specialite(&j));
     *specialit=j;
     int i;
     strcpy((*buff)->tab[indice].Etablissement_Univ,gener_univ(&i,&j));
    (*buff)->tab[indice].region=i;
    *region=i;
    *universite=j;
    strcpy((*buff)->tab[indice].Dernier_Diplome,gener_diplome());
    strcpy((*buff)->tab[indice].Sexe,gener_sexe());
    (*buff)->tab[indice].efface=0;
}


void affich_bloc(Tbloc *buffer,int n_en)
{
    int i;
        for(i=0;i<n_en;i++)
        {
            printf("le %d Enregistrement est : \n",i+1);
            printf("<Nom : %s , Prenom :%s ,Date de naissance :%d/%d/%d > \n",buffer->tab[i].Nom,buffer->tab[i].Prenom,buffer->tab[i].Date_Naissance->jour,buffer->tab[i].Date_Naissance->mois,buffer->tab[i].Date_Naissance->annee);
            printf("<Wilaya de naissance :%s ,Sexe :%s ,Groupe Sanguin : %s > \n",buffer->tab[i].Wilaya_Naissance,buffer->tab[i].Sexe,buffer->tab[i].Groupe_Sanguin);
            printf("<Grade :%s ,Diplome :%s,Date de Recrutement:%d/%d/%d > \n",buffer->tab[i].Grade,buffer->tab[i].Dernier_Diplome,buffer->tab[i].Date_Recrutement->jour,buffer->tab[i].Date_Recrutement->mois,buffer->tab[i].Date_Recrutement->annee);
            printf("<Etablissement :%s,Matricule :%d,Specialite :%s >\n",buffer->tab[i].Etablissement_Univ,buffer->tab[i].Matricule,buffer->tab[i].Specialite);
            printf("------------------------------------------------------------------------------------------------\n");
        }
}
void ajouter_enseignant(Enreg* *s,int *ind_spec,int *ind_etab)
{
         int n;
         Enreg *p;
         p=Allouer_E();
         Color(0,7);
         system("cls");
         system("color 82");
         Locate(46,5);
         Color(0,20);
         printf("Entrer les informations del'enseignant Que vous-voulez ajouter \n");
            Locate(55,10);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,11);
            Color(0,15);
            printf("            Entrer  Le Nom  de  l'Enseignants               \n");
            Locate(55,12);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,14);
            Color(0,20);
            scanf("%s",p->Nom);
            Locate(55,16);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,17);
            Color(0,15);
            printf("            Entrer  Le Pr%cnom  de  l'Enseignants            \n",130);
            Locate(55,18);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,20);
            Color(0,20);
            scanf("%s",p->Prenom);
            Locate(55,22);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,23);
            Color(0,15);
            printf("            Entrer  Le Matricule  de  l'Enseignants         \n");
            Locate(55,24);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,26);
            Color(0,20);
            scanf("%d",&(p->Matricule));
            system("cls");
            system("color 82");
            n=Choisir_grps();
            strcpy(p->Groupe_Sanguin,tab_groupe[n]);
            system("cls");
            system("color 82");
            n=Choisir_Sexe();
            if (n==2)
            {
            strcpy(p->Sexe,"feminin"); ;
            }
            else
            {
            strcpy(p->Sexe,"masculin");
            }
         date *dd;
         dd=malloc(sizeof(date));
         system("cls");
         system("color 82");
         dd->annee=Choisir_anne_naiss()+1952;
         system("cls");
         system("color 82");
         dd->mois=Choisir_mois();
         system("cls");
         system("color 82");
         if((dd->mois==1)||(dd->mois==3)||(dd->mois==5)||(dd->mois==7)||(dd->mois==8)||(dd->mois==10)||(dd->mois==12))
         {
             dd->jour=Choisir_jour_31();
         }
         else if((dd->mois==4)||(dd->mois==6)||(dd->mois==9)||(dd->mois==11))
         {
             dd->jour=Choisir_jour_30();
         }
         else
         {
             if(bissextile(dd->annee))
             {
                 dd->jour=Choisir_jour_28();
             }
             else
             {
                 dd->jour=Choisir_jour_29();
             }
         }
         p->Date_Naissance=dd;
         system("cls");
         system("color 82");
         dd->annee=Choisir_anne_recret()+1978;
         system("cls");
         system("color 82");
         dd->mois=Choisir_mois();
         system("cls");
         system("color 82");
        if((dd->mois==1)||(dd->mois==3)||(dd->mois==5)||(dd->mois==7)||(dd->mois==8)||(dd->mois==10)||(dd->mois==12))
         {
             dd->jour=Choisir_jour_31();
         }
         else if((dd->mois==4)||(dd->mois==6)||(dd->mois==9)||(dd->mois==11))
         {
             dd->jour=Choisir_jour_30();
         }
         else
         {
             if(bissextile(dd->annee))
             {
                 dd->jour=Choisir_jour_28();
             }
             else
             {
                 dd->jour=Choisir_jour_29();
             }
         }
         p->Date_Recrutement=dd;
         system("cls");
         system("color 82");
         n=Choisir_wilaya();
         strcpy(p->Wilaya_Naissance,tab_wilaya[n]);
         system("cls");
         system("color 82");
         n=Choisir_Grade();
         strcpy(p->Grade,tab_grade[n]);
         system("cls");
         system("color 82");
         n=Choisir_spec();
         *ind_spec=n;
         strcpy(p->Specialite,tab_specialite[n]);
         system("cls");
         system("color 82");
         n=Choisir_Diplome();
         strcpy(p->Dernier_Diplome,tab_diplome[n]);
         system("cls");
         system("color 82");
         n=Choisir_Region();
         p->region=n;
         system("cls");
         system("color 82");
         n=choisir_final();
         *ind_etab=n;
         strcpy(p->Etablissement_Univ,tab_univ[n]);
         *s=p;
}
date* remp_date()
{
    date *dd;
    dd=malloc(sizeof(date));
            int x,y,z;
            printf("Entrer la date actuelle \n");
            printf("Entrer l'ann%ce \n",130);
            scanf("%d",&x);
            printf("Entrer le mois \n");
            scanf("%d",&y);
            printf("Entrer le jour \n");
            scanf("%d",&z);
            system("cls");
            printf("Entrer la date \n");
            printf("Entrer l'ann%ce \n",130);
            scanf("%d",&(dd->annee));
            while((dd->annee<1979)||(dd->annee)>x)
            {
             printf("l'annee  n'existe pas !!\n");
             printf("Entrer l'ann%ce \n",130);
             scanf("%d",&(dd->annee));
             system("cls");
            }
            int trouv=1;
            printf("Entrer le mois \n");
            scanf("%d",&(dd->mois));
            if((dd->mois>y)&&(dd->annee==x))
            {
             trouv=0;
            }
            while((dd->mois<1)||(trouv==0))
            {
             trouv=1;
             printf("le mois  n'existe pas !! \n");
             printf("Entrer  le mois \n");
             scanf("%d",&(dd->mois));
             if(dd->mois>y)
             {
             trouv=0;
             }
             system("cls");
         }
         trouv=1;
         printf("Entrer le jour \n");
         scanf("%d",&(dd->jour));
         if((dd->mois==y)&&((dd->jour)>z)&&(dd->annee==x))
         {
             trouv=0;
         }
         while((dd->jour<1)||(trouv==0))
         {
             trouv=1;
             printf("le jour n'existe pas !! \n");
             printf("Entrer jour  \n");
             scanf("%d",&(dd->jour));
             system("cls");
             if((dd->mois==y)&&((dd->jour)>z))
              {
             trouv=0;
             }
             }
    return dd;
}
int anciente_prof(date *date_actutelle,Enreg enseignant)
{
    int x;
    x=(date_actutelle->annee)-(enseignant.Date_Recrutement->annee);
    return x;
}




