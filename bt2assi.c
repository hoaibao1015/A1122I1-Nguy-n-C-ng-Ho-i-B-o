#include<stdio.h>
#include<stdlib.h>
void nhap(int *arr, int n){
	int i;
    for ( i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", (arr + i));
    }
}
void hienThi( int *arr, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d", *(arr+i));
	}
	printf("\n");
}
void isIndexMin(int a[], int n){
  int min = a[0];
  int index;
  for(int i = 0; i < n; i++){
    if(a[i] < min){
      min = a[i];
      index = i;
    }
  }
  printf("vi tri so nho nhat la : %d ",index);
}
int main(){
	int n;
	printf("Enter ten numbers: ");
	scanf(" %d", &n);
	int *arr;
	arr = (int*)malloc(n * sizeof(int));
	nhap(arr, n);
	hienThi(arr, n);
	isIndexMin(arr,n);
	free(arr);
}
