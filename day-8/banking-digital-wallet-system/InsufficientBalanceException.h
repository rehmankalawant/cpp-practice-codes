#pragma once
#include<exception>

using namespace std;

class InsufficientBalanceException : public exception {

public:
	char const* what() const {
		throw "Insufficient wallet balance for this withdrawal.";
	}

};