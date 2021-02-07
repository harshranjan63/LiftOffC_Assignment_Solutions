/*Q4. Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to
following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float p,b,ch,co,m,i,t,u;
	char s,g;
	do
	{
		w:
		{
			printf("\nPlease enter the full marks of each subject: ");
			scanf("%f",&t);
			printf("\nPlease enter the marks of physics: ");
			scanf("%f",&p);
			printf("Please enter the marks of chemistry: ");
			scanf("%f",&ch);
			printf("Please enter the marks of biology: ");
			scanf("%f",&b);
			printf("Please enter the marks of mathematics: ");
			scanf("%f",&m);
			printf("Please enter the marks of computer: ");
			scanf("%f",&co);
			if(p>t || ch>t || co>t || m>t || b>t)
			{
				printf("You have entered some invalid entries!\nDo you want to enter again?(y/n):");
				scanf("%s",&g);
				if(g=='y')
					goto w;
				if(g=='n')
					exit(0);
			}
				else	
				{
					i=((p+ch+m+co+b)/(5*t))*100;
					printf("Percentage obtained= %f\n",i);
					if(i>=90)
						printf("Grade= A\n");			
					else if(i>=80 && i<90)
						printf("Grade= B\n");
					else if(i>=70 && i<80)
						printf("Grade= C\n");	
					else if(i>=60 && i<70)
						printf("Grade= D\n");
					else if(i>=40 && i<60)
						printf("Grade= E\n");	
					else if(i<40)
						printf("Grade= F\n");
					printf("Do you want to enter again?(y/n):");
					scanf("%s",&s);
				}
		}
	}while(s=='y');
	return(0);
}
