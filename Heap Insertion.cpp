#include<iostream>
using namespace std;

void heapinsert(int a[], int& size, int value)
{
	size = size + 1;
	a[size] = value;
	int i = size;

	while (i > 1)
	{
		int parent = i / 2;
		if (a[parent] < a[i])
		{
			swap(a[parent],a[i]);
			i = parent;
		}
		else
		{
			return;
		}
	}
}

void main()
{
	const int Size = 5;
	int a[Size] = {};
	int size = 0;

	heapinsert(a, size, 1);
	heapinsert(a, size, 3);
	heapinsert(a, size, 2);
	heapinsert(a, size, 7);

	for (int i = 1; i <=size; i++)
	{
		cout << a[i] << " ";
	}

}