#include <stdio.h>

int Sum(int value1, int value2) {
	int result = value1 + value2;
	return result;
}

void main(void) { //여기서 모든것을 작동 시킨다
	printf("Hello World\n");
	int a = 1;
	printf("%d place get gold medal\n", a);
	
	int s;
	s = Sum(5, 11);
	printf("result = %d \n", s);

	puts("HELLO MY NAME IS: AYDEN");
}