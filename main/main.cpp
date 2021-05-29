#include <iostream>

#include <locale.h>

#include "polynom.h"

using namespace std;

int main()
{
	TMonomial A(121, 5);
  
	TMonomial B(1214, 2);
  
	cout << " Monom A = " << A << endl;
  
	cout << " Monom B = " << B << endl;

	TPolynomial P(3);
  
	P += A;
  
	P += B;
  
	cout << "\n Polynom P = A + B = " << P << endl;

	TPolynomial P2(P);
  
	cout << " Polynom P2(P) = " << P2 << endl;

	TPolynomial P3(3);
  
	P3 = P + P2;
  
	cout << "\n Polynom P3 = P + P2 = " << P3 << endl;
	
	TPolynomial pol = TPolynomial::load("C:\\Users\\1\\source\\repos\\polynom1\\polynom1\\polynom_for_load.txt");

	cout <<"\nYour polynom from file looks like that:  "<< pol << endl;

	pol.save("C:\\Users\\1\\source\\repos\\polynom1\\polynom1\\polynom_for_save.txt");

	return 0;
  
}
