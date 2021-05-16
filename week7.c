/*Bài 7.1*/
#include <stdio.h>

int main()
{int i;
    for(i=0;i<=10);i++){
        printf("%d---%d",i,i*i);
    }
    
    
    return 0;}


/*Bài 7.2*/ 
#include <stdio.h>

int main()
{
int n;
    printf("nhập độ cao của tam giác: ");
    scanf("%d",&n);
    int i,j;
    for(i=0;i>-(n-1);i--){
        for(j=-(n-1);j<=(n-1);j++){
            if(i==-j||i==j){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    while(i==-(n-1)){
        for(j=-(n-1);j<=(n-1);j++){
            printf(" * ");
        };
        n++;
    };
    printf("\n");
return 0;}
/*Bài 7.3*/
#include <stdio.h>

int main()
{
    for(int i=1;i<=100;i++){
        if(i>27){
        printf("%d ",i);
        printf("\n");}
    }
   return 0;
}
/*Bài 7.4*/
#include <stdio.h>
#include <math.h>

int check(int n){

    int i;
    for(i=2;i<=(float)sqrt(n);i++){
        if(n%i==0){
            return 0;
        };
    };
            return 1;

}
int main()
{ 
    int n;
    printf("2 ");
    for(n=3;n<100;n++){
        if(check(n)==1){
            printf("%d ",n);
        };
    };
    
   return 0;
}
/*Bài 7.5-tương tự 7.4*/
/*Bài 7.9*/
#include <stdio.h>
int giaithua(int n){
    if(n==1){return 1;
        
    }
    
    return giaithua(n-1)*n;
}
int main() { 
    int n;
printf("enter a positive number : ");
scanf("%d",&n);
printf("%d",giaithua(n));
printf("\n");
    return (0);
    
}
/*Bài 7.10*/
#include <stdio.h>
int check(int a){
    int sum = 0;//khai báo biến sum
    for(int i=1;i<=a/2;i++){ //tạo vòng lặp for để tìm ước số của a
        if(a%i==0){ 
            sum+=i; }//tổng các ước số của a
    }
    if(sum==a){ return 1;} // trả về true
    return 0; // ngược lại trả về false
}
int main() { 
    printf("Các số hoàn hảo nhỏ hơn 100 là : ");
    int n;
    
for(n=2;n<1000;n++){
    if(check(n)){
        printf("%d ",n);
    };
}
printf("\n");
    return (0);
    
}
