/**
 * @file EcritureFTexte.cpp
 * 
 * @brief Test de manipulateurs
 * Programmation generique et conception objet
 */
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	double val[] = {1234.5678, -234.7, 3.};
	// sauvegarde de la configuration courante
	ios::fmtflags old = cout.flags();

	cout << setprecision(3);
	cout << showpos;
	cout << right << setfill('.');
	cout << fixed;
	cout << "Format defini par manipulateurs :" << endl;
	for (int i=0; i<3; i++) {
		cout << setw(10) << val[i] << endl;
	}
	cout << noshowpos;
	// restauration de la configuration initiale
	cout << "Format par defaut :" << setiosflags(old)<< endl;
	for (int i=0; i<3; i++) {
		cout << val[i] << endl;
	}
}
