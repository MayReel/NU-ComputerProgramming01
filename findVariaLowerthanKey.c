#include <stdio.h>

int main() {
  //ประกาศตัวแปร
  int i, j, k, a[10101], n, key;
  //รับค่าจำนวน data
  printf("How many data?");
  scanf("%d", &n);
  if (n > 0) {
    //รับค่าข้อมูลตัวที่ i
    for (i = 0; i < n; i++) {
      printf("Enter data %d : ", i + 1);
      scanf("%d", &a[i]);
    }
    //รับค่าตัวที่ต้องการตรวจค่าที่น้อยกว่า
    printf("What is the key value ? ");
    scanf("%d", &key);
    printf("Here are the data that less than the key : \n");
    //แสดงค่าที่น้อยกว่า key
    for (i = 0; i < n; i++) {
      if (a[i] < key) {
        printf("\b %d ", a[i]);
      }
    }
    printf("\n");
  }

  else {
    printf("Please put positvie integer\n");
  }
}
