#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    else if(n<0){
        printf("Invalid number.\n");
        return 0;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int result;
    int n;

    printf("Enter the value n (unsigned integer): ");
    scanf("%d", &n);
    result = fibonacci(n);
    if(n>0){
        printf("The fibonacci(%d) is %d\n", n, result);
    }

    return 0;
}