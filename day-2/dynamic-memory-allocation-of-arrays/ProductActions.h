#pragma once
#include"Product.h"

class ProductActions {

public:

	static void allocate(Product*& pArray, int nop) {

		pArray = new Product[nop];

		for (int i = 0;i < nop;i++) {

			cout << "Enter the details for product " << i + 1 << endl;

			pArray[i].accept();

		}

	}
};
