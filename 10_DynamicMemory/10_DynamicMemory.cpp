#include <iostream>
using namespace std;

void Test1()
{
	const int size = 5;
	int arr[size];
}
void Test2()
{
	int size = 5;
	int* parr = new int[size];
	delete[]parr;
}

int* CreateArr(int size)//100
{
	int* arr = new int[size];
	return arr;
}

void FillArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void ShowArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
int main()
{
	srand(time(0));
	int size = 5;
	cout << "Enter size : ";
	cin >> size;
	int *arr = CreateArr(size);
	FillArr(arr, size);
	ShowArr(arr, size);

	delete[]arr;

	//int a = 100;//Stack
	//int* pa = new int(777);
	//cout << "address - "<< pa << endl;
	//cout << "value - "<< *pa << endl;

	//int b;
	//int* pb = new int;

	//int* pc = nullptr;
	////cout << *pc << endl;//error
	//pc = new int(12);

	//*pb = 25;

	//cout << "value *pa - " << *pa << endl;
	//cout << "value *pb - " << *pb << endl;
	//cout << "value *pc - " << *pc << endl;
	//delete pc;
	////pc = pa;
	//pc = new int(2);


	//delete pa;
	//delete pb;
	//delete pc;
}

