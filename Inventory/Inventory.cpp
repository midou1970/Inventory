// Inventory.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h";
#include "Item.h";
#include <iostream>;
#include <vector>;
#include "WareHouse.h";


int main()
{

	/*Category* cat1 = new Category("Fruit");*/

	//Category* cat1 = new Category("Fruit");

	/*Item* item1 = new Item(string("banan"), 12, 1.50, cat1);*/

	//Category cat1 = Category(string(""Fruit""));
	

	Item item1 = Item(string("banan"), 12, 1.50, Category("Fruit"));
	
	vector<Item> items;

	items.push_back(item1);

	WareHouse wh;

	wh.addItem(items);



	//std::cout << cat1->getCatName() << std::endl;

	std::cout << item1.getCategory().getCatName() << std::endl;


	system("pause");
    return 0;
}

