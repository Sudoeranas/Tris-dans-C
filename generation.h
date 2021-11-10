/**********************************************************************************************************/
/* Auteur : Armand TOGUYENI                                                                               */
/* Application : generation.h                                                                             */
/* Date : 15/11/2020                                                                                       */
/* Version : 1.1                                                                                          */ 
/* Correction : Les tableaux generes commencent en 1 afin de laisser la case 0 pour la sentinelle          */
/**********************************************************************************************************/

//Declaration des bibliotheques utilisees
#ifndef _GENERATION_H
#define  _GENERATION_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>


//Definition des constantes de l'application
#define     MAXCOMP     100000   // Nombre maximal de composants
#define     MAXAFF      100      // Nombre maximal de composants pour l'affichage
#define     MAXL        16      // Nombre maximal de composant par ligne pour l'affichage
#define     MOYENNE     1000


/*******************************************************************************/
/* NOM function : genealea	                                               */
/* Description: genere de maniere aleatoire un tableau de reel de n composantes*/
/* Parametres en entree :Tab tableau a trier, n la taille du tableau           */
/* Parametres en sorties:Tab le tableau trie                                   */
/* Retourne :                                                                  */
/*******************************************************************************/
void genealea(double Tab[], int n)
{
 int i; //Compteur de boucle
 //Initialisation du pseudo_generateur de nombre aleatoire
 srand((unsigned int)time(NULL));  //On initialise avec la fonction de temps  
 if (n<=MAXCOMP) for(i=1; i<=n; i++) Tab[i]=MOYENNE*(rand()/(double)RAND_MAX);
 else
     printf("Generation impossible car taille du tableau plus grande que la taille maximale %d !!! \n", MAXCOMP);
} //Accolade de fin de genalea

/********************************************************************************/
/* NOM function : geneord	                                                */
/* Description: genere de maniere croissante un tableau de reel de n composantes*/
/* Parametres en entree :Tab tableau a trier, n la taille du tableau            */
/* Parametres en sorties:Tab le tableau trie                                    */
/* Retourne :                                                                   */
/********************************************************************************/
void geneord(double Tab[], int n)
{
 int i;
  if (n<=MAXCOMP) for (i=1; i<=n; i++) Tab[i]=(double)i ;
  else
     printf("Generation impossible car taille du tableau plus grande que la taille maximale %d !!! \n", MAXCOMP);
}

/**********************************************************************************/
/* NOM function : geneord	                                                  */
/* Description: genere de maniere decroissante un tableau de reel de n composantes*/
/* Parametres en entree :Tab tableau a trier, n la taille du tableau              */
/* Parametres en sorties:Tab le tableau trie                                      */
/* Retourne :                                                                     */
/**********************************************************************************/
void genereve(double Tab[], int n)
{
 int i;
 if (n<=MAXCOMP) for (i=n; i>=1; i--) Tab[n+1-i]=(double)i;
 else
     printf("Generation impossible car taille du tableau plus grande que la taille maximale %d !!! \n", MAXCOMP);
}


#endif