#include<stdio.h>
#include<stdlib.h>



int main(void) {
	float a, rate = 0, b, c;


	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &a);

		if (a == -1)break;


		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the laon in days: ");
		scanf_s("%f", &b);

		c = a * rate *b / 365;

		printf("The interest charge is $%.2lf", c);
		printf("\n\n");
	}
	system("pause");
	return 0;

}