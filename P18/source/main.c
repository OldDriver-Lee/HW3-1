#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main(void)
{
	char string1[60] = "welcome";
	char string2[60];

	int len;

	strcpy(string2, string1);
	printf("string2 = %s\n", string2);

	len = strlen(string2);
	printf("¦r¦êªø«×¬°%d\n",len);

	system("pause");
	return 0;
}