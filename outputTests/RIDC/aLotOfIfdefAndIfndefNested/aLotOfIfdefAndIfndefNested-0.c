#include <stdio.h>

#define A 10


int f() {
    int a = 10;
}
 

#ifdef C
void main() {
#ifdef A
#ifdef B
#ifdef C
    int i = 0;
#endif
#endif
#ifdef C
    int x = 1;
#endif
    int j = 2;
#endif
}
#endif
