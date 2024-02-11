#include <stdio.h>

float a, b;
char c;

int main() {
	printf("Wat is het eerste nummer?\n");
	scanf(" %f", &a);
	printf("Welke ding ga je doen?\n");
	scanf(" %c", &c);
	printf("Wat is het tweede nummer?\n");
	scanf(" %f", &b);

	switch(c) {
		case '+':
			a = a + b;
			break;
		case '-':
			a = a - b;
			break;
		case '*':
			a = a * b;
			break;
		case '/':
			a = a / b;
			break;
		default:
			printf("Ja nou daar kan ik dus niks mee!\n");
			return 0;
		}

	printf("%f", a);
	return 0;
}
