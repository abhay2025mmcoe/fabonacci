#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0;   
    } else if (n == 1) {
        return 1;   
    } else {
       int ans= fibonacci(n - 1) + fibonacci(n - 2); 
        return ans;
    }
}

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
        
    }   
    return 0;
}
