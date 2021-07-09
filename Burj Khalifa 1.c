#include<stdio.h>

int main()
{
	int n, i, j, k, x;
	printf("Give the largest number of the pattern (more than 9 will leave the page): ");
	scanf("%d", &n);
	printf("\n");
	for(i=1, x=1; i<=n; ++i, ++x)
	{
		int y=x;
		for(j=n-i; j>0; --j)
			printf(" ");
		for(j=1; j<=i; ++j, --y)
			printf("%2d", y);
		printf(" ");
		for(j=1; j<=i; ++j)
		{
			for(k=i; k<=n; ++k)
				printf("  ");
			int z=i;
			while(z!=0)
			{
				printf("%2d", z);
				--z;
			}
		}
		printf("\n");
	}
	for(i=n-1, x=n-1; i>=1; --i, --x)
	{
		int y=x;
		for(j=i; j<=n-1; ++j)
			printf(" ");
		for(j=1; j<=i; ++j, --y)
			printf("%2d", y);
		printf(" ");
		for(j=1; j<=i; ++j)
		{
			for(k=i; k<=n; ++k)
				printf("  ");
			int z=i;
			while(z!=0)
			{
				printf("%2d", z);
				--z;
			}
		}
		printf("\n");
	}
	return 0;
}
