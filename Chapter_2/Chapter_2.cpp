#include <stdio.h>
#include "SortAlgorithms.h"
#include "Utils.h"

int main()
{
    int testArray[] = { 5, 2, 4, 6, 1, 3 };
    int length = (int)(sizeof(testArray) / sizeof(testArray[0]));

    insertionSort(testArray, length);

    printArray(testArray, length);

    return 0;
}