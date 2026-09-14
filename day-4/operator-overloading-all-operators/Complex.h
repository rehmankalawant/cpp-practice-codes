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

	Complex(int real, int imaginary) {
		this->real = real;
		this->imaginary = imaginary;
	}

	void display() {
		cout << "The Complex Number is " << real << " + " << imaginary << "i" << endl << endl;
	}

	//	1
	//	comp1.operator+(comp2); --- return modified-complex-object-after-addition

	Complex& operator+(Complex plusObject) {
		Complex temp;

		temp.real = this->real + plusObject.real;
		temp.imaginary = this->imaginary + plusObject.imaginary;

		return temp;
	}

	//	2
	//	comp1.operator-(comp2); --- return modified-complex-object-after-subtraction

	Complex& operator-(Complex minusObject) {
		Complex temp;

		temp.real = this->real - minusObject.real;
		temp.imaginary = this->imaginary - minusObject.imaginary;

		return temp;

	}

	//	3
	//	comp1.operator*(comp2); --- return modified-complex-object-after-multiply

	Complex& operator*(Complex multiplyObject) {
		Complex temp;

		temp.real = this->real * multiplyObject.real;
		temp.imaginary = this->imaginary * multiplyObject.imaginary;

		return temp;

	}

	//	4
	//	comp1.operator/(comp2); --- return modified-complex-object-after-divide

	Complex& operator/(Complex divideObject) {
		Complex temp;

		temp.real = this->real / divideObject.real;
		temp.imaginary = this->imaginary / divideObject.imaginary;

		return temp;

	}


	//	5.1
	//	comp1.operator++(); --- return modified-complex-object-after-pre-increment

	Complex& operator++() {

		this->real = this->real + 1;
		this->imaginary = this->imaginary + 1;

		return *this;

	}

	//	5.2
	//	comp2.operator++(int dummy); --- return modified-complex-object-after-post-increment

	Complex& operator++(int dummy) {

		this->real += 1;
		this->imaginary += 1;

		return *this;

	}

	//	6.1
	//	comp1.operator--(); --- return modified-complex-object-after-pre-decrement

	Complex& operator--() {

		this->real = this->real - 1;
		this->imaginary = this->imaginary - 1;

		return *this;

	}

	//	6.2
	//	comp1.operator--(int dummy); --- return modified-complex-object-after-post-decrement

	Complex& operator--(int dummy) {

		this->real -= 1;
		this->imaginary -= 1;

		return *this;

	}

	//	7
	//	comp1.operator--(comp2);  --- return comparison result

	void operator>(Complex compareObject) {

		if (this->real > compareObject.real) {
			cout << "The First Object is Greater Than Second" << endl;
		}
		cout << "The Second Object is Greater Than First" << endl;

	
	}


};


