#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
	const char str[] = "This is a setence.";

	const char * zloc;

	zloc = (const char *)memchr(str, 'z', sizeof str);

	if (zloc ==  NULL)
	{
		printf("NOT FOUND ZLOC NULL\n");
	} else {
		printf("Something was found......\n" );
	}

	return 0;
}
