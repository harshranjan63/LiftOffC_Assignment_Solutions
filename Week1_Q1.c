//Q3. Write a c program to enter two numbers and perform all arthematic operations.
#include<stdio.h>
int main()
{
	float a,b,p,m,i,d;
	char s;
	do
	{
		printf("\nplease enter the two numbers: ");
		scanf("%f",&a);
		scanf("%f",&b);
		p=a+b;
		m=a-b;
		i=a*b;
		d=a/b;
		printf("Addition= %f\n",p);
		printf("Substraction= %f\n",m);
		printf("Multiplication= %f\n",i);
		printf("Division= %f\n",d);
		printf("Do you want to enter again?(y/n):");
		scanf("%s",&s);
	}while(s=='y');
	return(0);
}
