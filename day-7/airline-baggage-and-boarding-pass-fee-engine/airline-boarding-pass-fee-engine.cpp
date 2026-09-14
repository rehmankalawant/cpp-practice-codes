#include"BusinessTicket.h"
#include"EconomyTicket.h"
#include"FirstClassTicket.h"

class HandleTickets {

public:

	static void displayTicketInformation(FlightTicket* basePtr) {

		//	*basePtr is dereference pointer
		//	This * before basePtr below extract the value at this pointer ( in c we use &a )

		if (typeid(*basePtr) == typeid(BusinessTicket)) {

			BusinessTicket* businessPtr;

			businessPtr = dynamic_cast<BusinessTicket*>(basePtr);

			businessPtr->displayFlightTicket();

		}

		if (typeid(*basePtr) == typeid(EconomyTicket)) {

			EconomyTicket* economyPtr;

			economyPtr = dynamic_cast<EconomyTicket*>(basePtr);

			economyPtr->displayEconomyTicket();

		}

		if (typeid(*basePtr) == typeid(FirstClassTicket)) {

			FirstClassTicket* firstPtr;

			firstPtr = dynamic_cast<FirstClassTicket*>(basePtr);

			firstPtr->displayFirstClassTicket();

		}

	};

};

int main() {

	int choice, noOfTickets = 0;

	string passengerName;
	string flightNumber;
	double baseFare;

	FlightTicket** ticketArray;

	cout << "How many tickets you want to insert = ";
	cin >> noOfTickets;

	ticketArray = new FlightTicket * [noOfTickets];

	for (int i = 0;i < noOfTickets;i++) {

		cout << "\n1. BusinessTicket 2. EconomyTicket 3. FirstClassTicket" << endl;
		cout << "Enter which Ticket type you wanted to insert at " << i + 1 << " = ";
		cin >> choice;

		switch (choice) {
			//	"Alex Mercer", "BA249", 1250.00, 75.00, 40.00

		case 1:
			double loungeAccessFee;
			double priorityBoardingFee;

			cout << "Enter passenger name: ";
			cin >> passengerName;

			cout << "Enter flight number: ";
			cin >> flightNumber;

			cout << "Enter base fare: ";
			cin >> baseFare;

			cout << "Enter lounge access fee: ";
			cin >> loungeAccessFee;

			cout << "Enter priority boarding fee: ";
			cin >> priorityBoardingFee;
			ticketArray[i] = new BusinessTicket(passengerName, flightNumber, baseFare, loungeAccessFee, priorityBoardingFee);
			break;

		case 2:
			double extraBagFeePerKg;
			double seatSelectionFee;

			cout << "Enter passenger name: ";
			cin >> passengerName;

			cout << "Enter flight number: ";
			cin >> flightNumber;

			cout << "Enter base fare: ";
			cin >> baseFare;

			cout << "Enter extra bag fee per kg: ";
			cin >> extraBagFeePerKg;

			cout << "Enter seat selection fee: ";
			cin >> seatSelectionFee;

			ticketArray[i] = new EconomyTicket(passengerName, flightNumber, baseFare, extraBagFeePerKg, seatSelectionFee);
			break;

		case 3:
			double conciergeServiceFee;

			cout << "Enter passenger name: ";
			cin >> passengerName;

			cout << "Enter flight number: ";
			cin >> flightNumber;

			cout << "Enter base fare: ";
			cin >> baseFare;

			cout << "Enter concierge service fee: ";
			cin >> conciergeServiceFee;

			ticketArray[i] = new FirstClassTicket(passengerName, flightNumber, baseFare, conciergeServiceFee);
			break;

		}

	}

	for (int i = 0;i < noOfTickets;i++) {

		cout << endl;

		HandleTickets::displayTicketInformation(ticketArray[i]);

		cout << endl;
	}

	return 0;

};