#pragma once
#include"InvestmentAsset.h"

class CryptoStaking : public InvestmentAsset {

private:
	double stakingAPY;
	double networkSlashingPenaltyRate;

public:
	CryptoStaking(string assetTicker, string assetName, double initialPrincipal, double stakingAPY, double networkSlashingPenaltyRate)
		:InvestmentAsset(assetTicker, assetName, initialPrincipal) {

		this->stakingAPY = stakingAPY;
		this->networkSlashingPenaltyRate = networkSlashingPenaltyRate;

	}

	void displayCryptoStaking() {

		InvestmentAsset::displayInvestment();
		cout << "stakingAPY = " << stakingAPY << endl;
		cout << "networkSlashingPenaltyRate = " << networkSlashingPenaltyRate << endl;

	}

	double calculateProjectedValue(int durationYears) {

		double effectiveYield = stakingAPY - networkSlashingPenaltyRate;
		double projectedValue = initialPrincipal * (1 + effectiveYield) * durationYears;

		return projectedValue;
	}


	double calculateRiskScore() {

		const double riskScore = 8.5;
		return riskScore;

	};

	void displayStatement(int durationYears) {

		cout << "displayStatement from CryptoStaking";

	};

};


