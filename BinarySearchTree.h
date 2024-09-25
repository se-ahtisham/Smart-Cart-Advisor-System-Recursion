
#pragma once
#include"Product.h"


class BinarySearchTree
{

public:
	Product* Root;
	int count;

	BinarySearchTree();


	void InsertProductByRecursion(Product*& product, string Name, string catagory, int rating, int price);
	void SearchProductByRecursion(Product*& product, int price, string catagory);
	void SearchProductBynameByrecursion(Product*& Product, string name, int price, string catagory);
	void UpdateProductByRecursion(Product* product, int OldPrice);
	void UpdateProductBynameByrecursion(Product*& Product, string name, int price);
	void PrintMaxmiumPriceProductByrecursion(Product*& Product);
	void PrintMinimumPriceProductByrecursion(Product*& Product);
	void PrintMostMaxmiumPriceProductByrecursion(Product*& Product);
	void PrintMostMinimumPriceProductByrecursion(Product*& Product);

	void PreOrderPrint(Product*& temp);
	void InOrderPrint(Product*& temp);
	void PostOrderPrint(Product*& temp);

	void DeleteProductbyPrice(Product*& root, int price);
	void DeleteProductbyName(Product*& root,string name, int price);

	void recommensearchitems(Product*& product, string& category, int& counter, int& limit);
	void recommenuyitems(Product*& product, string& catagory, int& reccounter, int& reclimit);
};