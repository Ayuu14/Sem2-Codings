#include <iostream>
#include "Applicant.h"
#include "Person.h"
using namespace std;

void printTitle();

int main() {
	
	char answer, channel;
	string name, email;
	int age;
	cout << "Welcome to Class and Object Demo " << endl;
	cout << "----------------------------------" << endl;

	cout << "Do you get the infomation about this job through online advertiesement ? ";
	cout << "(Y-Yes | N-No) : ";
	cin >> answer;
	channel = char(toupper(answer));

	cin.ignore();
	cout << "Enter name : ";
	getline(cin, name);
	cout << "Enter Email : ";
	getline(cin, email);
	cout << "Enter age(Year) : ";
	cin >> age;


	if (channel == 'Y') {

		Applicant applicant1("Online");
		applicant1.setName(name);
		applicant1.setEmail(email);
		applicant1.setAge(age);

		printTitle();

		cout << "Name : " << applicant1.getName() << endl;
		cout << "Email : " << applicant1.getEmail() << endl;
		cout << "Age : " << applicant1.getAge() << endl;
		cout << "Job Recruitment Channel : " << applicant1.getChannel() << endl;

		cout << "Applicant Status : " << applicant1.determineAgeCategory() << endl;


	}

	else {

		Applicant applicant2;
		applicant2.setName(name);
		applicant2.setEmail(email);
		applicant2.setAge(age);

		printTitle();

		cout << "Name : " << applicant2.getName() << endl;
		cout << "Email : " << applicant2.getEmail() << endl;
		cout << "Age : " << applicant2.getAge() << endl;
		cout << "Job Recruitment Channel : " << applicant2.getChannel() << endl;

		cout << "Applicant Status : " << applicant2.determineAgeCategory() << endl;

	}
	return 0;
}

void printTitle() {
	cout << "\nApplicant details Summary" << endl; 
	cout << "----------------------------" << endl; 
	return;

}

