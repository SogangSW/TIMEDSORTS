#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <cmath>

class MergeSort
{
public:
	MergeSort();
	~MergeSort();
	void merge(int arr[], int a, int b);
	int min(int x, int y);
	void mergeSort(int arr[], int z, int x);
	void setMergeTime(float m_Time);
	float getMergeTime();
	void setComparisons(int comp);
	int getComparisons();
private:
	int comparisons;
	clock_t m_timeS;			//start clock
	clock_t m_timeE;			//end clock
	float m_time_Spent;
};

MergeSort::MergeSort()
{
	comparisons = 0;
	m_time_Spent = 0;
}

MergeSort::~MergeSort()
{
}