/*Code prime_numbers.c by Sarah Duncan Last Modified 27/10/2019*/
#include <stdio.h>
/* Declare function*/
float input();
int main(void) {
	int number;
	/*float f;
	printf("Please input a a positive integer: ");
	scanf("%f", &f);*/

	/* Checks if f is an integer*/
	float f = input();
	number = f;
	printf("You have inputted: %d", number);
	if( f!= number)
	{ 
		printf("You have not entered an integer, please try again.\n");
		f = input();
	}
	if(f==1)
	{
		printf("1 is not a prime number");
	}
	else
	{
		if(number>0)
		{
		 int i;
		 int factors = 0;
			for ( i=1; i<= number; i++)
			{  double check = number % i;
				if (check==0)
				{
					++factors;
				if (factors>2){
					printf("This is not a prime number");
					return 0;
				}
				}
			}
			printf("This is a prime number");
		}
		else 
		{
			printf("This is not a positive number");
		}
	}
	return 0;
}
float input(void){
	float f;
	printf("Please input a a positive integer: ");
	scanf("%f", &f);
	return f;
}
