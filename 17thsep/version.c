#include <stdio.h>

int main() {
    #ifdef __STDC_VERSION__
        printf("C version: %ld\n", __STDC_VERSION__);
    #else
        printf("C version: C89/C90\n");
    #endif
    return 0;
}
