#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[10],b;
	printf("Enter a string");
	gets(a);
	strrev(a);
	puts(a);
	getch();
	return 0;
}