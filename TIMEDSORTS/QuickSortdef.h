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
	void setQuickTime(double q_Time);
	int getQuickTime();
private:
	int comparisons;
	clock_t q_timeS;			//start clock
	clock_t q_timeE;			//end clock
	double q_time_Spent;		
};

QuickSort::QuickSort()
{
	comparisons = 0;
	q_time_Spent = 0;
}

QuickSort::~QuickSort()
{
}