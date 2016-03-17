#pragma once
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using std::cout;
using std::ifstream;
class ReadArrayFile
{
public:
	ReadArrayFile();
	~ReadArrayFile();
	long readIntoSort(char *fileName, long howMany);

private:
	int *yourArray;
};

ReadArrayFile::ReadArrayFile()
{
}

ReadArrayFile::~ReadArrayFile()
{
}