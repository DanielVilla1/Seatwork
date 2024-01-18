#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int value1, value2, menu_Choice, val_store = 0;
	int continue_or_exit;
	do
	{
	cout << "========================================="
		<< "\nWelcome to Operationals!"
		<< "\nWhat calculation would you like to choose?"
		<< "\n========================================="
		<< "\n [1] Addition      |   [2] Subtraction"
		<< "\n-----------------------------------------"
		<< "\n[3] Multiplication |    [4] Division    "
		<< "\n-----------------------------------------"
		<< "\n  [5] Modulus      |    [6] Power       "
		<< "\n-----------------------------------------"
		<< "\n              [0] Exit                   "	
		<< "\n=========================================";
	cout << "\nPlease select an Operation: "; cin >> menu_Choice;

	
	if (menu_Choice == 1 || menu_Choice == 2 || menu_Choice == 3 || menu_Choice == 4 || menu_Choice == 5 || menu_Choice == 6) {

		cout << "\nPlease input 2 value"
			<< "\nInput value 1: "; cin >> value1;
		cout << "Input value 2: "; cin >> value2;

		if (menu_Choice == 1)
		{
			val_store = value1 + value2;
		}
		else if (menu_Choice == 2)
		{
			val_store = value1 - value2;
		}
		else if (menu_Choice == 3) {
			val_store = value1 * value2;
		}
		else if (menu_Choice == 4) {
			val_store = value1 / value2;
		}
		else if (menu_Choice == 5) {
			val_store = value1 % value2;
		}
		else if (menu_Choice == 6) {
			val_store = pow(value1, value2);
		}
		cout << "\nYour result is: " << val_store;
	}
		else if (menu_Choice == 0) {
		cout << "\nThank you!";
		exit(0);
	}
		else cout << "\nPlease select a valid choice!";
		cout << "\n\nWould you like to go again?"
		<< " \n[1] for Yes and [0] for No"
		<< "\nPlease enter your choice: "; cin >> continue_or_exit;
		system("cls");
	} while (continue_or_exit == 1);
}
