#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int copier(char *str);
void main(int argc, char *argv[])
{
	if(argc !=2 )
	{
		printf("Usage : %s string\n", argv[0]);
		exit(0);
	}
	printf("ESP: %#010x\n",copier(argv[1]));
	printf("Done\n");
}
int copier(char *str)
{
	char buffer[1000];
	register int i asm("esp");
	strcpy(buffer,str);
	return i;
}

