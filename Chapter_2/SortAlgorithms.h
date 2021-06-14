#pragma once
#include "Utils.h"

void insertionSort(int unorderedValues[], int length)
{
	int i; 

	for (i = 1; i < length; i++)
	{
		int key = unorderedValues[i];

		int j = i - 1;

		while (j > -1 && unorderedValues[j] > key)
		{
			unorderedValues[j + 1] = unorderedValues[j];
			j = j - 1;
		}

		unorderedValues[j + 1] = key;
	}
}