#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ones_comp(char base);
void OR(char base);
void XOR(char base);
void AND(char base);
void left_shift(char base);
void right_shift(char base);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);

/**
 * main - perform bitwise arithmetic.
 *
 * Return: nothing.
 */
int main(void)
{
	char base, operator[2];
	int is_valid;

	/* Get operator for arithmetic */
	is_valid = 0;
	while (!is_valid)
	{
		printf("Operator: ");
		scanf("%s", operator);

		if (operator[0] == '<' || operator[0] == '>')
		{
			if (strcmp(operator, "<<") == 0 || strcmp(operator, ">>") == 0)
			{
				is_valid = 1;
			}
		}
		else if (strstr("~|&^", operator))
		{
			is_valid = 1;
		}
	}

	/* Base of numbers */
	printf("Base of numbers [x (hexadecimal), o (octal), ");
	printf("b (binary), d (decimal)]: ");
	scanf(" %c", &base);

	/* Perfrom arithmetic based on operator */
	switch (operator[0])
	{
	case '~':
		ones_comp(base);
		break;
	case '|':
		OR(base);
		break;
	case '^':
		XOR(base);
		break;
	case '&':
		AND(base);
		break;
	case '<':
		left_shift(base);
		break;
	case '>':
		right_shift(base);
	default:
		break;
	}

	return (0);
}

/**
 * ones_comp - find the ones' complement of a number.
 *
 * @base: base of number
 *
 * Return: nothing.
 */
void ones_comp(char base)
{
	char bit[65];
	int m, digit;
	unsigned int n;

	switch (base)
	{
	case 'x':
		printf("Number: ");
		scanf(" %x", &n);
		printf("~0x%X = 0x%X\n", n, ~n);
		break;
	case 'o':
		printf("Number: ");
		scanf(" %o", &n);
		printf("~0%o = 0%o\n", n, ~n);
		break;
	case 'd':
		printf("Number: ");
		scanf(" %i", &m);
		printf("~%i = %i\n", m, ~m);
		break;
	case 'b':
		printf("Number: ");
		scanf(" %s", bit);
		digit = ~binary_to_uint(bit);
		print_binary(digit);
		printf("\n");
		break;
	default:
		break;
	}
}

/**
 * OR - find the bitwise OR of operands.
 *
 * @base: base of operands.
 *
 * Return: nothing.
 */
void OR(char base)
{
	char bit_1[65], bit_2[65];
	unsigned int n1, n2;
	int m1, m2;

	switch (base)
	{
	case 'x':
		printf("Number(1): ");
		scanf(" %x", &n1);
		printf("Number(2): ");
		scanf(" %x", &n2);
		printf("0x%X | 0x%X = 0x%X", n1, n2, n1 | n2);
		break;
	case 'o':
		printf("Number(1): ");
		scanf(" %o", &n1);
		printf("Number(2): ");
		scanf(" %o", &n2);
		printf("0%o | 0%o = 0%o", n1, n2, n1 | n2);
		break;
	case 'd':
		printf("Number(1): ");
		scanf(" %i", &m1);
		printf("Number(2): ");
		scanf(" %i", &m2);
		printf("%i | %i = %i\n", n1, n2, n1 | n2);
		break;
	case 'b':
		printf("Number(1): ");
		scanf(" %s", bit_1);
		printf("Number(2): ");
		scanf(" %s", bit_2);
		m1 = binary_to_uint(bit_1);
		m2 = binary_to_uint(bit_2);
		printf("%i | %i = %i\n", m1, m2, m1 | m2);
		break;
	default:
		break;
	}
}

/**
 * XOR - find the bitwise XOR of operands.
 *
 * @base: base of operands.
 *
 * Return: nothing.
 */
void XOR(char base)
{
	char bit_1[65], bit_2[65];
	unsigned int n1, n2;
	int m1, m2;

	switch (base)
	{
	case 'x':
		printf("Number(1): ");
		scanf(" %x", &n1);
		printf("Number(2): ");
		scanf(" %x", &n2);
		printf("0x%X ^ 0x%X = 0x%X", n1, n2, n1 ^ n2);
		break;
	case 'o':
		printf("Number(1): ");
		scanf(" %o", &n1);
		printf("Number(2): ");
		scanf(" %o", &n2);
		printf("0%o ^ 0%o = 0%o", n1, n2, n1 ^ n2);
		break;
	case 'd':
		printf("Number(1): ");
		scanf(" %i", &m1);
		printf("Number(2): ");
		scanf(" %i", &m2);
		printf("%i ^ %i = %i\n", n1, n2, n1 ^ n2);
		break;
	case 'b':
		printf("Number(1): ");
		scanf(" %s", bit_1);
		printf("Number(2): ");
		scanf(" %s", bit_2);
		m1 = binary_to_uint(bit_1);
		m2 = binary_to_uint(bit_2);
		printf("%i ^ %i = %i\n", m1, m2, m1 ^ m2);
		break;
	default:
		break;
	}
}

/**
 * AND - find the bitwise AND of operands.
 *
 * @base: base of operands.
 *
 * Return: nothing.
 */
void AND(char base)
{
	char bit_1[65], bit_2[65];
	unsigned int n1, n2;
	int m1, m2;

	switch (base)
	{
	case 'x':
		printf("Number(1): ");
		scanf(" %x", &n1);
		printf("Number(2): ");
		scanf(" %x", &n2);
		printf("0x%X & 0x%X = 0x%X", n1, n2, n1 & n2);
		break;
	case 'o':
		printf("Number(1): ");
		scanf(" %o", &n1);
		printf("Number(2): ");
		scanf(" %o", &n2);
		printf("0%o & 0%o = 0%o", n1, n2, n1 & n2);
		break;
	case 'd':
		printf("Number(1): ");
		scanf(" %i", &m1);
		printf("Number(2): ");
		scanf(" %i", &m2);
		printf("%i & %i = %i\n", n1, n2, n1 & n2);
		break;
	case 'b':
		printf("Number(1): ");
		scanf(" %s", bit_1);
		printf("Number(2): ");
		scanf(" %s", bit_2);
		m1 = binary_to_uint(bit_1);
		m2 = binary_to_uint(bit_2);
		printf("%i & %i = %i\n", m1, m2, m1 & m2);
		break;
	default:
		break;
	}
}

/**
 * left_shift - find the bitwise left_shift of operands.
 *
 * @base: base of operands.
 *
 * Return: nothing.
 */
void left_shift(char base)
{
	char bit_1[65], bit_2[65];
	unsigned int n1, n2;
	int m1, m2;

	switch (base)
	{
	case 'x':
		printf("Number(1): ");
		scanf(" %x", &n1);
		printf("Number(2): ");
		scanf(" %x", &n2);
		printf("0x%X << 0x%X = 0x%X", n1, n2, n1 << n2);
		break;
	case 'o':
		printf("Number(1): ");
		scanf(" %o", &n1);
		printf("Number(2): ");
		scanf(" %o", &n2);
		printf("0%o << 0%o = 0%o", n1, n2, n1 << n2);
		break;
	case 'd':
		printf("Number(1): ");
		scanf(" %i", &m1);
		printf("Number(2): ");
		scanf(" %i", &m2);
		printf("%i << %i = %i\n", n1, n2, n1 << n2);
		break;
	case 'b':
		printf("Number(1): ");
		scanf(" %s", bit_1);
		printf("Number(2): ");
		scanf(" %s", bit_2);
		m1 = binary_to_uint(bit_1);
		m2 = binary_to_uint(bit_2);
		printf("%i << %i = %i\n", m1, m2, m1 << m2);
		break;
	default:
		break;
	}
}

/**
 * right_shift - find the bitwise OR of operands.
 *
 * @base: base of operands.
 *
 * Return: nothing.
 */
void right_shift(char base)
{
	char bit_1[65], bit_2[65];
	unsigned int n1, n2;
	int m1, m2;

	switch (base)
	{
	case 'x':
		printf("Number(1): ");
		scanf(" %x", &n1);
		printf("Number(2): ");
		scanf(" %x", &n2);
		printf("0x%X >> 0x%X = 0x%X", n1, n2, n1 >> n2);
		break;
	case 'o':
		printf("Number(1): ");
		scanf(" %o", &n1);
		printf("Number(2): ");
		scanf(" %o", &n2);
		printf("0%o >> 0%o = 0%o", n1, n2, n1 >> n2);
		break;
	case 'd':
		printf("Number(1): ");
		scanf(" %i", &m1);
		printf("Number(2): ");
		scanf(" %i", &m2);
		printf("%i >> %i = %i\n", n1, n2, n1 >> n2);
		break;
	case 'b':
		printf("Number(1): ");
		scanf(" %s", bit_1);
		printf("Number(2): ");
		scanf(" %s", bit_2);
		m1 = binary_to_uint(bit_1);
		m2 = binary_to_uint(bit_2);
		printf("%i >> %i = %i\n", m1, m2, m1 >> m2);
		break;
	default:
		break;
	}
}

/**
 * binary_to_uint - convert binary number to unsigned int.
 *
 * @b: string of binary numbers.
 *
 * Return: res,	 converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, n;
	unsigned int res = 0, pow;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (i = i - 1, j = 0; i >= 0; i--, j++)
	{
		pow = 1;
		n = j + 1;
		while (--n)
		{
			pow *= 2;
		}
		res += (b[i] - 48) * pow;
	}

	return (res);
}

/**
 * print_binary - print the binary representation of the decimal number.
 *
 * @n: decimal number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp = n;
	int i, j, k;

	i = 0;
	for (i = 0; tmp > 0; tmp >>= 1, i++)
	{
		;
	}

	k = j = i;

	do {
		tmp = n;
		j = k;
		for (j = k; j > 1; j--)
		{
			n >>= 1;
		}
		putchar((n & 1) + '0');
		n = tmp;
		/* This works also, but I prefer the other */
		/*n <<= 1;*/
		k--;
		i--;
	} while (i > 0);
}
