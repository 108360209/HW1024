#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float a, b, sum;


	while (1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%f", &a);
		if (a == -1)break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &b);
		if (a > 40) {
			sum = 40 * b + (a - 40) * 1.5 *b;
		}
		else {
			sum = b * a;
		}
		printf("The interest charge is $%.2lf\n", sum);
	}


	return 0;

}