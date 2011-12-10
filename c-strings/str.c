#include <stdio.h>
#include <string.h>

int main()
{
	const char original[] = "30.xml";
	const char * periodLoc;
	char overlayPath[32];
	char overlayName[8];
	periodLoc = memchr(original, '.', sizeof original);

	strncpy(overlayName, original, sizeof(original) - sizeof(periodLoc) - 1);

	sprintf(overlayPath, "/radio/cdsc/%s.conf", overlayName);
	
	printf("This is the overlayPath=%s\n", overlayPath);
	printf("This is the sizeof original=%d\n", sizeof original);
	printf("This is the sizeof period=%d\n", sizeof periodLoc);
	return 0;
}
