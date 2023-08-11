#include <stdio.h>

int main() {
  // set array space
  int i, j, k, n, a[101010];
  // input data
  printf("How many data?");
  scanf("%d", &n);
  if (n > 0) {
    // input data ตัวที่ n
    for (i = 0; i < n; i++) {
      printf("Enter data %d : ", i + 1);
      scanf("%d", &a[i]);
    }
    printf("Your data here : ");
    //แสดงค่า data แบบ reverse ค่าของ array ตัวสุดท้ายไปตัวแรก
    for (j = n - 1; j >= 0; j--) {
      printf("\b %d ", a[j]);
    }
    printf("\n");
  } else {
    printf("Data should be more than 1 \n");
  }
}
