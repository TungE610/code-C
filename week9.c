//bài 12.3b-------------------------------------------------
#include<stdio.h>
#include<math.h>
void ptich(int n){
    int i;
    int tich=1;
    for(i=2;i<=n;i++){
            int dem=0;
        while(n%i==0){
            dem++;
            n/=i;
        }
        if(dem){
        if(dem > 1) printf("%d^%d", i, dem);
            else printf("%d", i);
            if(n > i){
                printf(" * ");
             }
        }
    }
}
int main(){
int n;
printf("Nhập vào số n: ");
scanf("%d",&n);
ptich(n);
    return 0;
}
//bài 12.3c-------------------------------------------------
#include<stdio.h>
#include<math.h>
void lietke(int n){
    int i;
    printf("n số chính phương đầu tiên là : ");
    for(i=1;i<=n;i++){
       printf("%3d",i*i);
    }
}
int main(){
int n;
printf("Nhập vào số n: ");
scanf("%d",&n);
lietke(n);  
  return 0;
}
//bài 12.4-------------------------------------------------
#include<stdio.h>
#include<math.h>
int cal(int n,int m){
return n*15000+m*22500;

}
int main(){
    int n,m;
    printf("Nhập số thời gian làm việc cơ bản và tăng ca: ");
    scanf("%d%d",&n,&m);
    if(n<10||m+n>65){
        printf("an not work less than 10 hours or more than 65 hours a week. ");
    }
printf("\nTổng số tiền lương mà người đó nhận được là :%d",cal(n,m));    
return 0;
}
//bài 12.5-------------------------------------------------
#include <stdio.h>
#include <math.h>

void print_chr( char c,int n){

for(int i=1;i<=n;i++){
    printf("%c",c);
}
}

void main()
{int n;
char c;
printf("nhập kí tự và số lần lặp : ");
scanf("%c%d",&c,&n);
print_chr(c,n);

}
//bài 12.6-------------------------------------------------
#include<stdio.h>
#include<math.h>
float convert(float n){
 return (((float)5/9)*(n-32));    
}
int main(){
    float i;
    printf("\n");
    printf("|    Độ Celcius  |    Độ Fahrenheit     |");
    for(i=0;i<=20;i++){
    printf("\n");
printf("|\t %-3.0f \t |\t %-3.3f \t|",i,convert(i)) ; 
};
    return 0;
}
//bài 12.7-------------------------------------------------
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int check(int n,int a[]){
    int i;
    int nho;
for(i=0;;i++){  
    a[i]=n%10;
    n/=10;
    if(n==0){
        nho=i;
        break;
        }
    }
    int du=a[0]%2;
    for(i=1;i<=nho;i++){
        if(a[i]%2!=du){
            return 0;
            break;        
}
    }
    if(du==1){
        return 1;}
    if(du==0){
        return 2;
}
}
int main(){
    int n;
    int a[100];
    printf("Nhập vào số n: ");
    scanf("%d",&n);
    if(check(n,a)==1){
        printf("A là số toàn các chữ số lẻ");
    }
    if(check(n,a)==2){
        printf("A là số toàn các chữ số chẵn");
    }
   if(check(n,a)==0){
        printf("A vừa có chữ số chẵn vừa có chữ số l");

    }
    return 0;
}
//bài 12.8-------------------------------------------------
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void getJudgeData (int a[]){
    int i;
    printf("Nhập số điểm mà các giám khảo dành cho thí sinh(1-10đ): \n");
    for(i=1;i<=5;i++){
        printf("Giám khảo[%d]: ",i);
        scanf("%d",&a[i-1]);
    }
}
int calcu(int a[]){
    int i,j;
    int tem;
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
               tem=a[i];
               a[i]=a[j];
               a[j]=tem; 
            }
        }
    }
  return (a[1]+a[2]+a[3]);
}
int main(){
    int a[100];
    getJudgeData(a);
printf("Số điểm của học sinh này là : %d",calcu(a)) ;  
 return 0;
}
//bài 12.9-------------------------------------------------
#include<stdio.h>
#include<math.h>
int leap_year(int n){
    if((n%4==0&&n%100!=0)||(n%400==0)){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    printf("Nhập vào năm : ");
    scanf("%d",&n);
  if(leap_year(n)){
      printf("%d là năm nhuận !! ",n );
  }
  else{
      printf("%d không là năm nhuận!! ",n);
  }
    return 0;
}



