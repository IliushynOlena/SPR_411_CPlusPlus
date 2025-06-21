#include <iostream>
using namespace std;

class Square;
class Rectangle
{
    int h, w;
public:
    Rectangle() : h(0), w(0) {}
    Rectangle(int size) :h(size), w(size) {}
    Rectangle(int h, int w) :h(h), w(w) {}
    void Print()const
    {
        cout << "Height = " << h << endl;
        cout << "Width = " << w << endl;
    }
    //operator typename(){}
    //operator typename()const {}
    //explicit operator typename()const {}
    explicit operator int()
    {
        return h * w;
    }
    explicit operator Square();
};

class Square
{
    int side;
public:
    Square() :side(0) {}
    Square(int side) :side(side) {}
    void Print()const
    {
        cout << "Height = " << side << endl;
        cout << "Width = " << side << endl;
    }
    operator Rectangle()
    {
        return Rectangle(side, side + 10);
    }

};
Rectangle::operator Square()
{
    return Square(h + w);
}
int main()
{
    //int string bool char float double 
    int value = 9;// int ----> int
    //standart to standart
    double b = value;//int ----> double 9.00000000000000
    //standart to standart
    int r = b;//double -----> int  9

    //standart to abstract
    Rectangle rect(5, 10);//int ---> Rectangle

    // //standart to abstract
    Square sq(7);//int ---> Sqaure

    //abstract to  standart 
    value =(int) rect;//implicit
    cout << "Area : " << value << endl;
    //abstract to abstract
    rect = sq;
    rect.Print();
    //abstract to abstract
    sq =(Square) rect;
    sq.Print();
}




