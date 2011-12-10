#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	char * buf = (char *)malloc(sizeof(char) * 30);

	if (buf != NULL)
		printf("buf is not null\n");

	buf[0] = 'u';
	printf("Freeing buf.\n");
	free(buf);

	if (buf == NULL)
		printf("buf free, it is now null\n");
	else
		printf("Buf is not now null\n%s\n", buf);

	return 0;
}
