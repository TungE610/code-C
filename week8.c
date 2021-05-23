//bài 8.1
#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    int dem;
    char string[100];
    printf("nhập chuỗi cần xoá khoảng trắng");
        gets(string);

   int n= strlen(string);
for(i=0;i<n;i++){
    if(string[i]==' ' && string[i+1]==' '){
        dem++;
        for(j=i+1;j<n;j++){
            string[j]=string[j+1];

        }
i--;
    }
}
for(i=0;i<n-dem;i++){
    printf("%c",string[i]);
};
    return 0;
}
------------------------------------------------------------------------------
  //bài 8.2
------------------------------------------------------------------------------
  //bài 8.3
  #include<stdio.h>
#include<string.h>
#include<math.h>

void main( void )
{int a;
    printf("Enter a positive number: ");
    scanf("%d",&a);
  float x=0.5;
  int dem=1;
  while(dem<=9){
  x=x-(pow(x,3)-a)/(3*pow(x,2));
  dem++;
  };
printf("%f",x);
}
------------------------------------------------------------------------------
//bài 8.4
------------------------------------------------------------------------------
//bài 8.5
  #include<stdio.h>
#include<string.h>
#include<math.h>

void main( void )
{int a;
printf("Nhập số lượng học sinh: ");
scanf("%d",&a);
    int i=1;
 printf("Nhập trạng thái cho từng học sinh:(1:pass;2:fail) ");
 int j[a-1];
while(i<=a){
    printf("\nHọc sinh %d: ",i);
    scanf("%d",&j[i-1]);
    i++;
}
printf("\nKết quả : ");
i=1;
while(i<=a){
    if(j[i-1]==1){
        printf("\nHọc sinh %d: Đạt",i);
    }else{
        printf("\nHọc sinh %d:Trượt",i);
    }
    i++;
}

}
------------------------------------------------------------------------------
//bài 8.6
  #include<stdio.h>
#include<string.h>
int main(){
    int a;
 int b=0;
printf("Enter a positive number : ");
scanf("%d",&a);
do{

printf("%3d",b);
b++;
} while(b<a);

    return 0;
}
------------------------------------------------------------------------------
//bài 8.7 
    #include<stdio.h>
#include<string.h>
#include<math.h>
void main( void )
{int i=1;
float sum=0;
    float arr[100];
    printf("Nhập các điểm : ");
    while(1){
        printf("\nđiểm số %d: ",i);
        scanf("%f",&arr[i-1]);
        if(arr[i-1]==-1) break;
        sum=sum+arr[i-1];
       i++;
    }
    printf("\ntrung bình điểm là : %3.2f",sum/(i-1));
    

}
------------------------------------------------------------------------------
//bài8.8 đệ quy
#include<stdio.h>
#include<string.h>
#include<math.h>

int giaithua(int i){
if(i==1) return 1;
return giaithua(i-1)*i;
}
void main( void )
{int n;
    printf("\nnhập số n: ");
    scanf("%d",&n);
    printf("\n giai thừa của n là  :%d ",giaithua(n));
}
------------------------------------------------------------------------------
//bài 8.8 lặp
  #include<stdio.h>
#include<string.h>
#include<math.h>

void main(void){

    int i=1;
    int n;
    int giaithua=1;
    printf("\nNhập số n cần tính giai thừa : ");
    scanf("%d",&n);
    while(i<=n){
        giaithua = giaithua*i;
        i++;
    };
    printf("giai thừa cần tính là : %d ",giaithua);
}
