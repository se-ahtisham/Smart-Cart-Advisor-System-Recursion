#include"BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() {
	Root = NULL;
	count = 0;
}


void BinarySearchTree::InsertProductByRecursion(Product*& product, string Name, string category, int rating, int price)
{
	if (product == NULL)
	{
		Product* newProduct = new Product();
		newProduct->ProductName = Name;
		newProduct->ProductCatagory = category;
		newProduct->ProductRating = rating;
		newProduct->ProductPrice = price;
		product = newProduct;
		cout << "Product Insert Successfully :)" << endl;
		count++;
		return;
	}

	if (price > product->ProductPrice)
	{
		InsertProductByRecursion(product->Right, Name, category, rating, price);
	}
	else if (price < product->ProductPrice)
	{
		InsertProductByRecursion(product->Left, Name, category, rating, price);
	}
}

void BinarySearchTree::SearchProductByRecursion(Product*& product, int price, string catagory)
{

	if (product == NULL)
	{
		return;
	}

	if (price > product->ProductPrice)
	{
		SearchProductByRecursion(product->Right, price, catagory);
	}
	else if (price < product->ProductPrice)
	{
		SearchProductByRecursion(product->Left, price, catagory);
	}

	else if (price == product->ProductPrice && catagory == product->ProductCatagory)
	{
		cout << " ::::: Found ::::: " << endl;
		cout << " Product Name is: " << product->ProductName << endl;
		cout << " Product Catagory is: " << product->ProductCatagory << endl;
		cout << " Product Price is: " << product->ProductPrice << endl;
		cout << " Product Rating is: " << product->ProductRating << endl;
		cout << endl;
		return;
	}

	else
	{
		cout << " ::::: Not Found ::::: " << endl;
		return;
	}

}
void BinarySearchTree::SearchProductBynameByrecursion(Product*& Product, string name, int price, string catagory) {
	if (Product == NULL)
	{
		return;
	}

	if (price > Product->ProductPrice)
	{
		SearchProductBynameByrecursion(Product->Right, name, price, catagory);
	}
	else if (price < Product->ProductPrice)
	{
		SearchProductBynameByrecursion(Product->Left, name, price, catagory);
	}

	else if (name == Product->ProductName && price == Product->ProductPrice)
	{
		cout << " ::::: Found ::::: " << endl;
		cout << " Product Name is: " << Product->ProductName << endl;
		cout << " Product Catagory is: " << Product->ProductCatagory << endl;
		cout << " Product Price is: " << Product->ProductPrice << endl;
		cout << " Product Rating is: " << Product->ProductRating << endl;
		cout << endl;
		return;
	}
	else
	{
		cout << " ::::: Not Found ::::: " << endl;
		return;
	}

}

void BinarySearchTree::UpdateProductByRecursion(Product* product, int OldPrice) {
	if (product == NULL) {
		cout << "Product with old price " << OldPrice << " not found." << endl;
		return;
	}

	if (OldPrice > product->ProductPrice) {
		UpdateProductByRecursion(product->Right, OldPrice);
	}
	else if (OldPrice < product->ProductPrice) {
		UpdateProductByRecursion(product->Left, OldPrice);
	}
	else {
		cout << "Found product with old price " << OldPrice << ":" << endl;
		cout << "Product Name: " << product->ProductName << endl;
		cout << "Product Category: " << product->ProductCatagory << endl;
		cout << "Product Price: " << product->ProductPrice << endl;
		cout << "Product Rating: " << product->ProductRating << endl;
		cout << endl;

		// Get new details from the user
		string newName, newCategory;
		int newRating;

		cout << "Enter new details:" << endl;
		cout << "New Product Name: ";
		cin >> newName;
		cout << "New Product Category: ";
		cin >> newCategory;
		cout << "New Product Rating: ";
		cin >> newRating;

		// Update product details
		product->ProductName = newName;
		product->ProductCatagory = newCategory;
		product->ProductRating = newRating;

		cout << "Updated details:" << endl;
		cout << "Product Name: " << product->ProductName << endl;
		cout << "Product Category: " << product->ProductCatagory << endl;
		cout << "Product Price: " << product->ProductPrice << endl;
		cout << "Product Rating: " << product->ProductRating << endl;
		cout << endl;

		return;
	}
}
void BinarySearchTree::UpdateProductBynameByrecursion(Product*& product, string name, int price) {
	if (product == NULL) {
		return;
	}

	if (price > product->ProductPrice) {
		UpdateProductBynameByrecursion(product->Right, name, price);
	}
	else if (price < product->ProductPrice) {
		UpdateProductBynameByrecursion(product->Left, name, price);
	}
	else if (name == product->ProductName && price == product->ProductPrice)
	{
		cout << "Found product with name '" << name << "':" << endl;
		cout << "Old Details:" << endl;
		cout << "Product Name: " << product->ProductName << endl;
		cout << "Product Category: " << product->ProductCatagory << endl;
		cout << "Product Price: " << product->ProductPrice << endl;
		cout << "Product Rating: " << product->ProductRating << endl;
		cout << endl;

		// Get new details from the user
		string newCategory;
		int newRating, newName;

		cout << "Enter new details:" << endl;
		cout << "New Product Price: ";
		cin >> newName;
		cout << "New Product Category: ";
		cin >> newCategory;
		cout << "New Product Rating: ";
		cin >> newRating;

		// Update product details
		product->ProductCatagory = newCategory;
		product->ProductName = newName;
		product->ProductRating = newRating;

		cout << "Updated details:" << endl;
		cout << "Product Name: " << product->ProductName << endl;
		cout << "Product Category: " << product->ProductCatagory << endl;
		cout << "Product Price: " << product->ProductPrice << endl;
		cout << "Product Rating: " << product->ProductRating << endl;
		cout << endl;

		return;
	}
}


void BinarySearchTree::PrintMostMaxmiumPriceProductByrecursion(Product*& Product)
{
	if (Product == NULL)
	{
		return;
	}
	else if (Product->Right == NULL)
	{
		cout << "The Product Name is: " << Product->ProductName << endl;
		cout << "The Product Price is: " << Product->ProductPrice << endl;
		cout << "-----------------------------" << endl;
	}
	else
	{
		return PrintMostMinimumPriceProductByrecursion(Product->Right);
	}
} // Print one expensive product by recursion
void BinarySearchTree::PrintMostMinimumPriceProductByrecursion(Product*& Product)
{
	if (Product == NULL)
	{
		return;
	}
	else if (Product->Left == NULL)
	{
		cout << "The Product Name is: " << Product->ProductName << endl;
		cout << "The Product Price is: " << Product->ProductPrice << endl;
		cout << "-----------------------------" << endl;
	}
	else
	{
		return PrintMostMinimumPriceProductByrecursion(Product->Left);
	}

} // Print one cheap product by recursion
void BinarySearchTree::PrintMaxmiumPriceProductByrecursion(Product*& Product) {

	if (Product == NULL)
	{
		return;
	}

	else
	{
		cout << "The Product Name is: " << Product->ProductName << endl;
		cout << "The Product Price is: " << Product->ProductPrice << endl;
		cout << "-----------------------------" << endl;
		return PrintMaxmiumPriceProductByrecursion(Product->Right);
	}
}  // Print line by line expansive product by recursion
void BinarySearchTree::PrintMinimumPriceProductByrecursion(Product*& Product) {
	if (Product == NULL)
	{
		return;
	}

	else
	{
		cout << "The Product Name is: " << Product->ProductName << endl;
		cout << "The Product Price is: " << Product->ProductPrice << endl;
		cout << "-----------------------------" << endl;
		return PrintMaxmiumPriceProductByrecursion(Product->Left);
	}
} // Print line by line cheap product by recursion


void BinarySearchTree::PreOrderPrint(Product*& temp)
{
	if (temp == NULL)
	{
		return;
	}
	cout << "The Product Name is: " << temp->ProductName << endl;
	cout << "The Product Price is: " << temp->ProductPrice << endl;
	cout << "-----------------------------" << endl;
	PreOrderPrint(temp->Left);
	PreOrderPrint(temp->Right);
}
void BinarySearchTree::InOrderPrint(Product*& temp) {


	if (temp == NULL)
	{
		return;
	}
	PreOrderPrint(temp->Left);
	cout << "The Product Name is: " << temp->ProductName << endl;
	cout << "The Product Price is: " << temp->ProductPrice << endl;
	cout << "-----------------------------" << endl;
	PreOrderPrint(temp->Right);
}
void BinarySearchTree::PostOrderPrint(Product*& temp) {
	if (temp == NULL)
	{
		return;
	}
	PreOrderPrint(temp->Left);
	PreOrderPrint(temp->Right);
	cout << "The Product Name is: " << temp->ProductName << endl;
	cout << "The Product Price is: " << temp->ProductPrice << endl;
	cout << "-----------------------------" << endl;
}


void BinarySearchTree::recommensearchitems(Product*& product, string& category, int& counter, int& limit)
{

	if (product == nullptr || counter >= limit)
	{
		return;
	}

	else if (category == product->ProductCatagory)
	{
		cout << " ::::: Try this Product ::::: " << endl;
		cout << " Product Name is: " << product->ProductName << endl;
		cout << " Product Category is: " << product->ProductCatagory << endl;
		cout << " Product Price is: " << product->ProductPrice << endl;
		cout << " Product Rating is: " << product->ProductRating << endl;
		cout << " ----------------------------------------- " << endl;
		cout << endl;
		counter++;
	}

	recommensearchitems(product->Left, category, counter, limit);
	recommensearchitems(product->Right, category, counter, limit);

}
void BinarySearchTree::recommenuyitems(Product*& product, string& category, int& reccounter, int& reclimit)
{

	if (product == nullptr || reccounter >= reclimit)
	{
		return;
	}

	else if (category == product->ProductCatagory)
	{
		cout << " ::::: Try this Product ::::: " << endl;
		cout << " Product Name is: " << product->ProductName << endl;
		cout << " Product Category is: " << product->ProductCatagory << endl;
		cout << " Product Price is: " << product->ProductPrice << endl;
		cout << " Product Rating is: " << product->ProductRating << endl;
		cout << " ----------------------------------------- " << endl;
		cout << endl;
		reccounter++;

	}

	recommenuyitems(product->Left, category, reccounter, reclimit);
	recommenuyitems(product->Right, category, reccounter, reclimit);
}

void BinarySearchTree::DeleteProductbyPrice(Product*& root, int price) {
	if (root == nullptr) {
		cout << "Product not found" << endl;
		return;
	}

	if (price < root->ProductPrice) {
		DeleteProductbyPrice(root->Left, price);
	}
	else if (price > root->ProductPrice) {
		DeleteProductbyPrice(root->Right, price);
	}
	else {
		if (root->Left == nullptr) {
			Product* temp = root->Right;
			delete root;
			root = temp;
		}
		else if (root->Right == nullptr) {
			Product* temp = root->Left;
			delete root;
			root = temp;
		}
		else {
			Product* temp = root->Right;
			while (temp->Left != nullptr) {
				temp = temp->Left;
			}

			root->ProductPrice = temp->ProductPrice;
			root->ProductName = temp->ProductName;
			root->ProductCatagory = temp->ProductCatagory;
			root->ProductRating = temp->ProductRating;

			DeleteProductbyPrice(root->Right, temp->ProductPrice);
		}
	}
}
void BinarySearchTree::DeleteProductbyName(Product*& root, string name, int price) {
	if (root == nullptr) {
		cout << "Product not found" << endl;
		return;
	}

	if (price < root->ProductPrice) {
		DeleteProductbyName(root->Left, name, price);
	}
	else if (price > root->ProductPrice) {
		DeleteProductbyName(root->Right, name, price);
	}
	else {
		// Found the node with matching price
		if (root->ProductName != name) {
			cout << "Product name does not match" << endl;
			return;
		}

		if (root->Left == nullptr) {
			Product* temp = root->Right;
			delete root;
			root = temp;
		}
		else if (root->Right == nullptr) {
			Product* temp = root->Left;
			delete root;
			root = temp;
		}
		else {
			Product* temp = root->Right;
			while (temp && temp->Left != nullptr) {
				temp = temp->Left;
			}

			root->ProductPrice = temp->ProductPrice;
			root->ProductName = temp->ProductName;
			root->ProductCatagory = temp->ProductCatagory;
			root->ProductRating = temp->ProductRating;

			DeleteProductbyName(root->Right, temp->ProductName, temp->ProductPrice);
		}
	}
}

