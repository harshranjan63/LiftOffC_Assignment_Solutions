//Q5. Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
int main()
{
	int i;
	char s,a;
	do
	{
		printf("\nplease enter the alphabet you want to test: ");
		scanf("%s",&a);
		switch(a)
		{
			case 'a':
				printf("The entered alphabet is a vowel");
			break;
			case 'A':
				printf("The entered alphabet is a vowel");
			break;
			case 'e':
				printf("The entered alphabet is a vowel");
			break;
			case 'E':
				printf("The entered alphabet is a vowel!");
			break;
			case 'i':
				printf("The entered alphabet is a vowel!");
			break;
			case 'I':
				printf("The entered alphabet is a vowel!");
			break;
			case 'o':
				printf("The entered alphabet is a vowel!");
			break;
			case 'O':
				printf("The entered alphabet is a vowel!");
			break;
			case 'u':
				printf("The entered alphabet is a vowel!");
			break;
			case 'U':
				printf("The entered alphabet is a vowel!");
			break;
			default:
				printf("The entered alphabet is a consonant!");	
			break;
		}
		printf("\nDo you want to enter again?(y/n):");
		scanf("%s",&s);
	}while(s=='y');
	return(0);
}
