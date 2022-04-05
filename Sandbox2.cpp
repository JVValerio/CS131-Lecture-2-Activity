// Lecture 2 - Daily Activity #1
// Josh Valerio

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	double numUno,numDos;

	cout << "Please enter values when prompted for math magic! \n\n";
	cout << "Enter the first numerical value: ";
	cin >> numUno;
	cout << endl << "Enter the second numerical value: ";
	cin >> numDos;
	cout << endl << "The sum of " << numUno << " and " << numDos << " is " << numUno + numDos << ". \n";
	cout << endl << "The average of " << numUno << " and " << numDos << " is " << (numUno + numDos)/2 << ". \n";

	system("pause");
	return 0;
}
