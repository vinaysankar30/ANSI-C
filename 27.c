/*
27. Write a C program to swap two arrays using pointers. Use 3 functions inputArray(),
outputArray(), and swapArray()
*/

#include <stdio.h>
#define MAX 10
void inputArray(int arr[]){
	for(int i=0;i<MAX;i++){
		scanf("%d",&arr[i]);
	}
}

void outputArray(int arr){
	for(int i=0;i<MAX;i++){
		printf("%d ",arr[i]);
	}
}

void swapArray(int *ptr1,int *ptr2){
	for(int i=0;i<MAX;i++,ptr1++,ptr2++){
		int temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
	}
}

main(){
	int arr1[MAX],arr2[MAX];
	printf("Enter two arrays of 10 elements..\n");
	inputArray(arr1);
	inputArray(arr2);
	int *ptr1, *ptr2;
	ptr1 = &arr1[0];
	ptr2 = &arr2[0];
	swapArray(ptr1,ptr2);
	outputArray(arr1);
	outputArray(arr2);
}