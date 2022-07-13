#include <stdio.h>
#include <math.h>

int main()
{
	int number[4]; // num[0] = answer  num[1] =number  num[2] =count  num[3] = flag
	number[3] = number[2] = 0;
	number[1] = number[0] = 1;
	while (number[2] < 1001)
	{
		number[3] = 0; // current number is a prime number
		if (number[1] == 1)
		{
			number[3] = 1;
		}
		if (number[1] % 2 == 0)
		{
			number[3] = 1;
		}
		if (number[1] == 2)
		{
			number[3] = 0;
		}
		double boundary = (int)floor(sqrt(number[1]));
		for (int f = 0; f <= boundary; f += 2)
		{
			if (number[1] % f == 0)
				number[3] = 1;
			if (number[3] == 0)
			{
				number[0] = number[1];
				number[2]++;
				printf_s("Count = %d , Prime =%d \n", number[2], number[0]);
			}
			number[1]++;
		}
	}
	return 0;
}