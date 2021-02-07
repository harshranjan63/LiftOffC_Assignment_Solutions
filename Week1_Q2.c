//Q2. Write a c program to enter temperature in celsius and convert it to fahrenheit.
#include<stdio.h>
int main()
{
	float c,f;
	char s;
	do
	{
		printf("\nPlease enter temperature in celsius: ");
		scanf("%f",&c);
		f=(c*1.8)+32;
		printf("Temperature in fahrenheit= %f\n",f);
		printf("Do you want to enter again?(y/n):");
		scanf("%s",&s);
	}while(s=='y');
	return(0);
}
