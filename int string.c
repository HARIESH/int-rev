#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char f[10];
	printf("Enter a string");
	gets(f);
	strrev(f);
	puts(f);
	getch();
	return 0;
}