/*
28. Write a C program to reverse a string using pointers
*/

#include <stdio.h>
#include <string.h>
/*void ptrrev(int *ptr,int s){
	char rev[10];
	for(int i=s;i>0;i--){
		rev[i] = *ptr;
		ptr++;
	}
	printf("%s\n",rev);
}*/
void main(){
	char str[10];
	int s;
	scanf("%s",str);
	s = strlen(str);
	char rev[10];
	for (int i = s; i > 0; i--)
	{
		rev[i] = *str;
	}
	printf("%s\n",rev);
}