#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("double型の最大値:%g\n", DBL_MAX);
    printf("double型の最小値:%g\n", DBL_MIN);
    printf("double型の精度:%d\n", DBL_DIG);
    
    printf("float型の最大値:%g\n", FLT_MAX);
    printf("float型の最小値:%g\n", FLT_MIN);
    printf("float型の精度:%d\n", FLT_DIG);
    
    printf("long double型の最大値:%Lf\n", LDBL_MAX);
    printf("long double型の最小値:%Lf\n", LDBL_MIN);
    printf("long double型の精度:%Lf\n", LDBL_DIG);
    
    printf("int型の最大値:%d\n", INT_MAX);
    printf("int型の最小値:%d\n", INT_MIN);
    
    printf("long型の最大値:%g\n", LONG_MAX);
    printf("long型の最小値:%g\n", LONG_MIN);
    
    printf("long long int型の最大値:%g\n", LLONG_MAX);
    printf("long long int型の最小値:%g\n", LLONG_MIN);
    
    printf("short型の最大値:%d\n", SHRT_MAX);
    printf("short型の最小値:%d\n", SHRT_MIN);
    
    printf("char型の最大値:%d\n", CHAR_MAX);
    printf("char型の最小値:%d\n", CHAR_MIN);
    
    
    return 0;
}