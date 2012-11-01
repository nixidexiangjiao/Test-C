/*
 * TestStruct.c
 *
 *  Created on: 2012-7-24
 *      Author: lzero
 */
#include <stdio.h>
#include "TestStruct.h"

struct date {
	int year;
	int month;
	int day;
};

struct person {
	char name[20];
	int age;
	char sex;
	char phone[15];
	struct date birthday;
} p1;

void testStruct() {
	struct person p2 = { "Join", 25, 'm', "123456789" };
	printf("p2:%s %d %c %s\n", p2.name, p2.age, p2.sex, p2.phone);

	printf("p1:%s %d %c %s\n", p1.name, p1.age, p1.sex, p1.phone);
}

