#pragma once
#include"FlightTicket.h"

class EconomyTicket : public FlightTicket {
private:
	double extraBagFeePerKg, seatSelectionFee;

public:

	EconomyTicket(string passengerName, string flightNumber, double baseFare, double extraBagFeePerKg, double seatSelectionFee)
		: FlightTicket(passengerName, flightNumber, baseFare)
	{
		this->extraBagFeePerKg = extraBagFeePerKg;
		this->seatSelectionFee = seatSelectionFee;
	}

	double calculateTotalFare(int baggageCount, double totalWeightKg) {
		cout << "\nEnter the bag count = ";
		cin >> baggageCount;
		cout << "\nEnter the total weight in kg = ";
		cin >> totalWeightKg;

		if (totalWeightKg > 15) {
			double extraBagsWeight = (totalWeightKg - 15);
			double excessBaggageCharges = 50;
			
			double fees = baseFare + seatSelectionFee + extraBagsWeight * excessBaggageCharges;

			return fees;

		}
		else {
			cout << "No Excess Charges For Your Baggages";
			return 0;
		};

	}

	void printBoardingPass() {
		cout << "Printed Boarding Pass For EconomyTicket" << endl;
	}

	void displayEconomyTicket() {
		cout << endl;
		cout << "==================================" << endl;

		FlightTicket::displayFlightTicket();

		cout << "extraBagFeePerKg = " << extraBagFeePerKg << endl;
		cout << "seatSelectionFee = " << seatSelectionFee << endl;

		cout << "==================================" << endl;
		cout << endl;

	}


};
