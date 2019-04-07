/*
28. Write a C program to reverse a string using pointers
*/

#include <stdio.h>
#include <string.h>
void main(){
	char str[20];
	int s;
	scanf("%s",str);
	s = strlen(str);
	char *eptr,*sptr;
	sptr = &str;
	eptr = &str;
	//char rev[s];
	for(int i=0;i<s-1;i++,eptr++);
	for(int i=0;i<s/2;i++,sptr++,eptr--){
		char temp = *sptr;
		*sptr = *eptr;
		*eptr = temp;
	}
	printf("%s\n",str);
}