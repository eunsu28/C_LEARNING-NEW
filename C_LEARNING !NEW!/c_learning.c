#include <stdio.h>

int Sum(int value1, int value2) {
	int result = value1 + value2;
	return result;
}

int Minus(int value1, int value2) {
	int result = value1 - value2;
	return result;
}

void main(void) { //여기서 모든것을 작동 시킨다
	printf("Hello World\n");
	int a = 1;
	printf("%d place get gold medal\n", a);
	
	int s;
	s = Sum(5, 11);
	printf("result = %d \n", s);

	int m = Minus(20, 4);
	printf("RESULT IS %d \n", m);

	puts("HELLO MY NAME IS: AYDEN");

	int sum_minus = s + m;
	printf("%d\n", sum_minus);

	int first = 2;
	int second = 2;
	int add = first + second;
	printf("%d\n", add);

	if (first == 1) {
		printf("HELLO\n");
	}
	else {
		printf("BYE\n");
	}

	printf("this is fun");
}
//...