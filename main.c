#include <stdio.h>
#include <stdlib.h>
#define TAILLE_SOUS_MATRICE 10
// On peut avoir 10 * 10 cellules vivantes, valeur modifiable
#define TAILLE_SUR_MATRICE  11
// On place une bordure autour qui permet de delimiter plus facilement la matrice

int main() {

    int i;
    int nCycles;
    int nMatrice[TAILLE_SUR_MATRICE] [TAILLE_SUR_MATRICE ];
    int nMatriceStockage[TAILLE_SUR_MATRICE][TAILLE_SUR_MATRICE];
    char s[2];
    int nLargeur;
    printf("Nombre de cycles : ");
    scanf("%d",&nCycles);
    init(nMatrice);
    printf("La population au depart : \n");
    affiche_matrice(nMatrice);
    printf("Appuyez sur Entree pour continuer\n");
    gets(s);
    for(i=0;i<nCycles;i++){
        mise_a_jour (nMatrice);
        printf("La population apres %d cycles: \n", i+1);
        affiche_matrice (nMatrice);
        printf("Appuyez sur Entree pour continuer\n");
        gets(s);
    }
    return 0;
}
