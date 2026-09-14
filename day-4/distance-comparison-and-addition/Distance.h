#pragma once
#include<iostream>

using namespace std;

class Distance {

private:
	int feet;
	float inches;

public:

	Distance() {
		feet = 0;
		inches = 0.0;
	}

	Distance(int feet , float inches) {
		this->feet = feet;
		this->inches = inches;
	}

	void displayDistance() {
		cout << "The total distance is " << feet << " feet & " << inches << " inches" << endl;
	}

	// distance1.operator+(distance2) -- return temp-object

	Distance& operator+(Distance distance2) {
		Distance temp;

		temp.feet = this->feet + distance2.feet;
		temp.inches = this->inches + distance2.inches;

		return temp;
	}

	//	distance4.operator(distance5) -- return boolean
	//	this->feet refered with distance4 at compile-time

	void operator==(Distance compareObject) {

		if (this->feet == compareObject.feet && this->inches == compareObject.inches) {
			cout << "Objects Are Equal"<<endl;
		}
		else {
			cout << "Objects Are Not Equal"<<endl;
		}

	}





};