/*
 * ArrayAndPoint.c
 *
 *  Created on: 2012-7-23
 *      Author: lzero
 */
#include <stdio.h>
#include "ArrayAndPoint.h"
#define TESTCHAR "TestChar!"

void testArrayAndPoint() {
	int shuzhi[] = { 1, 2, 3, 4, 5, 6 };
	int *pshuzhi = shuzhi;

	printf("shuzhi[0] is %x(%d)\n", pshuzhi, *pshuzhi);

	pshuzhi = pshuzhi + 1;
	printf("shuzhi[1] is %x(%d)\n", pshuzhi, *pshuzhi);

	pshuzhi = pshuzhi + 1;
	printf("shuzhi[2] is %x(%d)\n", pshuzhi, *pshuzhi);

	printf("\n\n");
	char zifu[] = { 'a', 'b', 'd', 'e', 'f' };
	char *pzifu = zifu;
	printf("shuzhi[0] is %x(%d)\n", pzifu, *pzifu);

	pzifu = pzifu + 1;
	printf("zifu[1] is %x(%d)\n", pzifu, *pzifu);

	pzifu = pzifu + 1;
	printf("zifu[2] is %x(%d)\n", pzifu, *pzifu);

	char *zifu2 = "hello world";
	printf("zifu2 is %s\n", zifu2);
	printf(TESTCHAR);
}
