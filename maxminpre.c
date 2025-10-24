#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("double maximum:%g\n", DBL_MAX);
    printf("double minimum:%g\n", DBL_MIN);
    printf("double precision:%d\n", DBL_DIG);
    printf("int maximum:%g\n", INT_MAX);
    printf("int minimum:%g\n", INT_MIN);
    printf("float maximum:%g\n", FLT_MAX);
    printf("float minimum:%g\n", FLT_MIN);
    printf("float precision:%d\n", FLT_DIG);
    printf("long maximum:%g\n", LONG_MAX);
    printf("long minimum:%g\n", LONG_MIN);
    printf("longlong maximum:%g\n", LLONG_MAX);
    printf("longlong minimum:%g\n", LLONG_MIN);
    printf("long double maximum:%g\n", LDBL_MAX);
    printf("long double minimum:%g\n", LDBL_MIN);
    printf("long double precision:%d\n", LDBL_DIG);
    printf("char maximum:%g\n", CHAR_MAX);
    printf("char minimum:%g\n", CHAR_MIN);
    
    return 0;
}