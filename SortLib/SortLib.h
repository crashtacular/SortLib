#pragma once

using namespace System;

namespace SortLib {
	class SortAlgos
	{
	public:
		///Takes a array and performs quicksort on the section between low and high indices
		///
		void quickSort(int* data, int low, int high);
		void mergeSort(int* data, int low, int high);
		void heapSort(int * data, int low, int high);
		void insertSort(int* data, int low, int high);
		void radixSort(int* data, int low, int high);

	};
}
