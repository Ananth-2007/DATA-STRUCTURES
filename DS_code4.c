#include <stdio.h>

#define MAX 100
int main() {
    int fib[MAX];
    int n, i;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Number of terms should be a positive integer.\n");
        return 1;
    }
    fib[0] = 0;
    if (n > 1)
        fib[1] = 1;
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("Fibonacci Series:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
    return 0;
}

