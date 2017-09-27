#include "PriceListItem.h"

PriceListItem::PriceListItem(const string &itemName, const string &code, double price, bool taxable) {
	name = itemName;
	bcode = code;
	cost = price;
	tax = taxable;
}

PriceListItem::PriceListItem() {
	name = "";
	bcode = "";
	cost = 0.00;
	tax = false;
}

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
void PriceListItem::setItemName(string itemName) {
	name = itemName;
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
