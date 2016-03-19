#include "ReadArrayFiledef.h"
#include "HeapSortdef.h"
#include "MergeSortdef.h"
#include "QuickSortdef.h"

long ReadArrayFile::readIntoSort(char *fileName, long howMany)
{
	int holdNum;
	ifstream aFile;
	aFile.open(fileName);
	if (!aFile)
	{
		cout << "Error opening file\n";
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
	hs_Obj.heapSort(copyArray, howMany - 1);
	memcpy(copyArray, yourArray, howMany*sizeof(int));
	MergeSort ms_Obj;
	ms_Obj.mergeSort(copyArray, 0, howMany - 1);
	memcpy(copyArray, yourArray, howMany*sizeof(int));
	QuickSort qs_Obj;
	qs_Obj.quickSort(copyArray, 0, howMany - 1);
	delete[] copyArray;
	delete[] yourArray;

	return 0;
}