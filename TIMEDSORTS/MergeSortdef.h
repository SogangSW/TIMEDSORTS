#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

class MergeSort
{
public:
	MergeSort();
	~MergeSort();
	void merge(int arr[], int a, int b, int c);
	void mergeSort(int arr[], int z, int x);
	void setMergeTime(double m_Time);
	double getMergeTime();
	void setComparisons(int comp);
	int getComparisons();
private:
	int comparisons;
	clock_t m_timeS;			//start clock
	clock_t m_timeE;			//end clock
	double m_time_Spent;
};

MergeSort::MergeSort()
{
	comparisons = 0;
	m_time_Spent = 0;
}

MergeSort::~MergeSort()
{
}