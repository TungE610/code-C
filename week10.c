------Bài 10.3--------------------------------------------------------
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void enter_array(int a[],int *n){
    printf("Nhập số phần tử của mảng ");
    scanf("%d",n);
    printf("Nhập mảng cần in: ");
    for(int i =0;i<*n;i++){
        printf("\nphần tử thứ %d = ",i);
        scanf("%d",&a[i]);      
    }
}
void sort(int a[],int n){
    int i,j;
    int temp;

  for(i=0;i<n-1;i++){
      for(j=n-1;j>i;j--){
          if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
          }
      }
  }
}
int check(int a[],int n,int b[],int m){
    int i;
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            return 0;
        }
        return 1;
       
}}
int main(){
    int a[100],b[100];
    int m,n;
    printf("Nhập mảng thứ nhất :\n ");
    enter_array(a,&n);
    printf("Nhập mảng thứ hai :\n ");
    enter_array(b,&m);
    if(m!=n){
        printf("Hai mảng không bằng nhau !!");
        return 0;
    }
    sort(a,n);
    sort(b,m);
    if(check(a,n,b,m)){
        printf("\nHai mảng trên bằng nhau!!");
    }
    else{
        printf("\nHai mảng trên không bằng nhau");
    }
    return 0;}
    ------Bài 10.4--------------------------------------------------------
#include<stdio.h>
#include<math.h>
void enter_array(int a[],int *n){
    printf("Nhập số phần tử của mảng ");
    scanf("%d",n);
    printf("Nhập mảng cần in: ");
    for(int i =0;i<*n;i++){
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);      
    }}
void sort_giam(int a[],int n){
    int i,j;
    int temp;

  for(i=0;i<n-1;i++){
      for(j=n-1;j>i;j--){
          if(a[i]<a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
          }
      }
  }
}
void OddSort (int a[], int n) { 
    int tmp;
    int i,j;
    for (i = 0; i < n-1 ; i++) 
    for (j = i+1; j < n; j++)
     if (a[i]<a[j] && (a[i]%2) && (a[j]%2))
     {
    tmp=a[i];
    a[i]=a[j];
    a[j]= tmp;
        }
    }

void xuat(int a[],int n){
    int i;
    printf("\nMảng sau khi sắp xếp là : \n");
    for(i=0;i<n;i++){
        printf("%3d",a[i]);
    }
}
int main(){
    int a[100];
    int n;
    enter_array(a,&n);
    sort_giam(a,n);
    xuat(a,n);
    OddSort(a,n);
    xuat(a,n);
    return 0;
}
