/* https://github.com/sohitfirs/4.2.git */

#include <stdio.h>
#include <cstdlib>
main()
{
	int n;
	int mas [7];

	for(int i=0; i<7;i++)
	{
		scanf("%i", &mas[i]);
	}
	
	for(int i=0; i<7;i++)
	{
		printf("%i", mas[i]);
	}

	printf("\nkol el ");
	scanf("%i", &n);
	
	for(int i=0; i<n;i++)
	{
		scanf("%i", &mas[i]);
	}
	
	for(int i=0; i<n;i++)
	{
		printf("%i ", mas[i]);
	}
	
	printf("\n");
	system("pause");
}
