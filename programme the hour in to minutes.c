#include<stdio.h>
void main() 
{
	int minutes,h,m;
	printf("enter a minute");
	scanf("%d",&minutes);
	h = minutes/60;
	m = minutes%60;
	printf("%d hour(s) %d minutes(s)",h,m);
}
