#pragma once
#include"FlightTicket.h"

class FirstClassTicket : public FlightTicket {
private:
	double conciergeServiceFee;

public:
	FirstClassTicket(string passengerName, string flightNumber, double baseFare, double conciergeServiceFee)
		:FlightTicket(passengerName, flightNumber, baseFare) {
		this->conciergeServiceFee = conciergeServiceFee;
	}

	double calculateTotalFare(int baggageCount, double totalWeightKg) {

		double extraBagsWeight = (totalWeightKg - 15);
		double excessBaggageCharges = 100;

		double fees = baseFare + extraBagsWeight * excessBaggageCharges;

		return fees;

	}


	void printBoardingPass() {
		cout << "Printed Boarding Pass For FirstClassTicket" << endl;
	}

	void displayFirstClassTicket() {

		cout << endl;
		cout << "==================================";

		FlightTicket::displayFlightTicket();

		cout << "conciergeServiceFee = " << conciergeServiceFee << endl;

		cout << "==================================";
		cout << endl;


	}
};