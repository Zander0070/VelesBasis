#include <iostream>
using namespace std;



int main(){
	int EndTemp;
	double Velocity;

	cout << "from 0 degrees till what degree do do you want to measure the velocity? : ";
	cin >> EndTemp;

	for ( int I = 0; I < EndTemp + 1; I++)
	{
		cout << "\nAt " << I << " degrees Celsius the velocity of sounds is " << 331.3 + 0.61 * I << "\n";
	}

	return 0;


}

