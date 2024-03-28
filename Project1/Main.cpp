#include<iostream>
#include"Shopping_cart.h"
#include"books.h"
using namespace std;

books book1;
shopping_cart cart1;
int choice, book_choice;
string bookNeeded;

int main()
{
	do {
		cout << "-------Welcome to Books Store--------" << endl;
		cout << "1) See Available books." << endl;
		cout << "2) See Your Cart." << endl;
		cout << "3) Add books to cart" << endl;
		cout << "4) Checkout" << endl;
		cout << "5) Exit." << endl;
		cout << "Enter Your choice = ";
		cin >> choice;
		if (choice == 1)
		{
			book1.displayBooksAvailable();
		}
		else if (choice == 2)
		{
			cart1.viewCart();
		}
		else if (choice == 3)
		{
			do
			{
				cout << "Which book you would like to add to cart = " << endl;
				cin >> book_choice;
				if (book_choice == 1 || book_choice == 2)
				{
					bookNeeded = book1.getBook(book_choice);
					cart1.addToCart(bookNeeded);
					book1.removeBook(bookNeeded);
				}
			} while (book_choice != 1 && book_choice != 2);

		}
		else if (choice == 4)
		{
			cart1.checkout();
		}
		else if (choice == 5)
		{
			break;
		}
		else
		{
			cout << "Invalid input" << endl;
		}
	} while (choice != 5);
	return 0;
}

