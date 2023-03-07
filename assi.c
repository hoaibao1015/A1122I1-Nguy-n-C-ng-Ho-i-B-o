#include <stdio.h>
//khai b�o bi?n MAX = 100
#define MAX 100
/* h�m nh?p v?i tham s? l� m?t m?ng s? th?c v?i s? ph?n t? n */
void nhap(float a[], int &n) {
  //s? d?ng do..while d? y�u c?u ngu?i d�ng nh?p v�o s? ph?n t?
  do{
    printf("\nNh?p s? ph?n t?: ");
    scanf("%d", &n);
    if(n<=0 || n>MAX){
      printf("\nS? ph?n t? kh�ng h?p l?, xin vui l�ng ki?m tra l?i");
    }
  }while(n<=0 || n> MAX);
  //s? d?ng v�ng l?p for d? y�u c?u ngu?i d�ng nh?p v�o gi� tr? cho t?ng ph?n t?
  for(int i = 0; i < n; i++){
    printf("Nh?p a[%d]= ", i);
    scanf("%f", &a[i]);
  }
}
/* h�m t�m v? tr� index c?a ph?n t? nh? nh?t trong m?ng */
float isIndexMin(float a[], int n){
  //g�n ph?n t? d?u ti�n cho bi?n min
  float min = a[0];
  //khai b�o bi?n index l� v? tr� c?a ph?n t? nh? nh?t
  int index;
  //s? d?ng v�ng l?p for d? so s�nh min v?i t?ng ph?n t? trong m?ng
  //ph?n t? n�o nh? hon min th� g�n n� cho min
  for(int i = 0; i < n; i++){
    if(a[i] < min){
      min = a[i];
      //ta g�n v? tr� nh? nh?t cho index
      index = i;
    }
  }
  //nhu v?y d?n cu?i v�ng l?p ta s? du?c index l� v? tr� c?a ph?n t? nh? nh?t
  return index;
}
/* h�m xu?t */
void xuat(float a[], int n){
  //xu?t c�c ph?n t? trong m?ng
  printf("C�c ph?n t? trong m?ng l�: ");
  for(int i = 0; i < n; i++){
    printf("%f\t",a[i]);
  }
  //xu?t v? tr� c?a ph?n t? nh? nh?t trong m?ng
  printf("\nV? tr� c?a ph?n t? nh? nh?t l�: %.1f",isIndexMin(a,n));
  printf("\n---------------------------------\n");
  printf("Chuong tr�nh n�y du?c dang t?i Freetuts.net");
}
/* h�m main */
int main() {
  int n;
  float a[MAX];
  nhap(a,n);
  xuat(a,n);
}
