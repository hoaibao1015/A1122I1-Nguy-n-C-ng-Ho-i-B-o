#include <stdio.h>
//khai báo bi?n MAX = 100
#define MAX 100
/* hàm nh?p v?i tham s? là m?t m?ng s? th?c v?i s? ph?n t? n */
void nhap(float a[], int &n) {
  //s? d?ng do..while d? yêu c?u ngu?i dùng nh?p vào s? ph?n t?
  do{
    printf("\nNh?p s? ph?n t?: ");
    scanf("%d", &n);
    if(n<=0 || n>MAX){
      printf("\nS? ph?n t? không h?p l?, xin vui lòng ki?m tra l?i");
    }
  }while(n<=0 || n> MAX);
  //s? d?ng vòng l?p for d? yêu c?u ngu?i dùng nh?p vào giá tr? cho t?ng ph?n t?
  for(int i = 0; i < n; i++){
    printf("Nh?p a[%d]= ", i);
    scanf("%f", &a[i]);
  }
}
/* hàm tìm v? trí index c?a ph?n t? nh? nh?t trong m?ng */
float isIndexMin(float a[], int n){
  //gán ph?n t? d?u tiên cho bi?n min
  float min = a[0];
  //khai báo bi?n index là v? trí c?a ph?n t? nh? nh?t
  int index;
  //s? d?ng vòng l?p for d? so sánh min v?i t?ng ph?n t? trong m?ng
  //ph?n t? nào nh? hon min thì gán nó cho min
  for(int i = 0; i < n; i++){
    if(a[i] < min){
      min = a[i];
      //ta gán v? trí nh? nh?t cho index
      index = i;
    }
  }
  //nhu v?y d?n cu?i vòng l?p ta s? du?c index là v? trí c?a ph?n t? nh? nh?t
  return index;
}
/* hàm xu?t */
void xuat(float a[], int n){
  //xu?t các ph?n t? trong m?ng
  printf("Các ph?n t? trong m?ng là: ");
  for(int i = 0; i < n; i++){
    printf("%f\t",a[i]);
  }
  //xu?t v? trí c?a ph?n t? nh? nh?t trong m?ng
  printf("\nV? trí c?a ph?n t? nh? nh?t là: %.1f",isIndexMin(a,n));
  printf("\n---------------------------------\n");
  printf("Chuong trình này du?c dang t?i Freetuts.net");
}
/* hàm main */
int main() {
  int n;
  float a[MAX];
  nhap(a,n);
  xuat(a,n);
}
