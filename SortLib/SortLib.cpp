#include "stdafx.h"

#include "SortLib.h"
void swap(int* data, int a, int b)
{
	int c = data[a];
	data[a] = data[b];
	data[b] = c;
}


///Finding a median pivot point for partitioning
///Also, doing in place swapping since we might as well 
///while finding the median
int median(int* data, int low, int high)
{
	//this will round down to a valid int
	int mid = (low + high) / 2;
	if (data[mid] < data[low]) swap(data, low, mid);
	if (data[mid] > data[high]) swap(data, mid, high);

	return data[mid];
}


int partition(int * data, int low, int high)
{
	//Theoretically, the median value of the array is the best to use as a pivot
	//Which makes intuitive sense
	//A much more computationally easy approach is to find the median of the first,
	//last, and middle value
	int pivot = median(data, low, high);

	int i, j;
	i = low - 1;

	for (j = low; j <= high; ++j)
	{
		if (data[j] <= pivot)
		{
			i++;
			swap(data, i, j);
		}
	}

	swap(data, i + 1, high);
	return i + 1;
}

///Basic QuickSort algorithm
///Approach -> find a pivot element and set up rest of the array
///such that everything below the pivot is less than it and everything above
///is greater than the pivot
///Then recursively calls itself on the lower and upper halfs divided the pivot point
void SortLib::SortAlgos::quickSort(int * data, int low, int high)
{
	int p;
	//check that low and high are valid
	//----------todo more strigent validation

	if (low < high)
	{
		p = partition(data, low, high);
		quickSort(data, low, p - 1);
		quickSort(data, p + 1, high);
	}
}

void SortLib::SortAlgos::mergeSort(int * data, int low, int high)
{

}

void SortLib::SortAlgos::heapSort(int * data, int low, int high)
{

}

void SortLib::SortAlgos::insertSort(int * data, int low, int high)
{

}

void SortLib::SortAlgos::radixSort(int * data, int low, int high)
{

}
