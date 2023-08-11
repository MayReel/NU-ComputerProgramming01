#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    //ประกาศตัวแปร
    int len, count[100] = {0};
    char text[100]  ,textnum[10][10] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    //รับค่า char input
    fgets(text, 100 ,stdin);
    //วัด Lenght ของ text
    len = strlen(text);

    for(int i = 0; i < len ;i++){
        //เช็คว่า text ช่องที่ i เป็นเลขเดี่ยวตัวที่เท่าไหร่
        if(isdigit(text[i])){
            //เก็บค่าของเลขเดี่ยวนระบบ ASCII
            count[text[i]-48]++;
        }
    }

    for(int i = 0 ; i < 10; i++){
        //เช็คว่าค่าของ count[i] มีเลขกี่ตัวแล้วแสดงออกมาตามจำนวน
        for(int j = 0; j < count[i] ; j++){
            //แสดงค่าออกมาตาม Array ของ textnum
            printf("%s ", textnum[i]);
        }
    }
    return 0;
}
