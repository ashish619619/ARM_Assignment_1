/* To find the largest among three integers */

#include <stdio.h>
int main()
{
	int a, b, c;
	printf("enter three numbers \n");
	scanf("%d %d %d", &a, &b, &c);

	if(a>b && a>c)
	{
		printf("%d is the biggest number \n", a);
	}
	else if(b>a && b>c)
	{
		printf("%d is the biggest number \n", b);
	}
	else
	{
		printf("%d is the biggest number \n", c);
	}
	return 0;
}

