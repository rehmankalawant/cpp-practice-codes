#include"RealEstateTrust.h"
#include"EquityStock.h"
#include"CryptoStaking.h"

class HandleInvestment {

public:
	static void displayObject(InvestmentAsset* iptr) {

		cout << endl;

		if (typeid(*iptr) == typeid(RealEstateTrust)) {

			RealEstateTrust* rptr;

			rptr = dynamic_cast<RealEstateTrust*>(iptr);

			rptr->displayRealEstate();
			
		}

		if (typeid(*iptr) == typeid(EquityStock)) {

			EquityStock* eptr;

			eptr = dynamic_cast<EquityStock*>(iptr);

			eptr->displayEquityStock();

		}

		if (typeid(*iptr) == typeid(CryptoStaking)) {

			CryptoStaking* cptr;

			cptr = dynamic_cast<CryptoStaking*>(iptr);

			cptr->displayCryptoStaking();

		}

		cout << endl;

	}
};

int main() {

	int noi;

	cout << "Enter the number of investment = ";
	cin >> noi;

	//InvestmentAsset* iptr;

	//iptr = new RealEstateTrust("BRT", "BlueRidge Real Estate Income Trust", 500000.0, 0.065, 0.035, 0.010);

	//iptr->displayStatement(100);

	InvestmentAsset** invArray;

	invArray = new InvestmentAsset * [noi];

	for (int i = 0;i < noi; i++) {

		int choice;

		cout << "\n1. RealEstateTrust 2. EquityStock 3.CryptoStaking\n";
		cout << "Select Investment Plan = ";
		cin >> choice;

		switch (choice) {

		case 1:
			invArray[i] = new RealEstateTrust("BRT", "BlueRidge Real Estate Income Trust", 500000.0, 0.065, 0.035, 0.010);
			break;

		case 2:
			invArray[i] = new EquityStock("AAPL", "Apple Inc.", 10000.0, 0.08, 0.0055, 1.15);
			break;

		case 3:
			invArray[i] = new CryptoStaking("ETH", "Ethereum", 5000.0, 0.045, 0.01);
			break;

		}

	}

	for (int i = 0;i < noi; i++) {

		HandleInvestment::displayObject(invArray[i]);

	};

	return 0;

}