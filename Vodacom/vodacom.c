#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int num;
	int i;

	printf("Enter any number fromm 1-100, all inclusive!\n");
	scanf("%d", &num);
	
	if ((1 <= num) && (num <= 100))
	{
		printf("%d\n", num);
		if (num % 3 == 0)
		{
			if (num % (3 * 5) == 0)
			{
				printf("Vodacom\n");
			}
			else
			printf("Voda\n");
		}
		else if (num % 5 == 0)
		{
			printf("Com\n");
		}
	}
	else if (num < 1)
	{
		printf("The number you entered is too low!\n");
	}
	else if (num > 100)
	{
		printf("The number you entered is too high!\n");
	}
	return (0);
}
