#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num1, num2, num3, largest, smallest, equal;
	cout << "Enter The First Number:" << endl;
	cin >> num1;
	cout << "Enter The Second Number:" << endl;
	cin >> num2;
	cout << "Enter The Third Number:" << endl;
	cin >> num3;

	if (num1 == num2 && num2 == num3) 
		cout << "All The Numbers Are Equal" << endl;
	
	

	if (num1 >= num2 && num2 >= num3) 
		largest = num1;

	else if (num2 >= num1 && num2 >= num3)
		largest = num2;

	else if (num3 >= num1 && num3 >= num2)
		largest = num3;
	
	if (num1 <= num2 && num2 <= num3) 
		smallest = num1;

	else if (num2 <= num1 && num2 <= num3)
		smallest = num2;

	else if (num3 <= num1 && num3 <= num2)
		smallest = num3;
	

	cout << "Largest Number:" << largest << endl;
	cout << "Smallest Number:" << smallest << endl;
	
	return 0;
}



