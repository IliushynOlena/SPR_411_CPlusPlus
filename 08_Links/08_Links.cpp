#include <iostream>
using namespace std;

void ChangeNumber(int &a)
{
	a++;
}
int& FinMax(int& a, int& b)
{
	if (a > b)return a;
	else return b;

	int c = b;//3
	return c;
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
int& FindMax(int* arr, int size)
{
	int max = arr[0];
	int maxIndex = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > max)
		{
			max = *(arr + i);//46
			maxIndex = i;//7
		}
	}
	return arr[maxIndex];
}
int main()
{
	//Pointer
	int a = 22;
	cout << a << endl;
	int* pa = &a;
	cout << pa << endl;
	cout << *pa << endl;

	ChangeNumber(a);
	cout << "a = "<<  a << endl;

	//Link
	int b = 3;
	int& lb = b;
	cout << b << endl;
	cout << lb << endl;

	int & max = FinMax(a, b);
	cout << "Max = " << max << endl;
	max = 10;//0x285988 = 10
	cout << "Max = " << max << endl;
	FinMax(a, b) = 1;//0x285988 = 1
	cout << "a = "<< a << endl;
	cout << "b = "<<  b << endl;
	cout << "Max = " << max << endl;

	int c = 5;
	int& lc = c;
	cout << c << endl;
	cout << lc << endl;

	cout << "sum " << b + c << endl;
	cout << "sum " << lb + lc << endl;

	//int* pc;
	//pc = &c;
	//int& link;
	//link = c;

	srand(time(0));
	const int size = 10;
	int arr[size];
	cout << arr << endl;
	//FillArr(&arr[0], size);
	FillArr(arr, size);
	ShowArr(arr, size);
	int& link_max = FindMax(arr, size);
	cout << link_max << endl;
	link_max = 0;
	ShowArr(arr, size);
	



}
