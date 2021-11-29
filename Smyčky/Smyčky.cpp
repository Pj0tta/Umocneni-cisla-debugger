#include <stdio.h>

int main()
{
	int cislo, nasobek;
	long long vysledek = 1;
	printf("Zadej cislo ");
	scanf_s("%d",&cislo);

	printf("Zadej pocet umocneni ");
	scanf_s("%d", &nasobek);

	for (int i = 1; i <= nasobek; i++) {
		vysledek = vysledek * cislo;
		
	}
	printf("%d", vysledek);
}
