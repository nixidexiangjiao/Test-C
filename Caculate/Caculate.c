/*
 * Caculate.c
 *
 *  Created on: 2012-7-20
 *      Author: lzero
 */

#include <stdio.h>
#include "Caculate.h"

void caculate(){
	int a=12;
	int n=5;
	a%=(n%=2);
	printf("a is %d",a);
}
