// Base_exo7.cpp : définit le point d'entrée pour l'application console.
// Écrire un programme qui demande à l’utilisateur deux nombres entiers a et b et affiche: 

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;

	cout << "Entrer un nombre \'a\' : ";
	cin >> a;

	cout << "\nEntrer un nombre \'b\' : ";
	cin >> b;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " x " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	cout << a << " % " << b << " = " << a % b << endl;
	cout << a << " / " << b << " = " << float(a) / b << endl;
    return 0;
}

