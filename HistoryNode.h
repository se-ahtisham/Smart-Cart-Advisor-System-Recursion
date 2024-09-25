#pragma once
#pragma once
#include"CustomerSearch.h"

class PurchaseHistoryNode
{
public:

	PurchaseHistoryNode();
	PurchaseHistoryNode* next;
	string name;
	int price;
	string catagory;
};
