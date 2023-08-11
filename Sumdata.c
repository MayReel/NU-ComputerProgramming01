/*==================================================
    A program to ask the user "How many data items do you have?" then the program will iteratively read the data item until complete all items and after that, perform the sum of all data items and display it to the screen. The example of expected outputs is shown below. Note that all data items are unsigned integers.
input : data item(n),data of n (j),
output : sum
====================================================*/
//อห เก่าจัด ไม่ใช้ array ด้วย
#include <stdio.h>


int main(void) {
  //ประกาศตัวแปร
  int i,j,k,n, sum=0;
  //รับค่าของจำนวนข้อมูล
  printf("How many data items do you have?");
  scanf("%d", &n);
  //ถ้า n>= 0 
  if(n>=0){
    for(i=0;i<n;i++){
    //รับข้อมูลตัวที่ n
    printf("Enter data #%d: ",i+1);
    scanf("%d", &j);
    sum = sum + j;
    //รีเซ็ตค่า j เพื่อรับ item i+1  
    j = 0;

    
  }
    //แสดงผลรวมทั้งหมด
  printf("Sum of all data items = %d\n", sum);
  }
  else{
    printf("Invalid");
    }
  
}
