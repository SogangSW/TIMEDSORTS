#include "QuickSortdef.h"

void QuickSort::swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

int QuickSort::partition(int arr[], int start, int end)
{
	int pivot = arr[end];		//pivot
	int i = (start - 1); //index of smaller element
	 
	for (int j = start; j < end - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
			comparisons++;
			i++;
			swap(&arr[i], &arr[j]);
		}
	}

	swap(&arr[i + 1], &arr[end]);
	return (i + 1);
}

void QuickSort::quickSort(int arr[], int start, int end)
{
	if (start < end)
	{
		int pi = partition(arr, start, end);

		quickSort(arr, start, pi - 1);
		quickSort(arr, pi + 1, end);
	}
}

void QuickSort::setComparisons(int comp)
{
	this->comparisons = comp;
}

int QuickSort::getComparisons()
{
	return this->comparisons;
}

void QuickSort::setQuickTime(double q_Time)
{
	this->q_time_Spent = q_Time;
}

double QuickSort::getQuickTime()
{
	return this->q_time_Spent;
}