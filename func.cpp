#include"lib.h"


unsigned int arr_MaxSubSum1(int* arr, int n)
{
	unsigned int start_time = clock(); // начальное время

	int MaxSum = 0, Sum = 0;
	for (int i = 0; i < n; i++)
	{

		if (arr[i] + Sum > 0)
		{
			Sum = Sum + arr[i];
		}
		else
		{
			Sum = 0;
		}
		if (Sum > MaxSum)
		{
			MaxSum = arr[i] + Sum;
		}
	}
	unsigned int end_time = clock(); // конечное время
	unsigned int search_time = end_time - start_time; // искомое время

	return (search_time);

}


float arr_insert(int* arr, int n)
{
	unsigned int start_time = clock(); // начальное время

	int index, value;
	while (true)
	{
		index=128333%n;
		value = arr[6%n];

		if (index <= n || index > 0)
		{
			arr[index - 1] = value;
			break;
		}
	}
	unsigned int end_time = clock(); // конечное время
	unsigned int search_time = end_time - start_time; // искомое время

	return (search_time);
}

//32,767

float arr_delete(int* arr, int n)
{
	unsigned int start_time = clock(); // начальное время

	int index;
	while (true)
	{
		index = 128333 % n;
		if (index <= n || index > 0)
		{
			arr[index] = -32777;
			break;
		}
	}
	unsigned int end_time = clock(); // конечное время
	unsigned int search_time = end_time - start_time; // искомое время

	return (search_time);
}

float arr_search(int* arr, int n)
{
	unsigned int start_time = clock(); // начальное время

	int value;
	value = arr[266624%n];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == value)
		{
			unsigned int end_time = clock(); // конечное время
			unsigned int search_time = end_time - start_time; // искомое время
			return (search_time);
			break;
		}
	}
	unsigned int end_time = clock(); // конечное время
	unsigned int search_time = end_time - start_time; // искомое время

	return (search_time);
}

float arr_display(int* arr, int n)
{
	unsigned int start_time = clock(); // начальное время

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != -32777)
		{
			//cout << i + 1 << ": " << arr[i] << endl;
		}
	}
	unsigned int end_time = clock(); // конечное время
	unsigned int search_time = end_time - start_time; // искомое время

	return (search_time);
}

void init_arr(int* arr, int n)
{

	for (int i = 0; i < 3; i++)
	{
		arr[i] = rand(); // запись случайного числа, которое вернет rand()
	}
	return;
}
