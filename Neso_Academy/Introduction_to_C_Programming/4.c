#include <stdio.h>
#include <limits.h>
int main() {
    int x1_1 = INT_MIN;
    int x1_2 = INT_MAX;
    unsigned int x2 = UINT_MAX;
    short x3_1 = SHRT_MIN;
    short x3_2 = SHRT_MAX;
    unsigned short x4 = USHRT_MAX;
    long int x5_1 = LONG_MIN;
    long int x5_2 = LONG_MAX;
    unsigned long int x6 = ULONG_MAX;
    long long int x7_1 = LLONG_MIN;
    long long int x7_2 = LLONG_MAX;
    unsigned long long int x8 = ULLONG_MAX;
    printf("%d  %d \n", x1_1, x1_2);
    printf("0  %u\n", x2);
    printf("%d  %d \n", x3_1, x3_2);
    printf("0  %u\n", x4);
    printf("%ld  %ld \n", x5_1, x5_2);
    printf("0  %lu\n", x6);
    printf("%lld  %lld \n", x7_1, x7_2);
    printf("0  %llu\n", x8);
    return 0;
}