#pragma once
#include<iostream>

using namespace std;

class Complex {

private:
	int real, imaginary;

public:
	Complex() {
		real = 0;
		imaginary = 0;
	}

	Complex(int real , int imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}

	void display() {
		cout << "The Complex Number is " << real << " + " << imaginary << "i"<<endl;
	}

	//	comp1.operator+(comp2);

	Complex& operator+(Complex parameterObject) {
		Complex temp;

		temp.real = this->real + parameterObject.real;
		temp.imaginary = this->imaginary + parameterObject.imaginary;

		return temp;
	}



	


};


