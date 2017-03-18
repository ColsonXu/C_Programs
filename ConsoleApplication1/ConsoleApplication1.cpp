#include <stdio.h>
#include <stdlib.h>

int main()
{
	char yourName[20];
	char crushName[20];

	printf("What is your name? \n");
	scanf("%s", yourName);
	printf("What is the name of your crush? \n");
	scanf("%s", crushName);
	printf("%s and %s will get married.\n\n", yourName, crushName);

    return 0;
}
