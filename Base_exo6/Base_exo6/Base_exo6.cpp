// Base_exo6.cpp : définit le point d'entrée pour l'application console.
// Écrire un programme qui affiche le message « Bonjour, qu’est ce que je peux faire pour vous ? », lit le souhait de l’utilisateur, et répond « Désolé, je ne peux pas faire ça. »: 

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Bonjour qu'est ce que je peux faire pour vous ?" << endl;
	string msg;
	getline(cin,msg);
	cout << "Desole, je ne peux pas faire vous." << endl;



    return 0;
}

