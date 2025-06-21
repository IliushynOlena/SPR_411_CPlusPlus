#include <iostream>
#include <string>
using namespace std;

void doSomething(long number) {

}
float SomeFucn()
{
	return 1.35; // double(16) ---> float(8)
}
class Array
{
	int* arr;
	int size;
public:
	explicit Array(int size = 10)
	{
		this->size = size;
		arr = new int[size];		
	}
	~Array()
	{
		delete[]arr;
	}
	int getSize()const
	{
		return size;
	}
	int getValue(int index)
	{
		return arr[index];
	}
	int operator [](int index)
	{
		return arr[index];
	}
	void AddNumber(int number)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] += number;
		}
	}
	void operator()(int number)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] += number;
		}
	}
	void operator()(int number, int index)
	{		
			arr[index] += number;		
	}
	void setValue(int value, int index)
	{
		arr[index] = value;
	}
	void display(int index)const
	{
		cout << arr[index] << " ";
	}
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	operator string()
	{
		string res = "";
		for (int i = 0; i < size; i++)
		{
			res += to_string( arr[i]) + " ";
		}
		return res;
	}
};

void Display(const Array& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		arr.display(i);
	}
	cout << endl;
}
int main()
{
	const int a = 7;
	int b = 7;
	//implicit - неявне 
	//double a(10);// int ----> double  10.000000000000000000
	//int a = 3.33;//double  ---> int   3

	doSomething(9);//int -----> long

	double res = 5.0 / 4;
	int number1 = 3.33;
	//explicit - явне
	int number = (int) 3.33;
	int size = 5;
	Array array(size);//parametrized c-tor
	for (int i = 0; i < array.getSize(); i++)
	{
		array.setValue(size - i, i);
	}
	Display(array);
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;	
	cout << "First element in array : " << array.getValue(0) << endl;
	cout << "First element in array : " << array[0] << endl;
	array.AddNumber(5);
	Display(array);
	array(2);
	Display(array);
	array(10, 0);
	Display(array);
	cout << (string)array << endl;
	// students[0]
	//cout << "First element in array : " << university[0] << endl;
	//Display(15);//int ----> Array
	//Array test = 14;//int ----> Array
	//Display(test);


}

