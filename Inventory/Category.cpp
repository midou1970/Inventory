#include "stdafx.h"
#include "Category.h"



//string Category::getCatName()
//{
//	return m_catName;
//}

string Category::getCatName()
{
	return m_catName;
}

Category::Category()
{
}

Category::Category(string name)
{
	m_catName = name;
}

Category::~Category()
{
}
