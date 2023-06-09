#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * calCoins - calculates the minimum number of coins
 * @cents: amount in cents
 * Return: coins
 */

int calCoins(int cents)
{
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}
		coins++;
	}
	return (coins);
}

/**
 * main - main function
 * @argc: number of arguments coomand-line passed
 * @argv: arrays of strings
 * Return: name
 */

int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = calCoins(cents);

	printf("%d\n", coins);
	return (0);
}
