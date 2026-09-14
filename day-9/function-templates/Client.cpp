#include<iostream>
#include<string>
using namespace std;
#include"StatisticalFunctions.h"

int main()
{
	// Integer array
	int intArr[] = { 45, 12, 89, 3, 27 };
	int intSize = 5;

	int intMin, intMax;

	findMinMax(intArr, intSize, intMin, intMax);

	cout << "\n Array<int>: [45, 12, 89, 3, 27]";
	cout << "\n Min: " << intMin;
	cout << "\n Max: " << intMax;
	cout << "\n Avg: " << computeAverage(intArr, intSize);


	// Double array
	double doubleArr[] = { 3.14, 2.71, 9.81, 1.41 };
	int doubleSize = 4;

	double doubleMin, doubleMax;

	findMinMax(doubleArr, doubleSize, doubleMin, doubleMax);

	cout << "\n\n Array<double>: [3.14, 2.71, 9.81, 1.41]";
	cout << "\n Min: " << doubleMin;
	cout << "\n Max: " << doubleMax;
	cout << "\n Avg: " << computeAverage(doubleArr, doubleSize);


	// String array
	string stringArr[] =
	{
		"apple",
		"banana",
		"kiwi",
		"strawberry"
	};

	int stringSize = 4;

	string shortest, longest;

	findMinMax(stringArr, stringSize, shortest, longest);

	cout << "\n\n Array<string>: [apple, banana, kiwi, strawberry]";
	cout << "\n Shortest: \"" << shortest
		<< "\" (" << shortest.length() << ")";

	cout << "\n Longest: \"" << longest
		<< "\" (" << longest.length() << ")";

	return 0;
}
