#include <iostream> 

using namespace std;

int main() {
	// initialize the two variables
	int first_integer;
	int second_integer;
	int sum;

	// prompt user for the first integer
	// using cin
	cout <<  "Enter in your first integer ";
	cin >> first_integer;

	// prompt user for the second integer
	// using cin
	cout << "\nEnter your second integer ";
	cin >> second_integer;

	cout << "\nValue of first_integer " << first_integer << endl;
	cout << "Value of second_integer " << second_integer << endl;

	sum = first_integer + second_integer;

	cout << "The sum of your two integers is: " << sum;


}
