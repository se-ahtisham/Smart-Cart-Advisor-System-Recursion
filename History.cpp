#include"History.h"



History::History() {
	Root = NULL;
	count = 0;
}


void History::PurchaseProduct(string name, int price, string catagory)
{

	PurchaseHistoryNode* newnode = new PurchaseHistoryNode();
	newnode->name = name;
	newnode->price = price;
	newnode->catagory = catagory;

	if (Root == NULL)
	{
		cout << endl;
		Root = newnode;
		count++;
		cout << endl;
		return;
	}
	else
	{
		newnode->next = Root;
		Root = newnode;
		count++;
		cout << endl;
		return;
	}
}
void History::PrintallPurchaseHistory() {

	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is Purchased by user " << endl;
		cout << endl;
	}

	else
	{
		PurchaseHistoryNode* temp = Root;
		while (temp != NULL)
		{
			cout << " User Purchased Product Name is: " << temp->name << endl;;
			cout << " User Purchased Product Price is: " << temp->price << endl;
			cout << " User Purchased Product Catagory is: " << temp->catagory << endl;
			cout << endl;
			temp = temp->next;
		}
	}
}
