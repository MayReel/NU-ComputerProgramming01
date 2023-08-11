#include<stdio.h>
#include<string.h>


void changedate(char *input, char *output){
    int month,date,year;
    char moth[][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul"
    ,"Aug","Sep","Oct","Nov","Dec"};

    sscanf(input, "%d-%d-%d", &month,&date,&year);

    if(month < 1 || month > 12){
        printf("not correct month please input 1-12");
        return 0;
    }
    else if(date < 1 || date > 31){

        printf("not correct day please input 1-31");
        return 0;
    }
    else if(year < 1){

        printf("not correct year please input 1-n");
        return 0;
    }
    sprintf(output, "%02d-%s-%02d", date,moth[month-1],year);
    printf("Change date to Mmm-dd-yy : %s", output);

}

int main(){
    char input[20], output[20];

    printf("Enter date in mm-dd-yy : ");

    scanf("%s", input);

    changedate(input,output);




}
