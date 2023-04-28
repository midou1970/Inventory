#pragma once
#include <string>;
using std::string;
#include "Category.h";

class Item
{
private:
	string m_name;
	int m_quntity;
	double m_price;
	double m_acount;
	Category &m_category;
public:
	string getName();
	int getQuantity();
	double getPrice();
	void displayItem();

	/*Item();*/
	Item(string name, int quantity, double price, Category &category);
	~Item();
};

