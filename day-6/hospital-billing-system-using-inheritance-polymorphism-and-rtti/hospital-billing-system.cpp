#include<iostream>
#include"Inpatient.h"
#include"Outpatient.h"
#include"EmergencyPatient.h"

class HandlePatient {

public:

	static void displayDetails(Patient* pt) {
		pt->displayPatientDetails();

		if (typeid(*pt) == typeid(InPatient)) {
			InPatient* inptr;

			inptr = dynamic_cast<InPatient*>(pt);
			inptr->inPatientSpecial();
		}

		if (typeid(*pt) == typeid(OutPatient)) {
			OutPatient* outptr;

			outptr = dynamic_cast<OutPatient*>(pt);
			outptr->outPatientSpecial();
		}

		if (typeid(*pt) == typeid(EmergencyPatient)) {
			EmergencyPatient* emerptr;

			emerptr = dynamic_cast<EmergencyPatient*>(pt);
			emerptr->emergencyPatientSpecial();
		}

		cout << endl;
		cout << endl;
	}
};

int main() {

	//	At compile time the object is of Patient-Class 
	//	But at runtime it becomes Object of Inpatient-Class

	//Patient* p1 = new InPatient();

	//cout<<p1->calculateBill();

	Patient** pArray;
	int nop, choice;

	cout << "Enter the number of patients" << endl;
	cin >> nop;

	pArray = new Patient * [nop];


	

	for (int i = 0;i < nop;i++) {

		cout << "Which Patient Record You Want To Insert";
		cout << "\n1. InPatient \n2. OutPatient \n3. EmergencyPatient\n";
		cin >> choice;

		switch (choice) {
		case 1:
			pArray[i] = new InPatient(1001, "Rahul Sharma", 45, 5, 2500, 1500, 3200, 5000);
			break;

		case 2:
			pArray[i] = new OutPatient(1002, "Priya Patel", 32, 1, 1000, 2000, 1500);
			break;

		case 3:
			pArray[i]= new EmergencyPatient(1003, "Amit Kumar", 28, 3, 3000, 2000, 2500, 6000, 5000, 3000);
			break;

		}


	}


	for (int i = 0;i < nop;i++) {

		HandlePatient::displayDetails(pArray[i]);

	}


}