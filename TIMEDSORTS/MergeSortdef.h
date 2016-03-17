#pragma once
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class MergeSort
{
public:
	MergeSort();
	~MergeSort();
	void merge(int arr[], int a, int b, int c);
	void mergeSort(int arr[], int z, int x);
	void setMergeTime(double m_Time);
	int getMergeTime();
private:
	int comparisons;
	clock_t m_timeS;			//start clock
	clock_t m_timeE;			//end clock
	double time_Spent;
};

MergeSort::MergeSort()
{
	comparisons = 0;
	time_Spent = 0;
}

MergeSort::~MergeSort()
{
}