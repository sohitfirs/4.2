/* https://github.com/sohitfirs/4.2.git */

#include <stdio.h>
#include <cstdlib>
main()
{
	int n;
	int mas [7];

	for(int i=0; i<7;i++)
	{
		printf("vvedite %i el mas - ", i+1);
		scanf("%i", &mas[i]);
	}
	
	for(int i=0; i<7;i++)
	{
		printf("%i ", mas[i]);
	}

	printf("\nkol el mas ");
	scanf("%i", &n);
	
	for(int i=0; i<n;i++)
	{
		printf("vvedite %i el mas - ", i+1);
		scanf("%i", &mas[i]);
	}
	
	for(int i=0; i<n;i++)
	{
		printf("%i ", mas[i]);
	}
	
	printf("\n");
	system("pause");
}
