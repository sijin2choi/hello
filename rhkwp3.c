//과제3
#include <stdio.h>
int main() {
	int num[11], a, b, c;
	for (a = 0; a < 10; a++)
	{
		scanf("%d", &num[a]);
	}
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (num[a] > num[b])
			{
				c = num[b];
				num[b] = num[a];
				num[a] = c;
			}
		}
	}
	for (a = 0; a < 10; a++)
	{
		printf("%d", num[a]);
	}
	return 0;
}

