#pragma once
#include <string>
using namespace std;

class PriceListItem {
public:
	//constructors
	PriceListItem();
	PriceListItem(const string &itemName, const string &code, double price, bool taxable);

	//get functions
	string getItemName();
	string getCode();
	double getPrice();
	bool isTaxable();

	//set functions
	void setItemName(string);
	void setCode(string);
	void setPrice(double);
	void setTaxable(bool);


private:
	string name;
	string bcode;
	double cost;
	bool tax;
};
