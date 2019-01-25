#include <stdio.h>
#pragma warning(disable:4996)

/*
This is a comment
*/
void sum(float a, float b);
void sub(float a, float b);
void division(double dividend, double divisor);
void multiplication(double a, double b);

int main() {
	printf("\n\t\tC Calculator");
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Division");
	printf("\n4. Multiplication");

	printf("\n Enter option: ");
	int choice = 0;
	scanf("%d", &choice);

	if (choice == 1) { // addition
		printf("\nEnter num1 :");
		float a = 0;
		scanf("%f", &a);

		float b = 0;
		printf("\nEnter num2 :");
		scanf("%f", &b);

		sum(a, b);
	}
	else if (choice == 2) { // subtraction
		printf("\nEnter num1: ");
		float a = 0;
		scanf("%f", &a);

		printf("\nEnter num2: ");
		float b = 0;
		scanf("%f", &b);

		sub(a, b);
	}
	else if (choice == 3) { // division
		printf("\nEnter dividend");
		double a = 0;
		scanf("%lf", &a); // USE LF

		printf("\nEnter divisor");
		double b = 0;

		int not_valid = 1;
		while (not_valid == 1) {
			scanf("%lf", &b);
			if (b == 0) {
				printf("\nDivide by zero not possible, enter valid num: ");
			}
			else not_valid = 0;
		}
		division(a, b);
	}
	else if (choice == 4) { // multiplication
		printf("\nEnter num1 ");
		double a = 0;
		scanf("%lf", &a);

		printf("\nEnter num2 ");
		double b = 0;
		scanf("%lf", &b);

		multiplication(a, b);
	}
	else printf("\nInvalid choice, Goodbye...");
	system("PAUSE");
	// return 0
}

void sum(float num1, float num2) {
	float c = num1 + num2;
	printf("\n%f + %f = %f", num1, num2, c);
}

void sub(float a, float b) {
	float c = a - b;
	printf("\n%f - %f = %f", a, b, c);
}

void division(double a, double b) {
	double c = a / b;
	printf("\n%lf / %lf = %lf", a, b, c);
}

void multiplication(double a, double b) {
	double c = a * b;
	printf("\n%lf * %lf = %lf", a, b, c);
}