// Fonction_exo28.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

void codeBarre(string valeur, int tailleCodePostal);

void codeBarre(string valeur, int tailleCodePostal) {
	string tabCB[10];
	string CB[5];

	tabCB[0] = "..||||";
	tabCB[1] = ".|.|||";
	tabCB[2] = ".||.||";
	tabCB[3] = ".|||.|";
	tabCB[4] = "|..|||";
	tabCB[5] = "|.|.||";
	tabCB[6] = "|.||.|";
	tabCB[7] = "||..||";
	tabCB[8] = "||.|.|";
	tabCB[9] = "|||..|";
	
	char c;
	int nCP = 0;string v;
	for (int i = tailleCodePostal - 1; i >= 0; --i)
	{
		c = valeur[i];
		string s2(1, c);
		nCP = stoi(s2);
		
		switch (nCP)
		{
		case 0:
			v = tabCB[0];
			CB[i] = v;

			cout << CB[i];
			break;
		case 1:
			v = tabCB[1];
			CB[i] = v;

			cout << CB[i];
			break;
		case 2:
			v = tabCB[2];
			CB[i] = v;

			cout << CB[i];
			break;
		case 3:
			v = tabCB[3];
			CB[i] = v;

			cout << CB[i];
			break;
		case 4:
			v = tabCB[4];
			CB[i] = v;

			cout << CB[i];
			break;
		case 5:
			v = tabCB[5];
			CB[i] = v;

			cout << CB[i];
			break;
		case 6:
			v = tabCB[6];
			CB[i] = v;

			cout << CB[i];
			break;
		case 7:
			v = tabCB[7];
			CB[i] = v;

			cout << CB[i];
			break;
		case 8:
			v = tabCB[8];
			CB[i] = v;

			cout << CB[i];
			break;
		case 9:
			v = tabCB[9];
			CB[i] = v;

			cout << CB[i];
			break;
		}

	}
	cout << endl;
}

int main()
{
	string codePostal;
	int tailleCodePostal = 0;
	
	cout << "Saisir un code postal : ";
	cin >> codePostal;

	tailleCodePostal = codePostal.size();
	cout << "Taille code postal : " << tailleCodePostal << endl;

	if (tailleCodePostal != 5) {
		cout << "Saisi incorrect ! Le code postal doit contenir 5 caractères." << endl;
	}
	else
	{
		cout << "--------------------------------------------------------" << endl;
		cout << "Cryptage du code postal : ";
		codeBarre(codePostal, tailleCodePostal);
		cout << "--------------------------------------------------------" << endl;
	}

	
    return 0;
}

