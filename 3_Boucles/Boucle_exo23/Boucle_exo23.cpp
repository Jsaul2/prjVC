// Boucle_exo23.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string InverseChain(string Ch, int i = 0);

int main(void) {
	string Ch;
	string ChaineInverse;

	cout << "Saisir une chaine de caractere : ";
	cin >> Ch;
	ChaineInverse = InverseChain(Ch);
	cout << "Chaine de caractere inverse : " << ChaineInverse << endl;


	cout << "\n******************************************\n" << endl;

	string Ch2;

	cout << "Saisir une chaine de caractere : ";
	cin >> Ch2;

	int tailleCh2 = Ch2.length();

	string ChaineinverseCh2 = Ch2;
	for (int i = 0; i < tailleCh2; i++)
	{
		ChaineinverseCh2[i] = Ch2[tailleCh2 - 1 - i];
	}

	cout << "Chaine de caractere inverse : " << ChaineinverseCh2 << endl;

}

string InverseChain(string Ch, int i)
{
	int tailleCh = Ch.length();
	if (i < tailleCh / 2){
		char ch = Ch[i];

		Ch[i] = Ch[Ch.length() - 1 - i];
		Ch[Ch.length() - 1 - i] = ch;

		return InverseChain(Ch, ++i);
	}
	else {
		return Ch;
	}
}

