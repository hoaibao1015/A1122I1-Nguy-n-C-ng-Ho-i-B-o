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
		printf(" %d", *(arr+i));
	}
	printf("\n");
}
int main(){
	int n,n2,i,d;
	int found;
	printf("Enter ten numbers of A: ");
	scanf(" %d", &n);
	int *arrA,*arrB;
	arrA = (int*)malloc(n * sizeof(int));
	arrB = (int*)malloc(n2 * sizeof(int));
	nhap(arrA, n);
	hienThi(arrA, n);
	printf("Enter ten numbers of B: ");
	scanf(" %d", &n2);
	nhap(arrB, n2);
	hienThi(arrB, n2);
	//kiem tra do dai hai mang co bang nhau khong
	if(n!=n2){
			printf("b khong phai la hoan vi cua a");
	return 0;
	 }
	//kiem tra phan tu trong a co trong b hay khong
	for (i=0;i<n2;i++){
		found =0;
		for(d=0;d<n;d++){
			if (arrB[i]==arrA[d]){
			found=1;
			break;
			}
		}
		if (found==0){
			printf("b khong phai la hoan vi cua a");
			return 0;
		}
		}
		printf ("b la hoan vi cua a");
			return 0;
}
	


