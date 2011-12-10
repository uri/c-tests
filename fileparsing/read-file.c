#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int loadOverlay(const char * p_path)
{
	// Read the file
	char * fileContent;
	FILE * jsonFile;
	
	jsonFile = fopen(p_path, "r");
	int charPos = 0;
	{
		char buf[2048];
		while (1)
		{
			char currChar = fgetc(jsonFile);
			if (currChar == EOF)
				break;
				
			buf[charPos] = currChar;
			charPos++;
		}
		
		fileContent = malloc(sizeof(char) * charPos + 1);
		
		strncpy(fileContent, buf, charPos + 1);
		fileContent[charPos + 1] = '\0';
	}
	
	
	fclose(jsonFile);
	printf("These are the contents of the file:\n%s", fileContent);
}


int main (int argc, const char * argv[])
{
	loadOverlay("json");
	return 0;
}
