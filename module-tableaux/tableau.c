/* L'enonce de l'exercice se trouve dans le fichier test_tableau.c.  */
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "tableau.h"

void affiche(int32_t tab[], uint32_t taille)
{
    /* A implementer! */
  printf("Contenu du tableau: ");
  uint32_t i=0;
  for(i=0;i<taille;i++){
    printf("%i ",tab[i]);
  }
  printf("\n");
}

void init_interactive(int32_t tab[], uint32_t taille)
{
  uint32_t n, i=0;
  printf("Entrez les %i entiers que vous voulez mettre dans le tableau:\n", taille);
  while(i<taille){
    scanf("%i", &n);
    tab[i]=n;
    i++;
  }
  printf("Merci!\n");
}

void init_aleatoire(int32_t tab[], uint32_t taille)
{
  for(uint32_t i=0; i<taille; i++){
    tab[i] = rand()%20;
  }
}

// ATTENTION
void tri_insertion(int32_t tab[], uint32_t taille)
{
  int32_t tmp, j;
  // tab de 1 elt est déjà triée
  //on commence a partir du deuxieme elt
  for(uint32_t i=1; i<taille; i++){
    // on sauvg la val de l'elt à inserer
    tmp = tab[i];
    // on decale les elt triés à droite pour placer la val à inserer
    j = i;
    while (j>0 && tab[j-1]>tmp){
	tab[j] = tab[j-1];
	j--;
    }
    tab[j] = tmp;
  }
}
