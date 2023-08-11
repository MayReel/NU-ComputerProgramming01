#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
void random_roll(int n){
    int i,j;
    for(i = 0; i < n ; i++){
        int r = (rand()%6) + 1 ;
        printf("%4d ", r);
    }
}

int main(){
    int n;
    char in;

    printf("How many dice to roll : ");
    scanf("%d", &n);
    srand(time(NULL));

    random_roll(n);
    printf("\n");
    printf("Do you want to roll again? (Y/N): ");
    scanf(" %c", &in);

    in = tolower(in);

    while(in == 'y'){
        random_roll(n);
        printf("\n");
        printf("Do you want to roll again? (Y/N) : ");
        scanf(" %c", &in);
        in = tolower(in);
    }
    return 0;

}




