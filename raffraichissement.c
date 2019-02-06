/* Correspond à l'étape n+1 */
#define TAILLE_SOUS_MATRICE 10
// On peut avoir 10 * 10 cellules vivantes, valeur modifiable
#define TAILLE_SUR_MATRICE  11
// On place une bordure autour qui permet de delimiter plus facilement la matrice

/*--------------------------------------------------------------
 Descriptions : Procedure permettant de mettre a jour le tableau
 Entrées : La matrice
 Sorties : Une nouvelle version de la matrice, mise a jour
--------------------------------------------------------------*/

void mise_a_jour(int nMatrice[ ][TAILLE_SUR_MATRICE ]) {

   int i,j;
   int nVoisins;
   int nMatrice_densite[TAILLE_SOUS_MATRICE][TAILLE_SOUS_MATRICE];
   /* matrice qui comptabilise le nombre de voisins */
   for(i=0; i< TAILLE_SOUS_MATRICE; i++)
         for(j=0; j< TAILLE_SOUS_MATRICE; j++)
            nMatrice_densite[i][j]=voisins(nMatrice,i+1,j+1);
      /* i+1 et j+1 car on passe de la SOUS_MATRICE à la MATRICE   */

   for(i=0; i< TAILLE_SOUS_MATRICE; i++)
      for(j=0; j< TAILLE_SOUS_MATRICE; j++) {
            nVoisins=nMatrice_densite[i][j];
            if(nVoisins==2)
                  nMatrice[i+1][j+1]=1;
            else if (nVoisins==0 || nVoisins==4)
                  nMatrice[i+1][j+1]=0;
   }
}
