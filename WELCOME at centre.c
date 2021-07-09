#include<stdio.h>

int main()
{
	int n, i, j, k, x;
	printf("Give the odd number of lines (3, 5, 7,...): ");
	scanf("%d", &n);
	printf("\n");
	for(i = 1, k = 1; i <= (n+1)/2; ++i, k += 3)
	{
		for(j = k; j <= 3*((n+1)/2)-3; ++j)
			printf("-");
		for(j = 1, x = 0; j <= 3+6*(i-1); ++j)
		{
			if((j+2)%3 == 0 || j%3 == 0)
				printf(".");
			else
				printf("|");
			if(i == (n+1)/2)
			{
				printf("\b-");
				if(j > 1+((i-2)*3))
				{
					++x;
					switch(x)
					{
						case 1:
							printf("\bW");
							break;
						case 2:
							printf("\bE");
							break;
						case 3:
							printf("\bL");
							break;
						case 4:
							printf("\bC");
							break;
						case 5:
							printf("\bO");
							break;
						case 6:
							printf("\bM");
							break;
						case 7:
							printf("\bE");
							break;
					}
				}
			}
		}
		for(j = k; j <= 3*((n+1)/2)-3; ++j)
			printf("-");
		printf("\n");
	}
	for(i = 1, k = 1; i < (n+1)/2; ++i, k += 6)
	{
		for(j = 1; j <= 3+3*(i-1); ++j)
			printf("-");
		for(j = 3+6*(((n-1)/2)-1); j >= k; --j)
		{
			if((j+2)%3 == 0 || j%3 == 0)
				printf(".");
			else
				printf("|");	
		}
		for(j = 1; j <= 3+3*(i-1); ++j)
			printf("-");
		printf("\n");
	}
	return 0;
}
