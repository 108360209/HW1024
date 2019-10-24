#include<stdio.h>
#include<stdlib.h>


int main(void) {
	const float a = 200;
	float b = 0;

	while (1)
	{
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &b);
		if (b == -1)break;
		printf("Salary is %.2lf\n", a + 0.09 * b);
		printf("\n");
	}
	system("pause");
	return 0;
}