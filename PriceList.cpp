#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "PriceList.h"
#include "PriceListItem.h"

using namespace std;

// Load information from a text file with the given filename.
void PriceList::createPriceListFromDatafile(string filename) {
	ifstream myfile(filename);

	if (myfile.is_open()) {
		cout << "Successfully opened file " << filename << endl;
		string name;
		string code;
		double price;
		bool taxable;
		while (myfile >> name >> code >> price >> taxable) {
			// cout << code << " " << taxable << endl;
			addEntry(name, code, price, taxable);
		}
		myfile.close();
	}
	else
		throw invalid_argument("Could not open file " + filename);
}

// return true only if the code is valid
bool PriceList::isValid(string code) const {
	bool found = true; 
	for (int i = 0; i < numItems; i++)
	{
		if (theList[i].getCode() == code)
			return found;
		else
			found = false; 
	}
	return found;
}

// return price, item name, taxable? as an ItemPrice object; throw exception if code is not found
	PriceListItem PriceList::getItem(const string code) const {
	PriceListItem * tmp = new PriceListItem;
	//put in a try statement
	for (int i = 0; i < 1000000; i++) {
		if (code == tmp[i].getCode()) {
			return tmp[i];
		}
		else {
			throw invalid_argument("Could find code " + code);
			return tmp[i];
		}
	}
}

// add to the price list information about a new item
void PriceList::addEntry(string itemName, string code, double price, bool taxable) { 
	PriceListItem newItem;
	newItem.setItemName(itemName); 
	newItem.setCode(code); 
	newItem.setPrice(price); 
	newItem.setTaxable(taxable);
	theList[numItems] = newItem; 
	numItems++;
}

//constructor
PriceList::PriceList() {
	numItems = 0; 
	theList = new PriceListItem[1000000];
}

//destructor
//something may be wwrong causes breakpoint error
PriceList::~PriceList() {
	delete [] theList;
	theList = NULL;
}


