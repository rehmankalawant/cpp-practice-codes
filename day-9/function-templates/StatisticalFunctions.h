#pragma once
#include<iostream>
#include<string>
using namespace std;


// Generic template function
// Finds minimum and maximum in a single pass
template<class T>
void findMinMax(T arr[], int size, T& minVal, T& maxVal)
{
	minVal = arr[0];
	maxVal = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i] < minVal)
		{
			minVal = arr[i];
		}

		if (arr[i] > maxVal)
		{
			maxVal = arr[i];
		}
	}
}


// Generic template function
// Computes average and returns double
template<class T>
double computeAverage(T arr[], int size)
{
	T sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}

	return (double)sum / size;
}


// Explicit specialization for string
template<>
void findMinMax<string>(string arr[], int size,
	string& minVal, string& maxVal)
{
	minVal = arr[0];
	maxVal = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i].length() < minVal.length())
		{
			minVal = arr[i];
		}

		if (arr[i].length() > maxVal.length())
		{
			maxVal = arr[i];
		}
	}
}
