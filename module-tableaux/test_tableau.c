/*
    Enonce :

    L'objectif de cet exercice est de creer un module separe contenant les
    operations sur un tableau d'entiers: initialisation, affichage et tri.

    Le module est compose de deux fichiers tableau.h et tableau.c. Le fichier
    tableau.h ne contient que les declarations (signatures) des procedures et
    fonctions du module.  Le fichier tableau.c fournit lui les definitions des
    procedures exportees.

    Enfin, le fichier test_tableau.c contient le programme principal qui doit
    creer un tableau et initaliser ses valeurs, l'afficher, le trier, puis le
    reafficher. Il ne contient donc que la fonction main qui utilise les
    operations du module tableau.

    Voila un resume des taches que vous devez effectuer:

        1) implementer dans tableau.c les fonctionnalites du module
        tableau, decrites dans tableau.h ;

        2) implementer un programme de test dans test_tableau.c qui utilise
        votre module tableau pour creer un tableau, initialiser ses
        valeurs, l'afficher, le trier puis le reafficher.

    Competences : 17,32,54,56,70,71,72,73,74,81,82,84,102
    Difficulte : 2
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "tableau.h"

int main(void)
{
  char tampon[11], c;
  printf("Taille du tableau?: ");
  uint32_t taille = atoi(fgets(tampon, 11, stdin));
  int32_t tableau[taille]; // ATTENTION
  printf("Initialisation du tableau -- interactive [y/n]?: ");
  scanf("%c", &c);
  if(c == 'y')
    init_interactive(tableau, taille);
  else
    srand(time(NULL));
    init_aleatoire(tableau, taille);
  affiche(tableau, taille);
  tri_insertion(tableau, taille);
  affiche(tableau, taille);
    return EXIT_SUCCESS;
}
