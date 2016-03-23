#pragma once
#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using std::cout;
using std::endl;
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