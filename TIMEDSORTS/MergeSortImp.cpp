#include "MergeSortdef.h"

int MergeSort::min(int x, int y)
{
	return (x < y) ? x : y;
}

void MergeSort::merge(int arr[], int a, int b)
{
	int mid = floor((a + b) / 2);
	int i1 = 0;
	int i2 = a;
	int i3 = mid + 1;
	int *temp = NULL;


	temp = new int[b - a + 1];

	while (i2 <= mid && i3 <= b)
	{
		if (arr[i2] < arr[i3])
		{
			temp[i1++] = arr[i2++];
		}
		else
		{
			arr[i1++] = arr[i3++];
		}
	}

	while (i3 < b)
	{
		temp[i1++] = arr[i3++];
	}
	for (int i = a; i <= b; i++)
	{
		arr[i] = temp[i - a];
	}
	delete[] temp;

}

void MergeSort::mergeSort(int arr[], int z, int x)
{
	m_timeS = clock();
	if (z < x)
	{
		
		comparisons++;
		int mid = floor((z + x) / 2);
		mergeSort(arr, z, mid);
		mergeSort(arr, mid + 1, x);
		merge(arr, z, x);
		
	}
	m_timeE = clock();

	m_time_Spent = (float)(m_timeE - m_timeS) / CLOCKS_PER_SEC;
	setMergeTime(m_time_Spent);
	setComparisons(comparisons);
}

void MergeSort::setComparisons(int comp)
{
	this->comparisons = comp;
}

int MergeSort::getComparisons()
{
	return this->comparisons;
}

void MergeSort::setMergeTime(float m_Time)
{
	this->m_time_Spent = m_Time;
}

float MergeSort::getMergeTime()
{
	return this->m_time_Spent;
}