#pragma once


#include"HistoryNode.h"

class History
{

public:
	History();
	PurchaseHistoryNode* Root;
	int count;

	void PurchaseProduct(string name, int price, string catagory);
	void PrintallPurchaseHistory();

};
