// Base_exo10.cpp : définit le point d'entrée pour l'application console.
// Écrire un programme qui demande à l’utilisateur une distance en mètres et la convertit en pieds et pouces (1 pouce = 2.54 cm, 1 pied = 12 pouces = 30.48cm). Donner les pieds et pouces en valeurs entières, arrondies à la valeur la plus proche: 

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Entrer une distance (metre) : ";
	float dis_m = 0;
	cin >> dis_m;

	cout << "\n*****CONVERSION*****\n";
	float dis_pieds = dis_m / 0.3048;
	float dis_pouces = (dis_pieds - floor(dis_pieds)) * 12;

	cout << dis_m << " m = " << floor(dis_pieds) << " pieds et " << floor(dis_pouces) << "\" \n";
    return 0;
}

