#include <stdio.h>
#include <assert.h>
int is_leap_year(int year)
{
    return year % 400 == 0 || (year % 100 != 0 && year % 4 == 0);
}

const int m12[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

// ���ںϷ��Լ��
int is_valid_date(int* y, int* m, int* d)
{
    if (*m < 1 || *m > 12) return 0;
    if (*d < 1) return 0;
    int last_day = m12[*m - 1];
    if (*m == 2) {
        if (is_leap_year(*y)) {
            if (*d > 29) return 0;
        } else if (*d > 28) {
            return 0;
        }
    } else if (*d > last_day) {
        return 0;
    }

    return 1;
}

void increment_date(int* y, int* m, int* d)
{
    if (!is_valid_date(y, m, d)) return;
    int last_day = m12[*m - 1], is_last_day = 0;

    // ���ж��ǲ��ǵ������һ��
    if (*m == 2) {
        if (is_leap_year(*y)) {
            if (*d == 29) {
                is_last_day = 1;
            }
        } else if (*d == 28) {
            is_last_day = 1;
        }
    } else if (*d == last_day) {
        is_last_day = 1;
    }

    if (is_last_day) {  // �ǵ������һ��)   
        *d = 1;
        if (*m == 12) {
            *m = 1;
            (*y)++;
        } else {
            (*m)++;
        }
    } else { // ���ǵ������һ�죬ֱ�ӽ�������1
        (*d)++;
    }
}

void decrement_date(int* y, int* m, int* d)
{
    if (!is_valid_date(y, m, d)) return;

    if (*d == 1) {
        if (*m == 1) {
            (*y)--;
            *m = 12;
        } else {
            (*m)--;
        }
        *d = m12[*m - 1];
        if (*m == 2 && is_leap_year(*y)) {
            *d = 29;
        }
    } else {
        (*d)--;
    }
}
int main()
{
	int y, m, d;

	y = 2000;
	m = 1;
	d = 30;
	increment_date(&y, &m, &d);
	assert(y == 2000);
	assert(m == 1);
	assert(d == 31);

	y = 2000;
	m = 1;
	d = 31;
	increment_date(&y, &m, &d);
	assert(y == 2000);
	assert(m == 2);
	assert(d == 1);

	y = 2000;
	m = 2;
	d = 28;
	increment_date(&y, &m, &d);
	assert(y == 2000);
	assert(m == 2);
	assert(d == 29);

	y = 2000;
	m = 2;
	d = 29;
	increment_date(&y, &m, &d);
	assert(y == 2000);
	assert(m == 3);
	assert(d == 1);

	y = 1900;
	m = 2;
	d = 28;
	increment_date(&y, &m, &d);
	assert(y == 1900);
	assert(m == 3);
	assert(d == 1);

	y = 1999;
	m = 12;
	d = 31;
	increment_date(&y, &m, &d);
	assert(y == 2000);
	assert(m == 1);
	assert(d == 1);


	y = 2000;
	m = 1;
	d = 31;
	decrement_date(&y, &m, &d);
	assert(y == 2000);
	assert(m == 1);
	assert(d == 30);

	y = 2000;
	m = 2;
	d = 1;
	decrement_date(&y, &m, &d);
	assert(y == 2000);
	assert(m == 1);
	assert(d == 31);

	y = 2000;
	m = 2;
	d = 29;
	decrement_date(&y, &m, &d);
	assert(y == 2000);
	assert(m == 2);
	assert(d == 28);

	y = 2000;
	m = 3;
	d = 1;
	decrement_date(&y, &m, &d);
	assert(y == 2000);
	assert(m == 2);
	assert(d == 29);

	y = 1900;
	m = 3;
	d = 1;
	decrement_date(&y, &m, &d);
	assert(y == 1900);
	assert(m == 2);
	assert(d == 28);

	y = 2000;
	m = 1;
	d = 1;
	decrement_date(&y, &m, &d);
	assert(y == 1999);
	assert(m == 12);
	assert(d == 31);
}