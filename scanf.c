#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf("Insert age:");
	scanf("%i", &age);
	printf("Insert gpa:");
	scanf("%f", &gpa);
	printf("Insert grade:");
	scanf(" %c", &grade);
	printf("Your age:%i", age);
	printf("Your gpa:%f", gpa);
	printf("Your grade: %c", grade);

	return 0;
}

