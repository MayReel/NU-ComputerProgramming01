//เอาจริงๆก็ให้ max,min = ตัวแรก ก็ได้นะ แล้วทำไมตอนนั้นทำออกไปวะ
#include <stdio.h>

int main(void) {
  //ประกาศตัวแปร
  int i, j, k, n, max = 0, min = 10101010;
  //รับค่าของจำนวนข้อมูล
  printf("How many data items do you have?");
  scanf("%d", &n);
  //ถ้า n> 0
  if (n > 0) {
    for (i = 0; i < n; i++) {
      //รับข้อมูลตัวที่ n
      printf("Enter data #%d: ", i + 1);
      scanf("%d", &j);
      //ถ้า ค่าข้อมูลตัวที่ n มีมากกว่าค่า max
      if (j >= max) {
        //ให้ max เป็นค่าที่ j ของข้อมูลตัวที่ n
        max = j;
      }
      //ถ้า ค่าของข้อมูลน้อยกว่าค่า min ที่กำหนดไว้
      if (j <= min) {
        //ให้ min เป็นค่าที่ j ของข้อมูลตัวที่ n
        min = j;
      }
      //รีเซ็ตข้อมูล j ของตัวที่ n
      j = 0;
    }
    //แสดง output ของ max และ min
    printf("Max of all data = %d\n", max);
    printf("Min of all data = %d\n", min);
  }
  //ถ้าค่า n เป็น 0
  else if (n == 0) {
    //บังคับ min เป็น 0
    min = 0;
    //แสดง output ของ max และ min
    printf("Max of all data = %d\n", max);
    printf("Min of all data = %d\n", min);
  }

  else {
    printf("Invalid.\n");
  }
}
