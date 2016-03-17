#pragma once
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <time.h>

class QuickSort
{
public:
	QuickSort();
	~QuickSort();
	void swap(int* a, int* b);
	int partition(int arr[], int start, int end);
	void quickSort(int arr[], int start, int end);
private:
	int comparisons;
	clock_t timeS;			//start clock
	clock_t timeE;			//end clock
	double time_Spent;		
};

QuickSort::QuickSort()
{
	comparisons = 0;
	time_Spent = 0;
}

QuickSort::~QuickSort()
{
}