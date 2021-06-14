#pragma once
#include <stdio.h>

void printArray(int values[], int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		printf("%d\t", values[i]);
	}
}