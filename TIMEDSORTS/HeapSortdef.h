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
	void setHeapTime(double h_Time);
	double getHeapTime();
	void setComparisons(int comp);
	int getComparisons();
private:
	int comparisons;
	clock_t h_timeS;			//start clock
	clock_t h_timeE;			//end clock
	double h_time_Spent;
};

HeapSort::HeapSort()
{
	comparisons = 0;
	h_time_Spent = 0;
}

HeapSort::~HeapSort()
{
}