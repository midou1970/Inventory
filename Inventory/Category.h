#pragma once
#include <string>;
using std::string;

class Category
{
public:
	string m_catName;
public:
	string getCatName();
	Category();
	Category(string name);
	~Category();
};

