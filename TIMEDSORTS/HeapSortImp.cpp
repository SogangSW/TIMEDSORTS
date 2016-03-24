#include "HeapSortdef.h"
struct MaxHeap
{
	int a_size;
	int* array;
};

void HeapSort::m_Heapify(struct MaxHeap* maxHeap, int index)
{
	int largest = index;
	int left = (index << 1) + 1;
	int right = (index + 1) << 1;

	if (left < maxHeap->a_size && maxHeap->array[left] > maxHeap->array[largest])
	{
		largest = left;
	}

	if (right < maxHeap->a_size && maxHeap->array[right] > maxHeap->array[largest])
	{
		largest = right;
	}

	if (largest != index)
	{
		swap(&maxHeap->array[largest], &maxHeap->array[index]);
		m_Heapify(maxHeap, largest);
	}
}

struct MaxHeap* HeapSort::makeHeap(int *t_array, int size)
{
	struct MaxHeap* maxHeap = (struct MaxHeap*) malloc(sizeof(struct MaxHeap));
	maxHeap->a_size = size;
	maxHeap->array = t_array;

	for (int i = (maxHeap->a_size - 2) / 2; i >= 0; --i)
	{
		m_Heapify(maxHeap, i);
	}

	return maxHeap;
}
void HeapSort::heapSort(int *q_array, int size)
{
	struct MaxHeap* maxHeap = makeHeap(q_array, size);

	while (maxHeap->a_size > 1)
	{
		swap(&maxHeap->array[0], &maxHeap->array[maxHeap->a_size - 1]);
		comparisons++;
	}

	setComparisons(comparisons);
}

void HeapSort::swap(int* a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void HeapSort::setComparisons(int comp)
{
	this->comparisons = comp;
}

int HeapSort::getComparisons()
{
	return this->comparisons;
}

void HeapSort::setHeapTime(double h_Time)
{
	this->h_time_Spent = h_Time;
}

double HeapSort::getHeapTime()
{
	return this->h_time_Spent;
}