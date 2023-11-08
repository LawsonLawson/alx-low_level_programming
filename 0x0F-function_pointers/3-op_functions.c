#include "3-calc.h"

/**
 * op_add - This function adds two given numbers
 *
 * @a: The first operand
 * @b: The second operand
 *
 * Return: The result of the sum of both operands
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This functions finds the difference between two given numbers
 *
 * @a: the first operand
 * @b: The second operand
 *
 * Return: The result of the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function computes the product of two given numbers
 *
 * @a: The first operand
 * @b: The second operand
 *
 * Return: The product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function divides a number by another number
 *
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The result after the opearation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This function computes the remainder when a given number is divided
 * by another number
 *
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The remainder after the opeartion
 */
int op_mod(int a, int b)
{
	return (a % b);
}
