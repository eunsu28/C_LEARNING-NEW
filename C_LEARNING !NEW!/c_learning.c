#include <stdio.h>

int Sum(int a, int b) {
	return a + b;
}

void main(void) {
	printf("Hello, World\n");
	int a = 2;
	if (a == 1) {
		printf("HELLO\n");
	}
	else {
		printf("bye\n");
	}
	int for_function = Sum(4, 5);
	printf("%d\n", for_function);
	//this is comment
}