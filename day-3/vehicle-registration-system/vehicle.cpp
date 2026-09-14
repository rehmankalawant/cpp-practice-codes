//	3. Vehicle Registration System
//	Create a Vehicle class with registration number, owner name, and vehicle type.Use constructors to initialize objects.Maintain a static member to count the total number of registered vehicles.Store multiple vehicles in an array of objects and display all records.

#include"VehicleActions.h"

int main() {

	Vehicle* vehicleArray=NULL;
	int noOfVehicleRecords;

	cout << "Enter how many records you want to insert : ";
	cin >> noOfVehicleRecords;

	VehicleActions::allocateHeapMemory(vehicleArray, noOfVehicleRecords);

	VehicleActions::deallocateHeapMemory(vehicleArray, noOfVehicleRecords);

	return 0;

}