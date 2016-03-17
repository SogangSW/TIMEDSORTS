#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "ReadArrayFiledef.h"
#include "HeapSortdef.h"
#include "MergeSortdef.h"
#include "QuickSortdef.h"

long readIntoSort(char *fileName, long howMany)
{
	int holdNum;
	ifstream aFile;
	aFile.open(fileName);
	if (!aFile)
	{
		cout << "Error opening file";
	}

	int *yourArray = new int[howMany];

	for (int i = 0; i < howMany; i++)
	{
		aFile >> holdNum;
		yourArray[i] = holdNum;
	}

	int *copyArray = new int[howMany];
	memcpy(copyArray, yourArray, howMany*sizeof(int));
	HeapSort hs_Obj;
	hs_Obj.heapSort(copyArray, howMany);

	
}