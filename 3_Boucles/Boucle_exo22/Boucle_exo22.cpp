// Boucle_exo22.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	float n = 0;
	float fac = 1;
	cout << "Donner un nombre entier : ";
	cin >> n;
	
	if (n > 1)
	{	
		int i;	
		for (i = 1; i <= n; i++)
		{
			fac *= i;
		}
	}

	cout << "!" << n << " = " << fac << endl;
    return 0;
}

