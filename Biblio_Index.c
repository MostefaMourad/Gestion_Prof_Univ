#include "Biblio_Index.h"

/***************************************************/
/***************************************************/
/***************FONCTIONS DAFFICHAGE****************/
/********          WWW.DEVELOPPEZ.NET        *******/
/***************************************************/
/***************************************************/
void Locate(SHORT x,SHORT y){
    /**FONCTION POUR LOCALISER LA POSITION D ECRITURE**/
    HANDLE hmenu=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(hmenu,Pos);
}
void Color(long couleurDuTexte,long couleurDeFond){
        /** FONCTION D AFFICHAGE DE COULEURS**/
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
void Ecran(int Mode){
   /** parametre Mode : 1=plein ecran et 2=Mode fenetre**/
    typedef BOOL WINAPI (*SetConsoleDisplayModeT)(HANDLE,DWORD,DWORD*);
    SetConsoleDisplayModeT SetConsoleDisplayMode;

   HINSTANCE hLib=LoadLibrary("KERNEL32.DLL");
   SetConsoleDisplayMode=(SetConsoleDisplayModeT)
      GetProcAddress(hLib,"SetConsoleDisplayMode");

   HANDLE h=CreateFile("CONOUT$",GENERIC_WRITE|GENERIC_READ,FILE_SHARE_READ |
      FILE_SHARE_WRITE,NULL,OPEN_EXISTING,0,0);

   DWORD oldmode;

   SetConsoleDisplayMode(h,Mode,&oldmode);
}
void Afficher(int curs){
    printf("\n");
    Color(0,15);
    Locate(2,1);
    printf("                             ");
    Locate(2,2);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,3);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,4);
    printf("   %c%c%c%c%c%c          %c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,5);
    printf("   %c%c%c%c%c%c          %c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,6);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,7);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,8);
    printf("   %c%c%c%c%c%c                    \n",219,219,219,219,219,219);
    Locate(2,9);
    printf("   %c%c%c%c%c%c                    \n",219,219,219,219,219,219);
    Locate(2,10);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,11);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,12);
    printf("                             ");
    Locate(2,13);
    printf("                             ");
    Locate(2,14);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,15);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,16);
    printf("   %c%c%c%c%c%c                    \n",219,219,219,219,219,219);
    Locate(2,17);
    printf("   %c%c%c%c%c%c                    \n",219,219,219,219,219,219);
    Locate(2,18);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,19);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,20);
    printf("                   %c%c%c%c%c%c    \n",219,219,219,219,219,219);
    Locate(2,21);
    printf("                   %c%c%c%c%c%c    \n",219,219,219,219,219,219);
    Locate(2,22);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,23);
    printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    \n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Locate(2,24);
    printf("                             ");
    Locate(2,25);
    Color(1,15);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,26);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,27);
    printf("            %c%c%c%c%c%c           \n",220,220,220,220,220,220);
    Locate(2,28);
    printf("                             ");
    Locate(2,29);
    Color(0,15);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,30);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,31);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,32);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,33);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,34);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,35);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,36);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,37);
    printf("           %c%c%c%c%c%c            \n",219,219,219,219,219,219);
    Locate(2,38);
    printf("                             ");
    Color(0,20);
    Color(0,7);
    //Locate(26,9);
    //printf("************************MENU********************              \n");
    /***************************************/
    Locate(42,1);
    if (curs==1) Color(0,3);
        //Locate(26,11);
    printf("                                                            \n");
    Locate(42,2);
    printf("                   Chargement Initial                       \n");
    Locate(42,3);
    printf("                                                            \n");
    /**************************************/
    Locate(42,5);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(42,6);
    printf("                   Module %cpuration                         \n",130);
    Locate(42,7);
    printf("                                                            \n");
    /**************************************/
    Locate(42,9);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(42,10);
    printf("             Affichage de l'Entete du fichier               \n");
    Locate(42,11);
    printf("                                                            \n");
    /**********************************/
    Locate(42,13);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(42,14);
    printf("   Supprimer un enregistrement donn%c par le matricule       \n",130);
    Locate(42,15);
    printf("                                                            \n");
    /***********************************/
    Locate(42,17);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(42,18);
    printf("     Supprimer tous les enregistrements   relatifs a        \n");
    Locate(42,19);
    printf("                                                            \n");
    Locate(42,20);
    printf("               une sp%ccialit%c donn%ce                        \n",130,130,130);
    Locate(42,21);
    printf("                                                            \n");
    /***********************************/
    Locate(42,23);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(42,24);
    printf("   Consulter tous les enseignants exercant dans une         \n");
    Locate(42,25);
    printf("                                                            \n");
    Locate(42,26);
    printf("         r%cgion donn%ce (Ouest, Centre et Est).              \n",130,130);
    Locate(42,27);
    printf("                                                            \n");
    /************************************/
    Locate(105,1);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(105,2);
    printf("   Modification de l'etablissement universitaire d'un        \n");
    Locate(105,3);
    printf("                                                             \n");
    Locate(105,4);
    printf("            Enseignant en raison de sa mutation              \n");
    Locate(105,5);
    printf("                                                             \n");
    /************************************/
    Locate(105,7);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(105,8);
    printf("Afficher les enseignants exercant dans un %ctablissement donn%c\n",130,130);
    Locate(105,9);
    printf("                                                             \n");
    Locate(105,10);
    printf("    ayant une anciennet%c entre deux valeurs donn%ces          \n",130,130);
    Locate(105,11);
    printf("                                                             \n");
    /************************************/
    Locate(105,13);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(105,14);
    printf("    Ajout d'un nouvel enseignant au fichier                  \n");
    Locate(105,15);
    printf("                                                             \n");
    /*************************************/
    Locate(105,17);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(105,18);
    printf("   Afficher un enregistrement donn%c par le matricule         \n",130);
    Locate(105,19);
    printf("                                                             \n");
    /***************************************/
    /***************************************/
    Locate(80,29);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                \n");
    Locate(80,30);
    printf("          %c Quitter             \n",(curs==13)?'>':' ');
    Locate(80,31);
    printf("                                \n");
    Color(0,7);
}
void Afficher_nbens(int curs)
{
    Locate(55,1);
    Color(0,15);
    printf("                                                            \n");
    Locate(55,2);
    Color(0,15);
    printf("           Choisissez le Nombre d'enseignant                \n");
    Locate(55,3);
    Color(0,15);
    printf("                                                            \n");
    /***************************************/
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(25,5);
    printf("                                                            \n");
    Locate(25,6);
    printf("                    10000                                   \n");
    Locate(25,7);
    printf("                                                            \n");
    /**************************************/
    Locate(25,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(25,10);
    printf("                    20000                                   \n");
    Locate(25,11);
    printf("                                                            \n");
    /**************************************/
    Locate(25,13);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(25,14);
    printf("                    30000                                   \n");
    Locate(25,15);
    printf("                                                            \n");
    /**********************************/
    Locate(25,17);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(25,18);
    printf("                    40000                                   \n");
    Locate(25,19);
    printf("                                                            \n");
    /***********************************/
    Locate(25,21);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(25,22);
    printf("                    50000                                   \n");
    Locate(25,23);
    printf("                                                            \n");
    /***********************************/
    Locate(25,25);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(25,26);
    printf("                    60000                                   \n");
    Locate(25,27);
    printf("                                                            \n");
    /************************************/
    Locate(90,5);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,6);
    printf("                    70000                                    \n");
    Locate(90,7);
    printf("                                                             \n");
    /************************************/
    Locate(90,9);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,10);
    printf("                    80000                                    \n");
    Locate(90,11);
    printf("                                                             \n");
    /************************************/
    Locate(90,13);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,14);
    printf("                    90000                                    \n");
    Locate(90,15);
    printf("                                                             \n");
    /*************************************/
    Locate(90,17);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,18);
    printf("                    100000                                   \n");
    Locate(90,19);
    printf("                                                             \n");
    /***************************************/
    Locate(90,21);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,22);
    printf("                    110000                                   \n");
    Locate(90,23);
    printf("                                                             \n");
    /***************************************/
    Locate(90,25);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,26);
    printf("                    Autres                                   \n");
    Locate(90,27);
    printf("                                                             \n");
}
void Afficher_page1(int curs)
{
    /***************************************/
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(25,1);
    printf("                                                             \n");
    Locate(25,2);
    printf("   Universite  de Bouira - Akli Mohand Oulhadj               \n");
    Locate(25,3);
    printf("                                                             \n");
    /**************************************/
    Locate(25,5);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,6);
    printf("          Universite  de Djelfa - Ziane Achour               \n");
    Locate(25,7);
    printf("                                                             \n");
    /**************************************/
    Locate(25,9);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,10);
    printf("            Universite de Ghardaia                           \n");
    Locate(25,11);
    printf("                                                             \n");
    /**********************************/
    Locate(25,13);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,14);
    printf("    Universite  de Khemis Miliana - Djilali Bounaama         \n");
    Locate(25,15);
    printf("                                                             \n");
    /***********************************/
    Locate(25,17);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,18);
    printf("           Universite  Medea - Yahia Fares                   \n");
    Locate(25,19);
    printf("                                                             \n");
    /***********************************/
    Locate(25,21);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,22);
    printf("       Universite  de Boumerdes - M'hamed Bougara            \n");
    Locate(25,23);
    printf("                                                             \n");
    /************************************/
    Locate(25,25);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,26);
    printf("    Universite des sciences et de la technologie d'Alger,    \n");
    Locate(25,27);
    printf("                                                             \n");
    /************************************/
    Locate(25,29);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,30);
    printf("         Universite de Bejaia - Abderrahmane Mira            \n");
    Locate(25,31);
    printf("                                                             \n");
    /************************************/
    Locate(25,33);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,34);
    printf("         Universite  de Chlef - Hassiba Benbouali            \n");
    Locate(25,35);
    printf("                                                             \n");
    /*************************************/
    Locate(25,37);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,38);
    printf("         Universite  de Boumerdes - M'hamed Bougara          \n");
    Locate(25,39);
    printf("                                                             \n");
    /***************************************/
    Locate(25,41);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,42);
    printf("         Universite de Tizi Ouzou - Mouloud Maameri          \n");
    Locate(25,43);
    printf("                                                             \n");
    /***************************************/
    Locate(25,45);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,46);
    printf("         Universite  de Laghouat - Amar Telidji              \n");
    Locate(25,47);
    printf("                                                             \n");
    Locate(90,1);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,2);
    printf("              Universite de la Formation Continue            \n");
    Locate(90,3);
    printf("                                                             \n");
    /************************************/
    Locate(90,5);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,6);
    printf("             Universite  Blida 1 - Saad Dahlab               \n");
    Locate(90,7);
    printf("                                                             \n");
    /************************************/
    Locate(90,9);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,10);
    printf("            Universite de Blida 2 - Lounici Ali              \n");
    Locate(90,11);
    printf("                                                             \n");
    /*************************************/
    Locate(90,13);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,14);
    printf("         Universite d'Alger 1 - Benyoucef Benkhedda          \n");
    Locate(90,15);
    printf("                                                             \n");
    /***************************************/
    Locate(90,17);
    if (curs==17) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,18);
    printf("        Universite d'Alger 2 - Abou el Kacem Saadallah       \n");
    Locate(90,19);
    printf("                                                             \n");
    /***************************************/
    Locate(90,21);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,22);
    printf("        Universite d'Alger 3 - Brahim Soltane Chaibout       \n");
    Locate(90,23);
    printf("                                                             \n");
    Locate(90,25);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,26);
    printf("   Centre universitaire  de Tamanrasset - Amine Elokkal      \n");
    Locate(90,27);
    printf("                                                             \n");
    /************************************/
    Locate(90,29);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,30);
    printf("    Centre universitaire  de Tipaza - Abdallah Morsli        \n");
    Locate(90,31);
    printf("                                                             \n");
    /************************************/
    Locate(90,33);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,34);
    printf("   Centre Universitaire d'Illizi-Cheikh Amoud ben Mokhtar    \n");
    Locate(90,35);
    printf("                                                             \n");
    /*************************************/
    Locate(90,37);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,38);
    printf("              Centre universitaire Aflou                     \n");
    Locate(90,39);
    printf("                                                             \n");
    /***************************************/
    Locate(90,41);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,42);
    printf("                Ecole Nationale Polytechnique                \n");
    Locate(90,43);
    printf("                                                             \n");
    /***************************************/
    Locate(90,45);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,46);
    printf("                    Suivant                                  \n");
    Locate(90,47);
    printf("                                                             \n");
}
void Afficher_page2(int curs)
{
    /***************************************/
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(25,1);
    printf("                                                             \n");
    Locate(25,2);
    printf("    Ecole nationale superieure des travaux publics           \n");
    Locate(25,3);
    printf("                                                             \n");
    /**************************************/
    Locate(25,5);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,6);
    printf("   Ecole nationale superieure veterinaire-Rabie Bouchama     \n");
    Locate(25,7);
    printf("                                                             \n");
    /**************************************/
    Locate(25,9);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,10);
    printf("   Ecole Polytechnique d'architecture et d'Urbanisme         \n");
    Locate(25,11);
    printf("                                                             \n");
    /**********************************/
    Locate(25,13);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,14);
    printf("  Ecole nationale superieure agronomique-Khalef Abdellah     \n");
    Locate(25,15);
    printf("                                                             \n");
    /***********************************/
    Locate(25,17);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,18);
    printf("         Ecole des hautes etudes commerciales                \n");
    Locate(25,19);
    printf("                                                             \n");
    /***********************************/
    Locate(25,21);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,22);
    printf("       Ecole nationale superieure d'informatique             \n");
    Locate(25,23);
    printf("                                                             \n");
    /************************************/
    Locate(25,25);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,26);
    printf("   Ecole nationale superieure en statistique et en economie  \n");
    Locate(25,27);
    printf("                                                             \n");
    /************************************/
    Locate(25,29);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,30);
    printf("       Ecole Superieure de Commerce-Mouloud Kacem            \n");
    Locate(25,31);
    printf("                                                             \n");
    /************************************/
    Locate(25,33);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,34);
    printf("         Ecole Superieure de Commerce-Nait Belkacem          \n");
    Locate(25,35);
    printf("                                                             \n");
    /*************************************/
    Locate(25,37);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,38);
    printf("         Universite  de Boumerdes - M'hamed Bougara          \n");
    Locate(25,39);
    printf("                                                             \n");
    /***************************************/
    Locate(25,41);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,42);
    printf("         Ecole nationale superieure de management            \n");
    Locate(25,43);
    printf("                                                             \n");
    /***************************************/
    Locate(25,45);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,46);
    printf("                    Pr%cc%cdent                                \n",130,130);
    Locate(25,47);
    printf("                                                             \n");
    Locate(90,1);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,2);
    printf("         Ecole Nationale Superieure de Technologie           \n");
    Locate(90,3);
    printf("                                                             \n");
    /************************************/
    Locate(90,5);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,6);
    printf("        Ecole nationale superieure de journalisme            \n");
    Locate(90,7);
    printf("                                                             \n");
    /************************************/
    Locate(90,9);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,10);
    printf("   Ecole nationale superieure des sciences de l'information  \n");
    Locate(90,11);
    printf("                                                             \n");
    /*************************************/
    Locate(90,13);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,14);
    printf("           Universite  de Laghouat - Amar Telidji            \n");
    Locate(90,15);
    printf("                                                             \n");
    /***************************************/
    Locate(90,17);
    if (curs==17) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,18);
    printf("     Ecole Nationale Superieure des sciences politiques      \n");
    Locate(90,19);
    printf("                                                             \n");
    /***************************************/
    Locate(90,21);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,22);
    printf("        Universite d'Alger 3 - Brahim Soltane Chaibout       \n");
    Locate(90,23);
    printf("                                                             \n");
    Locate(90,25);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,26);
    printf("         Ecole Superieure des Sciences de l'Aliment          \n");
    Locate(90,27);
    printf("                                                             \n");
    /************************************/
    Locate(90,29);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,30);
    printf("    Ecole Superieure des Sciences appliquees d'Alger         \n");
    Locate(90,31);
    printf("                                                             \n");
    /************************************/
    Locate(90,33);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,34);
    printf("   Ecole normale superieure de Bouzareah - Cheikh Mubarak    \n");
    Locate(90,35);
    printf("                                                             \n");
    /*************************************/
    Locate(90,37);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,38);
    printf("  Ecole normale superieure de Kouba -Cheikh El Ibrahimi      \n");
    Locate(90,39);
    printf("                                                             \n");
    /***************************************/
    Locate(90,41);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,42);
    printf("  Ecole normale superieure de Laghouat - Taleb Abderrahmane  \n");
    Locate(90,43);
    printf("                                                             \n");
    /***************************************/
    Locate(90,45);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,46);
    printf("                    Suivant                                  \n");
    Locate(90,47);
    printf("                                                             \n");
}
void Afficher_page3(int curs)
{
    /***************************************/
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(25,1);
    printf("                                                             \n");
    Locate(25,2);
    printf("    Ecole preparatoire en sciences economiques commerciales  \n");
    Locate(25,3);
    printf("                                                             \n");
    /**************************************/
    Locate(25,5);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,6);
    printf("      Universite  de Jijel - Mohammed Seddik Ben yahia       \n");
    Locate(25,7);
    printf("                                                             \n");
    /**************************************/
    Locate(25,9);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,10);
    printf("         Universite de Tebessa - Larbi Tebessi               \n");
    Locate(25,11);
    printf("                                                             \n");
    /**********************************/
    Locate(25,13);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,14);
    printf("   Universite de Bordj Bou Arreridj - cheikh El Ibrahimi     \n");
    Locate(25,15);
    printf("                                                             \n");
    /***********************************/
    Locate(25,17);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,18);
    printf("         Universite d'El Tarf - Chadli Bendjedid             \n");
    Locate(25,19);
    printf("                                                             \n");
    /***********************************/
    Locate(25,21);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,22);
    printf("       Universite  de Khenchela - Abbas Laghrour             \n");
    Locate(25,23);
    printf("                                                             \n");
    /************************************/
    Locate(25,25);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,26);
    printf("        Universite  de Oum El Bouaghi - Larbi Ben M'hidi     \n");
    Locate(25,27);
    printf("                                                             \n");
    /************************************/
    Locate(25,29);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,30);
    printf("             Universite d'El Oued - Hamma Lakhdar            \n");
    Locate(25,31);
    printf("                                                             \n");
    /************************************/
    Locate(25,33);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,34);
    printf("     Universite de Souk Ahras - Mohammed-Cherif Messaadia    \n");
    Locate(25,35);
    printf("                                                             \n");
    /*************************************/
    Locate(25,37);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,38);
    printf("            Universite  de Annaba - Badji Mokhtar            \n");
    Locate(25,39);
    printf("                                                             \n");
    /***************************************/
    Locate(25,41);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,42);
    printf("             Universite  du 20 Aout 1955 de Skikda           \n");
    Locate(25,43);
    printf("                                                             \n");
    /***************************************/
    Locate(25,45);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,46);
    printf("                    Pr%cc%cdent                                \n",130,130);
    Locate(25,47);
    printf("                                                             \n");
    Locate(90,1);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,2);
    printf("              Universite  8 Mai 1945 de Guelma               \n");
    Locate(90,3);
    printf("                                                             \n");
    /************************************/
    Locate(90,5);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,6);
    printf("            Universite de Batna 1 - Hadj Lakhder             \n");
    Locate(90,7);
    printf("                                                             \n");
    /************************************/
    Locate(90,9);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,10);
    printf("            Universite  de Biskra - Mohamed Khider           \n");
    Locate(90,11);
    printf("                                                             \n");
    /*************************************/
    Locate(90,13);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,14);
    printf("          Universite  de M'sila - Mohamed Boudiaf            \n");
    Locate(90,15);
    printf("                                                             \n");
    /***************************************/
    Locate(90,17);
    if (curs==17) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,18);
    printf("            Universite  de Ouargla - Kasdi Merbah            \n");
    Locate(90,19);
    printf("                                                             \n");
    /***************************************/
    Locate(90,21);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,22);
    printf("       Universite des sciences islamiques  Constantine       \n");
    Locate(90,23);
    printf("                                                             \n");
    Locate(90,25);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,26);
    printf("             Universite  de Setif 1 - Ferhat Abbas           \n");
    Locate(90,27);
    printf("                                                             \n");
    /************************************/
    Locate(90,29);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,30);
    printf("    Universite  de Setif 2 - Mohamed Lamine Debaghine        \n");
    Locate(90,31);
    printf("                                                             \n");
    /************************************/
    Locate(90,33);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,34);
    printf("         Universite  de Constantine 1 - Freres Mentouri      \n");
    Locate(90,35);
    printf("                                                             \n");
    /*************************************/
    Locate(90,37);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,38);
    printf("        Universite  de Constantine 2 - Abdelhamid Mehri      \n");
    Locate(90,39);
    printf("                                                             \n");
    /***************************************/
    Locate(90,41);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,42);
    printf("         Universite de Constantine 3 -Salah Boubnider        \n");
    Locate(90,43);
    printf("                                                             \n");
    /***************************************/
    Locate(90,45);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,46);
    printf("                    Suivant                                  \n");
    Locate(90,47);
    printf("                                                             \n");
}
void Afficher_page4(int curs)
{
    /***************************************/
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(25,1);
    printf("                                                             \n");
    Locate(25,2);
    printf("          Universite de Batna 2 - Mustapha Ben Boulaid       \n");
    Locate(25,3);
    printf("                                                             \n");
    /**************************************/
    Locate(25,5);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,6);
    printf("      Centre Universitaire de Mila - Abdelhafid Boussouf     \n");
    Locate(25,7);
    printf("                                                             \n");
    /**************************************/
    Locate(25,9);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,10);
    printf("       Centre Universitaire de Barika - Si El Haoues         \n");
    Locate(25,11);
    printf("                                                             \n");
    /**********************************/
    Locate(25,13);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,14);
    printf("  Ecole nationale superieure des mines et de la m%ctallurgie  \n",130);
    Locate(25,15);
    printf("                                                             \n");
    /***********************************/
    Locate(25,17);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,18);
    printf("  Ecole Nationale Polytechnique de Constantine-Malek Bennabi \n");
    Locate(25,19);
    printf("                                                             \n");
    /***********************************/
    Locate(25,21);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,22);
    printf(" Ecole Nationale Superieure de Biotechnologie de Constantine \n");
    Locate(25,23);
    printf("                                                             \n");
    /************************************/
    Locate(25,25);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,26);
    printf("    Ecole Superieure des Sciences de Gestion de Annaba       \n");
    Locate(25,27);
    printf("                                                             \n");
    /************************************/
    Locate(25,29);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,30);
    printf("  Ecole Superieure des Technologies Industrielles de Annaba  \n");
    Locate(25,31);
    printf("                                                             \n");
    /************************************/
    Locate(25,33);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,34);
    printf("Ecole Superieure de Comptabilite et de Finance de Constantine\n");
    Locate(25,35);
    printf("                                                             \n");
    /*************************************/
    Locate(25,37);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,38);
    printf("    Ecole normale superieure de Constantine -Assia Djebar    \n");
    Locate(25,39);
    printf("                                                             \n");
    /***************************************/
    Locate(25,41);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,42);
    printf("     Ecole normale superieure d'enseignement technologique   \n");
    Locate(25,43);
    printf("                                                             \n");
    /***************************************/
    Locate(25,45);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,46);
    printf("                    Pr%cc%cdent                                \n",130,130);
    Locate(25,47);
    printf("                                                             \n");
    Locate(90,1);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,2);
    printf("    Ecole normale superieure de setif - Messaoud Zeghar-     \n");
    Locate(90,3);
    printf("                                                             \n");
    /************************************/
    Locate(90,5);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,6);
    printf("            Ecole normale superieure de Bou Saada            \n");
    Locate(90,7);
    printf("                                                             \n");
    /************************************/
    Locate(90,9);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,10);
    printf("              Ecole normale superieure de Ouargla            \n");
    Locate(90,11);
    printf("                                                             \n");
    /*************************************/
    Locate(90,13);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,14);
    printf("           Universite de Bechar - Mohamed Tahri              \n");
    Locate(90,15);
    printf("                                                             \n");
    /***************************************/
    Locate(90,17);
    if (curs==17) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,18);
    printf("        Universite  de Mascara - Mustapha Stambouli          \n");
    Locate(90,19);
    printf("                                                             \n");
    /***************************************/
    Locate(90,21);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,22);
    printf("               Universite de Saida - Tahar Moulay            \n");
    Locate(90,23);
    printf("                                                             \n");
    Locate(90,25);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,26);
    printf("         Universite  de Tlemcen - Abou Bekr Belkaid          \n");
    Locate(90,27);
    printf("                                                             \n");
    /************************************/
    Locate(90,29);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,30);
    printf("              Universite  d'Adrar - Ahmed Draya              \n");
    Locate(90,31);
    printf("                                                             \n");
    /************************************/
    Locate(90,33);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,34);
    printf("              Universite  de Tiaret - Ibn Khaldoun           \n");
    Locate(90,35);
    printf("                                                             \n");
    /*************************************/
    Locate(90,37);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,38);
    printf("          Universite  Sidi Bel Abbes - Djillali Liabes       \n");
    Locate(90,39);
    printf("                                                             \n");
    /***************************************/
    Locate(90,41);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,42);
    printf("        Universite de Mostaganem - Abdelhamid Ibn Badis      \n");
    Locate(90,43);
    printf("                                                             \n");
    /***************************************/
    Locate(90,45);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,46);
    printf("                    Suivant                                  \n");
    Locate(90,47);
    printf("                                                             \n");
}
void Afficher_page5(int curs)
{
    /***************************************/
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(25,1);
    printf("                                                             \n");
    Locate(25,2);
    printf("                Universite d'Oran1 - Ahmed Ben Bella         \n");
    Locate(25,3);
    printf("                                                             \n");
    /**************************************/
    Locate(25,5);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,6);
    printf("Universite Mohamed Boudiaf  des sciences et de la technologie\n");
    Locate(25,7);
    printf("                                                             \n");
    /**************************************/
    Locate(25,9);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,10);
    printf("             Universite  d'Oran 2 - Mohamed Ben Ahmed        \n");
    Locate(25,11);
    printf("                                                             \n");
    /**********************************/
    Locate(25,13);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,14);
    printf("      Centre Universitaire de Tissemsilt- Ahmed ben yahia    \n");
    Locate(25,15);
    printf("                                                             \n");
    /***********************************/
    Locate(25,17);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,18);
    printf("  Centre Universitaire  de Ain Temouchent - Belhadj Bouchaib \n");
    Locate(25,19);
    printf("                                                             \n");
    /***********************************/
    Locate(25,21);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,22);
    printf("       Centre universitaire de Relizane - Ahmed Zabana       \n");
    Locate(25,23);
    printf("                                                             \n");
    /************************************/
    Locate(25,25);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,26);
    printf("         Centre universitaire   de Naama - Ahmed Salhi       \n");
    Locate(25,27);
    printf("                                                             \n");
    /************************************/
    Locate(25,29);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,30);
    printf("       Centre universitaire   d'El Bayadh - Nour Bachir      \n");
    Locate(25,31);
    printf("                                                             \n");
    /************************************/
    Locate(25,33);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,34);
    printf("        Centre universitaire de Tindouf-Ali Kafi             \n");
    Locate(25,35);
    printf("                                                             \n");
    /*************************************/
    Locate(25,37);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,38);
    printf("              Centre universitaire de Maghnia                \n");
    Locate(25,39);
    printf("                                                             \n");
    /***************************************/
    Locate(25,41);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(25,42);
    printf("     Ecole Nationale Polytechnique d'Oran - Maurice Audin    \n");
    Locate(25,43);
    printf("                                                             \n");
    /***************************************/
    Locate(90,1);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,2);
    printf("Ecole  Superieure d'Informatique (Sidi Bel Abbes)-08 Mai 1945\n");
    Locate(90,3);
    printf("                                                             \n");
    /************************************/
    Locate(90,5);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,6);
    printf("   Ecole Superieure des Sciences Appliquees de Tlemcen       \n");
    Locate(90,7);
    printf("                                                             \n");
    /************************************/
    Locate(90,9);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,10);
    printf("    Ecole Superieure de Management de Tlemcen ex EPSECG      \n");
    Locate(90,11);
    printf("                                                             \n");
    /*************************************/
    Locate(90,13);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,14);
    printf("        Ecole Superieure d'Economie d'Oran ex EPSECG Oran    \n");
    Locate(90,15);
    printf("                                                             \n");
    /***************************************/
    Locate(90,17);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,18);
    printf(" Ecole Superieure en Genie Electrique et Energetique d'Oran  \n");
    Locate(90,19);
    printf("                                                             \n");
    /***************************************/
    Locate(90,21);
    if (curs==17) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,22);
    printf(" Ecole Superieure Agronomique de Mostaganem ex SNV Mostaganem\n");
    Locate(90,23);
    printf("                                                             \n");
    Locate(90,25);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,26);
    printf("  Ecole Superieure des sciences Biologiques ex EP SNV Oran   \n");
    Locate(90,27);
    printf("                                                             \n");
    /************************************/
    Locate(90,29);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,30);
    printf("         Ecole Normale Superieure de Mostaganem              \n");
    Locate(90,31);
    printf("                                                             \n");
    /************************************/
    Locate(90,33);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,34);
    printf("               Ecole Normale Superieure d'Oran               \n");
    Locate(90,35);
    printf("                                                             \n");
    Locate(90,37);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,38);
    printf("                                                             \n");
    Locate(90,39);
    printf("                    Pr%cc%cdent                                \n",130,130);
    Locate(90,40);
    printf("                                                             \n");
    Locate(90,41);
    printf("                                                             \n");
    Locate(90,43);
}
void Afficher_mois(int curs)
{
    Locate(55,1);
    Color(0,15);
    printf("                                                            \n");
    Locate(55,2);
    Color(0,15);
    printf("               Choisissez le Mois                           \n");
    Locate(55,3);
    Color(0,15);
    printf("                                                            \n");
    /***************************************/
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(25,5);
    printf("                                                            \n");
    Locate(25,6);
    printf("                    Janvier                                 \n");
    Locate(25,7);
    printf("                                                            \n");
    /**************************************/
    Locate(25,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(25,10);
    printf("                    F%cvrier                                 \n",130);
    Locate(25,11);
    printf("                                                            \n");
    /**************************************/
    Locate(25,13);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(25,14);
    printf("                    Mars                                    \n");
    Locate(25,15);
    printf("                                                            \n");
    /**********************************/
    Locate(25,17);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(25,18);
    printf("                    Avril                                   \n");
    Locate(25,19);
    printf("                                                            \n");
    /***********************************/
    Locate(25,21);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(25,22);
    printf("                    Mai                                     \n");
    Locate(25,23);
    printf("                                                            \n");
    /***********************************/
    Locate(25,25);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                                            \n");
    Locate(25,26);
    printf("                    Juin                                    \n");
    Locate(25,27);
    printf("                                                            \n");
    /************************************/
    Locate(90,5);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,6);
    printf("                    Juillet                                  \n");
    Locate(90,7);
    printf("                                                             \n");
    /************************************/
    Locate(90,9);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,10);
    printf("                     Aout                                    \n");
    Locate(90,11);
    printf("                                                             \n");
    /************************************/
    Locate(90,13);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,14);
    printf("                    Septembre                                \n");
    Locate(90,15);
    printf("                                                             \n");
    /*************************************/
    Locate(90,17);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,18);
    printf("                    Octobre                                  \n");
    Locate(90,19);
    printf("                                                             \n");
    /***************************************/
    Locate(90,21);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,22);
    printf("                    Novembre                                 \n");
    Locate(90,23);
    printf("                                                             \n");
    /***************************************/
    Locate(90,25);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                                             \n");
    Locate(90,26);
    printf("                    Decembre                                 \n");
    Locate(90,27);
    printf("                                                             \n");
}
void Afficher_wilaya(int curs)
{
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                   \n");
    Locate(5,6);
    printf("               Adrar               \n");
    Locate(5,7);
    printf("                                   \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,10);
    printf("               Chlef               \n");
    Locate(5,11);
    printf("                                   \n");
    /**************************************/
    Locate(5,13);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,14);
    printf("              Laghouat             \n");
    Locate(5,15);
    printf("                                   \n");
    /**********************************/
    Locate(5,17);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,18);
    printf("            Oum El Bouaghi         \n");
    Locate(5,19);
    printf("                                   \n");
    /***********************************/
    Locate(5,21);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,22);
    printf("             Batna                 \n");
    Locate(5,23);
    printf("                                   \n");
    /***********************************/
    Locate(5,25);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,26);
    printf("             Bejaia                \n");
    Locate(5,27);
    printf("                                   \n");
    Locate(5,29);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,30);
    printf("             Biskra                \n");
    Locate(5,31);
    printf("                                   \n");
    /**************************************/
    Locate(5,33);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,34);
    printf("             Bechar                \n");
    Locate(5,35);
    printf("                                   \n");
    /**********************************/
    Locate(5,37);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,38);
    printf("             Blida                 \n");
    Locate(5,39);
    printf("                                   \n");
    /***********************************/
    Locate(5,41);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,42);
    printf("             Bouira                \n");
    Locate(5,43);
    printf("                                   \n");
    /***********************************/
    Locate(5,45);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,46);
    printf("           Tamanrasset             \n");
    Locate(5,47);
    printf("                                   \n");
    /***********************************/
    Locate(5,49);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,50);
    printf("           Tebessa                 \n");
    Locate(5,51);
    printf("                                   \n");
    if (curs==13)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(45,5);
    printf("                                   \n");
    Locate(45,6);
    printf("          Tlemcen                  \n");
    Locate(45,7);
    printf("                                   \n");
    /**************************************/
    Locate(45,9);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,10);
    printf("          Tiaret                   \n");
    Locate(45,11);
    printf("                                   \n");
    /**************************************/
    Locate(45,13);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,14);
    printf("          Tizi-Ouzou               \n");
    Locate(45,15);
    printf("                                   \n");
    /**********************************/
    Locate(45,17);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,18);
    printf("           Alger                   \n");
    Locate(45,19);
    printf("                                   \n");
    /***********************************/
    Locate(45,21);
    if (curs==17) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,22);
    printf("            Djelfa                 \n");
    Locate(45,23);
    printf("                                   \n");
    /***********************************/
    Locate(45,25);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,26);
    printf("            Jijel                  \n");
    Locate(45,27);
    printf("                                   \n");
    Locate(45,29);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,30);
    printf("            Setif                  \n");
    Locate(45,31);
    printf("                                   \n");
    /**************************************/
    Locate(45,33);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,34);
    printf("            Saida                  \n");
    Locate(45,35);
    printf("                                   \n");
    /**********************************/
    Locate(45,37);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,38);
    printf("            Skikda                 \n");
    Locate(45,39);
    printf("                                   \n");
    /***********************************/
    Locate(45,41);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,42);
    printf("       Sidi Bel Abbes              \n");
    Locate(45,43);
    printf("                                   \n");
    /***********************************/
    Locate(45,45);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,46);
    printf("           Annaba                  \n");
    Locate(45,47);
    printf("                                   \n");
    /***********************************/
    Locate(45,49);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,50);
    printf("           Guelma                  \n");
    Locate(45,51);
    printf("                                   \n");
    if (curs==25)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(85,5);
    printf("                                   \n");
    Locate(85,6);
    printf("        Constantine                \n");
    Locate(85,7);
    printf("                                   \n");
    /**************************************/
    Locate(85,9);
    if (curs==26) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,10);
    printf("        Medea                      \n");
    Locate(85,11);
    printf("                                   \n");
    /**************************************/
    Locate(85,13);
    if (curs==27) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,14);
    printf("         Mostaganem                \n");
    Locate(85,15);
    printf("                                   \n");
    /**********************************/
    Locate(85,17);
    if (curs==28) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,18);
    printf("          M'Sila                   \n");
    Locate(85,19);
    printf("                                   \n");
    /***********************************/
    Locate(85,21);
    if (curs==29) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,22);
    printf("            Mascara                \n");
    Locate(85,23);
    printf("                                   \n");
    /***********************************/
    Locate(85,25);
    if (curs==30) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,26);
    printf("            Ouargla                \n");
    Locate(85,27);
    printf("                                   \n");
    Locate(85,29);
    if (curs==31) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,30);
    printf("            Oran                   \n");
    Locate(85,31);
    printf("                                   \n");
    /**************************************/
    Locate(85,33);
    if (curs==32) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,34);
    printf("              El Bayadh            \n");
    Locate(85,35);
    printf("                                   \n");
    /**********************************/
    Locate(85,37);
    if (curs==33) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,38);
    printf("           Illizi                  \n");
    Locate(85,39);
    printf("                                   \n");
    /***********************************/
    Locate(85,41);
    if (curs==34) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,42);
    printf("           Bordj Bou Arreridj      \n");
    Locate(85,43);
    printf("                                   \n");
    /***********************************/
    Locate(85,45);
    if (curs==35) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,46);
    printf("            Boumerdes              \n");
    Locate(85,47);
    printf("                                   \n");
    /***********************************/
    Locate(85,49);
    if (curs==36) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,50);
    printf("             El Tarf               \n");
    Locate(85,51);
    printf("                                   \n");
    if (curs==37)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(125,5);
    printf("                                   \n");
    Locate(125,6);
    printf("             Tindouf               \n");
    Locate(125,7);
    printf("                                   \n");
    /**************************************/
    Locate(125,9);
    if (curs==38) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,10);
    printf("             Tissemsilt            \n");
    Locate(125,11);
    printf("                                   \n");
    /**************************************/
    Locate(125,13);
    if (curs==39) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,14);
    printf("              El Oued              \n");
    Locate(125,15);
    printf("                                   \n");
    /**********************************/
    Locate(125,17);
    if (curs==40) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,18);
    printf("              Khenchela            \n");
    Locate(125,19);
    printf("                                   \n");
    /***********************************/
    Locate(125,21);
    if (curs==41) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,22);
    printf("              Souk Ahras           \n");
    Locate(125,23);
    printf("                                   \n");
    /***********************************/
    Locate(125,25);
    if (curs==42) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,26);
    printf("              Tipaza               \n");
    Locate(125,27);
    printf("                                   \n");
    Locate(125,29);
    if (curs==43) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,30);
    printf("              Mila                 \n");
    Locate(125,31);
    printf("                                   \n");
    /**************************************/
    Locate(125,33);
    if (curs==44) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,34);
    printf("              Ain Defla            \n");
    Locate(125,35);
    printf("                                   \n");
    /**********************************/
    Locate(125,37);
    if (curs==45) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,38);
    printf("              Naama                \n");
    Locate(125,39);
    printf("                                   \n");
    /***********************************/
    Locate(125,41);
    if (curs==46) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,42);
    printf("              Ain Temouchent       \n");
    Locate(125,43);
    printf("                                   \n");
    /***********************************/
    Locate(125,45);
    if (curs==47) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,46);
    printf("              Ghardaia             \n");
    Locate(125,47);
    printf("                                   \n");
    /***********************************/
    Locate(125,49);
    if (curs==48) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,50);
    printf("              Relizane             \n");
    Locate(125,51);
    printf("                                   \n");
}
void Afficher_anne_naiss(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("    choisissez L'ann%ce De Naissance        \n",130);
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                   \n");
    Locate(5,6);
    printf("               1953                \n");
    Locate(5,7);
    printf("                                   \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,10);
    printf("               1954                \n");
    Locate(5,11);
    printf("                                   \n");
    /**************************************/
    Locate(5,13);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,14);
    printf("               1955                \n");
    Locate(5,15);
    printf("                                   \n");
    /**********************************/
    Locate(5,17);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,18);
    printf("               1956                \n");
    Locate(5,19);
    printf("                                   \n");
    /***********************************/
    Locate(5,21);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,22);
    printf("               1957                \n");
    Locate(5,23);
    printf("                                   \n");
    /***********************************/
    Locate(5,25);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,26);
    printf("              1958                 \n");
    Locate(5,27);
    printf("                                   \n");
    Locate(5,29);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,30);
    printf("              1959                 \n");
    Locate(5,31);
    printf("                                   \n");
    /**************************************/
    Locate(5,33);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,34);
    printf("              1960                 \n");
    Locate(5,35);
    printf("                                   \n");
    /**********************************/
    Locate(5,37);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,38);
    printf("              1961                 \n");
    Locate(5,39);
    printf("                                   \n");
    /***********************************/
    Locate(5,41);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,42);
    printf("              1962                 \n");
    Locate(5,43);
    printf("                                   \n");
    /***********************************/
    if (curs==11)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(45,5);
    printf("                                   \n");
    Locate(45,6);
    printf("             1963                  \n");
    Locate(45,7);
    printf("                                   \n");
    /**************************************/
    Locate(45,9);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,10);
    printf("             1964                  \n");
    Locate(45,11);
    printf("                                   \n");
    /**************************************/
    Locate(45,13);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,14);
    printf("             1965                  \n");
    Locate(45,15);
    printf("                                   \n");
    /**********************************/
    Locate(45,17);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,18);
    printf("              1966                 \n");
    Locate(45,19);
    printf("                                   \n");
    /***********************************/
    Locate(45,21);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,22);
    printf("              1967                 \n");
    Locate(45,23);
    printf("                                   \n");
    /***********************************/
    Locate(45,25);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,26);
    printf("              1968                 \n");
    Locate(45,27);
    printf("                                   \n");
    Locate(45,29);
    if (curs==17) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,30);
    printf("              1969                 \n");
    Locate(45,31);
    printf("                                   \n");
    /**************************************/
    Locate(45,33);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,34);
    printf("              1970                 \n");
    Locate(45,35);
    printf("                                   \n");
    /**********************************/
    Locate(45,37);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,38);
    printf("              1971                 \n");
    Locate(45,39);
    printf("                                   \n");
    /***********************************/
    Locate(45,41);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,42);
    printf("              1972                 \n");
    Locate(45,43);
    printf("                                   \n");
    /***********************************/
    if (curs==21)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(85,5);
    printf("                                   \n");
    Locate(85,6);
    printf("              1973                 \n");
    Locate(85,7);
    printf("                                   \n");
    /**************************************/
    Locate(85,9);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,10);
    printf("              1974                 \n");
    Locate(85,11);
    printf("                                   \n");
    /**************************************/
    Locate(85,13);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,14);
    printf("              1975                 \n");
    Locate(85,15);
    printf("                                   \n");
    /**********************************/
    Locate(85,17);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,18);
    printf("              1976                 \n");
    Locate(85,19);
    printf("                                   \n");
    /***********************************/
    Locate(85,21);
    if (curs==25) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,22);
    printf("              1977                 \n");
    Locate(85,23);
    printf("                                   \n");
    /***********************************/
    Locate(85,25);
    if (curs==26) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,26);
    printf("              1978                 \n");
    Locate(85,27);
    printf("                                   \n");
    Locate(85,29);
    if (curs==27) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,30);
    printf("              1979                 \n");
    Locate(85,31);
    printf("                                   \n");
    /**************************************/
    Locate(85,33);
    if (curs==28) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,34);
    printf("              1980                 \n");
    Locate(85,35);
    printf("                                   \n");
    /**********************************/
    Locate(85,37);
    if (curs==29) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,38);
    printf("              1981                 \n");
    Locate(85,39);
    printf("                                   \n");
    /***********************************/
    Locate(85,41);
    if (curs==30) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,42);
    printf("              1982                 \n");
    Locate(85,43);
    printf("                                   \n");
    /***********************************/
    if (curs==31)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(125,5);
    printf("                                   \n");
    Locate(125,6);
    printf("              1983                 \n");
    Locate(125,7);
    printf("                                   \n");
    /**************************************/
    Locate(125,9);
    if (curs==32) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,10);
    printf("              1984                 \n");
    Locate(125,11);
    printf("                                   \n");
    /**************************************/
    Locate(125,13);
    if (curs==33) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,14);
    printf("              1985                 \n");
    Locate(125,15);
    printf("                                   \n");
    /**********************************/
    Locate(125,17);
    if (curs==34) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,18);
    printf("              1986                 \n");
    Locate(125,19);
    printf("                                   \n");
    /***********************************/
    Locate(125,21);
    if (curs==35) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,22);
    printf("              1987                 \n");
    Locate(125,23);
    printf("                                   \n");
    /***********************************/
    Locate(125,25);
    if (curs==36) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,26);
    printf("              1988                 \n");
    Locate(125,27);
    printf("                                   \n");
    Locate(125,29);
    if (curs==37) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,30);
    printf("              1989                 \n");
    Locate(125,31);
    printf("                                   \n");
    /**************************************/
    Locate(125,33);
    if (curs==38) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,34);
    printf("              1990                 \n");
    Locate(125,35);
    printf("                                   \n");
    /**********************************/
    Locate(125,37);
    if (curs==39) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,38);
    printf("              1991                 \n");
    Locate(125,39);
    printf("                                   \n");
    /***********************************/
    Locate(125,41);
    if (curs==40) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,42);
    printf("              1992                 \n");
    Locate(125,43);
    printf("                                   \n");
    /***********************************/
}
void Afficher_jour_31(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("        choisissez Le Jour                 \n");
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                   \n");
    Locate(5,6);
    printf("               01                  \n");
    Locate(5,7);
    printf("                                   \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,10);
    printf("               02                  \n");
    Locate(5,11);
    printf("                                   \n");
    /**************************************/
    Locate(5,13);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,14);
    printf("               03                  \n");
    Locate(5,15);
    printf("                                   \n");
    /**********************************/
    Locate(5,17);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,18);
    printf("               04                  \n");
    Locate(5,19);
    printf("                                   \n");
    /***********************************/
    Locate(5,21);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,22);
    printf("               05                  \n");
    Locate(5,23);
    printf("                                   \n");
    /***********************************/
    Locate(5,25);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,26);
    printf("               06                  \n");
    Locate(5,27);
    printf("                                   \n");
    Locate(5,29);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,30);
    printf("               07                  \n");
    Locate(5,31);
    printf("                                   \n");
    /**************************************/
    Locate(5,33);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,34);
    printf("               08                  \n");
    Locate(5,35);
    printf("                                   \n");
    /**********************************/
    if (curs==9)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(45,5);
    printf("                                   \n");
    Locate(45,6);
    printf("              09                   \n");
    Locate(45,7);
    printf("                                   \n");
    /**************************************/
    Locate(45,9);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,10);
    printf("              10                   \n");
    Locate(45,11);
    printf("                                   \n");
    /**************************************/
    Locate(45,13);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,14);
    printf("              11                   \n");
    Locate(45,15);
    printf("                                   \n");
    /**********************************/
    Locate(45,17);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,18);
    printf("              12                   \n");
    Locate(45,19);
    printf("                                   \n");
    /***********************************/
    Locate(45,21);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,22);
    printf("              13                   \n");
    Locate(45,23);
    printf("                                   \n");
    /***********************************/
    Locate(45,25);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,26);
    printf("              14                   \n");
    Locate(45,27);
    printf("                                   \n");
    Locate(45,29);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,30);
    printf("              15                   \n");
    Locate(45,31);
    printf("                                   \n");
    /**************************************/
    Locate(45,33);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,34);
    printf("              16                   \n");
    Locate(45,35);
    printf("                                   \n");
    /**********************************/

    /***********************************/
    if (curs==17)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(85,5);
    printf("                                   \n");
    Locate(85,6);
    printf("              17                   \n");
    Locate(85,7);
    printf("                                   \n");
    /**************************************/
    Locate(85,9);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,10);
    printf("              18                   \n");
    Locate(85,11);
    printf("                                   \n");
    /**************************************/
    Locate(85,13);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,14);
    printf("              19                   \n");
    Locate(85,15);
    printf("                                   \n");
    /**********************************/
    Locate(85,17);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,18);
    printf("              20                   \n");
    Locate(85,19);
    printf("                                   \n");
    /***********************************/
    Locate(85,21);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,22);
    printf("              21                   \n");
    Locate(85,23);
    printf("                                   \n");
    /***********************************/
    Locate(85,25);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,26);
    printf("              22                   \n");
    Locate(85,27);
    printf("                                   \n");
    Locate(85,29);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,30);
    printf("              23                   \n");
    Locate(85,31);
    printf("                                   \n");
    /**************************************/
    Locate(85,33);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,34);
    printf("              24                   \n");
    Locate(85,35);
    printf("                                   \n");
    /**********************************/
    if (curs==25)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(125,5);
    printf("                                   \n");
    Locate(125,6);
    printf("              25                   \n");
    Locate(125,7);
    printf("                                   \n");
    /**************************************/
    Locate(125,9);
    if (curs==26) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,10);
    printf("              26                   \n");
    Locate(125,11);
    printf("                                   \n");
    /**************************************/
    Locate(125,13);
    if (curs==27) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,14);
    printf("              27                   \n");
    Locate(125,15);
    printf("                                   \n");
    /**********************************/
    Locate(125,17);
    if (curs==28) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,18);
    printf("              28                   \n");
    Locate(125,19);
    printf("                                   \n");
    /***********************************/
    Locate(125,21);
    if (curs==29) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,22);
    printf("              29                   \n");
    Locate(125,23);
    printf("                                   \n");
    /***********************************/
    Locate(125,25);
    if (curs==30) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,26);
    printf("              30                   \n");
    Locate(125,27);
    printf("                                   \n");
    Locate(125,29);
    if (curs==31) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,30);
    printf("              31                   \n");
    Locate(125,31);
    printf("                                   \n");
    /**************************************/
    Locate(125,35);
}
void Afficher_jour_30(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("        choisissez Le Jour                 \n");
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                   \n");
    Locate(5,6);
    printf("               01                  \n");
    Locate(5,7);
    printf("                                   \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,10);
    printf("               02                  \n");
    Locate(5,11);
    printf("                                   \n");
    /**************************************/
    Locate(5,13);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,14);
    printf("               03                  \n");
    Locate(5,15);
    printf("                                   \n");
    /**********************************/
    Locate(5,17);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,18);
    printf("               04                  \n");
    Locate(5,19);
    printf("                                   \n");
    /***********************************/
    Locate(5,21);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,22);
    printf("               05                  \n");
    Locate(5,23);
    printf("                                   \n");
    /***********************************/
    Locate(5,25);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,26);
    printf("               06                  \n");
    Locate(5,27);
    printf("                                   \n");
    Locate(5,29);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,30);
    printf("               07                  \n");
    Locate(5,31);
    printf("                                   \n");
    /**************************************/
    Locate(5,33);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,34);
    printf("               08                  \n");
    Locate(5,35);
    printf("                                   \n");
    /**********************************/
    if (curs==9)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(45,5);
    printf("                                   \n");
    Locate(45,6);
    printf("              09                   \n");
    Locate(45,7);
    printf("                                   \n");
    /**************************************/
    Locate(45,9);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,10);
    printf("              10                   \n");
    Locate(45,11);
    printf("                                   \n");
    /**************************************/
    Locate(45,13);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,14);
    printf("              11                   \n");
    Locate(45,15);
    printf("                                   \n");
    /**********************************/
    Locate(45,17);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,18);
    printf("              12                   \n");
    Locate(45,19);
    printf("                                   \n");
    /***********************************/
    Locate(45,21);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,22);
    printf("              13                   \n");
    Locate(45,23);
    printf("                                   \n");
    /***********************************/
    Locate(45,25);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,26);
    printf("              14                   \n");
    Locate(45,27);
    printf("                                   \n");
    Locate(45,29);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,30);
    printf("              15                   \n");
    Locate(45,31);
    printf("                                   \n");
    /**************************************/
    Locate(45,33);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,34);
    printf("              16                   \n");
    Locate(45,35);
    printf("                                   \n");
    /**********************************/

    /***********************************/
    if (curs==17)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(85,5);
    printf("                                   \n");
    Locate(85,6);
    printf("              17                   \n");
    Locate(85,7);
    printf("                                   \n");
    /**************************************/
    Locate(85,9);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,10);
    printf("              18                   \n");
    Locate(85,11);
    printf("                                   \n");
    /**************************************/
    Locate(85,13);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,14);
    printf("              19                   \n");
    Locate(85,15);
    printf("                                   \n");
    /**********************************/
    Locate(85,17);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,18);
    printf("              20                   \n");
    Locate(85,19);
    printf("                                   \n");
    /***********************************/
    Locate(85,21);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,22);
    printf("              21                   \n");
    Locate(85,23);
    printf("                                   \n");
    /***********************************/
    Locate(85,25);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,26);
    printf("              22                   \n");
    Locate(85,27);
    printf("                                   \n");
    Locate(85,29);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,30);
    printf("              23                   \n");
    Locate(85,31);
    printf("                                   \n");
    /**************************************/
    Locate(85,33);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,34);
    printf("              24                   \n");
    Locate(85,35);
    printf("                                   \n");
    /**********************************/
    if (curs==25)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(125,5);
    printf("                                   \n");
    Locate(125,6);
    printf("              25                   \n");
    Locate(125,7);
    printf("                                   \n");
    /**************************************/
    Locate(125,9);
    if (curs==26) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,10);
    printf("              26                   \n");
    Locate(125,11);
    printf("                                   \n");
    /**************************************/
    Locate(125,13);
    if (curs==27) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,14);
    printf("              27                   \n");
    Locate(125,15);
    printf("                                   \n");
    /**********************************/
    Locate(125,17);
    if (curs==28) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,18);
    printf("              28                   \n");
    Locate(125,19);
    printf("                                   \n");
    /***********************************/
    Locate(125,21);
    if (curs==29) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,22);
    printf("              29                   \n");
    Locate(125,23);
    printf("                                   \n");
    /***********************************/
    Locate(125,25);
    if (curs==30) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,26);
    printf("              30                   \n");
    Locate(125,27);
    printf("                                   \n");
    Locate(125,32);
}
void Afficher_jour_29(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("        choisissez Le Jour                 \n");
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                   \n");
    Locate(5,6);
    printf("               01                  \n");
    Locate(5,7);
    printf("                                   \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,10);
    printf("               02                  \n");
    Locate(5,11);
    printf("                                   \n");
    /**************************************/
    Locate(5,13);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,14);
    printf("               03                  \n");
    Locate(5,15);
    printf("                                   \n");
    /**********************************/
    Locate(5,17);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,18);
    printf("               04                  \n");
    Locate(5,19);
    printf("                                   \n");
    /***********************************/
    Locate(5,21);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,22);
    printf("               05                  \n");
    Locate(5,23);
    printf("                                   \n");
    /***********************************/
    Locate(5,25);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,26);
    printf("               06                  \n");
    Locate(5,27);
    printf("                                   \n");
    Locate(5,29);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,30);
    printf("               07                  \n");
    Locate(5,31);
    printf("                                   \n");
    /**************************************/
    Locate(5,33);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,34);
    printf("               08                  \n");
    Locate(5,35);
    printf("                                   \n");
    /**********************************/
    if (curs==9)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(45,5);
    printf("                                   \n");
    Locate(45,6);
    printf("              09                   \n");
    Locate(45,7);
    printf("                                   \n");
    /**************************************/
    Locate(45,9);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,10);
    printf("              10                   \n");
    Locate(45,11);
    printf("                                   \n");
    /**************************************/
    Locate(45,13);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,14);
    printf("              11                   \n");
    Locate(45,15);
    printf("                                   \n");
    /**********************************/
    Locate(45,17);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,18);
    printf("              12                   \n");
    Locate(45,19);
    printf("                                   \n");
    /***********************************/
    Locate(45,21);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,22);
    printf("              13                   \n");
    Locate(45,23);
    printf("                                   \n");
    /***********************************/
    Locate(45,25);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,26);
    printf("              14                   \n");
    Locate(45,27);
    printf("                                   \n");
    Locate(45,29);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,30);
    printf("              15                   \n");
    Locate(45,31);
    printf("                                   \n");
    /**************************************/
    Locate(45,33);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,34);
    printf("              16                   \n");
    Locate(45,35);
    printf("                                   \n");
    /**********************************/

    /***********************************/
    if (curs==17)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(85,5);
    printf("                                   \n");
    Locate(85,6);
    printf("              17                   \n");
    Locate(85,7);
    printf("                                   \n");
    /**************************************/
    Locate(85,9);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,10);
    printf("              18                   \n");
    Locate(85,11);
    printf("                                   \n");
    /**************************************/
    Locate(85,13);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,14);
    printf("              19                   \n");
    Locate(85,15);
    printf("                                   \n");
    /**********************************/
    Locate(85,17);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,18);
    printf("              20                   \n");
    Locate(85,19);
    printf("                                   \n");
    /***********************************/
    Locate(85,21);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,22);
    printf("              21                   \n");
    Locate(85,23);
    printf("                                   \n");
    /***********************************/
    Locate(85,25);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,26);
    printf("              22                   \n");
    Locate(85,27);
    printf("                                   \n");
    Locate(85,29);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,30);
    printf("              23                   \n");
    Locate(85,31);
    printf("                                   \n");
    /**************************************/
    Locate(85,33);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,34);
    printf("              24                   \n");
    Locate(85,35);
    printf("                                   \n");
    /**********************************/
    if (curs==25)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(125,5);
    printf("                                   \n");
    Locate(125,6);
    printf("              25                   \n");
    Locate(125,7);
    printf("                                   \n");
    /**************************************/
    Locate(125,9);
    if (curs==26) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,10);
    printf("              26                   \n");
    Locate(125,11);
    printf("                                   \n");
    /**************************************/
    Locate(125,13);
    if (curs==27) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,14);
    printf("              27                   \n");
    Locate(125,15);
    printf("                                   \n");
    /**********************************/
    Locate(125,17);
    if (curs==28) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,18);
    printf("              28                   \n");
    Locate(125,19);
    printf("                                   \n");
    /***********************************/
    Locate(125,21);
    if (curs==29) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,22);
    printf("              29                   \n");
    Locate(125,23);
    printf("                                   \n");
    /***********************************/
    Locate(125,35);
}
void Afficher_jour_28(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("        choisissez Le Jour                 \n");
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                   \n");
    Locate(5,6);
    printf("               01                  \n");
    Locate(5,7);
    printf("                                   \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,10);
    printf("               02                  \n");
    Locate(5,11);
    printf("                                   \n");
    /**************************************/
    Locate(5,13);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,14);
    printf("               03                  \n");
    Locate(5,15);
    printf("                                   \n");
    /**********************************/
    Locate(5,17);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,18);
    printf("               04                  \n");
    Locate(5,19);
    printf("                                   \n");
    /***********************************/
    Locate(5,21);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,22);
    printf("               05                  \n");
    Locate(5,23);
    printf("                                   \n");
    /***********************************/
    Locate(5,25);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,26);
    printf("               06                  \n");
    Locate(5,27);
    printf("                                   \n");
    Locate(5,29);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,30);
    printf("               07                  \n");
    Locate(5,31);
    printf("                                   \n");
    /**************************************/
    Locate(5,33);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,34);
    printf("               08                  \n");
    Locate(5,35);
    printf("                                   \n");
    /**********************************/
    if (curs==9)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(45,5);
    printf("                                   \n");
    Locate(45,6);
    printf("              09                   \n");
    Locate(45,7);
    printf("                                   \n");
    /**************************************/
    Locate(45,9);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,10);
    printf("              10                   \n");
    Locate(45,11);
    printf("                                   \n");
    /**************************************/
    Locate(45,13);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,14);
    printf("              11                   \n");
    Locate(45,15);
    printf("                                   \n");
    /**********************************/
    Locate(45,17);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,18);
    printf("              12                   \n");
    Locate(45,19);
    printf("                                   \n");
    /***********************************/
    Locate(45,21);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,22);
    printf("              13                   \n");
    Locate(45,23);
    printf("                                   \n");
    /***********************************/
    Locate(45,25);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,26);
    printf("              14                   \n");
    Locate(45,27);
    printf("                                   \n");
    Locate(45,29);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,30);
    printf("              15                   \n");
    Locate(45,31);
    printf("                                   \n");
    /**************************************/
    Locate(45,33);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,34);
    printf("              16                   \n");
    Locate(45,35);
    printf("                                   \n");
    /**********************************/

    /***********************************/
    if (curs==17)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(85,5);
    printf("                                   \n");
    Locate(85,6);
    printf("              17                   \n");
    Locate(85,7);
    printf("                                   \n");
    /**************************************/
    Locate(85,9);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,10);
    printf("              18                   \n");
    Locate(85,11);
    printf("                                   \n");
    /**************************************/
    Locate(85,13);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,14);
    printf("              19                   \n");
    Locate(85,15);
    printf("                                   \n");
    /**********************************/
    Locate(85,17);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,18);
    printf("              20                   \n");
    Locate(85,19);
    printf("                                   \n");
    /***********************************/
    Locate(85,21);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,22);
    printf("              21                   \n");
    Locate(85,23);
    printf("                                   \n");
    /***********************************/
    Locate(85,25);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,26);
    printf("              22                   \n");
    Locate(85,27);
    printf("                                   \n");
    Locate(85,29);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,30);
    printf("              23                   \n");
    Locate(85,31);
    printf("                                   \n");
    /**************************************/
    Locate(85,33);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,34);
    printf("              24                   \n");
    Locate(85,35);
    printf("                                   \n");
    /**********************************/
    if (curs==25)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(125,5);
    printf("                                   \n");
    Locate(125,6);
    printf("              25                   \n");
    Locate(125,7);
    printf("                                   \n");
    /**************************************/
    Locate(125,9);
    if (curs==26) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,10);
    printf("              26                   \n");
    Locate(125,11);
    printf("                                   \n");
    /**************************************/
    Locate(125,13);
    if (curs==27) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,14);
    printf("              27                   \n");
    Locate(125,15);
    printf("                                   \n");
    /**********************************/
    Locate(125,17);
    if (curs==28) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,18);
    printf("              28                   \n");
    Locate(125,19);
    printf("                                   \n");
    /***********************************/
    Locate(125,35);
}
void Afficher_anne_recret(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("    choisissez L'ann%ce De Recrutement      \n",130);
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                   \n");
    Locate(5,6);
    printf("               1979                \n");
    Locate(5,7);
    printf("                                   \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,10);
    printf("               1980                \n");
    Locate(5,11);
    printf("                                   \n");
    /**************************************/
    Locate(5,13);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,14);
    printf("               1981                \n");
    Locate(5,15);
    printf("                                   \n");
    /**********************************/
    Locate(5,17);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,18);
    printf("               1982                \n");
    Locate(5,19);
    printf("                                   \n");
    /***********************************/
    Locate(5,21);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,22);
    printf("               1983                \n");
    Locate(5,23);
    printf("                                   \n");
    /***********************************/
    Locate(5,25);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,26);
    printf("              1984                 \n");
    Locate(5,27);
    printf("                                   \n");
    Locate(5,29);
    if (curs==7) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,30);
    printf("              1985                 \n");
    Locate(5,31);
    printf("                                   \n");
    /**************************************/
    Locate(5,33);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,34);
    printf("              1986                 \n");
    Locate(5,35);
    printf("                                   \n");
    /**********************************/
    Locate(5,37);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,38);
    printf("              1987                 \n");
    Locate(5,39);
    printf("                                   \n");
    /***********************************/
    Locate(5,41);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,42);
    printf("              1988                 \n");
    Locate(5,43);
    printf("                                   \n");
    /***********************************/
    if (curs==11)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(45,5);
    printf("                                   \n");
    Locate(45,6);
    printf("             1989                  \n");
    Locate(45,7);
    printf("                                   \n");
    /**************************************/
    Locate(45,9);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,10);
    printf("             1990                  \n");
    Locate(45,11);
    printf("                                   \n");
    /**************************************/
    Locate(45,13);
    if (curs==13) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,14);
    printf("             1991                  \n");
    Locate(45,15);
    printf("                                   \n");
    /**********************************/
    Locate(45,17);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,18);
    printf("              1992                 \n");
    Locate(45,19);
    printf("                                   \n");
    /***********************************/
    Locate(45,21);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,22);
    printf("              1993                 \n");
    Locate(45,23);
    printf("                                   \n");
    /***********************************/
    Locate(45,25);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,26);
    printf("              1994                 \n");
    Locate(45,27);
    printf("                                   \n");
    Locate(45,29);
    if (curs==17) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,30);
    printf("              1995                 \n");
    Locate(45,31);
    printf("                                   \n");
    /**************************************/
    Locate(45,33);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,34);
    printf("              1996                 \n");
    Locate(45,35);
    printf("                                   \n");
    /**********************************/
    Locate(45,37);
    if (curs==19) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,38);
    printf("              1997                 \n");
    Locate(45,39);
    printf("                                   \n");
    /***********************************/
    Locate(45,41);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,42);
    printf("              1998                 \n");
    Locate(45,43);
    printf("                                   \n");
    /***********************************/
    if (curs==21)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(85,5);
    printf("                                   \n");
    Locate(85,6);
    printf("              1999                 \n");
    Locate(85,7);
    printf("                                   \n");
    /**************************************/
    Locate(85,9);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,10);
    printf("              2000                 \n");
    Locate(85,11);
    printf("                                   \n");
    /**************************************/
    Locate(85,13);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,14);
    printf("              2001                 \n");
    Locate(85,15);
    printf("                                   \n");
    /**********************************/
    Locate(85,17);
    if (curs==24) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,18);
    printf("              2002                 \n");
    Locate(85,19);
    printf("                                   \n");
    /***********************************/
    Locate(85,21);
    if (curs==25) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,22);
    printf("              2003                 \n");
    Locate(85,23);
    printf("                                   \n");
    /***********************************/
    Locate(85,25);
    if (curs==26) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,26);
    printf("              2004                 \n");
    Locate(85,27);
    printf("                                   \n");
    Locate(85,29);
    if (curs==27) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,30);
    printf("              2005                 \n");
    Locate(85,31);
    printf("                                   \n");
    /**************************************/
    Locate(85,33);
    if (curs==28) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,34);
    printf("              2006                 \n");
    Locate(85,35);
    printf("                                   \n");
    /**********************************/
    Locate(85,37);
    if (curs==29) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,38);
    printf("              2007                 \n");
    Locate(85,39);
    printf("                                   \n");
    /***********************************/
    Locate(85,41);
    if (curs==30) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,42);
    printf("              2008                 \n");
    Locate(85,43);
    printf("                                   \n");
    /***********************************/
    if (curs==31)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(125,5);
    printf("                                   \n");
    Locate(125,6);
    printf("              2009                 \n");
    Locate(125,7);
    printf("                                   \n");
    /**************************************/
    Locate(125,9);
    if (curs==32) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,10);
    printf("              2010                 \n");
    Locate(125,11);
    printf("                                   \n");
    /**************************************/
    Locate(125,13);
    if (curs==33) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,14);
    printf("              2011                 \n");
    Locate(125,15);
    printf("                                   \n");
    /**********************************/
    Locate(125,17);
    if (curs==34) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,18);
    printf("              2012                 \n");
    Locate(125,19);
    printf("                                   \n");
    /***********************************/
    Locate(125,21);
    if (curs==35) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,22);
    printf("              2013                 \n");
    Locate(125,23);
    printf("                                   \n");
    /***********************************/
    Locate(125,25);
    if (curs==36) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,26);
    printf("              2014                 \n");
    Locate(125,27);
    printf("                                   \n");
    Locate(125,29);
    if (curs==37) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,30);
    printf("              2015                 \n");
    Locate(125,31);
    printf("                                   \n");
    /**************************************/
    Locate(125,33);
    if (curs==38) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,34);
    printf("              2016                 \n");
    Locate(125,35);
    printf("                                   \n");
    /**********************************/
    Locate(125,37);
    if (curs==39) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,38);
    printf("              2017                 \n");
    Locate(125,39);
    printf("                                   \n");
    /***********************************/
    Locate(125,41);
    if (curs==40) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,42);
    printf("              2018                 \n");
    Locate(125,43);
    printf("                                   \n");
    /***********************************/
}
void Afficher_specialite(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("       choisissez votre specialite         \n");
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                   \n");
    Locate(5,6);
    printf("               Droit               \n");
    Locate(5,7);
    printf("                                   \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,10);
    printf("       Sciences politiques         \n");
    Locate(5,11);
    printf("                                   \n");
    /**************************************/
    Locate(5,13);
    if (curs==3) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,14);
    printf("             Anglais               \n");
    Locate(5,15);
    printf("                                   \n");
    /**********************************/
    Locate(5,17);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,18);
    printf("            Francais               \n");
    Locate(5,19);
    printf("                                   \n");
    /***********************************/
    Locate(5,21);
    if (curs==5) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,22);
    printf("   Langue et Litterature arabe     \n");
    Locate(5,23);
    printf("                                   \n");
    /***********************************/
    Locate(5,25);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,26);
    printf("           Informatique            \n");
    Locate(5,27);
    printf("                                   \n");
    Locate(5,29);
    if (curs==7)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(45,5);
    printf("                                   \n");
    Locate(45,6);
    printf("          Mathematiques            \n");
    Locate(45,7);
    printf("                                   \n");
    /**************************************/
    Locate(45,9);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,10);
    printf("                Chimie             \n");
    Locate(45,11);
    printf("                                   \n");
    /**************************************/
    Locate(45,13);
    if (curs==9) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,14);
    printf("           Physique                \n");
    Locate(45,15);
    printf("                                   \n");
    /**********************************/
    Locate(45,17);
    if (curs==10) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,18);
    printf("        Sciences Biologie          \n");
    Locate(45,19);
    printf("                                   \n");
    /***********************************/
    Locate(45,21);
    if (curs==11) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,22);
    printf("          Biologie vegetale        \n");
    Locate(45,23);
    printf("                                   \n");
    /***********************************/
    Locate(45,25);
    if (curs==12) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,26);
    printf("        Sciences commerciales      \n");
    Locate(45,27);
    printf("                                   \n");
    Locate(45,29);
    if (curs==13)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(85,5);
    printf("                                   \n");
    Locate(85,6);
    printf("        Sciences de gestion        \n");
    Locate(85,7);
    printf("                                   \n");
    /**************************************/
    Locate(85,9);
    if (curs==14) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,10);
    printf("         Sciences %cconomiques      \n",130);
    Locate(85,11);
    printf("                                   \n");
    /**************************************/
    Locate(85,13);
    if (curs==15) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,14);
    printf("          %clectronique             \n",130);
    Locate(85,15);
    printf("                                   \n");
    /**********************************/
    Locate(85,17);
    if (curs==16) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,18);
    printf("           %clectrotechnique        \n",130);
    Locate(85,19);
    printf("                                   \n");
    /***********************************/
    Locate(85,21);
    if (curs==17) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,22);
    printf("      G%cnie des proc%cd%cs           \n",130,130,130);
    Locate(85,23);
    printf("                                   \n");
    /***********************************/
    Locate(85,25);
    if (curs==18) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,26);
    printf("             G%cnie M%ccanique       \n",130,130);
    Locate(85,27);
    printf("                                   \n");
    Locate(85,29);
    if (curs==19)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(125,5);
    printf("                                   \n");
    Locate(125,6);
    printf("             Hydraulique           \n");
    Locate(125,7);
    printf("                                   \n");
    /**************************************/
    Locate(125,9);
    if (curs==20) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,10);
    printf("              M%cdcine              \n",130);
    Locate(125,11);
    printf("                                   \n");
    /**************************************/
    Locate(125,13);
    if (curs==21) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,14);
    printf("          SCiences Humaine         \n");
    Locate(125,15);
    printf("                                   \n");
    /**********************************/
    Locate(125,17);
    if (curs==22) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,18);
    printf("          Sciences Sociales        \n");
    Locate(125,19);
    printf("                                   \n");

    /***********************************/
    Locate(125,21);
    if (curs==23) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,22);
    printf("             Sociologie            \n");
    Locate(125,23);
    printf("                                   \n");
    Locate(125,30);
    /***********************************/
}
void Afficher_groupe_sanguin(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("       choisissez Le Groupe Sanguin        \n");
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                   \n");
    Locate(5,6);
    printf("               (O+)                \n");
    Locate(5,7);
    printf("                                   \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(5,10);
    printf("               (A+)                \n");
    Locate(5,11);
    printf("                                   \n");
    /**************************************/

    if (curs==3)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(45,5);
    printf("                                   \n");
    Locate(45,6);
    printf("                  (B+)             \n");
    Locate(45,7);
    printf("                                   \n");
    /**************************************/
    Locate(45,9);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(45,10);
    printf("                  (O-)             \n");
    Locate(45,11);
    printf("                                   \n");
    /**************************************/
    if (curs==5)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(85,5);
    printf("                                   \n");
    Locate(85,6);
    printf("                (A-)               \n");
    Locate(85,7);
    printf("                                   \n");
    /**************************************/
    Locate(85,9);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(85,10);
    printf("                  (AB+)            \n");
    Locate(85,11);
    printf("                                   \n");
    /**************************************/
    if (curs==7)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(125,5);
    printf("                                   \n");
    Locate(125,6);
    printf("                 (B-)              \n");
    Locate(125,7);
    printf("                                   \n");
    /**************************************/
    Locate(125,9);
    if (curs==8) Color(0,3);else Color(0,7);
    printf("                                   \n");
    Locate(125,10);
    printf("                 (AB-)             \n");
    Locate(125,11);
    printf("                                   \n");
    /**************************************/
}
void Afficher_Grade(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("          choisissez Le Grade              \n");
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                           \n");
    Locate(5,6);
    printf("                Prof%csseur                 \n",130);
    Locate(5,7);
    printf("                                           \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                           \n");
    Locate(5,10);
    printf("        Maitre de conf%crences Rang A       \n",130);
    Locate(5,11);
    printf("                                           \n");
    /**************************************/

    if (curs==3)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(62,5);
    printf("                                           \n");
    Locate(62,6);
    printf("          Maitre de conf%crences Rang B     \n",130);
    Locate(62,7);
    printf("                                           \n");
    /**************************************/
    Locate(62,9);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                           \n");
    Locate(62,10);
    printf("           Maitre assistant RangA          \n");
    Locate(62,11);
    printf("                                           \n");
    /**************************************/
    if (curs==5)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(120,5);
    printf("                                           \n");
    Locate(120,6);
    printf("            Maitre assistant(e) Rang B     \n");
    Locate(120,7);
    printf("                                           \n");
    /**************************************/
    Locate(120,9);
    if (curs==6) Color(0,3);else Color(0,7);
    printf("                                           \n");
    Locate(120,10);
    printf("                  Assistant                \n");
    Locate(120,11);
    printf("                                           \n");
    /**************************************/
}
void Afficher_Region(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("          choisissez La Region             \n");
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                           \n");
    Locate(5,6);
    printf("                Centre                     \n");
    Locate(5,7);
    printf("                                           \n");
    /**************************************/
    if (curs==2)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(62,5);
    printf("                                           \n");
    Locate(62,6);
    printf("                 Est                       \n");
    Locate(62,7);
    printf("                                           \n");
    /**************************************/
    if (curs==3)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(120,5);
    printf("                                           \n");
    Locate(120,6);
    printf("                   Ouest                   \n");
    Locate(120,7);
    printf("                                           \n");
    /**************************************/
    Locate(120,7);
}
void Afficher_Sexe(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("          choisissez Le Sexe               \n");
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(25,5);
    printf("                                           \n");
    Locate(25,6);
    printf("                Masculin                   \n");
    Locate(25,7);
    printf("                                           \n");
    /**************************************/
    if (curs==2)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(85,5);
    printf("                                           \n");
    Locate(85,6);
    printf("                 F%cminin                   \n",130);
    Locate(85,7);
    printf("                                           \n");
    /**************************************/
}
void Afficher_Diplome(int curs)
{
    Locate(60,1);
    Color(0,15);
    printf("                                           \n");
    Locate(60,2);
    Color(0,15);
    printf("          choisissez Le Diplome            \n");
    Locate(60,3);
    Color(0,15);
    printf("                                           \n");
    if (curs==1)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(5,5);
    printf("                                           \n");
    Locate(5,6);
    printf("                doctorat d'%ctat            \n",130);
    Locate(5,7);
    printf("                                           \n");
    /**************************************/
    Locate(5,9);
    if (curs==2) Color(0,3);else Color(0,7);
    printf("                                           \n");
    Locate(5,10);
    printf("               doctorat en sciences        \n");
    Locate(5,11);
    printf("                                           \n");
    /**************************************/

    if (curs==3)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(62,5);
    printf("                                           \n");
    Locate(62,6);
    printf("                       phD                 \n");
    Locate(62,7);
    printf("                                           \n");
    /**************************************/
    Locate(62,9);
    if (curs==4) Color(0,3);else Color(0,7);
    printf("                                           \n");
    Locate(62,10);
    printf("                      HDR                  \n");
    Locate(62,11);
    printf("                                           \n");
    /**************************************/
    if (curs==5)
    {
        Color(0,3);
    }
    else
    {
        Color(0,7);
    }
    Locate(120,5);
    printf("                                           \n");
    Locate(120,6);
    printf("                  Magistere                \n");
    Locate(120,7);
    printf("                                           \n");
    /**************************************/
    Locate(50,15);
}
int Choisir(){
    int curs = 1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+6)%12;if(curs<=0) curs+=12;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==13) curs=0;
                       if (curs==6 || curs==12   ) curs=curs-6;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==6) curs=12;
                        if (curs==0 ) curs=6;
                        break;
                case 0x4B:curs=(curs-6)%12;if(curs<=0) curs+=12;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
            if (touche==0x1B)curs=13;/**LE CODE ASCCI DE ECHAP SOUS WINDOWS 1B h**/

    }
    return curs;
}
int Choisir_nbens(){
    int curs = 1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_nbens(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+6)%12;if(curs<=0) curs+=12;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==13) curs=0;
                       if (curs==6 || curs==12   ) curs=curs-6;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==6) curs=12;
                        if (curs==0 ) curs=6;
                        break;
                case 0x4B:curs=(curs-6)%12;if(curs<=0) curs+=12;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_page2(){
    int curs = 1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_page2(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+12)%24;if(curs<=0) curs+=24;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==25) curs=0;
                       if (curs==12 || curs==24   ) curs=curs-12;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==12) curs=24;
                        if (curs==0 ) curs=12;
                        break;
                case 0x4B:curs=(curs-12)%24;if(curs<=0) curs+=24;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_page3(){
    int curs = 1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_page3(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+12)%24;if(curs<=0) curs+=24;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==25) curs=0;
                       if (curs==12 || curs==24   ) curs=curs-12;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==12) curs=24;
                        if (curs==0 ) curs=12;
                        break;
                case 0x4B:curs=(curs-12)%24;if(curs<=0) curs+=24;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_page4(){
    int curs = 1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_page4(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+12)%24;if(curs<=0) curs+=24;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==25) curs=0;
                       if (curs==12 || curs==24   ) curs=curs-12;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==12) curs=24;
                        if (curs==0 ) curs=12;
                        break;
                case 0x4B:curs=(curs-12)%24;if(curs<=0) curs+=24;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_page1(){
    int curs = 1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_page1(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+12)%24;if(curs<=0) curs+=24;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==25) curs=0;
                       if (curs==12 || curs==24   ) curs=curs-12;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==12) curs=24;
                        if (curs==0 ) curs=12;
                        break;
                case 0x4B:curs=(curs-12)%24;if(curs<=0) curs+=24;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_page5(){
    int curs = 1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_page5(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+11)%21;if(curs<=0) curs+=21;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==22) curs=0;
                       if (curs==11 ) curs=curs-11;
                       if (curs==21) curs=curs-10;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==11) curs=21;
                        if (curs==0 ) curs=11;
                        break;
                case 0x4B:curs=(curs-11)%21;if(curs<=0) curs+=21;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int choisir_final()
{
    int curs1=1,fine=0,curs_page=1,i;
    while(fine==0)
    {
    system("cls");
    system("color 82");
     curs1=affiche_page(curs_page);
     switch(curs_page)
     {
     case 1:
        {
            if(curs1==24)
            {
                curs_page++;
            }
            if(curs1!=24)
            {
                fine=1;
            }
            break;
        }
     case 2:
        {
            if(curs1==24)
            {
                curs_page++;
            }
            else if(curs1==12)
            {
                curs_page--;
            }
            else
            {
                fine=1;
            }
            break;
        }
        case 3:
        {
            if(curs1==24)
            {
                curs_page++;
            }
            else if(curs1==12)
            {
                curs_page--;
            }
            else
            {
                fine=1;
            }
            break;
        }
        case 4:
        {
            if(curs1==24)
            {
                curs_page++;
            }
            else if(curs1==12)
            {
                curs_page--;
            }
            else
            {
                fine=1;
            }
            break;
        }
        case 5:
        {
            if(curs1==21)
            {
                curs_page--;
            }
            else
            {
                fine=1;
            }
            break;
        }
     }

    }
int etab=0;
for(i=1;i<=curs_page;i++)
{
    switch(i)
    {
     case 1:etab=etab;break;
     case 2:etab=etab+23;break;
     case 3:etab=etab+21;break;
     case 4:etab=etab+21;break;
     case 5:etab=etab+21;break;
    }
}
    if((curs1>=13)&&((curs_page==2)||(curs_page==3)||(curs_page==4)))
    {
        curs1--;
    }

etab=etab+curs1;
return etab;
}
int affiche_page(int page)
{
    switch(page)
    {
        case 1:return Choisir_page1();
        case 2:return Choisir_page2();
        case 3:return Choisir_page3();
        case 4:return Choisir_page4();
        case 5:return Choisir_page5();
    }
    return 1;
}
int Choisir_mois(){
    int curs = 1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_mois(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+6)%12;if(curs<=0) curs+=12;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==13) curs=0;
                       if (curs==6 || curs==12   ) curs=curs-6;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==6) curs=12;
                        if (curs==0 ) curs=6;
                        break;
                case 0x4B:curs=(curs-6)%12;if(curs<=0) curs+=12;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_wilaya()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_wilaya(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+12)%48;if(curs<=0) curs+=48;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==49) curs=0;
                       if (curs==12 || curs==24 || curs==36 || curs == 48   ) curs=curs-12;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==12) curs=24;
                        if (curs==24) curs=36;
                        if (curs==36) curs=48;
                        if (curs==0 ) curs=12;
                        break;
                case 0x4B:curs=(curs-12)%48;if(curs<=0) curs+=48;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_anne_naiss()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_anne_naiss(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+10)%40;if(curs<=0) curs+=40;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==49) curs=0;
                       if (curs==10 || curs==20 || curs==30 || curs == 40   ) curs=curs-10;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==10) curs=20;
                        if (curs==20) curs=30;
                        if (curs==30) curs=40;
                        if (curs==0 ) curs=40;
                        break;
                case 0x4B:curs=(curs-10)%40;if(curs<=0) curs+=40;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_jour_31()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_jour_31(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+8)%31;if(curs<=0) curs+=31;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==32) curs=0;
                       if (curs==8 || curs==16 || curs==24 ) curs=curs-8;
                       if(curs==31) curs=curs-7;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==8) curs=16;
                        if (curs==16) curs=24;
                        if (curs==24) curs=31;
                        if (curs==0 ) curs=31;
                        break;
                case 0x4B:curs=(curs-8)%31;if(curs<=0) curs+=31;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_jour_30()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_jour_30(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+8)%30;if(curs<=0) curs+=30;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==32) curs=0;
                       if (curs==8 || curs==16 || curs==24 ) curs=curs-8;
                       if(curs==30) curs=curs-7;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==8) curs=16;
                        if (curs==16) curs=24;
                        if (curs==24) curs=30;
                        if (curs==0 ) curs=30;
                        break;
                case 0x4B:curs=(curs-8)%30;if(curs<=0) curs+=30;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_jour_29()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_jour_29(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+8)%29;if(curs<=0) curs+=29;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==32) curs=0;
                       if (curs==8 || curs==16 || curs==24 ) curs=curs-8;
                       if(curs==29) curs=curs-7;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==8) curs=16;
                        if (curs==16) curs=24;
                        if (curs==24) curs=29;
                        if (curs==0 ) curs=29;
                        break;
                case 0x4B:curs=(curs-8)%29;if(curs<=0) curs+=29;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_jour_28()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_jour_28(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+8)%28;if(curs<=0) curs+=28;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==32) curs=0;
                       if (curs==8 || curs==16 || curs==24 ) curs=curs-8;
                       if(curs==28) curs=curs-7;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==8) curs=16;
                        if (curs==16) curs=24;
                        if (curs==24) curs=28;
                        if (curs==0 ) curs=28;
                        break;
                case 0x4B:curs=(curs-8)%28;if(curs<=0) curs+=28;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_anne_recret()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_anne_recret(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+10)%40;if(curs<=0) curs+=40;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==49) curs=0;
                       if (curs==10 || curs==20 || curs==30 || curs == 40   ) curs=curs-10;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==10) curs=20;
                        if (curs==20) curs=30;
                        if (curs==30) curs=40;
                        if (curs==0 ) curs=40;
                        break;
                case 0x4B:curs=(curs-10)%40;if(curs<=0) curs+=40;;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_spec()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_specialite(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+6)%23;if(curs<=0) curs+=23;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==24) curs=0;
                       if (curs==6 || curs==12 || curs==18 ) curs=curs-6;
                        if (curs==23) curs=curs-5;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==0 ) curs=23;
                        break;
                case 0x4B:curs=(curs-6)%23;if(curs<=0) curs+=23;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_grps()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_groupe_sanguin(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+2)%8;if(curs<=0) curs+=8;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==9) curs=0;
                       if (curs==2 || curs==4 || curs==6 || curs==8 ) curs=curs-2;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==0 ) curs=8;
                        break;
                case 0x4B:curs=(curs-2)%8;if(curs<=0) curs+=8;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_Grade()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_Grade(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+2)%6;if(curs<=0) curs+=6;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==7) curs=0;
                       if (curs==2 || curs==4 || curs==6 ) curs=curs-2;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==0 ) curs=6;
                        break;
                case 0x4B:curs=(curs-2)%6;if(curs<=0) curs+=6;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_Diplome()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_Diplome(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+2)%5;if(curs<=0) curs+=5;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       if (curs==6) curs=0;
                       if (curs==2 || curs==4 ) curs=curs-2;
                       if (curs==5) curs= 4;
                       curs++;
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        if (curs==0 ) curs=5;
                        break;
                case 0x4B:curs=(curs-2)%5;if(curs<=0) curs+=5;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
int Choisir_Region()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_Region(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+1)%3;if(curs<=0) curs+=3;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        curs++;
                        break;
                case 0x4B:curs=(curs-1)%3;if(curs<=0) curs+=3;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
void cadre(int x,int y,int coul_f){
    /**Designier un cadre**/
    Color(0,coul_f);
  for (int i=2;i<=x+1;i++){
    Locate(y,i);
    printf("                                                                                     ");
  }
}
int Choisir_Sexe()
{
    int curs;
    curs=1;
    int touche;
    while (touche!=0x0D){/**ENTRER**/
        Afficher_Sexe(curs);
        touche = _getch();
       if (touche==0xE0 ) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
            switch(touche){
                case 0x4D: curs=(curs+1)%2;if(curs<=0) curs+=2;break;
                /**LE CODE ASCCI DE LA FLECHE DROITE SOUS WINDOWS 4B h**/
                case 0x50:
                /**LE CODE ASCCI DE LA FLECHE BAS SOUS WINDOWS 50 h**/
                       break;
                case 0x48:curs--;
                /**LE CODE ASCCI DE LA FLECHE UP SOUS WINDOWS 48 h**/
                        curs++;
                        break;
                case 0x4B:curs=(curs-1)%2;if(curs<=0) curs+=2;break;
                /**LE CODE ASCCI DE LA FLECHE GAUCHE SOUS WINDOWS 4B h**/
            }
        }
    }
    return curs;
}
void Afficher_oui_non(int curs,int v,int w){
    /**AFFICHAGE DE OUI ET NON DANS LES POSITIONS V,W**/
    Locate(v,w);
    printf("%c NON \n",(curs==0)?'>':' ');
    Locate(v,w+2);
    printf("%c OUI \n",(curs==1)?'>':' ');
}

int Choisir_oui_non(int X,int Y){
    /**Choisir entre oui et non**/
    int curs = 0;
    int touche;
    do{  // enter
        Afficher_oui_non(curs,X,Y);
        touche = _getch();
        if (touche==0xE0) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
                if (touche==0x50 && curs==0)curs = 1; /**FLECHE BAS**/
                else if (touche==0x48&& curs==1)curs =0;
        }
     }   while (touche!=0x0D);  /**ENTRER**/
    return curs;
}

void Afficher_id(int curs,int v,int w){
    Locate(v,w);
    printf("%c Individuelle \n",(curs==0)?'>':' ');
    Locate(v,w+2);
    printf("%c double \n",(curs==1)?'>':' ');
}

int Choisir_id(int X,int Y){
    /**Choisir entre individuelle et double**/
    int curs = 0;
    int touche;
    do{  // enter
        Afficher_id(curs,X,Y);
        touche = _getch();
        if (touche==0xE0) /** FLECHE : LE FLECHE RENVOIE DEUX CARACTERES**/
        {
            touche = _getch();
                if (touche==0x50 && curs==0)curs = 1;/**FLECHE BAS**/
                else if (touche==0x48&& curs==1)curs =0;
        }
     }   while (touche!=0x0D);  /**ENTRER**/
    return curs;
}






















