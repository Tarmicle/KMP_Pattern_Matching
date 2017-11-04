#include <stdio.h>
#include "kmpsearch.h"
int main() {
    long r = strmatch("Thomas","My name is Thomas");
    printf("%ld",r);
    return 0;
}