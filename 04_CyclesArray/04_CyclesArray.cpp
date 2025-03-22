#include <iostream>
using namespace std;

int main()
{
	//while
	//for
	////do while(){}
	//int i = 0;
	//while (i < 10)
	//{
	//	cout << i << " ";
	//	i++;
	//}
	//cout << endl;
	//int x = 0;
	//do
	//{
	//	cout << x << " ";
	//	x++;
	//} while (x < 10);

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << " ";
	//}
	/*
	int train[3];
	train[0] = 2;
	train[1] = 4;
	train[2] = 3;
	cout << train[0] << endl;
	cout << train[1] << endl;
	cout << train[2] << endl;

	int arr1[50];
	const int size = 5;
	//cout << "Enter size : ";
	//cin >> size;
	// ------------ 1 ----------
	//int arr[size];//empty 
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	// ------------ 2 ----------
	int arr[size] = { 1,2,3,4,5 };
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	// ------------ 3 ----------
	int arr2[size] = { 1,2 };
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;
	// ------------ 4 ----------
	int arr3[size] = {};
	for (int i = 0; i < size; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
	// ------------ 5 ----------
	for (int i = 0; i < size; i++)
	{
		cout << "Enter element in array by index [" << i << "]"<< endl;
		cin >> arr3[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;
	*/
	//1.Написати програму, яка знаходить суму всіх від'ємних значень у масиві.
	//2.Написати програму, яка знаходить мінімальне й мак -
	//симальне значення в масиві і виводить їх на екран.
	const int SIZE = 10;
	//int ARR[SIZE] = { 1,-5,4,-7,3,-6,2,-1,17,21 };
	int ARR[SIZE] = { -1,-5,-4,-7,-3,-6,-2,-1,-17,-21 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << ARR[i] << " ";
	}
	cout << endl; 
	int summa = 0;
	int max = ARR[0];
	int min = ARR[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (ARR[i] < 0)
		{
			summa += ARR[i];
		}
		if (ARR[i] > max)
		{
			max = ARR[i];
		}
		if (ARR[i] < min)
		{
			min = ARR[i];
		}
	}
	cout << "Summa negative elements = " << summa << endl;
	cout << "Max element = " << max << endl;
	cout << "Min element = " << min << endl;

	
}

