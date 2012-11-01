/*
 * TestFile.c
 *
 *  Created on: 2012-7-26
 *      Author: lzero
 */
#include <stdio.h>
#include "TestFile.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void my_err(const char *err_string, int line) {
	fprintf(stderr, "line:%d ", line);
	perror(err_string);
	exit(1);
}

int my_read(int fd) {
	int len;
	int ret;
	int i;
	char read_buf[64];

	if (lseek(fd, 0, SEEK_END) == -1) {
		my_err("lseek", __LINE__);
	}
	if ((len = lseek(fd, 0, SEEK_CUR)) == -1) {
		my_err("lseek", __LINE__);
	}
	if (lseek(fd, 0, SEEK_SET) == -1) {
		my_err("lseek", __LINE__);
	}

	printf("len:%d\n", len);
	if ((ret = read(fd, read_buf, len)) < 0) {
		my_err("read", __LINE__);
	}

	for (i = 0; i < len; i++) {
		printf("%c", read_buf[i]);
	}
	printf("\n");

	return ret;
}

void testFile() {
//	int fd;
//	if ((fd = open("example.txt", O_CREAT | O_EXCL, S_IRUSR | S_IWUSR)) == -1) {
//		perror("open");
//		exit(1);
//	} else {
//		printf("Create file success!\n");
//	}
//	close(fd);
	int fd;
	char write_buf[32] = "Hello World!!!!";
	char write_buf2[32] = "Just a Test!";
//	if ((fd = creat("example_63.txt", S_IRWXU))
//				== -1) {
	if ((fd = open("example_63.txt", O_RDWR | O_CREAT | O_TRUNC, S_IRWXU))
			== -1) {
		my_err("open", __LINE__);
	} else {
		printf("create file success\n");
	}
	if (write(fd, write_buf, strlen(write_buf)) != strlen(write_buf)) {
		my_err("write", __LINE__);
	}

	printf("/*-------------------------------------*/\n");
	if (lseek(fd, 0, SEEK_END) == -1) {
		my_err("lseek", __LINE__);
	}
	if (write(fd, write_buf2, strlen(write_buf2)) != strlen(write_buf2)) {
		my_err("write", __LINE__);
	}
	my_read(fd);
	close(fd);
}

