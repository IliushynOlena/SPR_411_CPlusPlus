#include "Library.h"

Library TestLibrary(Library& lib)//copy c-tor
{
   // Library temp = lib;
    //some code 
    return lib;
}


int main()
{
	//Book b;
	//b.ShowInfo();

    Book book1( "C++ for Begginers", "Stiven Prata",2000,  1500, ScienceFiction);
    //Book book2("Harry Potter",  "J.K.Rowling", 1997,  800, Fantasy);
    //Book book3("Sherlock Holmes", "Arthur Conan Doyle", 1887, 2000, Genre::Detective);
    //Book book4("Java for kids", "Morgan Nick", 2015,408, ScienceFiction);
    //Book book5("Mowgli", "Pantera", 1893,  500, Genre::Fantasy);
    //Book book6("Financier", "Dreiser Theodore", 1911,  377, Genre::ScienceFiction);
  
    //book3.ShowInfo();

    Library lib("Library Rivne");
    lib.AddBook(book1);
    lib.AddBook(Book("Harry Potter", "J.K.Rowling", 1997, 800, Fantasy));
    lib.AddBook(Book("Sherlock Holmes", "Arthur Conan Doyle", 1887, 2000, Genre::Detective));
    lib.AddBook(Book("Java for kids", "Morgan Nick", 2015, 408, ScienceFiction));
    lib.AddBook(Book("Mowgli", "Pantera", 1893, 500, Genre::Fantasy));
    lib.AddBook(Book("Financier", "Dreiser Theodore", 1911, 377, Genre::ScienceFiction));
    lib.ShowLibrary();

    //Library copy(lib);
    //cout << "Copy Library : " << endl;
    //copy.ShowLibrary();

   // cout << "***************************" << endl;
   // Library l = TestLibrary(lib);
    //l.ShowLibrary();
    cout << "New Library  Copy: " << endl;
    Library newLib(lib);
    newLib.ShowLibrary();

    cout << "New Library  operator =: " << endl;
    newLib = lib;
    newLib.ShowLibrary();

    Library new2;//default c-tor
    new2 = newLib;
    int a = 1, b = 2, c = 3;
    a = b = c;//<--------------------------
    cout << a << b << c << endl;
    new2 = newLib = lib;
}

