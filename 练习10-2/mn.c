#include <stdio.h>
int is_calid_date(int* y, int* m, int* d)
{
	if (1 > *m || *m > 12) return 0;
	if (*d < 1) return 0;
	int last_day = M[*m - 1];
	if (*m == 2)
		if (is_laft_date(*y))
			if (*d > 29) return 0;
			else {
				if (*d > 28) return 0;
			}
		else {
			if (*d > is_last_day)	return 0;

		}
	return 1;
}