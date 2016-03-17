#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include "MergeSortdef.h"

void MergeSort::merge(int arr[], int a, int b, int c)
{
	int num1 = b - a + 1;
	int num2 = c - b;

	int *L;
	int *R;

	L = new int[num1];
	R = new int[num2];

	for (int i = 0; i < num1; i++)
	{
		L[i] = arr[a + 1];
	}

	for (int j = 0; j < num2; j++)
	{
		R[j] = arr[b + 1 + j];
	}

	int z = 0;		//Initial index of first subarray
	int x = 0;		//Initial index of second subarray
	int c = a;		//Initial index of merged subarray

	while (z < num1 && x < num2)
	{
		if (L[z] <= R[x])
		{
			arr[c] = L[z];
			z++;
		}
		else
		{
			arr[c] = R[x];
			x++;
		}
		c++;			//Heh :]
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (z < num1)
	{
		arr[c] = L[z];
		z++;
		c++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (x < num2)
	{
		arr[c] = R[x];
		x++;
		c++;
	}
}

void MergeSort::mergeSort(int arr[], int z, int x)
{
	if (z < x)
	{
		int m = z + (x - 1) / 2;

		mergeSort(arr, z, m);
		mergeSort(arr, m + 1, x);

		merge(arr, z, m, x);
	}
}