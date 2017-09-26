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

