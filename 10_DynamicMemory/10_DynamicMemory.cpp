#include <iostream>
#include <conio.h>
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
int* AddNumber(int* arr, int *size, int number)
{
	(*size)++;//size = 6
	int* temp = new int[*size];
	for (int i = 0; i < (*size) - 1; i++)
	{
		temp[i] = arr[i];
	}
	temp[(*size) - 1] = number;
	delete[]arr;
	arr = temp;
	return arr;
}
int *AddByPosition(int* arr, int* size, int number, int pos)
{
	if (pos > *size) pos = *size;
	if (pos < 0) pos = 0;
	(*size)++;//size = 6
	int* temp = new int[*size];
	for (int i = 0; i < pos; i++)
	{
		temp[i] = arr[i];
	}
	temp[pos] = number;
	for (int i = pos; i < *size; i++)
	{
		temp[i + 1] = arr[i];
	}	delete[]arr;
	arr = temp;
	return arr;
}
int main()
{
	srand(time(0));
	int size = 5;
	/*cout << "Enter size : ";
	cin >> size;*/
	int *arr = CreateArr(size);
	FillArr(arr, size);
	ShowArr(arr, size);

	int number;
	char choice = 'y';
	while (true)
	{
		cout << "Do you want to add number in arr ? y/n";
		choice = _getch();
		//cin >> choice;
		if (choice == 'n')break;

		cout << "Enter number : ";
		cin >> number;//14
	/*	arr = AddNumber(arr, &size, number);
		system("cls");
		ShowArr(arr, size);*/
		arr = AddByPosition(arr, &size, 100, 3);
		ShowArr(arr, size);
	}




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

