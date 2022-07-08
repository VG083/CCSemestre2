#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("%hhi %hhi %hhu\n", CHAR_MIN, CHAR_MAX, UCHAR_MAX);
    printf("%hd % hi %hu\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
    printf("%d %d %u\n", INT_MIN, INT_MAX, UINT_MAX);
    printf("%ld %ld %lu\n", LONG_MIN, LONG_MAX, ULONG_MAX);
    printf("%lld %lld %llu", LLONG_MIN, LLONG_MAX, ULLONG_MAX);

    return 0;
}