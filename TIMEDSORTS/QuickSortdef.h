#pragma once

#include <stdio.h>
#include <time.h>
#include <iostream>

class QuickSort
{
public:
	QuickSort();
	~QuickSort();
	void swap(int* a, int* b);
	void quickSort(int arr[], int start, int end);
	void setQuickTime(float q_Time);
	float getQuickTime();
	void setComparisons(int comp);
	int getComparisons();
private:
	int comparisons;
	clock_t q_timeS;			//start clock
	clock_t q_timeE;			//end clock
	float q_time_Spent;
};

QuickSort::QuickSort()
{
	comparisons = 0;
	q_time_Spent = 0;
}

QuickSort::~QuickSort()
{
}