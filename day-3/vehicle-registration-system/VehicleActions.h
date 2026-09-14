#pragma once
#include"Vehicle.h"

class VehicleActions {

public:

	static void allocateHeapMemory(Vehicle*& vh, int noOfVehicles) {

		vh = new Vehicle[noOfVehicles];

		for (int i = 0;i < noOfVehicles;i++) {

			vh[i].insertVehicleRecord();

		}

	}

	static void displayAllVehicles(Vehicle*& vh, int noOfVehicles) {

		for (int i = 0;i < noOfVehicles;i++) {

			vh[i].showVehicleDetails();

		}

	}


	static void deallocateHeapMemory(Vehicle*& vh, int noOfVehicles) {

		//	here Vehicle** --- first pointer for array location , another for objects-location

		delete[] vh;

		vh = NULL;

	}

};
