#include "HeapSortdef.h"
#include "MergeSortdef.h"
#include "QuickSortdef.h"
#include "ReadArrayFiledef.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#define FILE_NAME_10 "NumFile10.txt"
#define FILE_NAME_100 "NumFile100.txt"
#define FILE_NAME_1000 "NumFile1000.txt"
#define FILE_NAME_10000 "NumFile10000.txt"
#define FILE_NAME_100000 "NumFile100000.txt"

#define LIST_SIZE_10 10
#define LIST_SIZE_100 100
#define LIST_SIZE_1000 1000
#define LIST_SIZE_10000 100000
#define LIST_SIZE_100000 1000000

int main(void)
{
	ReadArrayFile sortFile;
	cout << "Sorting list of 10 numbers\n";
	sortFile.readIntoSort(FILE_NAME_10, LIST_SIZE_10);
	cout << "Sorting list of 100 numbers.\n";
	sortFile.readIntoSort(FILE_NAME_100, LIST_SIZE_100);
	cout << "Sorting list of 1000 numbers.\n";
	sortFile.readIntoSort(FILE_NAME_1000, LIST_SIZE_1000);
	cout << "Sorting list of 10000 numbers.\n";
	sortFile.readIntoSort(FILE_NAME_10000, LIST_SIZE_10000);
	cout << "Sorting list of 100000 numbers.\n";
	sortFile.readIntoSort(FILE_NAME_100000, LIST_SIZE_100000);

	cout << "DONE :D\n";

	getchar();
	return 0;
}