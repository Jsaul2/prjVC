// Base_exo8.cpp : définit le point d'entrée pour l'application console.
// Écrire un programme qui demande à l’utilisateur les dimensions d’un rectangle et affiche: 
/*
leur somme
leur produit
la division entière de a par b
le reste de la division entière
la division réelle de a par b
*/

#include "stdafx.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
	cout << "****Dimenssions rectangle (cm)****\n\n";
	float LongueurR = 0;
	cout << "Entrer la longeur du rectangle : ";
	cin >> LongueurR;

	float largeurR = 0;
	cout << "Entrer la largeur du rectangle : ";
	cin >> largeurR;

	cout << "\n\nPerimetre du rectangle : " << (LongueurR + largeurR) * 2 << "\n";
	cout << "Aire du rectangle : " << LongueurR * largeurR << "\n";
	cout << "Longueur de la diagonale du rectangle : " << sqrt((LongueurR * LongueurR) + (largeurR * largeurR)) << endl;

	return 0;
}

