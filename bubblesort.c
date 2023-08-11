#include<stdio.h>
//ปล.ที่ใช้ n-1 เพราะสำหรับ n จำนวนเมื่อ n%2 != 0 จะทำให้เกิดการจับคู่นอกค่าของ array นั่นคือสำหรับ n เท่ากับ 7 จะเกิดการจับคู่ 6 ครั้ง 0>1,1>2,...,n-1>n?
//สำหรับ loop แรกไว้สำหรับการจัดเรียงให้ ค่าที่มากสุดอยู่ด้านขวาสุด สมมติให้ a1,a2,...,an เป็ฯการเรียงจากน้อยไปมาก ถ้าไม่มี loop แรก an จะมากที่สุด แต่ a1,...,an-1 จะไม่เกิดการเรียงจากน้อยไปมาก

void sorting(int arr[],int n){
    int i,j,k;
    for(i=0; i<n-1;i++){
        for(j = 0 ; j < n-1 ; j++){
            if(arr[j] >  arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int i,j,k;
    int n;
    printf("How many number do you have? : ");
    scanf("%d", &n);
    int input[n];
    for(i =0 ;i < n; i++){
        printf("Enter data %d : ", i+1);
        scanf("%d",&input[i]);
    }

    sorting(input, n);

    for(i = 0; i < n ; i++){
        printf("%d ", input[i]);

    }


}
