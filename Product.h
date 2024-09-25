
#pragma once

#include<iostream>
#include<string>
using namespace std;

class Product
{

public:
	Product();
	string ProductName;
	string ProductCatagory;
	int ProductRating;
	int ProductPrice;

	Product* Left;
	Product* Right;

};