#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
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
int hoanVi(int a[] ,int a2[], int n1 ,int n2 ){ 
		 int i,d;
		 int found ;
		 if(n1!=n2){
			return 0;
	 }
	//kiem tra phan tu trong a co trong b hay khong
	for (i=0;i<n2;i++){
		found =0;
		for(d=0;d<n1;d++){
			if (a[i]==a2[d]){
			found=1;
			break;
			}
		}
		if (found==0){
			return 0;
		}
		}
	return 1;
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
  printf("vi tri so nho nhat la : a[%d] ",index);
}
// nguyen to => true
int KiemTraNguyenTo(int n) //kiem tra mot so nguyen co phai la so nguyen to hay không
{
    int i;
    if (n < 2)
    {
        return 0;
    }
    else if (n > 2)
    {
        if (n % 2 == 0) 
        {
            return 0;
        }
        for (i = 3; i <= sqrt(n); i += 2)   
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

void demnguyento(int a[], int n) //dem so luong phan tu cua mang la so nguyên to và nho hon 100
{
    int i, dem = 0;
    for(i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == 1 && a[i] < 100)
        {
            dem++;
        }
    }
    printf("\nSo luong cac so nguyen to la: %d", dem);
}

int tongSoPhanTu(int n){
		int digit;
		int sum = 0;
		do{
			digit= n%10;
			n= n/10;
			sum= sum + digit;
		}while(n>0);
		return sum;
	}
int tscc(int a[],int n){
	int i;
	for(i= n-1; i>= 0 ; i--){
		if(a[i]%2==0)		// kiem tra tu sau den truoc neu dung se in ra cai so chan cuoi cung do
			return a[i];	
		} 		
	return -1;
}
int main(){
	char c;
do{
	printf("\n\n========================[MENU]===========================\n");
	printf("= 1 - Kiem tra hoan vi cua 2 mang a va b.       Press 1 =\n");
	printf("= 2 - Kiem tra vi tri mang nho nhat.            Press 2 =\n");
	printf("= 3 - Kiem tra so luong nguyen to nho hon 100.  Press 3 =\n");
	printf("= 4 - Tim so chan cuoi cung trong mang.         Press 4 =\n");
	printf("= 5 - Tong cac chu so cua tung phan tu.         Press 5 =\n");
	printf("= 6 - Nhap 0 (Thoat chuong trinh).              Press 0 =\n");
	printf("=========================[END]===========================\n");
	printf("Nhap lua chon cua ban\n");
	fflush(stdin);
	scanf(" %c", &c);
	fflush(stdin);
	switch(c){
	case '0': 	
	   printf("Good bye ");
	   break;
	case '1':{
		int n,n2;
	printf("Enter  numbers of A: ");
	scanf(" %d", &n);
	int found;
	int *arrA,*arrB;
	arrA = (int*)malloc(n * sizeof(int));
	arrB = (int*)malloc(n2 * sizeof(int));
	nhap(arrA, n);
	hienThi(arrA, n);
	printf("Enter  numbers of B: ");
	scanf(" %d", &n2);
	nhap(arrB, n2);
	hienThi(arrB, n2);
      if (hoanVi(arrA,arrB,n,n2)==0) printf("b khong phai hoan vi cua a ");
      else printf("b la hoan vi a");		
		free(arrA);	
		free(arrB);	
		break;
	}	
	case '2':   {	
				int n;
	            printf("\nNhap so phan tu: ");
                scanf("%d", &n);
				int *arr;
				arr = (int*)malloc(n * sizeof(int));
				nhap(arr, n);
				hienThi(arr, n);
				isIndexMin(arr,n);
				free(arr);
				break;
				}	
	case '3':{
				int n;
	            printf("\nNhap so phan tu: ");
                scanf("%d", &n);
				int *arr;
				arr = (int*)malloc(n * sizeof(int));
				nhap(arr, n);
				hienThi(arr, n);
				 demnguyento(arr,n);
				free(arr);
		break;
	}	
	case '4':{
				int n;
	            printf("\nNhap so phan tu: ");
                scanf("%d", &n);
				int *arr;
				arr = (int*)malloc(n * sizeof(int));
				nhap(arr, n);
				if (tscc(arr,n)!=-1) printf("so chan cuoi cung la : %d ",tscc(arr,n));
				else printf("khong co so chan trong mang %d ",tscc(arr,n)); 
				free(arr);
		break;
	}	
	case '5':{
			int n;
	        printf("\n Nhap so luong danh sach : ");
            scanf("%d", &n);
			int *arr;
			arr = (int*)malloc(n * sizeof(int));
			nhap(arr, n);
			for(int i = 0; i < n; i++){
				 printf("Tong cac phan tu trong danh sach arr[%d] =", i + 1);
			     printf("%d\n",tongSoPhanTu(arr[i]));
			}break;				 
	}	
    default :{
    	printf("\nNhap lai !\n");
		break;
	} 
}
}while(c!='0');
getchar();
return 0;
}
