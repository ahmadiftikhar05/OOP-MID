#pragma once
#include<iostream>
#include<vector>
using namespace std;
class books
{
private:
	string bookName;
	int prince;
	vector<string>booksAvailable = { "Atomic Habits" , "Rich Dad , PoorDad"};
public:
	void displayBooksAvailable()
	{
		if (booksAvailable.empty())
		{
			cout << "No Available books left" << endl;
		}
		else
		{
			cout << "Available books are " << endl;
			for (int i = 0; i < booksAvailable.size(); i++)
			{
				cout << i + 1 << ") " << booksAvailable[i] << endl;
			}
		}
	}
	string getBook(int book_choice)
	{
		return booksAvailable[book_choice - 1];

	}
	void removeBook(string book_remove)
	{
		for (auto it = booksAvailable.begin(); it != booksAvailable.end(); it++)
		{
			if (*it == book_remove)
			{
				booksAvailable.erase(it);
				return;
			}
		}
	}


};

