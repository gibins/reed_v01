#include<stdio.h>
int main()
{
	int a, b, c;
	int array[4] = {0, 1, 2, -1};
	int *ptr = array;
	a = *ptr;
	b = *ptr++;
	c = *ptr+=2;
	printf("a=%d, b=%d, c=%d\n",a, b, c );
	
	ptr = array;
	a = *ptr;
	b = *(ptr +1);
	c = *(ptr + 2);
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	
	array[1] = 1;
	ptr = array;
	a = *ptr++;
	b = *ptr++;
	c = *ptr++;
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	
}
