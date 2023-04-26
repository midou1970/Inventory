#include "stdafx.h"
#include "Item.h"
#include "Category.h"
#include <iostream>



string Item::getName()
{
	return m_name;
}


int Item::getQuantity()
{
	return m_quntity;
}

double Item::getPrice()
{
	return m_price;
}

void Item::displayItem()
{
	
}

Item::Item(string name, int quantity, double price, Category &category)
{
	m_name = name;
	m_quntity = quantity;
	m_price = price;
}

Item::~Item()
{
}
