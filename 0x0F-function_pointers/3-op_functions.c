#include "3-calc.h"

/**
 * op_add - return the sum of a and b
 * @a: int a
 * @b: int b
 * Return: return sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference between a and b
 * @a: int a
 * @b: int b
 * Return: Return sum 
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- return the product of a and b
 * @a: int a
 * @b: int b
 * Return: Return sum 
*/

int op_mul(int a, int b){
	return (a * b);
}

/**
 * op_div- return the result of the division of a and b
 * @a: int a
 * @b: int b
 * Return: Return sum 
*/

int op_div(int a, int b){
	return (a/b);
}

/**
 * op_mod- return the remainder of the division  of a and b
 * @a: int a
 * @b: int b
 * Return: Return sum 
*/

int op_mod(int a, int b){
	return(a % b);
}