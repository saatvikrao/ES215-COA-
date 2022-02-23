#include <stdio.h>

int main() {

    long double t1 = 0, t2 = 1;

    printf("%Lf", t1);
    
    for (int i = 1; i <= 100; i++){
        printf("%Lf\n", t2);
        
        long double x = t1;
        t1 = t2;
        t2 += x;
    }
    
    return 0;
}
