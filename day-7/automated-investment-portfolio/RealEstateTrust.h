#pragma once
#include"InvestmentAsset.h"

class RealEstateTrust : public InvestmentAsset {
protected:
	double rentalCapRate, propertyAppreciationRate, managementFeeRate;

public:

	RealEstateTrust(string assetTicker, string assetName, double initialPrincipal, double rentalCapRate, double propertyAppreciationRate, double managementFeeRate)
		:InvestmentAsset(assetTicker, assetName, initialPrincipal)
	{
		this->rentalCapRate = rentalCapRate;
		this->propertyAppreciationRate = propertyAppreciationRate;
		this->managementFeeRate = managementFeeRate;

	}

	void displayRealEstate() {

		InvestmentAsset::displayInvestment();
		cout << "rentalCapRate = " << rentalCapRate << endl;
		cout << "propertyAppreciationRate = " << propertyAppreciationRate << endl;
		cout << "managementFeeRate = " << managementFeeRate << endl;

	}

	double calculateProjectedValue(int durationYears) {

		double netAnnualRate = rentalCapRate + propertyAppreciationRate - managementFeeRate;
		double projectedValue = initialPrincipal * (1 + netAnnualRate) * durationYears;

		return projectedValue;

	}

	double calculateRiskScore() {

		const double riskScore = 3.5;
		return riskScore;

	}

	void displayStatement(int durationYears) {

		cout << "displayStatement from RealEstateTrust";

	};




};