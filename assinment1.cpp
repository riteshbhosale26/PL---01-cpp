#include<iostream>
#include<string>
using namespace std;

class Student 
{
	public:
	int roll_no;
	string name;
	int marks;

	void Accept()
	{

		cout <<"Enter Roll number :";
		cin >> roll_no;

		cout <<"Entre Name :";
		cin >> name;

		cout << "Enter Marks :";
		cin >> marks;

	}

	void Result()
	{

		if( marks >= 40) {
			cout << "Result : Pass" << endl;
		}else {
			cout << "Result : Fail" << endl;
		}

	}

	void Display()
	{

		cout << ".....DISPLAY RESULT....." << endl;
		cout << "Roll number : " << roll_no << endl;
		cout << "Name :" << name << endl;
		cout << "Marks :" << marks << endl;
		Result();
	}

};

int main() {
	Student s;

	s.Accept();
	s.Display();

	return 0;
}
