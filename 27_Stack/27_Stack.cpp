#include <iostream>
using namespace std;

class MyClass
{
    //default constructor
    //copy constructor
    //destructor
    //operator =
public:
    MyClass() = default;  
    MyClass(const MyClass& other) = delete;
    ~MyClass() = default;
};

//class Stack
//{
//    enum { EMPTY = -1, FULL = 9 };
//
//    int arr[FULL + 1];// 10
//    int topIndex;
//public:
//    //delete default
//    Stack()
//    {
//        topIndex = EMPTY;
//    }
//    ~Stack() = default;
//   
//    bool IsFull()
//    {
//        return topIndex == FULL;
//    }
//    bool Push(int value)
//    {
//        if (!IsFull())
//        {
//            topIndex++;
//            arr[topIndex] = value;
//            return true;
//        }
//        return false;
//    }
//    bool IsEmpty()
//    {
//        return topIndex == EMPTY;
//    }
//    int Pop()
//    {
//        if (!IsEmpty())
//        {
//            
//            return arr[topIndex--];
//        }
//        return 0;
//    }
//    void Clear()
//    {
//        topIndex = EMPTY;
//    }
//    int Peek()
//    {
//        if (!IsEmpty())
//        {
//
//            return arr[topIndex];
//        }
//        return 0;
//    }
//    int GetSize()
//    {
//        return topIndex + 1;
//    }
//    void Print()
//    {
//        for (int i = 0; i <= topIndex; i++)
//        {
//            cout << arr[i] << " ";
//        }cout << endl;
//    }
//};
class Stack
{
    enum { EMPTY = -1};

    int* arr;
    int maxSize;
    int topIndex;
public:
   
    Stack() = delete;
    Stack(int size):maxSize(size)//50
    {
        //size < 0 throw 
        arr = new int[size];//50
        topIndex = EMPTY;
    }
    ~Stack()
    {
        if (arr != nullptr)
            delete[]arr;
    }

    bool IsFull()
    {
        return topIndex == maxSize-1;
    }
    bool Push(int value)
    {
        if (!IsFull())
        {
            
            arr[++topIndex] = value;
            return true;
        }
        return false;  //stack is full throw 
    }
    bool IsEmpty()
    {
        return topIndex == EMPTY;
    }
    int Pop()
    {
        if (!IsEmpty())
        {

            return arr[topIndex--];
        }
        return 0;  //stack is empty throw 
    }
    void Clear()
    {
        topIndex = EMPTY;
    }
    int Peek()
    {
        if (!IsEmpty())
        {

            return arr[topIndex];
        }
        return 0;//stack is empty throw 
    }
    int GetSize()
    {
        return topIndex + 1;
    }
    void Print()
    {
        for (int i = 0; i <= topIndex; i++)
        {
            cout << arr[i] << " ";
        }cout << endl;
    }
};

int main()
{
  /*  const int size = 100;
    int arr[size] = {};

    int* arr = new int[10000] {};

    delete[]arr;*/

  /*  MyClass cl;
    MyClass copy(cl);*/
    Stack st(60);
    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(40);
    st.Push(50);
    cout << "Size : " << st.GetSize() << endl;
    st.Print();
    cout << "Last element  : " << st.Peek() << endl;

    while (!st.IsEmpty())
    {
        cout << "Delete element : " << st.Pop() << endl;
    }
    cout << "Size : " << st.GetSize() << endl;



}
