#pragma once
#include"CustomerSearchNode.h"



class Search
{
public:

	Search();
	SearchNode* Root;
	int count;

	void InsertSearchHistroy(string name, int price, string catagory);
	void PrintallSearch();
};

