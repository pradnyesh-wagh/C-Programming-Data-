#include<stdio.h>
#include<conio.h>
void main()
{
	int ono,qty,bill=0;
	clrscr();
	printf("\n*** MENU ***");
	printf("\n1. Ice Cream");
	printf("\n2. Cone");
	printf("\n3. Pestries");
	printf("\n4. Exit");
	printf("\nEnter the Order No:");
	scanf("%d",&ono);
	printf("\nEnter the Quantity:");
	scanf("%d",&qty);
	if(ono==1)
	{
		printf("\nYour order is Ice Cream with Price 25/- Rs.");
		bill=qty*25;
	}
	else if(ono==2)
	{
		printf("\nYour order is Cone with Price 35/- Rs.");
		bill=qty*35;
	}
	else if(ono==3)
	{
		printf("\nYour order is Pestries with Pricw 45/- Rs.");
		bill=qty*45;
	}
	else if(ono==4)
	{
		printf("\nThank You for VISIT!!!");
	}
	else
	{
		printf("\nInvalid Order Number");
	}
	printf("\nTotal Bill=%d",bill);
	getch();
}