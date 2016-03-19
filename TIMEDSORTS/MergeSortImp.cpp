#include "MergeSortdef.h"

void MergeSort::merge(int arr[], int a, int b, int c)
{
	int num1 = c - a + 1;
	int num2 = b - a;

	int *L = NULL;
	int *R = NULL;

	L = new int[num1];
	R = new int[num2];

	for (int i = 0; i < num1; i++)
	{
		L[i] = arr[a + 1];
	}

	for (int j = 0; j < num2; j++)
	{
		R[j] = arr[c + 1 + j];
	}

	int z = 0;		//Initial index of first subarray
	int x = 0;		//Initial index of second subarray
	int p = a;		//Initial index of merged subarray

	while (z < num1 && x < num2)
	{
		if (L[z] <= R[x])
		{
			arr[p] = L[z];
			z++;
		}
		else
		{
			arr[p] = R[x];
			x++;
		}
		p++;			
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (z < num1)
	{
		arr[p] = L[z];
		z++;
		p++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (x < num2)
	{
		arr[p] = R[x];
		x++;
		p++;
	}
	delete[] L;	
	delete[] R;
}

void MergeSort::mergeSort(int arr[], int z, int x)
{
	if (z < x)
	{
		int m = z + x / 2;

		mergeSort(arr, z, m);
		mergeSort(arr, m + 1, x);

		merge(arr, z, m, x);
	}
	return;
}

void MergeSort::setComparisons(int comp)
{
	this->comparisons = comp;
}

int MergeSort::getComparisons()
{
	return this->comparisons;
}

void MergeSort::setMergeTime(double m_Time)
{
	this->m_time_Spent = m_Time;
}

double MergeSort::getMergeTime()
{
	return this->m_time_Spent;
}