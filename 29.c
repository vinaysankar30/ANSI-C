/*
29. Define a structure Dog which contains fields like name,breed,age and colour. Write a
C program to change the name and age of the dog using structure pointers
*/

#include<stdio.h>

struct dog
{
    char name[10];
    char breed[10];
    int age;
    char color[10];
};

int main()
{
    char new_name[20];
    struct dog my_dog ;
    struct dog *ptr_dog;
    ptr_dog = &my_dog;
    printf("Enter dog's name : \n" );
    scanf("%s",ptr_dog->name );
    printf("Enter dogs breed: \n") ;
    scanf("%s",ptr_dog->breed );
    printf("Enter dogs color: \n") ;
    scanf("%s",ptr_dog->color);
    printf("Enter dog's age : \n" );
    scanf("%d",ptr_dog->age);

    printf("Dog's name: %s\n", ptr_dog->name);
    printf("Dog's breed: %s\n", ptr_dog->breed);
    printf("Dog's age: %d\n", ptr_dog->age);
    printf("Dog's color: %s\n", ptr_dog->color);


    printf("Enter new name \n");
    scanf("%s",new_name);
    strcpy(ptr_dog->name, new_name);



    printf("Dog's new name is: %s\n", ptr_dog->name);
    printf("Dog's age is: %d\n", ptr_dog->age);

    return 0;
}
