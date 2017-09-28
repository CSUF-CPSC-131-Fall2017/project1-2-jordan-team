#include "PriceListItem.h"

PriceListItem::PriceListItem(const string &itemName, const string &code, double price, bool taxable) {
	setItemName(itemName);
	setCode(code);
	setPrice(price);
	setTaxable(taxable);																																																																																						
}

PriceListItem::PriceListItem() {
	name = "";
	bcode = "";
	cost = 0.00;
	tax = false;
}

//get functions return value
string PriceListItem::getItemName() {
	return name;
}

string PriceListItem::getCode() {
	return bcode;
}

double PriceListItem::getPrice() {
	return cost;
}

bool PriceListItem::isTaxable() {
	return tax;
}

//set functions set value
void PriceListItem::setItemName(string ItemName) {
	name = ItemName;
}
void PriceListItem::setCode(string code) {
	bcode = code;
}
void PriceListItem::setPrice(double price) {
	cost = price;
}
void PriceListItem::setTaxable(bool taxable) {
	tax = taxable;
}


