#include "ReadArrayFiledef.h"
#include "HeapSortdef.h"
#include "MergeSortdef.h"
#include "QuickSortdef.h"
using std::cout;
using std::endl;
long ReadArrayFile::readIntoSort(char *fileName, long howMany)
{
	int holdNum;
	ifstream aFile;
	aFile.open(fileName);
	if (!aFile)
	{
		cout << "Error opening file\n";
		getchar();
		return 0;
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
	cout << "Number of comparisons: " << hs_Obj.getComparisons() << endl;
	cout << "Time for Heap Sort in seconds: " << hs_Obj.getHeapTime() << endl;
	memcpy(copyArray, yourArray, howMany*sizeof(int));
	MergeSort ms_Obj;
	ms_Obj.mergeSort(copyArray, 0, howMany - 1);
	cout << "Number of comparisons: " << ms_Obj.getComparisons() << endl;
	cout << "Time for Merge Sort in seconds: " << ms_Obj.getMergeTime() << endl;
	memcpy(copyArray, yourArray, howMany*sizeof(int));
	QuickSort qs_Obj;
	qs_Obj.quickSort(copyArray, 0, howMany - 1);
	cout << "Number of comparisons: " << qs_Obj.getComparisons() << endl;
	cout << "Time for Quick Sort in seconds: " << qs_Obj.getQuickTime() << endl;
	cout << endl;
	cout << endl;
	delete[] copyArray;
	delete[] yourArray;

	return 0;
}