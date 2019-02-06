#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_SOUS_MATRICE 10
// On peut avoir 10 * 10 cellules vivantes, valeur modifiable
#define TAILLE_SUR_MATRICE  11
// On place une bordure autour qui permet de delimiter plus facilement la matrice

//Prototypage

extern void init(int nMatrice [][TAILLE_SUR_MATRICE ]);
extern int nVoisins (int nMatrice [][TAILLE_SUR_MATRICE ],int nLigne, int nColonne);
extern void mise_a_jour(int nMatrice[][TAILLE_SUR_MATRICE ]);
extern void affiche_matrice(int nMatrice [][TAILLE_SUR_MATRICE ]);
extern void nLigne(int nLargeur);

#endif // HEAD_H_INCLUDED
