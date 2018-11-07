#include<stdio.h>

size t my_strlen(char *s)
{
	char *p = s;
	while (*p)
		++p;

	return (p - s);
}
int main(void)
{
	int i;
	char *s[] =
	{
		"Git Tutorial",
		"zippyops"
	};

	for (i = 0; i < 2; ++i)

	printf("string length of %s = %u\n",s[i], my_strlen(s[i]));
	return 0;
}
