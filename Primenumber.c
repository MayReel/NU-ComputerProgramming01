#include<stdio.h>

void is_prime(int n){
    int count = 0;

    for(int i = 1; i <= n ; i++){
        if(n%i == 0){
            count++;
        }

    }
    if(count == 2){
        printf("%d is a prime number" ,n);
    }
    else{
        printf("%d is not a prime number", n);
    }

}


int main(){
    unsigned int n;
    printf("Enter an unsigned integer : ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1;
    }

    is_prime(n);
    printf("\n");
}
