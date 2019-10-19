#include "Biblio_Index.h"
#include "index_bib.h"
#include "Tof_bib.h"
#include <windows.h>

void ajout_ens()
{
         TOF_index *M;
         ouvrir_index(&M,"Index_Matricule.bin",'a');
         TnOF *F;
         ouvrir(&F,"ENSEIGNANT-MESRS.bin",'a');
         Enreg *p;
         p=Allouer_E();
         Tbloc *buff;
         buff=Allouer_B();
         table_index e;
         int a=entete(F,1);
         int b=entete(F,2);
         lireDir(F,a,&buff);
         int spec,etab;
         Color(0,7);
         system("cls");
         Locate(46,5);
         Color(0,20);
         ajouter_enseignant(&p,&spec,&etab);
         if((buff->NB)<1000)
         {
          buff->tab[buff->NB].Date_Naissance=p->Date_Naissance;
          buff->tab[buff->NB].Date_Recrutement=p->Date_Recrutement;
          buff->tab[buff->NB].Matricule=p->Matricule;
          strcpy(buff->tab[buff->NB].Nom,p->Nom);
          strcpy(buff->tab[buff->NB].Prenom,p->Prenom);
          strcpy(buff->tab[buff->NB].Wilaya_Naissance,p->Wilaya_Naissance);
          strcpy(buff->tab[buff->NB].Groupe_Sanguin,p->Groupe_Sanguin);
          strcpy(buff->tab[buff->NB].Grade,p->Grade);
          strcpy(buff->tab[buff->NB].Specialite,p->Specialite);
          strcpy(buff->tab[buff->NB].Etablissement_Univ,p->Etablissement_Univ);
          buff->tab[buff->NB].region=p->region;
          strcpy(buff->tab[buff->NB].Dernier_Diplome,p->Dernier_Diplome);
          strcpy(buff->tab[buff->NB].Sexe,p->Sexe);
          buff->NB=buff->NB+1;
          aff_entete(&F,2,entete(F,2)+1);
          ecrireDir(&F,a,buff);
          fermer(&F);
          e.cle=p->Matricule;
          e.adr=a;
          e.posi=buff->NB-1;
          e.efface=0;
          e.spec=spec;
          e.etab=etab;
         }
         else
         {
          buff->tab[0].Date_Naissance=p->Date_Naissance;
          buff->tab[0].Date_Recrutement=p->Date_Recrutement;
          buff->tab[0].Matricule=p->Matricule;
          strcpy(buff->tab[0].Nom,p->Nom);
          strcpy(buff->tab[0].Prenom,p->Prenom);
          strcpy(buff->tab[0].Wilaya_Naissance,p->Wilaya_Naissance);
          strcpy(buff->tab[0].Groupe_Sanguin,p->Groupe_Sanguin);
          strcpy(buff->tab[0].Grade,p->Grade);
          strcpy(buff->tab[0].Specialite,p->Specialite);
          strcpy(buff->tab[0].Etablissement_Univ,p->Etablissement_Univ);
          buff->tab[0].region=p->region;
          strcpy(buff->tab[0].Dernier_Diplome,p->Dernier_Diplome);
          strcpy(buff->tab[0].Sexe,p->Sexe);
          buff->NB=1;
          aff_entete(&F,2,b+1);
          aff_entete(&F,1,a+1);
          ecrireDir(&F,a+1,buff);
          fermer(&F);
          e.cle=p->Matricule;
          e.adr=a;
          e.posi=buff->NB-1;
          e.efface=0;
          e.spec=spec;
          e.etab=etab;
         }
         inser_tof_index(e,&M,"Index_Matricule.bin");
         fermer_index(&M);
}
void chargement_initial()
{
         system("cls");
         system("color 82");
         int choix=Choisir_nbens();
         int n,i=0,k=0,cpt=1,region_ind,spec_ind,univ_ind;
         if(choix!=12)
         {
         n=choix*10000;
         }
         else
         {
            Locate(55,30);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,31);
            Color(0,15);
            printf("            Entrer  Le Nombre  des  Enseignants             \n");
            Locate(55,32);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,37);
            Color(0,20);
            scanf("%d",&n);
         }
         TnOF *F;
         ouvrir(&F,"ENSEIGNANT-MESRS.bin",'n');
         TOF_index *M;
         ouvrir_index(&M,"Index_Matricule.bin",'n');
         Tbloc *buffer;
         buffer = Allouer_B();
         srand(time(NULL));
    Locate(55,40);
    Color(0,15);
    printf("                                                            \n");
    Locate(55,41);
    Color(0,15);
    printf("            Traitement En cours ...                         \n");
    Locate(55,42);
    Color(0,15);
    printf("                                                            \n");
         while(i<n)
         {
             k=0;
             while((k<1000)&&(i<n))
             {
             gener_aleat(&buffer,k,&region_ind,&spec_ind,&univ_ind);
             /** Remplir l'index du region **/
             tab[i].cle=buffer->tab[k].Matricule;
             tab[i].adr=cpt;
             tab[i].posi=k;
             tab[i].efface=0;
             tab[i].spec=spec_ind;
             tab[i].etab=univ_ind;
             k=k+1;
             i=i+1;
             }
             buffer->NB=k;  /** Nb est la position du dernier enregistrement dans le bloc **/
             ecrireDir(&F,cpt,buffer);
             cpt=cpt+1;
         }
    Locate(55,45);
    Color(0,15);
    printf("                                                            \n");
    Locate(55,46);
    Color(0,15);
    printf("            Chargement de donn%ce effectu%ce Avec succ%cs      \n",130,130,130);
    Locate(55,47);
    Color(0,15);
    printf("                                                            \n");
         aff_entete(&F,1,cpt-1);
         aff_entete(&F,2,n);
         F->entete.Date_creation=gettime();
         strcpy(date_creation,F->entete.Date_creation);
         F->entete.Date_modification=gettime();
         strcpy(date_modificarion,F->entete.Date_modification);
         aff_entete_index(&M,1,cpt-1);
         aff_entete_index(&M,2,n);
         fermer(&F);
         Tri_Rapide(tab,0,n-1);
         ecrir_tab(&M,tab,n);
         fermer_index(&M);
}
void epuration()
{
           system("cls");
           system("color 82");
           Tbloc *buffer;
           buffer=Allouer_B();
           TnOF *F;
           ouvrir(&F,"ENSEIGNANT-MESRS.bin",'a');
           TOF_index *M;
           ouvrir_index(&M,"Index_Matricule.bin",'a');
           Lire_tab(M,tab);
           Tri_Rapide_bloc(repett.repeter,0,(repett.taille-1));
           int i,j,b;
           int a,c;
           int N=entete_index(M,2);
           j=repett.repeter[0].adr;
           lireDir(F,j,&buffer);
          Locate(55,4);
          Color(0,15);
          printf("                                                            \n");
          Locate(55,5);
          Color(0,15);
          printf("            Traitement En cours ...                         \n");
          Locate(55,6);
          Color(0,15);
          printf("                                                            \n");
           for(i=0;i<=(repett.taille-1);i++)
           {
               b=repett.repeter[i].adr;
               c=repett.repeter[i].posi;
               if(j!=b)
               {
                   ecrireDir(&F,j,buffer);
                   j=b;
                   lireDir(F,j,&buffer);
               }

                recherche_dych(tab,N,buffer->tab[(buffer->NB)-1].Matricule,&a,&b);
                tab[a].adr=j;
                tab[a].posi=c;
                recherche_dych(tab,N,buffer->tab[c].Matricule,&a,&b);
                tab[a].efface=1;
                buffer->tab[c]=buffer->tab[(buffer->NB)-1];
                buffer->NB=buffer->NB-1;
                aff_entete(&F,2,entete(F,2)-1);
                aff_entete_index(&M,2,entete_index(M,2)-1);
           }
           Locate(55,25);
           Color(0,15);
           printf("                                                            \n");
           Locate(55,26);
           Color(0,15);
           printf("            %cpuration effectu%ce Avec succ%cs                 \n",130,130,130);
           Locate(55,27);
           Color(0,15);
           printf("                                                            \n");
           Locate(50,30);
           ecrireDir(&F,j,buffer);
           ecrir_tab(&M,tab,N);
           strcpy(date_modificarion,gettime());
           fermer(&F);
           fermer_index(&M);
}
void afficher_entete()
{
            system("cls");
            system("color 82");
            Color(0,3);
            cadre(25,39,0);
            TnOF *F;
            ouvrir(&F,"ENSEIGNANT-MESRS.bin",'a');
            Locate(55,4);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,5);
            Color(0,15);
            printf("            L'ENTETE DU FICHIER [ENSEIGNANT-MESRS.bin]      \n");
            Locate(55,6);
            Color(0,15);
            printf("                                                            \n");
            Locate(50,10);
            printf("Le Fichier contient  :%d Block \n",entete(F,1));
            Locate(50,13);
            Color(0,15);
            printf("Le Fichier contient  :%d Enregistrement\n",entete(F,2));
            Locate(50,16);
            Color(0,15);
            printf("Date de Cr%cation     :%s \n",130,date_creation);
            Locate(50,19);
            Color(0,15);
            printf("Date de Modification :%s \n",date_modificarion);
            Locate(50,30);
            fermer(&F);
}
void suppr_ens()
{
            system("cls");
            system("color 82");
            int Matricule;
            Tbloc *buffer;
            buffer=Allouer_B();
            TnOF *F;
            ouvrir(&F,"ENSEIGNANT-MESRS.bin",'a');
            int n,x,y,z;
            Locate(55,5);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,6);
            Color(0,15);
            printf("            Entrer Le Matricule de L'enseignant             \n");
            Locate(55,7);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,13);
            Color(0,20);
            scanf("%d",&Matricule);
            n=Matricule;
            Rech_tnof(n,"Index_Matricule.bin",&x,&y,&z);
            if(z==0)
            {
            Locate(55,20);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,21);
            Color(0,15);
            printf("               L'enseignant n'existe Pas                    \n");
            Locate(55,22);
            Color(0,15);
            printf("                                                            \n");
            }
            else
            {
                lireDir(F,x,&buffer);
                int a,b,c;
                Rech_tof_index(buffer->tab[(buffer->NB)-1].Matricule,"Index_Matricule.bin",&a,&b,&c);
                TOF_index *M;
                ouvrir_index(&M,"Index_Matricule.bin",'a');
                Tbloc_index *buff;
                buff=Allouer_B_index();
                lireDir_index(M,a,&buff);
                buff->tab[b].adr=x;
                buff->tab[b].posi=y;
                ecrireDir_index(&M,a,buff);
                Rech_tof_index(buffer->tab[y].Matricule,"Index_Matricule.bin",&a,&b,&c);
                lireDir_index(M,a,&buff);
                buff->tab[b].efface=1;
                ecrireDir_index(&M,a,buff);
                buffer->tab[y]=buffer->tab[(buffer->NB)-1];
                buffer->NB=buffer->NB-1;
                ecrireDir(&F,x,buffer);
                aff_entete_index(&M,2,(entete_index(M,2)-1));
                fermer_index(&M);
                Locate(55,20);
                Color(0,15);
                printf("                                                            \n");
                Locate(55,21);
                Color(0,15);
                printf("            Supression effectu%ce Avec succ%cs                \n",130,130);
                Locate(55,22);
                Color(0,15);
                printf("                                                            \n");
            }
            aff_entete(&F,2,(entete(F,2)-1));
            strcpy(date_modificarion,gettime());
            fermer(&F);
}
void supprimer_specialite()
{
            system("cls");
            system("color 82");
            int n;
            n=Choisir_spec();
            Tbloc *buffer;
            buffer=Allouer_B();
            TnOF *F;
            ouvrir(&F,"ENSEIGNANT-MESRS.bin",'a');
            TOF_index *M;
            ouvrir_index(&M,"Index_Matricule.bin",'a');
            int N=entete_index(M,2);
            remp_tab_spec(&speccc,n,N);
            Lire_tab(M,tableau);
            Tri_Rapide_bloc(speccc.tab_sppec,0,(speccc.taille));
            int i,j,b;
            int a,c;
            j=speccc.tab_sppec[0].adr;
            lireDir(F,j,&buffer);
            Locate(55,35);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,36);
            Color(0,15);
            printf("            Traitement En cours ...                         \n");
            Locate(55,37);
            Color(0,15);
            printf("                                                            \n");
            for(i=0;i<=(speccc.taille);i++)
            {
               if(speccc.tab_sppec[i].efface==0)
               {
               b=speccc.tab_sppec[i].adr;
               c=speccc.tab_sppec[i].posi;
               if(j!=b)
               {
                   ecrireDir(&F,j,buffer);
                   j=b;
                   lireDir(F,j,&buffer);
               }
                int selection;
                    selection=buffer->NB-1;
                while(strcmp(buffer->tab[selection].Specialite,tab_specialite[n])==0)
                      {
                        recherche_dych(speccc.tab_sppec,speccc.taille,buffer->tab[selection].Matricule,&a,&b);
                        speccc.tab_sppec[a].efface=1;
                        recherche_dych(tableau,N,buffer->tab[selection].Matricule,&a,&b);
                        tableau[a].efface=1;
                        selection=selection-1;

                      }
                recherche_dych(tableau,N,buffer->tab[selection].Matricule,&a,&b);
                tableau[a].efface=1;
                recherche_dych(tableau,N,buffer->tab[selection].Matricule,&a,&b);
                tableau[a].adr=j;
                tableau[a].posi=c;
                recherche_dych(tableau,N,buffer->tab[c].Matricule,&a,&b);
                tableau[a].efface=1;
                buffer->tab[c]=buffer->tab[selection];
                buffer->NB=buffer->NB-1;
                aff_entete(&F,2,entete(F,2)-1);
                aff_entete_index(&M,2,entete_index(M,2)-1);
                speccc.tab_sppec[i].efface=1;
               }
               else
               {
                   buffer->NB=buffer->NB-1;
               }
            }
                Locate(55,40);
                Color(0,15);
                printf("                                                            \n");
                Locate(55,41);
                Color(0,15);
                printf("   Supression du Sp%ccialit%c effectu%ce Avec succ%cs           \n",130,130,130,130);
                Locate(55,42);
                Color(0,15);
                printf("                                                            \n");
           ecrireDir(&F,j,buffer);
           ecrir_tab(&M,tableau,N);
           strcpy(date_modificarion,gettime());
           fermer(&F);
           fermer_index(&M);
}
void afficher_region()
{
            system("cls");
            system("color 82");
            int n;
            n=Choisir_Region();
            system("cls");
            system("color 82");
            TnOF *F;
            Tbloc *buffer;
            buffer=Allouer_B();
            ouvrir(&F,"ENSEIGNANT-MESRS.bin",'a');
            int a=entete(F,1),i,j;
            int rep_2=9,compteur=5;
            Color(0,15);
            for(i=1;i<=a;i++)
            {
            lireDir(F,i,&buffer);
            for(j=0;j<=((buffer->NB)-1);j++)
            {
            if(buffer->tab[j].region==n)
            {
             Locate(compteur,rep_2);
             printf("Matricule :%d \n",buffer->tab[j].Matricule);
             compteur=compteur+23;
             if(compteur>=150)
             {
                 rep_2=rep_2+2;
                 compteur=5;
             }
            }

            }
            }
}
void mod_etab()
{
Tbloc *buffer;
            buffer=Allouer_B();
            TnOF *F;
            ouvrir(&F,"ENSEIGNANT-MESRS.bin",'a');
            system("cls");
            system("color 82");
            Locate(55,5);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,6);
            Color(0,15);
            printf("            Entrer Le Matricule de L'enseignant             \n");
            Locate(55,7);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,13);
            Color(0,20);
            int n,x,y,z;
            scanf("%d",&n);
            Rech_tnof(n,"Index_Matricule.bin",&x,&y,&z);
            if(z==0)
            {
            Locate(55,20);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,21);
            Color(0,15);
            printf("               L'enseignant n'existe Pas                    \n");
            Locate(55,22);
            Color(0,15);
            printf("                                                            \n");
            }
            else
            {
                lireDir(F,x,&buffer);
                int p;
                p=choisir_final();
                strcpy(buffer->tab[y].Etablissement_Univ,tab_univ[p]);
                ecrireDir(&F,x,buffer);
                system("cls");
                system("color 82");
                Locate(55,5);
                Color(0,15);
                printf("                                                            \n");
                Locate(55,6);
                Color(0,15);
                printf("            Entrer Le Matricule de L'enseignant             \n");
                Locate(55,7);
                Color(0,15);
                printf("                                                            \n");
                Locate(55,13);
                Color(0,20);
                printf("%d",n);
                Locate(45,25);
                Color(0,15);
                printf("                                                                                  \n");
                Locate(45,26);
                Color(0,15);
                printf("      Modification de L'%ctablissement univairsitaire effectu%ce Avec succ%cs        \n",130,130,130);
                Locate(45,27);
                Color(0,15);
                printf("                                                                                  \n");
            }
            fermer(&F);
}
void affich_anciente()
{
            date *dada;
            dada=malloc(sizeof(date));
            dada->annee=2019;
            dada->mois=1;
            dada->jour=1;
            int n;
            n=choisir_final();
            Tbloc *buffer;
            buffer=Allouer_B();
            TnOF *F;
            ouvrir(&F,"ENSEIGNANT-MESRS.bin",'a');
            TOF_index *M;
            ouvrir_index(&M,"Index_Matricule.bin",'a');
            int N=entete_index(M,2);
            remp_tab_etabliss(&etablissement,n,N);
            Lire_tab(M,tableau);
            Tri_Rapide_bloc(etablissement.tab_etab_univ,0,etablissement.taille);
            int i,j,b;
            int a;
            int y;
            int c;
            j=etablissement.tab_etab_univ[0].adr;
                lireDir(F,j,&buffer);
                system("cls");
                system("color 82");
                Locate(55,5);
                Color(0,15);
                printf("                                                            \n");
                Locate(55,6);
                Color(0,15);
                printf("            L'encient%c que vous chercher est Entre          \n",130);
                Locate(55,7);
                Color(0,15);
                printf("                                                            \n");
                Locate(55,9);
                Color(0,20);
                scanf("%d",&a);
                Locate(55,11);
                Color(0,15);
                printf("                                                            \n");
                Locate(55,12);
                Color(0,15);
                printf("            Est(douxieme ann%ce ancient%c )                   \n",130,130);
                Locate(55,13);
                Color(0,15);
                printf("                                                            \n");
                Locate(55,17);
                Color(0,20);
                scanf("%d",&y);
            Locate(5,19);
            int rep_2=19,compteur=1;
            for(i=0;i<=(etablissement.taille);i++)
            {
                b=etablissement.tab_etab_univ[i].adr;
                c=etablissement.tab_etab_univ[i].posi;
               if(j!=b)
               {
                   j=b;
                   lireDir(F,j,&buffer);
               }
               int z=anciente_prof(dada,buffer->tab[c]);
               if((z>=a)&&(z<=y))
               {
            Locate(9,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(0,rep_2);
            Color(0,20);
            printf("         \n");
            Locate(60,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(110,rep_2);
            Color(0,15);
            printf("                                           \n");
            rep_2=rep_2+1;
            Locate(0,rep_2);
            Color(0,20);
            printf(" %d      \n",compteur);
            Locate(9,rep_2);
            Color(0,15);
            printf("        Nom: %s                                 \n",buffer->tab[j].Nom);
            Locate(60,rep_2);
            Color(0,15);
            printf("          Pr%cnom: %s                         \n",130,buffer->tab[j].Prenom);
            Locate(110,rep_2);
            Color(0,15);
            printf("            Matricule: %d              \n",buffer->tab[j].Matricule);
            rep_2=rep_2+1;
            Locate(0,rep_2);
            Color(0,20);
            printf("         \n");
            Locate(9,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(60,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(110,rep_2);
            Color(0,15);
            printf("                                           \n");
            rep_2=rep_2+2;
            compteur++;
               }
            }

           fermer(&F);
           fermer_index(&M);
}
void affichage_enseignat()
{
            system("cls");
            system("color 82");
            Tbloc *buffer;
            buffer=Allouer_B();
            TnOF *F;
            ouvrir(&F,"ENSEIGNANT-MESRS.bin",'a');
            Locate(55,5);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,6);
            Color(0,15);
            printf("            Entrer Le Matricule de L'enseignant             \n");
            Locate(55,7);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,13);
            Color(0,20);
            int n,x,j,z;
            scanf("%d",&n);
            Rech_tnof(n,"Index_Matricule.bin",&x,&j,&z);
            if(z==0)
            {
            Locate(55,20);
            Color(0,15);
            printf("                                                            \n");
            Locate(55,21);
            Color(0,15);
            printf("               L'enseignant n'existe Pas                    \n");
            Locate(55,22);
            Color(0,15);
            printf("                                                            \n");
            }
            else
            {
            lireDir(F,x,&buffer);
            int rep_2=15;
            Locate(9,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(60,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(110,rep_2);
            Color(0,15);
            printf("                                           \n");
            rep_2=rep_2+1;
            Locate(9,rep_2);
            Color(0,15);
            printf("        Nom: %s                                 \n",buffer->tab[j].Nom);
            Locate(60,rep_2);
            Color(0,15);
            printf("          Pr%cnom: %s                         \n",130,buffer->tab[j].Prenom);
            Locate(110,rep_2);
            Color(0,15);
            printf("            Matricule: %d              \n",buffer->tab[j].Matricule);
            rep_2=rep_2+1;
            Locate(9,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(60,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(110,rep_2);
            Color(0,15);
            printf("                                           \n");
            rep_2=rep_2+3;
            Locate(9,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(60,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(110,rep_2);
            Color(0,15);
            printf("                                       \n");
            rep_2=rep_2+1;
            Locate(9,rep_2);
            Color(0,15);
            printf("        specialit%c: %s                                 \n",130,buffer->tab[j].Specialite);
            Locate(60,rep_2);
            Color(0,15);
            printf("  Grade: %s                                 \n",buffer->tab[j].Grade);
            Locate(110,rep_2);
            Color(0,15);
            printf("                Diplome: %s            \n",buffer->tab[j].Dernier_Diplome);
            rep_2=rep_2+1;
            Locate(9,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(60,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(110,rep_2);
            Color(0,15);
            printf("                                        \n");
            Locate(9,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(60,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(110,rep_2);
            Color(0,15);
            printf("                                            \n");
            rep_2=rep_2+3;
            Locate(9,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(60,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(110,rep_2);
            Color(0,15);
            printf("                                       \n");
            rep_2=rep_2+1;
            Locate(9,rep_2);
            Color(0,15);
            printf("  Date de Naissance: %d/%d/%d                     \n",buffer->tab[j].Date_Naissance->jour,buffer->tab[j].Date_Naissance->mois,buffer->tab[j].Date_Naissance->annee);
            Locate(60,rep_2);
            Color(0,15);
            printf("  Sexe: %s                                 \n",buffer->tab[j].Sexe);
            Locate(110,rep_2);
            Color(0,15);
            printf("          Groupe Sanguin: %s            \n",buffer->tab[j].Groupe_Sanguin);
            rep_2=rep_2+1;
            Locate(9,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(60,rep_2);
            Color(0,15);
            printf("                                               \n");
            Locate(110,rep_2);
            Color(0,15);
            printf("                                        \n");
            rep_2=rep_2+2;
            Locate(9,rep_2);
            Color(0,15);
            printf("  Etablissement universitaire: %s                      \n",buffer->tab[j].Etablissement_Univ);

            }
        fermer(&F);
}
int main(){
int rep,quit;
quit=0;
quit=quit+0;
char anykey;

/************************/
Ecran(-1);
do{
    Color(0,8);
    system("cls");
    rep=Choisir();/**FONCTION QUI RETOURNE UN ENTIER (LE CHOIX)**/
    switch(rep){
        case 1:chargement_initial();break;
        case 2:epuration();break;
        case 3:afficher_entete();break;
        case 4:suppr_ens();break;
        case 5:supprimer_specialite();break;
        case 6:afficher_region();break;
        case 7:mod_etab();break;
        case 8:affich_anciente();break;
        case 9:ajout_ens();;break;
        case 10:affichage_enseignat();break;
        case 11:;break;
        case 12:;break;
        case 13:
               Locate(72,32);
               printf(" VOULER VOUS SAUVGARDER AVANT DE QUITTER ? " );
               quit=Choisir_oui_non(77,34);
               break;
    }
    Color(7,3);
    printf("\n\n\t\t\t\t\t\t                              \n");
    printf("\t\t\t\t\t\t  REVENIR AU MENU PRENCIPALE  \n");/**POUR NE PAS EFFACER L'ECRAN**/
    printf("\t\t\t\t\t\t                              \n");

    do{anykey = _getch();}while (anykey!=0x0D);/**CLIQUEZ ENTRER POUR REVENIR AU MENU PRINCIPAL**/
    if (rep==13)break;
}while (1);
Color(15,0);
Locate(40,50);
printf("Realisee par Mostefa_Mourad  Kara_Imene   ");
Locate(40,51);
printf("                                                  ");
Locate(40,52);
printf("     Section:A                    Groupe:1        ");
Color(8,8);
return 0;
}



