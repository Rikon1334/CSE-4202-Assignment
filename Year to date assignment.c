#include <stdio.h>
int main() {
	int ndays, year, month, day;

	printf("Input no. of days: ");

	scanf("%d", &ndays);

	year = (int) ndays/365;

	ndays = ndays-(365*year);

	month = (int)ndays/30;

	day = (int)ndays-(month*30);

	printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", year, month, day);
	return 0;
}
