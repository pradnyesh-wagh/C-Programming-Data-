#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();

	printf("Enter The Any Character:");
	scanf("%c",&a);

	if(a>='A' && a<='Z')
	{
		printf("Character Is UpperCAse:");
	}
	else
	{
		printf("Character Is Lowercase:");
	}
	 getch();
}