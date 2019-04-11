
#include <stdio.h>


void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *sourceArr, int *destArr, int size);




int main()
{
    int sourceArr[10];
    int destArr[10];

    int size;


    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements in source array: ", size);
    inputArray(sourceArr, size);


    printf("Enter %d elements in destination array: ", size);
    inputArray(destArr, size);



    printf("\n\nSource array before swapping: ");
    printArray(sourceArr, size);

    printf("\nDestination array before swapping: ");
    printArray(destArr, size);



    swapArray(sourceArr, destArr, size);



    printf("\n\nSource array after swapping: ");
    printArray(sourceArr, size);

    printf("\nDestination array after swapping: ");
    printArray(destArr, size);


    return 0;
}




void inputArray(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));


    while(arr <= arrEnd)
        scanf("%d", arr++);
}




void printArray(int *arr, int size)
{
    int *arrEnd = (arr + (size - 1));


    while(arr <= arrEnd){
        printf("%d, ", *(arr++));
			}
}




void swapArray(int * sourceArr, int * destArr, int size)
{
    // Pointer to last element of source array
    int * sourceArrEnd = (sourceArr + (size - 1));

    // Pointer to last element of destination array
    int * destArrEnd   = (destArr + (size - 1));


    /*
     * Swap individual element of both arrays
     */
    while(sourceArr <= sourceArrEnd && destArr <= destArrEnd)
    {
        *sourceArr ^= *destArr;
        *destArr   ^= *sourceArr;
        *sourceArr ^= *destArr;

        // Increment source array to point to next element
        sourceArr++;

        // Increment destination array to point to next element
        destArr++;
    }
}
