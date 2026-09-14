//	7. Simple Electricity Bill

//	Accept the number of electricity units consumed and calculate the bill using slab rates of your choice.Display the total bill and explain the slabs used.

#include<iostream>

using namespace std;

void calculateElectricityBill(int unit) {

	int electricitySlab = 44;

	int totalBill = electricitySlab * unit;

	cout << "\n You have used " << unit << " unit of electricity \n";
	cout << "\n Using Electricity Slab Of " << electricitySlab << " rs per unit \n";
	cout << "\n Your Total Bill is " << totalBill << " /- Rs \n";
}

int main() {
	int electricityUnit;

	cout << "\n Enter the unit of electricity used = ";

	cin >> electricityUnit;

	calculateElectricityBill(electricityUnit);

	return 0;

}