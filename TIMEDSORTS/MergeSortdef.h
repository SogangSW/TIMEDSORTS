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
private:
	int comparisons;
	clock_t timeS;			//start clock
	clock_t timeE;			//end clock
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