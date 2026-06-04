#include "LinkedQueue.h"
#include <iostream>

using namespace std;

int main() {
	LinkedQueue<Person<string>> vaccineWaitList;
	vaccineWaitList.enqueue({ "B032510727" , "Zahriah" });
	vaccineWaitList.enqueue({ "B032510888" , "Maslita" });
	vaccineWaitList.enqueue({ "B032510789", "Safiza" });

	cout << "Number of people in Vaccination Waiting List is " << vaccineWaitList.getCount() << endl;
	Person<string> frontPerson = vaccineWaitList.queueFront();
	Person<string> rearPerson = vaccineWaitList.queueRear();

	if (!vaccineWaitList.isEmpty()) {
		cout << "First person ID : " << frontPerson.id << endl;
		cout << "First person Name : " << frontPerson.name << endl;
		cout << endl;
		cout << "Last person ID : " << rearPerson.id << endl;
		cout << "Last person Name : " << rearPerson.name << endl;
		cout << "---------------------------------------\n";

	}

	else
		cout << "Waiting List is Empty." << endl;
	cout << endl;

	cout << "***CALLING FOR VACCINATION***" << endl;
	cout << frontPerson.name << ", please enter the Vaccination Room.\n\n";

	if (!vaccineWaitList.isEmpty()) {
		vaccineWaitList.dequeue();
		cout << "Number of people in Vaccination Waiting List is " << vaccineWaitList.getCount() << endl;
		frontPerson = vaccineWaitList.queueFront();
		rearPerson = vaccineWaitList.queueRear();
		cout << "First person ID : " << frontPerson.id << endl;
		cout << "First person Name : " << frontPerson.name << endl;
		cout << endl;

		cout << "Last person ID : " << rearPerson.id << endl;
		cout << "Last person Name : " << rearPerson.name << endl;
		cout << "---------------------------------------\n";
	}

	else
		cout << "Waiting List is empty." << endl;
	return 0;


}




