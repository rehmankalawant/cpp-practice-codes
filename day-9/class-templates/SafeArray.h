#pragma once
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

template <typename T>
class SafeArray
{
private:
	T* data;
	size_t capacity;
	size_t currentSize;

public:

	// Default constructor
	SafeArray()
	{
		capacity = 4;
		currentSize = 0;
		data = new T[capacity];
	}

	// Parameterized constructor
	SafeArray(size_t initialSize)
	{
		if (initialSize == 0)
		{
			initialSize = 4;
		}

		capacity = initialSize;
		currentSize = 0;
		data = new T[capacity];
	}

	// Copy constructor
	SafeArray(const SafeArray& obj)
	{
		this->capacity = obj.capacity;
		this->currentSize = obj.currentSize;

		this->data = new T[this->capacity];

		for (int i = 0; i < currentSize; i++)
		{
			this->data[i] = obj.data[i];
		}
	}

	// Assignment operator
	SafeArray& operator=(const SafeArray& obj)
	{
		if (this != &obj)
		{
			delete[] this->data;

			this->capacity = obj.capacity;
			this->currentSize = obj.currentSize;

			this->data = new T[this->capacity];

			for (int i = 0; i < currentSize; i++)
			{
				this->data[i] = obj.data[i];
			}
		}

		return *this;
	}

	// Destructor
	~SafeArray()
	{
		if (this->data != NULL)
		{
			delete[] this->data;
			this->data = NULL;
		}
	}

	// Add element
	void push_back(const T& element)
	{
		if (currentSize == capacity)
		{
			size_t oldCapacity = capacity;
			capacity = capacity * 2;

			T* temp = new T[capacity];

			for (int i = 0; i < currentSize; i++)
			{
				temp[i] = data[i];
			}

			delete[] data;
			data = temp;

			cout << "\n Dynamic resize triggered: Capacity "
				<< oldCapacity << " -> " << capacity;
		}

		data[currentSize] = element;
		currentSize++;
	}

	// Remove last element
	void pop_back()
	{
		if (currentSize == 0)
		{
			throw out_of_range("Cannot pop from an empty SafeArray!");
		}

		currentSize--;
	}

	// Return current number of elements
	size_t size()
	{
		return currentSize;
	}

	// Return capacity
	size_t getCapacity()
	{
		return capacity;
	}

	// Subscript operator
	T& operator[](int index)
	{
		if (index < 0 || index >= currentSize)
		{
			throw out_of_range(
				"Index " + to_string(index) + " out of bounds!"
			);
		}

		return data[index];
	}
};