#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	cha *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(inta, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, intb);

int (*get_op_func(char *s))(int, int);

#endif
