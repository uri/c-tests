#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	const char original[] = "var/radio/cdsd/30.xml"; // Not used in final"
	const char * periodLoc;
	const char * lastSlashLoc = original;
	char overlayPath[100];
	char filename[30];


	/* Get the last slash */
	while(1)
	{
		printf("This is the last slash loc::%s\n", lastSlashLoc);
		char * temp = (char *)memchr(lastSlashLoc + 1, 'd', sizeof(lastSlashLoc) - 1);
		if (temp != NULL)
			lastSlashLoc = temp;
		else
			break;
	} 

	printf("This is the name with extension %s\n", lastSlashLoc);
	/* Get the period location */
/*
	periodLoc = memchr(original, '.', sizeof original);

	strncpy(filename, lastSlashLoc + 1, sizeof(original) - sizeof(lastSlashLoc) - sizeof(periodLoc - 1));

	printf("This is the filename: %s", filename);
*/
	

/*
	strncpy(overlayPath, original, sizeof(original) - sizeof(periodLoc) - 1);
	sprintf(overlayPath, "%s.conf", overlayPath);
	
	printf("This is the overlayPath=%s\n", overlayPath);
	printf("This is the size of original=%d\nThis is the sizeof periodloc=%d\n", sizeof(original),sizeof(periodLoc));
*/
	return 0;
}
