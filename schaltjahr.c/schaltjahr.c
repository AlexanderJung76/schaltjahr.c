#include <stdio.h>

int eingabe = 0;

int main()
{
	printf("Bitte eine Jahreszahl eingeben: ");
	scanf_s("%i", &eingabe);
	if (eingabe % 4 == 0)
	{
		if (eingabe % 100 != 0 || eingabe % 400 == 0)
		{
			printf("\n%i ist ein Schaltjahr!\n", eingabe);
			printf("Druecke Enter zum beenden.\n");
			getch();
			return 0;
		}
		else printf("\n%i ist kein Schaltjahr.\n", eingabe);
		printf("Druecke Enter zum beenden.");
		getch();
		return 0;
	}
	else printf("\n%i ist kein Schaltjahr.\n", eingabe);
	printf("Druecke Enter zum beenden.");
	getch();
	return 0;
}