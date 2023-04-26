#include "stdafx.h"
#include "WareHouse.h"
#include <vector>;


WareHouse::WareHouse()
{
}

WareHouse::WareHouse(double m_maxMoney)
{
}

WareHouse::~WareHouse()
{
}

  void WareHouse::addItem(vector<Item> items) {

	  m_items = items;
};

  vector<Item> WareHouse::getListItems() {
  
	  return m_currentMoney;
  };