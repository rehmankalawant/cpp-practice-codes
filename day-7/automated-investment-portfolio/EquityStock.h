#pragma once
#include"InvestmentAsset.h"

class EquityStock : public InvestmentAsset {
protected:
	double annualGrowthRate, dividendYield, beta;

	//	Member initializer list = InvestmentAsset(assetTicker, assetName, initialPrincipal)
	//	The parent constructor get invoked first then child
	//	We invoke parent constructor within child to initialize values of parent properties.

public:

	EquityStock(string assetTicker, string assetName, double initialPrincipal, double annualGrowthRate, double dividendYield, double beta)
		:InvestmentAsset(assetTicker, assetName, initialPrincipal)
	{

		this->annualGrowthRate = annualGrowthRate,
			this->dividendYield = dividendYield;
		this->beta = beta;

	}

	void displayEquityStock() {

		InvestmentAsset::displayInvestment();
		cout << "annualGrowthRate = " << annualGrowthRate << endl;
		cout << "dividendYield = " << dividendYield << endl;
		cout << "beta = " << beta << endl;

	}

	double calculateProjectedValue(int durationYears) {
		double projectedValue = initialPrincipal * (1 + annualGrowthRate + dividendYield) * durationYears;

		return projectedValue;

	}

	double calculateRiskScore() {

		double riskScore = min(10.0, max(1.0, beta * 4.5));

		return riskScore;

	}
	void displayStatement(int durationYears) {

		cout << "displayStatement from CryptoStaking";

	};


};