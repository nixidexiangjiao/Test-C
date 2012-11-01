/*
 * TestString.c
 *
 *  Created on: 2012-7-24
 *      Author: lzero
 */
#include <stdio.h>
#include <string.h>
#include "TestString.h"

void testString(){
	char *str1 = "Hello ladies";
	char string[13];
	strcpy(string, str1);
	printf("String is %s", string);

}
