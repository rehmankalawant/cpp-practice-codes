#pragma once
#include<exception>

using namespace std;

class InvalidAmountException : public exception {

public:
	char const* what() const {
		throw "Invalid transaction amount! Amount must be greater than zero.";
	}

};