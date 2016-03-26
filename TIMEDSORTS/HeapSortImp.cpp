#include "HeapSortdef.h"
struct MaxHeap
{
	int a_size;
	int* array;
};

void HeapSort::swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void HeapSort::m_Heapify(int arr[], int i, int n)
{
	int left = 2 * n + 1;
	int right = 2 * n + 2;
	int largest;

	if ((left < i) && (arr[left] > arr[n]))
	{
		largest = left;
	}
	else
	{
		largest = n;
	}
	if ((right < i) && (arr[right] > arr[largest]))
	{
		largest = right;
	}
	if (largest != n)
	{
		swap(arr[n], arr[largest]);
		m_Heapify(arr, i, largest);
	}
}

void HeapSort::buildMaxHeap(int arr[], int size)
{
	for (double i = floor((size / 2)); i >= 0; i--)
	{
		m_Heapify(arr, size, i);
	}
}
void HeapSort::heapSort(int *q_array, int size)
{
	int heapsize = size;
	h_timeS = clock();
	buildMaxHeap(q_array, size);
	for (int i = size - 1; i >= 1; i--)
	{
		comparisons++;
		swap(q_array[0], q_array[i]);
		heapsize--;
		m_Heapify(q_array, heapsize, 0);
	}
	h_timeE = clock();
	h_time_Spent = (float)(h_timeE - h_timeS) / CLOCKS_PER_SEC;
	setHeapTime(h_time_Spent);
	setComparisons(comparisons);
}

void HeapSort::setComparisons(int comp)
{
	this->comparisons = comp;
}

int HeapSort::getComparisons()
{
	return this->comparisons;
}

void HeapSort::setHeapTime(float h_Time)
{
	this->h_time_Spent = h_Time;
}

float HeapSort::getHeapTime()
{
	return this->h_time_Spent;
}