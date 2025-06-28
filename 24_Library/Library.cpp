#include "Library.h"

void Library::AddBook(Book b)
{
	Book* temp = new Book[countBook + 1];
	for (int i = 0; i < countBook; i++)
	{
		temp[i] = books[i];
	}
	temp[countBook] = b;
	if (books != nullptr)
		delete[]books;
	books = temp;
	countBook++;
}
void Library::ShowLibrary() const
{
	cout << "Name : " << name << endl;
	cout << "Count books : " << countBook << endl;
	for (int i = 0; i < countBook; i++)
	{
		books[i].ShowInfo();
	}
}

Library::Library(const Library& other)//copy constructor
{
	this->name = other.name;
	this->countBook = other.countBook;
	//this->books = other.books;
	this->books = new Book[countBook];
	for (int i = 0; i < countBook; i++)
	{
		books[i] = other.books[i];
	}cout << "Copy constructor" << endl;
}

Library::Library(Library&& other)//MOve c-tor
{
	this->name = other.name;
	this->countBook = other.countBook;
	this->books = other.books;
	other.books = nullptr;
	cout << "Move constructor" << endl;
}

Library& Library::operator=(const Library& other)
{
	this->name = other.name;
	this->countBook = other.countBook;
	if (books != nullptr)
		delete[]books;
	this->books = new Book[countBook];
	for (int i = 0; i < countBook; i++)
	{
		books[i] = other.books[i];
	}
	cout << "operator =" << endl;
	return *this;
}
