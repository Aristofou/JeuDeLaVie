/*---------------------------------------------------------------------------------------------------------------
 Descriptions : Procedure pour tracer une ligne
 Entrées : La largeur de la matrice
 Sorties : On trace des lignes entre chaque ligne de la matrice afin de pouvoir demarquer les differentes lignes
---------------------------------------------------------------------------------------------------------------*/
void ligne(int nLargeur) {

   int i;
   for(i=0; i<nLargeur; i++)
      printf("==");
   printf("=\n");
}
