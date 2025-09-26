#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
int Bubblesort(int* arr, int len);
int printarr(int* arr, int len);
int main(void) {
	int arry[10];
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		arry[i]=rand() % 100;
	}
	 int len = sizeof(arry) / sizeof(arry[0]);
	 for (int i = 0; i < 10; i++) {
		 cout << arry[i] << ' ';
	 }
	 cout << "\n";
	 Bubblesort( arry,  len);
	 printarr(arry,len );
	return 0;
}
int Bubblesort(int* arr, int len) {
	int i, j, temp;
	for (i = 0; i < len; i++) {
		for (j = 0; j < len - i - 1; j++)
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
	}
	return 0;
}
int printarr(int* arr, int len) {
	int i = 0;
	for (i = 0; i < len; i++) {
		cout << *arr<< ' ';
		arr++;
	}
	return 0;
}