#pragma once
#include "Item.h";
#include <vector>;

using namespace std;

class WareHouse
{
public:
	double m_balence;
	double m_maxMoney;
    double m_currentMoney;
	vector<Item> m_items;
public:
	WareHouse();
	WareHouse(double m_maxMoney);
	~WareHouse();

	void addItem(vector<Item> item) {};
	vector<Item> getListItems() {};
};

