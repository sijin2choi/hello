//과제2
#include <stdio.h>
#include <math.h>

int main() {
	int a, b; //a=초기속력 b=발사각도
	double res;
	printf("초기 속력, 발사각도 차례대로 입력: ");
	scanf("%d %d", &a, &b);
	res = (2 * a * sin(b)) / 9.8;
	printf("%.21f초 후에 도착", res);
	return 0;
}
