#include<stdio.h>
#include<conio.h>
void main()
{
long long num=43234332,i=0;
clrscr();

	do
	{
	i++ ;
	num /=10;
	}while(num!=0);

	printf("Total Count is  %lld",i);

getch();
}
