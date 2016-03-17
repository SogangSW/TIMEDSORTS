#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
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

	for (int j = start; j <= end - 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
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
