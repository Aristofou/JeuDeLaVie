/* Affichage à l'écran des cellules vivantes */
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_SOUS_MATRICE 10
// On peut avoir 10 * 10 cellules vivantes, valeur modifiable
#define TAILLE_SUR_MATRICE  11
// On place une bordure autour qui permet de delimiter plus facilement la matrice

/*--------------------------------------------------------
 Descriptions : Procedure permettant d'afficher la matrice
 Entrées : Une matrice
 Sorties : Affichage du contenu de la matrice
--------------------------------------------------------*/

void affiche_matrice(int nMatrice[ ][TAILLE_SUR_MATRICE ]) {

    int i,j;
    for(i=1; i<=TAILLE_SOUS_MATRICE; i++) {
        ligne(TAILLE_SOUS_MATRICE);
        for(j=1; j<= TAILLE_SOUS_MATRICE; j++)
            if (nMatrice[i][j]==1)
                printf("|%c",'*');
            else
                printf("|%c",' ');
        printf("|\n");
    }
    ligne(TAILLE_SOUS_MATRICE);
}

