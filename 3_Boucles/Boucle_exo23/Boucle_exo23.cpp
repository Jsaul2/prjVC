// Boucle_exo23.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string InverseChain(string Ch, int i = 0);

int main(void) {
	string Ch;
	string ChainInverse;

	cout << "Saisir une chaine de caractere : ";
	cin >> Ch;
	ChainInverse = InverseChain(Ch);
	cout << "Chaine de caractere inverse : " << ChainInverse << endl;
}

string InverseChain(string Ch, int i)
{
	if (i < Ch.length() / 2){
		char ch = Ch[i];

		Ch[i] = Ch[Ch.length() - 1 - i];
		Ch[Ch.length() - 1 - i] = ch;

		return InverseChain(Ch, ++i);
	}
	else {
		return Ch;
	}
}

