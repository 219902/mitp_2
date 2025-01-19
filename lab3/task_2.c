#include <assert.h>
#include <stdio.h>

#define MITP_ARR_SIZE(Arr) (sizeof(Arr) / sizeof(Arr[0]))

/*
* 	Q: Dlaczego do funkcji mitp_sum_elements() musimy przekazywac osobno 
*	liczbe elementow tablicy?
*	A: Bo sizeof w tym miejscu zwraca wielkosc typu argumentu, w tym przypadku typu 
*	wskaznikowego, a nie wielkosc tablicy (4/8).
*
*	Q: Dlaczego do obliczania elementow tablicy musimy uzyc skomplikowanego
*	makra zamiast po prostu uzyc sizeof(<nazwa_tablicy>)?
*	A: sizeof zwraca w tym przypadku rozmiar calej tablicy w Bajtach, wiec
*	zeby miec ilosc elementow to trzeba podzielic przez wielkosc jednego elementu
*	w Bajtach
*
*	Q: Czemu sluzy zabezpieczenie (asercja) na poczatku funkcji
*	A: Zapewnia, ze array nie wskazuje na 0 (NULL).
*/

double mitp_sum_elements(double array[], int len)
{
	assert(array);

	double ret = 0.0;
	for(int i = 0; i < len; ++i)
	{
		ret += array[i];
	}
	return ret;
}

int main()
{
	double arr[] = {1.0, 2.5, 3.14};
	printf("Array sum: %lf\n", mitp_sum_elements(arr, MITP_ARR_SIZE(arr)) );
//	printf("Jebs: %lf\n", mitp_sum_elements(NULL, 0));
	return 0;
}
