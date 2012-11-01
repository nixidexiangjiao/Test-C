/*
 * Scanf.c
 *
 *  Created on: 2012-7-20
 *      Author: lzero
 */
#include <stdio.h>
#include "Scanf.h"

void testScanf(){
	int i;
	char o;
	float f;
	scanf("%d,%c,%f", &i,&o,&f);
	printf("%d %c %f\n",i,o,f);
}
