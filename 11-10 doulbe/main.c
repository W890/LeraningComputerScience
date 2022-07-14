#include <stdio.h>

double strtof(const char* nptr)
{
    int i = 0;
    int f = 0;
    double fs = 1;
    int met_dot = 0;

    while (*nptr) {
        if (*nptr == '.') {
            if (met_dot == 1) {
                return 0;
            } else {
                met_dot = 1;
            }
        } else if ('0' <= *nptr && *nptr <= '9') {
            if (met_dot) {
                fs *= 10;
                f *= 10;
                f += *nptr - '0';
            } else {
                i *= 10;
                i += *nptr - '0';
            }
        } else {
            return 0;
        }
        nptr++;
    }
    return i + f / fs;
}

int main()
{
    const char* nptr = "12345.6";
    double num;

    num = strtof(nptr);
    printf("priceNum = %f\n", num);

    return 0;
}