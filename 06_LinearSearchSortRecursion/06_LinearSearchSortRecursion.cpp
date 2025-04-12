#include <iostream>
using namespace std;

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int LinearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
	return -1;
}
void SelectSort(int arr[], int size)
{
	//3 3 9 6 8 7
	int temp, index;
	for (int i = 0; i < size; i++)
	{
		//i = 2;
		index = i;//0
		temp = arr[i];//4

		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < temp)
			{
				temp = arr[j];//3
				index = j;//1
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;

		}
	}
}
void BubbleSort(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)//20  --- 1
	{
		for (int j = size - 1; j > i; j--)// j = 17
		{
			//1 2 4 5 8 9 7 6
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void ShakerSort(int arr[], int size)
{
	int j, index = size - 1;//19
	int left = 1, right = size - 1;
	int temp;
	do
	{
		for (j = right; j >= left; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				index = j;//0
			}
		}
		left = index + 1;
		for (j = left; j <= right; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				index = j;//19
			}
		}
		right = index - 1;
	} while (left < right);

}
void InsertSort(int arr[], int size)
{
	//11 4 2 7 3 11 8 9 6 
	int temp;
	int j;
	for (int i = 0; i < size; i++)
	{
		//i = 1;		
		temp = arr[i];//4
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			//j = 0
			//arr[j + 1] = 4
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}

}
void Foo(int a)
{
	if (a < 1)
		return;//break
	cout << "Hello world " << a  << endl;
	a--;
	Foo(a);
}
int SummaElments(int arr[], int size, int index)//size = 20 index =  0
{
	/*int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += arr[i];
	}
	return summa;*/
	if (index == size - 1)
	{
		return arr[index];
	}
	else
	{

		return arr[index] + SummaElments(arr, size, index + 1);
	}

}
void QuickSort(int arr[], int B, int E)
{
	int i = B, j = E;
	int temp, p;
	p = arr[(B + E)/2];
	do
	{
		while (arr[i] < p)i++;
		while (arr[j] > p)j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);
	if (B < j)QuickSort(arr, B, j);
	if (i < E)QuickSort(arr, i, E);
}
int BinarySearch(int arr[], int size, int key)
{
	int B = 0, E = size - 1;
	while (true)
	{
		int p = (B + E) / 2;
		if (key > arr[p])
		{
			B = p + 1;
		}
		else if (key < arr[p])
		{
			E = p - 1;
		}
		else if (key == arr[p])
		{
			return p;
		}
		if (B > E)return -1;
	}
}
int main()
{
	Foo(10);


	srand(time(0));
	const int size = 20;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);
	QuickSort(arr, 0, size - 1);
	//SelectSort(arr, size);
	//BubbleSort(arr, size);
	//ShakerSort(arr, size);
	//InsertSort(arr, size);
	//cout << "Summa elements : " << SummaElments(arr, size, 0);
	ShowArray(arr, size);
	// 
	int searchKey, indexFind;
	cout << "Enter key to search : ";
	cin >> searchKey;

	//indexFind = LinearSearch(arr, size, searchKey);
	indexFind = BinarySearch(arr, size, searchKey);
	if (indexFind != -1)
	{
		cout << "The key [" << searchKey << "] was found in index " << indexFind << endl;
	}
	else
	{
		cout << "Key not found" << endl;
	}











}
