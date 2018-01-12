//File Input Ouput
#include <stdio.h>
#include <string.h>

int main()
{
	FILE *p;
	p = fopen("thing.txt", "w");
	char c[50];
	gets(c);
	fprintf(p, "%s", c);
	fclose(p);
}