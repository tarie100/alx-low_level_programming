#include"3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - sum of 2 numbers
 * @a: 1st num
 * @b: 2nd num
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts 2 numbers
 * @a: 1st num
 * @b: 2nd num
 * Return: differnce
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 numbers
 * @a: 1st num
 * @b: 2nd num
 * Return: share
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - mudulas
 * @a: 1st num
 * @b: 2nd num
 * Return: modulas
 */
int op_mod(int a, int b)
{
	return (a % b);
}
