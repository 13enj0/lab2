#include "MassSort.h"
#include <iostream>


void MassSort::indexsort(int arr[], int len)
{
	for (int startIndex = 0; startIndex < len-1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int index = startIndex + 1; index < len; ++index)
		{

			if (arr[index] < arr[smallestIndex])
				smallestIndex = index;
		}

		std::swap(arr[startIndex], arr[smallestIndex]);
	}


}

void MassSort::booblsort(int array[], int len)
{
	int tmp;
	int x = 0;
	for (int i = len - 1; i > x; i--)
	{
		for (int j = len - 1; j > x; j--) {
			if (array[j] < array[j - 1]) {
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;

			}

		}
	}

}

void MassSort::vstavkasort(int array[], int len)
{
	int buff = 0;
	int j;
	for (int i = 1; i < len; i++)
	{
		buff = array[i];
		for (j = i - 1; j >= 0 && array[j] > buff; j--)
			array[j + 1] = array[j];

		array[j + 1] = buff;
	}

}
void MassSort::shakesort(int arr[], int n)
{
	int m = 0;
	int left = 0, right = n - 1;
	int last = right;
	while (left < right) {
		m++;
		for (int i = left; i < right; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				last = i;
			}
		}
		right = last;
		for (int i = right; i > left; i--) {
			if (arr[i] < arr[i - 1]) {
				swap(arr[i], arr[i - 1]);
				last = i;
			}
		}
		left = last;
		

	}
}

void MassSort::swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

