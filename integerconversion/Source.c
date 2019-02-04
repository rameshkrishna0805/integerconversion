#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int count = 0, min = 99999, max = 0, sum = 0;
	while (1)
	{
		
		scanf_s(" %d", &n);
		if (n > 0)
		{
			count++;
			sum = sum + n;
			if (n > max)
			{
				max = n;
			}
			else if(n<min)
			{
				min = n;
			}
		}
		if (n <= 0)
		{
			break;
		}

	}
	printf("\n %d %d %d %d\n", count, min, max,sum/count);
	//getch();
	//
		return 0;

}