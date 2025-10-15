#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float number1, number2,sum,product,difference,quotient;
	cout << "Enter First Number:-"<<endl;
	cin >> number1;
	cout << "Enter Second Number:-" << endl;
	cin >> number2;


	cout << "\nUsing Floating Values" << endl;
	sum = number1 + number2;
	product = number1 * number2;
	difference = number1 - number2;
	quotient = number1 / number2;
	//THESE ANSWERS ARE IN FLOAT
	cout << "The Sum is:" << fixed <<setprecision(3)<< sum<<endl;
	cout << "The Product is:" << fixed << setprecision(3) << product << endl;
	cout << " The Difference is:" << fixed << setprecision(3) << difference << endl;
	cout << "The Quotient is :" << fixed << setprecision(3) << quotient << endl;
	
	cout << "\nNow By Using Integer Values"<<endl; 

	int num1 = number1;
	int num2 = number2;
	
	int osum = sum;
	int oproduct = product;
	int odifference = difference;
	int oquotient = quotient;

osum = num1 + num2;
	oproduct = num1 * num2;
	odifference = num1 - num2;
	oquotient = num1 / num2;
	//THESE ANSWERS ARE IN INTEGER
	cout << "The sum :" << osum<<endl;
	cout << "The product:" << oproduct << endl;
	cout << "The difference:" << odifference << endl;
	cout << "The quotient:" << oquotient << endl;


	return 0;




}