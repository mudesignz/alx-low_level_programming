#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, modul, multi;
	float divis, i_divis;

	printf("Enter the First number: ");
	scanf("%d", &a);
	printf("Enter the Second number: ");
	scanf("%d", &b);

	modul = a % b;
	multi = a * b;
	divis = a / b;
	i_divis = 1 / divis;
	printf("\nModula of %d and %d is %d: \n", a, b, modul);
	printf("Multiplication of %d and %d is %d: \n", a, b, multi);
	printf("Division of of %d / %d is %0.3f: \n", a, b, divis);
	printf("Division of of %d / %d is %.3f: \n", b, a, i_divis);

	return (0);
}
