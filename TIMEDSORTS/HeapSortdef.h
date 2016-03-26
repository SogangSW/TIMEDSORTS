#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

class HeapSort
{
public:
	HeapSort();
	~HeapSort();
	void swap(int& a, int& b);
	void m_Heapify(int arr[], int i, int n);
	void buildMaxHeap(int arr[], int n);
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