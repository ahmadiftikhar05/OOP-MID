
#pragma once
#include<iostream>
#include<vector>
using namespace std;
class shopping_cart
{
private:
	vector<string>cart;

public:
	void addToCart(string book)
	{
		cart.push_back(book);
		cout << "Book added to cart" << endl;
	}
	void removeFromCart(string book)
	{
		for (auto it = cart.begin(); it != cart.end(); it++)
		{
			if (book == *it)
			{
				cart.erase(it);
				cout << "Book is removed from cart" << endl;
				return;
			}
		}
		cout << "Book not found in your cart" << endl;
	}
	void viewCart()
	{
		if (cart.empty())
		{
			cout << "Cart is empty" << endl;
		}
		else
		{
			cout << "Books in cart are" << endl;
			for (int i = 0; i < cart.size(); i++)
			{
				cout << i + 1 << ") " << cart[i] << endl;
			}
		}
	}
	void checkout()
	{
		if (cart.empty())
		{
			cout << "Your cart is empty" << endl;
		}
		else
		{
			cout << "Pay your bill " << endl;
			system("pause");
			cout << "Parchased succefuly" << endl;
			cart.empty();
		}
    }

};

