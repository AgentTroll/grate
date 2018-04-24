#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

int add(int a, int b) {
    printf("Executed C: ");
    return a + b;
}

int sub(int a, int b) {
    printf("Executed C: ");
    return a - b;
}

int mul(int a, int b) {
    printf("Executed C: ");
    return a * b;
}

double divide(int a, int b) {
    printf("Executed C: ");
    double da = (double) a;
    double db = (double) b;

    return da / db;
}

#ifdef __cplusplus
}
#endif