#include<stdio.h>
#include<limits.h>
int main(){
 /*BÀi 5.1*/
    float l;
    printf("enter the distance in kilometer: ");
    scanf("%f",&l);
    printf("\nthe distance in the mile : %5.3f\n",(float)0.6214*l);
 return 0;}
 ----------------------------------------------------------
 /*Bài 5.2 */
  #include<stdio.h>
#include<limits.h>
int main(){
 int x1,x2,x3;
 printf("enter 3 numbers x1 x2 x3: ");
 scanf("%d%d%d",&a,&b,&c);
 if(x1-x2==x2-x3){
 printf("x1=x3\n");
  
 }
 if(x1<=x2q&&x1<=x3){
 printf("a is the smallest!\n");
 }
  return 0;}
  ----------------------------------------------------------

 /*Bài 5.3*/
 
 
 /*BÀi 5.4*/
   #include<stdio.h>
#include<limits.h>
int main(){
  int h =INT_MAX;
    printf("%d\n",h);
    printf("When integer overflow that occurs : %d\n",h+2);
   return 0;}
     ----------------------------------------------------------

/*Bài 5.5*/
 #include<stdio.h>
#include<limits.h>
int main(){
    double a,b;
    printf("Enter two numbers : ");
    scanf("%f%f",&a,&b);
    if(a==b){
        printf("a is equal to b\n");
        
    }
    else{
        if(a>b){
            printf("a is greater than b\n");
        }
        else{
            printf("b is greater than a\n");
        }
    }
      return 0;}
  ----------------------------------------------------------

    /*BÀi 5.6*/
   #include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);if(n%7==0){
    printf("\nthe number of students in the smallest class: %d",n/7);
    printf("\nthe number of students in the largest class: %d",n/7);
    printf("\nthe average number of students per class: %d",n/7);
    printf("\nthe number of classes of above average size: %d",0);
    printf("\nthe number of classes of at most average size: %d",7);
    printf("\nthe number of students in classes of larger than average size: %d",0);
    
    printf("\nthe number of classes of exactly average size:%d\n",7);
    }
    else{
    printf("\nthe number of students in the smallest class: %d",n/7);
    printf("\nthe number of students in the largest class: %d",n/7+1);
    printf("\nthe average number of students per class: %f",(float)n/7);
    printf("\nthe number of classes of above average size: %d",n%7);
    printf("\nthe number of classes of at most average size: %d",7-(n%7));
    printf("\nthe number of students in the smallest class: %d",(int)n/7);
    printf("\nthe number of classes of exactly average size:%d\n",0);

    }
    return 0;
}

