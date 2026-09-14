#pragma once
#include<iostream>
#include<string>

using namespace std;

class FlightTicket {

protected:
	string passengerName, flightNumber;
	double baseFare;

public:
	FlightTicket(string passengerName, string flightNumber, double baseFare) {
		this->passengerName = passengerName;
		this->flightNumber = flightNumber;
		this->baseFare = baseFare;

	}

	virtual ~FlightTicket() = default;

	virtual double calculateTotalFare(int baggageCount, double totalWeightKg) = 0;

	virtual void printBoardingPass() = 0;

	void displayFlightTicket() {

		cout << "passengerName = " << passengerName << endl;
		cout << "flightNumber = " << flightNumber << endl;
		cout << "baseFare = " << baseFare << endl;

	}



};