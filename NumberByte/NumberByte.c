/*
 * NumberByte.c
 *
 *  Created on: 2012-7-20
 *      Author: lzero
 */
#include <stdio.h>
#include "NumberByte.h"

void showByte(){
	short int i;
	int j;
	char cr;
	long int k;
	int a,b,c,d;

	a=sizeof(i);
	b=sizeof(j);
	c=sizeof(k);
	d=sizeof(cr);

	printf("a is %d\n", a);
	printf("b is %d\n", b);
	printf("c is %d\n", c);
	printf("d is %d\n", d);

	float aF=88888.88888;
	double bF=8888888888.888888888;

	printf("aFloat is %f\n", aF);
	printf("bDouble is %f\n", bF);
}

