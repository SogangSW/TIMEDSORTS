#include "QuickSortdef.h"

void QuickSort::swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void QuickSort::quickSort(int arr[], int start, int end)
{
	int i = start;
	int j = end;
	int tmp;
	int pivot = arr[(start + end) / 2];

	while (i <= j)
	{
		comparisons++;
		while (arr[i] < pivot)
		{
			i++;
		}
		while (arr[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};
	if (start < j)
	{
		quickSort(arr, start, j);
	}
	if (i < end)
	{
		quickSort(arr, i, end);
	}
	setComparisons(comparisons);
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