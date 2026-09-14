#pragma once
#include<iostream>
#include<string>

using namespace std;

class InvestmentAsset {
protected:
	string assetTicker, assetName;
	double initialPrincipal;

public:

	InvestmentAsset(string assetTicker, string assetName, double initialPrincipal) {

		this->assetTicker = assetTicker;
		this->assetName = assetName;
		this->initialPrincipal = initialPrincipal;

	}

	void displayInvestment() {
		cout << "assetTicker = " << assetTicker << endl;
		cout << "assetName = " << assetName << endl;
		cout << "initialPrincipal = " << initialPrincipal << endl;

	}



	virtual ~InvestmentAsset() = default;

	virtual double calculateProjectedValue(int durationYears) = 0;
	virtual double calculateRiskScore() = 0;
	virtual void displayStatement(int durationYears) = 0;







};
