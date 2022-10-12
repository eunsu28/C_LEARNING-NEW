#include <stdio.h>

int Sum(int value1, int value2) {
	int result = value1 + value2;
	return result;
}

int Minus(int value1, int value2) {
	int result = value1 - value2;
	return result;
}

int mid_aver(int one, int two, int three, int four, int five, int six) {
	int result = one + two + three + four + five + six;
	int devide = result / 6;
	return devide;
}

void main(void) {
	printf("Hello World\n");
	int a = 1;
	printf("%d place get gold medal\n", a);
	
	int s;
	s = Sum(5, 11);
	printf("result = %d \n", s);

	int m = Minus(20, 4);
	printf("RESULT IS %d \n", m);

	int m2 = Minus(1, 4);
	printf("RESULT IS %d \n", m2);

	puts("HELLO MY NAME IS: AYDEN");

	int sum_minus = s + m;
	printf("%d\n", sum_minus);

	int fornum = 1;
	for (fornum = 1; fornum < 4; fornum++) {
		printf("NUMBER: %d\n", fornum);
	}
	
	int tree = 1;
	while (tree < 11) {
		if (tree < 10) {
			printf("%d time you've hit the tree\n", tree);
			tree++;
		}
		else {
			printf("tree is going over\n");
			break;
		}
	}

	int mid = mid_aver(100, 99, 97, 96, 96, 92);
	printf("YOUR MID EXAM'S AVERAGE = %d\n", mid);
}