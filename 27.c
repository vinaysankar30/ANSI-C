
#include <stdio.h>


void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *firstArr, int *secondArr, int size);




int main()
{
    int firstArr[10];
    int secondArr[10];

    int size;


    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements in first array: ", size);
    inputArray(firstArr, size);


    printf("Enter %d elements in second array: ", size);
    inputArray(secondArr, size);



    printf("\n\nfirst array before swapping: ");
    printArray(firstArr, size);

    printf("\nsecond array before swapping: ");
    printArray(secondArr, size);



    swapArray(firstArr, secondArr, size);



    printf("\n\nfirst array after swapping: ");
    printArray(firstArr, size);

    printf("\nsecond array after swapping: ");
    printArray(secondArr, size);


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




void swapArray(int * firstArr, int * secondArr, int size)
{

    int * firstArrEnd = (firstArr + (size - 1));


    int * secondArrEnd   = (secondArr + (size - 1));



    while(firstArr <= firstArrEnd && secondArr <= secondArrEnd)
    {
        *firstArr ^= *secondArr;
        *secondArr   ^= *firstArr;
        *firstArr ^= *secondArr;


        firstArr++;

        secondArr++;
    }
}
