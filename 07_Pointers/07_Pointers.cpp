#include <iostream>
using namespace std;

void ChangeNumber(int a)
{
    a++;
}

void ChangeNumber(int* a)
{
    (*a)++;
}
int FindMax(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    if (b > c && b > a)
    {
        return b;
    }
    return c;
}
int* FindMax(int *a, int *b, int *c)
{
    if (*a > *b && *a > *c)
    {
        return a;
    }
    if (*b > *c && *b > *a)
    {
        return b;
    }
    return c;
}
int main()
{
    int x = 0, y = 0, z = 0;
    cout << "Enter x, y , z : ";
    cin >> x >> y >> z;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    int max = FindMax(x, y, z);
    cout << "Max = " << max << endl;
    max++;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "Max = " << max << endl;
    int* pmax = FindMax(&x, &y, &z);
    cout << "pmax = " << pmax << endl;
    (*pmax)++;
    cout << "max = " << *pmax << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;



    int a = 0;
    cout << "a = " << a << endl;
    ChangeNumber(a);
    cout << "a = " << a << endl;
    ChangeNumber(&a);
    cout << "a = " << a << endl;


    //int a = 5;
    //int b = 10;
    //cout << a << endl;
    //cout << b << endl;
    ////створимо вказівник
    //int* pa = &a;
    //int* pb = &b;
    //cout << pa << endl;
    //cout << pb << endl;
    //cout << *pa << endl;
    //cout << *pb << endl;
    //cout << "summa 1 = " << a + b << endl;
    //cout << "summa 2 = " << (*pa) + (*pb) << endl;
    //pa = &b;
    //*pa += 2;
    //cout << b << endl;
    //cout << *pa << endl;
    //cout << *pb << endl;

    const int size = 5;
    int arr[size];
    int* parr = &arr[0];//0x21545
    //example 1
    //for (int i = 0; i < size; i++)
    //{
    //    //arr[i] = rand() % 100;
    //    *(parr + i) = rand() % 100;
    //}
    //for (int i = 0; i < size; i++)
    //{
    //    //arr[i] = rand() % 100;
    //    cout << *(parr + i) << " ";
    //}
    //cout << endl;
    //cout << parr << endl;
    //cout << arr << endl;
    //cout << *arr << endl;
    //cout << *parr << endl;
    //cout << *(parr + 1 )<< endl;
    //cout << *parr + 1 << endl;
    //cout << *(parr + 2) << endl;
    //cout << *parr << endl;
    //for (int i = 0; i < size; i++)
    //{
    //    //arr[i] = rand() % 100;
    //   cout<< *(parr + i) <<" ";
    //}

    /*
    //example 2
    for (int i = 0; i < size; i++)
    {
        *parr = rand() % 100; 
        parr++;//++ --> increment        
    }
    parr = arr;
    for (int i = 0; i < size; i++)
    {       
       cout<< *parr <<" ";
       parr++;
    }
    cout << endl;
    int* newp = arr;
    *newp = 0;

    newp +=2;
    *newp = 0;
    parr = arr;
    for (int i = 0; i < size; i++)
    {

        cout << *parr << " ";
        parr++;
    }
    cout << endl;
    parr--;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr--;
    }

    */



}

