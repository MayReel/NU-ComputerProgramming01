/*==================================================
    Program: We want to update our GearNU Calculation program to version 4 which
ask for number of students to perform a calculation. The number of students
should be in range 1 to 10. The program will response with message "Invalid
number of students." if the receiving number is not in the range. After received
valid number of student, the program will perform calculation of Gear NU for
each students as it did in program version 3 Output: Gear statement : Gear > 0
and Gear < 31 number of studen >=1 nad <= 10

Relation: Gear = studentID 8 ตัว /1000000 - 36
====================================================*/
#include <stdio.h>
//ไอเหี้ยแม่งกูยังไม่รู้เลยว่าตอนนั้น int หารแล้วได้เป็ฯจำนวนเต็ม 55555555555555

int main(void) {
  // ประกาศตัวแปร
  int studentID, Gear, i, n, j;
  //ถามจำนวนนักเรียน
  printf("How many students? ");
  //รับค่านักเรียน
  scanf("%d", &n);
  //ถ้านักเรียนอยู่ในช่วง [1,10]
  if (n >= 1 && n <= 10) {
    //loop รับรหัสของนิสิตคนที่ n
    for (i = 0; i < n; i++) {
      //แสดงข้อความรับค่าของนิสิตคนที่ n
      printf("Enter student ID of student #%d:", i + 1);
      scanf("%d", &studentID);
      //คำนวนรุ่น Gear ของนิสิตที่ n
      Gear = studentID / 1000000 - 36;
      //ถ้าเกียร์อยู่ในช่วง [1,30]
      if (Gear >= 1 && Gear <= 30) {
        printf("Student #%d is GearNU %d \n", i + 1, Gear);
        Gear = 0;
      } 
      //ถ้าเกียร์อยู่ในช่วงอื่น
      else {
        printf("Invalide student ID.\n");
      }
    }

  }
    //ถ้าจำนวนนิสิตไม่อยู่ในช่วง [1,10]
   else {
    printf("Invalid number of students.\n");
  }
}
