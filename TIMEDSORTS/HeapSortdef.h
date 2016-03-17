#pragma once
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class HeapSort
{
public:
	HeapSort();
	~HeapSort();
	void swap(int *a, int* b);
	void m_Heapify(struct MaxHeap* maxHeap, int index);
	struct MaxHeap* makeHeap(int *t_array, int size);
	void heapSort(int* q_array, int size);
private:
	int comparisons;
	clock_t timeS;			//start clock
	clock_t timeE;			//end clock
	double time_Spent;
};

HeapSort::HeapSort()
{
	comparisons = 0;
	time_Spent = 0;
}

HeapSort::~HeapSort()
{
}