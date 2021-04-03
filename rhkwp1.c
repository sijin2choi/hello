#include <stdio.h>

int main() {
	int num1, num2, res;
	char operator;

	printf("입력: ");
	scanf("%d %c %d", &num1, &operator, &num2);
	if (operator == '+')
	{
		res = num1 + num2;
	}
	else if (operator == '-')
	{
		res = num1 - num2;
	}
	else if (operator == '*')
	{
		res = num1 * num2;
	}
	else if (operator == '/')
	{
		res = num1 / num2;
	}
	printf("%d", res);

	return 0;
	}
//안되면 속성들어가고 전처리기 정의 뒤에 _CRT_SECURE_NO_WARNINGS; 붙이셈
