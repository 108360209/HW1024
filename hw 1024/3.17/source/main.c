#include<stdio.h>
#include<stdlib.h>


int main(void) {
	float a, b, charges, credits, limits;
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%f", &a);
		if (a == -1)break;

		printf("Enter beginning balance: ");
		scanf_s("%f", &b);

		printf("Enter total charges: ");
		scanf_s("%f", &charges);

		printf("Enter total credits: ");
		scanf_s("%f", &credits);

		printf("Enter credits limit: ");
		scanf_s("%f", &limits);

		if ((b + charges - credits) > limits) {
			printf("Account:\t%.0lf\n", a);
			printf("Credit limit:\t%.2lf\n", limits);
			printf("Balance:\t%.2lf\n", b + charges - credits);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");

	}

	system("pause");
	return 0;

}