#pragma once

#include<iostream>
#include<string>

using namespace std;

class Vehicle {
private:
	int registrationNumber;
	string ownerName, vehicleType;
	static int noOfVehiclesRegistered;
		

public:
	Vehicle() {
		noOfVehiclesRegistered++;
		registrationNumber = 0;
		ownerName = "";
		vehicleType = "";
	}

	void insertVehicleRecord() {
		cout << "Enter the Registration Number = ";
		cin >> registrationNumber;
		cout << "Enter the Owner Name = ";
		cin >> ownerName;
		cout << "Enter the Vehicle Type = ";
		cin >> vehicleType;
		cout << endl;
	}

	void showVehicleDetails() {
		cout << "Registration Number = "<< registrationNumber;
		cout << "Owner Name = "<< ownerName;
		cout << "Vehicle Type = "<< vehicleType;
		cout << endl;
	}

};

int Vehicle::noOfVehiclesRegistered = 0;
