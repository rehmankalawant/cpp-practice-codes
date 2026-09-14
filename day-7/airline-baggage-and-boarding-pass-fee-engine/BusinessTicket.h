#pragma once
#include"FlightTicket.h"

class BusinessTicket : public FlightTicket {
private:
	double loungeAccessFee;
	double priorityBoardingFee;

public:

	BusinessTicket(string passengerName, string flightNumber, double baseFare, double loungeAccessFee, double priorityBoardingFee)
		: FlightTicket(passengerName, flightNumber, baseFare) {

		this->loungeAccessFee = loungeAccessFee;
		this->priorityBoardingFee = priorityBoardingFee;

	}

	double calculateTotalFare(int baggageCount, double totalWeightKg) {
		if (totalWeightKg > 32) {

			int excessWeightCharges = 20;

			double totalFare = baseFare + loungeAccessFee + priorityBoardingFee + excessWeightCharges;

		}
		else {
			cout << "No Excess Charges For Your Baggages";
			return 0;
		};
	}

	void printBoardingPass() {
		cout << "Printed Boarding Pass For BusinessTicket" << endl;
	}

	void displayBusinessTicket() {

		cout << endl;
		cout << "==================================" << endl;

		FlightTicket::displayFlightTicket();

		cout << "loungeAccessFee = " << loungeAccessFee << endl;
		cout << "priorityBoardingFee = " << priorityBoardingFee << endl;

		cout << "==================================" << endl;
		cout << endl;

	}







};