#pragma once
#include<iostream>

using namespace std;

class Number {

private:
	int* number;

public:
	Number(int num) {
		number = new int(num);
	}

	int* getNumber() {
		return number;
	}

	Number(const Number& copyInteger) {
		this->number = copyInteger.number;
	}

	//~Number() {
	//	delete number;
	//}

};