/* Initialisation de la matrice */
#define TAILLE_SOUS_MATRICE 10
// On peut avoir 10 * 10 cellules vivantes, valeur modifiable
#define TAILLE_SUR_MATRICE  11
// On place une bordure autour qui permet de delimiter plus facilement la matrice
void init(int nMatrice [][TAILLE_SUR_MATRICE ]) {

   int i,j;
   for(i=0; i<TAILLE_SUR_MATRICE; i++) {
      for(j=0; j<TAILLE_SUR_MATRICE ; j++) {
         if (i<=j && i>0 && j<=7)
            nMatrice[i][j]=1;
         else
            nMatrice[i][j]=0;
      }
   }
   /* On pourrait aussi faire une initialisation aléatoire */
}
