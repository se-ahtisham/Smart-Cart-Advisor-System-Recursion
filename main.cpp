#include"History.h"



void intro()
{
	cout << endl;
	cout << "\t\t\t ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
	cout << "\t\t\t :::::::::::  Welcome To E-commerce Recommendation system  :::::::::: " << endl;
	cout << "\t\t\t ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: " << endl;
	cout << endl;
}




int main()
{
	intro();
	int choice = 1;
	string name = "";
	string catagory = "";
	int rating = 0;
	int price = 0;


	string searchcatagpry = "";
	string purchasecatagory = "";


	BinarySearchTree B1;
	Search S1;
	History H1;



	while (choice != 0)
	{
		int userchoice = 0;
		cout << endl;

		cout << " Press 1. To Insert Product By Recursion " << endl;	
		cout << " Press 2. To Search and purchased Product (Price) By Recursion " << endl;
		cout << " Press 3. To Search and purchased Product (Name) By Recursion " << endl;
		cout << " Press 4. To Update Product Details (Name) By Recursion " << endl;
		cout << " Press 5. To Update Product Details (Price) By Recursion " << endl;
		cout << " Press 6. To Find Most Expensive One Product By Recursion" << endl;
		cout << " Press 7. To Find Cheap One Product By Recursion " << endl;
		cout << " Press 8. Print line by line Expansive product by recursion " << endl;
		cout << " Press 9. Print line by line Cheap product by recursion " << endl;
		cout << " Press 10. To Show Products in Pre_Order " << endl;
		cout << " Press 11. To Show Products in In_Order " << endl;
		cout << " Press 12. To Show Products in Post_Order " << endl;
		cout << " Press 13. To Delete Product By Price" << endl;
		cout << " Press 14. To Delete Product By Name " << endl;
		cout << " Press 15. To View Search History " << endl;
		cout << " Press 16. To View Purchased History " << endl;
		cout << " Press 17. To View Recommended Items " << endl;
		cout << " Press 18. To Test code " << endl;


		cout << endl;
		cout << " Please Enter Your Choice >>>>>  ";
		cin >> userchoice;
		switch (userchoice)
		{
		case 1: // To Insert Product By Recursion 
		{
			cout << endl;
			cout << " Please Enter Product Name: ";
			cin >> name;
			cout << " Please Enter Product Catagory: ";
			cin >> catagory;
			cout << " Please Enter Product Raking: ";
			cin >> rating;
			cout << " Please Enter Product Price: ";
			cin >> price;
			B1.InsertProductByRecursion(B1.Root, name, catagory, rating, price);
			cout << endl;
		}
		break;
		case 2: // Search and purchased Product (Price) By Recursion 
		{
			cout << endl;
			cout << " Please Enter Product Price: ";
			cin >> price;
			cout << " Please Enter Product Catagory: ";
			cin >> catagory;
			B1.SearchProductByRecursion(B1.Root, price, catagory);
			cout << endl;
			int userchoice = 0;
			cout << " Please Enter 1. If you Want to Purchase this item " << endl;
			cout << " Please Enter 2. If you ar Not Intreested " << endl;
			cout << " >> Please Enter Your Choice:  ";
			cin >> userchoice;
			switch (userchoice)
			{
			case 1:
			{
				searchcatagpry = catagory;
				purchasecatagory = catagory;
				S1.InsertSearchHistroy(name, price, catagory);
				H1.PurchaseProduct(name, price, catagory);
				cout << " Congratulation Item Purchased Successfully :) " << endl;
				cout << endl;
			}
			break;

			case 2:
			{
				searchcatagpry = catagory;
				S1.InsertSearchHistroy(name, price, catagory);
				break;
			}
			break;

			default:
			{
				cout << endl;
				cout << " Error! Invlid Input :( " << endl;
			}
			break;
			}
		}
		break;
		case 3: // To Search Product and purchased (Name) By Recursion
		{
			cout << endl;
			cout << " Please Enter Product Name: ";
			cin >> name;
			cout << " Please Enter Product Price: ";
			cin >> price;
			cout << " Please Enter Product Catagory: ";
			cin >> catagory;
			B1.SearchProductBynameByrecursion(B1.Root, name, price, catagory);
			cout << endl;
			int userchoice = 0;
			cout << " Please Enter 1. If you Want to Purchase this item " << endl;
			cout << " Please Enter 2. If you ar Not Intreested " << endl;
			cout << " >> Please Enter Your Choice:  ";
			cin >> userchoice;
			switch (userchoice)
			{
			case 1:
			{
				searchcatagpry = catagory;
				purchasecatagory = catagory;
				S1.InsertSearchHistroy(name, price, catagory);
				H1.PurchaseProduct(name, price, catagory);
				cout << " Congratulation Item Purchased Successfully :) " << endl;
				cout << endl;
			}
			break;

			case 2:
			{
				searchcatagpry = catagory;
				S1.InsertSearchHistroy(name, price, catagory);
				break;
			}
			break;

			default:
			{
				cout << endl;
				cout << " Error! Invlid Input :( " << endl;
			}
			break;
			}

		}
		break;
		case 4:  // To Update Product Details (Name) By Recursion
		{
			cout << endl;
			cout << " Please Enter Product Name: ";
			cin >> name;
			cout << " Please Enter Product Price: ";
			cin >> price;
			B1.UpdateProductBynameByrecursion(B1.Root, name, price);
			cout << endl;
		}
		break;
		case 5: // To Update Product Details By Recursion by price
		{
			cout << endl;
			cout << " Please Enter Product Price: ";
			cin >> price;
			B1.UpdateProductByRecursion(B1.Root, price);
			cout << endl;
		}
		break;
		break;
		case 6: //Find Expensive One Product By Recursion perfect
		{
			cout << endl;
			B1.PrintMostMaxmiumPriceProductByrecursion(B1.Root);
			cout << endl;

		}
		break;
		case 7: // Print one cheap product by recursion
		{
			cout << endl;
			B1.PrintMostMinimumPriceProductByrecursion(B1.Root);
			cout << endl;
		}
		break;
		case 8: // Print line by line Expansive product by recursion
		{
			B1.PrintMaxmiumPriceProductByrecursion(B1.Root);
		}
		break;
		case 9: // Print line by line Cheap product by recursion 
		{
			B1.PrintMinimumPriceProductByrecursion(B1.Root);
		}
		break;
		case 10:  // Preorder
		{
			cout << endl;
			B1.PreOrderPrint(B1.Root);
			cout << endl;

		}
		break;
		case 11: // Inorder
		{
			cout << endl;
			B1.InOrderPrint(B1.Root);
			cout << endl;
		}
		break;
		case 12: // post order
		{
			cout << endl;
			B1.PostOrderPrint(B1.Root);
			cout << endl;
		}
		break;
		case 13: // To Delete by price
		{
			cout << endl;
			cout << "Pease Enter Product Price: ";
			cin >> price;
			B1.DeleteProductbyPrice(B1.Root,price);
			cout << endl;
		}
		break;
		case 14: //To Delete by Name
		{
			cout << endl;
			cout << "Pease Enter Product Name: ";
			cin >> name;
			cout << " Please Enter Product Price: ";
			cin >> price;
			B1.DeleteProductbyName(B1.Root,name, price);
			cout << endl;
		}
		break;
		case 15: //To Print Search Histroy
		{
			cout << endl;
			S1.PrintallSearch();
			cout << endl;
		}
		break;
		case 16: //To Print Purchased Histroy
		{
			cout << endl;
			H1.PrintallPurchaseHistory();
			cout << endl;
		}
		break;
		case 17: //To Print recommened items
		{
			cout << endl;
			cout << "-------------------------------------------" << endl;
			int counter = 0;  // 0
			int reccounter = 0;  // 0
			int limit = 7;  // Limit the search to 7 items
			int reclimit = 3;  // Limit the search to 7 items

			B1.recommensearchitems(B1.Root, searchcatagpry, counter, limit);
			B1.recommenuyitems(B1.Root, purchasecatagory, reccounter, reclimit);
			cout << endl;
		}
		break;
		case 18: //Only for test
		{
			BinarySearchTree bst;

			for (int i = 1; i <= 20; ++i) {
				bst.InsertProductByRecursion(bst.Root, "BeautyProduct" + to_string(i), "Beauty", i, i * 10);
			}

			for (int i = 21; i <= 40; ++i) {
				bst.InsertProductByRecursion(bst.Root, "PowerProduct" + to_string(i - 20), "Power", i, i * 10);
			}

			for (int i = 41; i <= 50; ++i) {
				bst.InsertProductByRecursion(bst.Root, "KidsProduct" + to_string(i - 40), "Kids", i, i * 10);
			}

			cout << endl;
			cout << "-------------------------------------------" << endl;

			string beautyCategory = "Beauty";
			int counter = 0;
			int reccounter = 0;
			int limit = 7;
			int reclimit = 3;
			bst.recommensearchitems(bst.Root, beautyCategory, counter, limit);
			bst.recommenuyitems(bst.Root, beautyCategory, reccounter, reclimit);
		}
		break;

		default:
		{
			cout << endl;
			cout << " Error! Invlid Input :( " << endl;
		}
		break;

		} // Switch Brackets

		cout << " Press any key to run again and Press to exit " << endl;
		cout << " Please Enter Your Choice:  ";
		cin >> choice;
		cout << endl;
	} // while Loop Brackets



	system("Pause");
}