#include"CustomerSearch.h"


Search::Search()
{
	Root = NULL;
	count = 0;
}
void Search::InsertSearchHistroy(string name, int price, string catagory) {
	SearchNode* newnode = new SearchNode();
	newnode->name = name;
	newnode->price = price;
	newnode->catagory = catagory;

	if (Root == NULL)
	{
		cout << endl;
		Root = newnode;
		count++;
		return;
	}
	else
	{
		newnode->next = Root;
		Root = newnode;
		count++;
		return;
	}
}
void Search::PrintallSearch() {
	if (Root == NULL)
	{
		cout << endl;
		cout << " Nothing is Search by user " << endl;
		cout << endl;
	}

	else
	{
		SearchNode* temp = Root;
		while (temp != NULL)
		{
			cout << " User Search Product Name is: " << temp->name << endl;
			cout << " User Search Product Price is: " << temp->price << endl;
			cout << " User Search Product catagory is: " << temp->catagory << endl;
			cout << endl;
			temp = temp->next;
		}
	}
}