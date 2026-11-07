#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_CTYPE, "RUS");

	wchar_t array[2] = { L'Я', L'Щ' };
	
	int size = (char*)&array[1] - (char*)&array[0];

	printf("Тип wchar_t занимает %d байт", size);

	return 0;
}