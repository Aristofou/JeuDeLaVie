/* Calcul du nombre de voisins vivants */
#define TAILLE_SOUS_MATRICE 10
// On peut avoir 10 * 10 cellules vivantes, valeur modifiable
#define TAILLE_SUR_MATRICE  11
// On place une bordure autour qui permet de delimiter plus facilement la matrice

/*--------------------------------------------------------------------------------
 Descriptions : Fonction permettant de verifier le nombre de voisins d'une cellule
 Entrées : La matrice ainsi que la ligne et la colonne
 Sorties : On connait les parametres d'occupation de chaque cellule
--------------------------------------------------------------------------------*/
int voisins(int nMatrice[][TAILLE_SUR_MATRICE],int nLigne, int nColonne) {

   int nCompte=0; /* compteur de cellules */
   int i,j;
/* On additionne les 9 cellules centrées en ligne,colonne */
   for (i=nLigne-1;i<=nLigne+1;i++)
      for(j=nColonne-1;j<=nColonne+1;j++)
         nCompte=nCompte+nMatrice[i][j];

         /* Puis on retire celle du milieu */
         nCompte -= nMatrice[nLigne][nColonne];
         return nCompte;
}
