#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int Math, Urdu, Comp, Eng, Phy, total, sum, percentage;
	cout << "GRADES OF STUDENTS" << endl;
	cout << "Maths" << endl;
	cin >> Math;
	cout << "Urdu" << endl;
	cin >> Urdu;
	cout << "Computer" << endl;
	cin >> Comp;
	cout << "English" << endl;
	cin >> Eng;
	cout << "Physics" << endl;
	cin >> Phy;
	cout << "Total Marks" << endl;
	cin >> total;
	sum = Math + Urdu + Comp + Eng + Phy;
	cout << right << setw(27) << "RESULT CARD"<<endl;
	cout << "_____________________________________________"<<endl ;
	cout << "---------------------------------------------" << endl;
	cout << left<<setw(10)<<"MATHS" <<right<< setw(29) <<Math<< endl;
	cout << "\n---------------------------------------------" << endl;
	cout << left << setw(10) << "URDU" << right << setw(29) <<Urdu<< endl;
	cout << "\n---------------------------------------------" << endl;
	cout << left << setw(10) << "COMPUTER" << right << setw(29) <<Comp<< endl;
	cout << "\n---------------------------------------------" << endl;
	cout << left << setw(10) << "ENGLISH" << right << setw(29) <<Eng<< endl;
	cout << "\n---------------------------------------------" << endl;
	cout << left << setw(10) << "PHYSICS" << right << setw(29) <<Phy<< endl;
	cout << "_____________________________________________" << endl;
	cout << left << setw(10) << "OBTAINED MARKS" <<right<< setw(25)<<sum<<endl;
	cout << "---------------------------------------------" << endl;


	percentage = (sum * 100) / total;

	cout <<right<<setw(25)<< "Percentage=" << percentage << endl;
	cout << "---------------------------------------------" << endl;
	if (percentage >= 90)
		cout<<left<<setw(10)<<"GRADE" << right << setw(29) << "A+";
	
	else if (percentage >= 80)
		cout << left << setw(10) << "GRADE" <<right << setw(29) << "B";
	
	else if (percentage >= 70)
		cout << left << setw(10) << "GRADE" <<right << setw(29) << "C";
	
	else if (percentage >= 60)
		cout << left << setw(10) << "GRADE"<< right << setw(29) << "D";
	
	else if (percentage >= 50)
		cout << left << setw(10) << "GRADE"<< right << setw(29) << "E";
	
	else
		cout << right << setw(39) << "F";
	

	string result = (percentage >= 50) ? "PASSED": "FAILED";
	cout << "\n\n\nTHE STUDENT IS " << result<<endl;




	return 0;




}