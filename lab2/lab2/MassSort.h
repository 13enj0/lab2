#pragma once
class MassSort
{
public:
	void indexsort(int array[], int len);
	void booblsort(int array[], int len);
	void vstavkasort(int array[], int len);
	void shakesort(int arr[], int n);
private:
	// Функція для обміну двох елементів масиву
	void swap(int& a, int& b);
};

