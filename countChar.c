#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    //ประกาศตัวแปร
    char text[100],convertstr[100];
    int countal[26] ={0} ,leng = 0, total = 0;
    //รับค่า str
    fgets(text , 100, stdin);
    //ความยาวของ text
    leng = strlen(text);

    for(int i = 0 ; i < leng; i++){
        //ทำให้ text ช่องที่ i เป็นตัวเล็ก
        convertstr[i] = tolower(text[i]);
        //ถ้าเป็นตัวอักษร ให้ทำการเก็บค่าของตัวอักษร 1 ครั้ง
        if(isalpha(convertstr[i])){
            //นำตัวอักษรในระบบ ASCII มาลบ กับ 97 สมมติ a เล็กคือ 97 จะทำให้ a เก็บในช่องที่ 0
            countal[convertstr[i]-97]++;
            //ตัวอักษรทั้งหมด +1
            total++;
        }
    }
    //Print Alphabet
    for(int i = 0 ; i < 26 ; i++){
        //ตัวอักษรในระบบ ASCII n = 65 คือ A n+1,...,n+26 คือ B,...,Z
        char letter = 65 + i;
        //คิดเปอร์เซ็นของตัวอักษรในข้อความที่มีตัวอักษรทั้งหมด
        double percent = (countal[i]*100.0)/total;
        //แสดงค่า
        printf("%c = %d (%.1f%%) ", letter ,countal[i], percent);

        // เมื่อแสดงตัวอักษรครบ 5 ตัวให้ขึ้นบรรทัดใหม่
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }

    }
    printf("\n");
    printf("All alphabet = %d\n", total);
}
