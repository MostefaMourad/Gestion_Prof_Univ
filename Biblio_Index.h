#ifndef LLC_H
#define LLC_H
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <wchar.h>
#include "Biblio_Index.h"
/*************************
DECLARATION DES STRUCTURES
**************************/
/*****************************************************
******************************************************/
void Locate(SHORT x,SHORT y);
void Afficher(int curs);
int Choisir();
void Afficher_oui_non(int curs,int v,int w);
int Choisir_oui_non(int X,int Y);
void Afficher_id(int curs,int v,int w);
int Choisir_id(int X,int Y);
void Color(long couleurDuTexte,long couleurDeFond);
void cadre(int x,int y,int coul_f);
void Ecran(int Mode);
void Afficher_nbens(int curs);
int Choisir_nbens();
void Afficher_wilaya(int curs);
int Choisir_wilaya();
void Afficher_specialite(int curs);
int Choisir_spec();
void Afficher_groupe_sanguin(int curs);
int Choisir_grps();
void Afficher_Grade(int curs);
int Choisir_Grade();
void Afficher_Diplome(int curs);
int Choisir_Diplome();
void Afficher_Region(int curs);
int Choisir_Region();
void Afficher_anne_naiss(int curs);
int Choisir_anne_naiss();
void Afficher_anne_recret(int curs);
int Choisir_anne_recret();
void Afficher_mois(int curs);
int Choisir_mois();
void Afficher_jour_31(int curs);
int Choisir_jour_31();
void Afficher_jour_30(int curs);
int Choisir_jour_30();
void Afficher_jour_29(int curs);
int Choisir_jour_29();
void Afficher_jour_28(int curs);
int Choisir_jour_28();
void Afficher_page1(int curs);
void Afficher_page2(int curs);
void Afficher_page3(int curs);
void Afficher_page4(int curs);
void Afficher_page5(int curs);
int Choisir_page2();
int Choisir_page3();
int Choisir_page4();
int Choisir_page1();
int affiche_page(int page);
int choisir_final();
void Afficher_Sexe(int curs);
int Choisir_Sexe();


#endif
