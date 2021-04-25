#include<stdio.h>
#include<limits.h>
int main(){
 /*BÀi 5.1*/
    float l;
    printf("enter the distance in kilometer: ");
    scanf("%f",&l);
    printf("\nthe distance in the mile : %5.3f\n",(float)0.6214*l);
/*Bài 5.5*/
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
    /*BÀi 5.6*/
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

