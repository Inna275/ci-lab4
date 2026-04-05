#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {

    printf("CI/CD pipeline test\n");

    if (sum(2,3) == 5) {
        printf("Test passed\n");
        return 0;
    } else {
        printf("Test failed\n");
        return 1;
    }
}
