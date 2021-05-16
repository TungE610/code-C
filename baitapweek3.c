//
//  main.c
//  week_3c
//
//  Created by bui danh tung on 12/04/2021.
//

#include<stdio.h>
int main(){
    /*bai 3.1*/
    printf("\nKich co cua kieu giu lieu Int la %d",sizeof(int));
    printf("\nKich co cua kieu giu lieu long la %d",sizeof(long));
    printf("\nKich co cua kieu giu lieu short la %d",sizeof(short));
    printf("\nKich co cua kieu giu lieu double la %d",sizeof(double));
    printf("\nKich co cua kieu giu lieu char la %d",sizeof(char));
return 0;}
-------------------------------------------------
    /*bai 3.2*/
    #include<stdio.h>
int main(){
    int year;
    float height;
    year=21;
    height=1.77;
    printf("\nAli is %d years old and %5.2f meter height\n",year,height);
    return 0;}
-------------------------------------------------

    /*bai 3.3*/
#include<stdio.h>
int main(){
    char word[20];
    printf("What's your name ?\n");
    scanf("%19s",word);
    printf("Welcome to C programing");
    return 0;}
-------------------------------------------------

    /*Bai 3.4*/
    #include<stdio.h>
int main(){
    int n,m;
    printf("\nEnter first integer number:");
  scanf("%d",&n);
     printf("\nEnter second integer number");
 scanf("%d",&m);
 printf("sum of 2 numbers:%d",m+n);
    return 0;}
-------------------------------------------------

    /*Bai 3.5*/
    #include<stdio.h>
int main(){
 int x,y,z,t;
 printf("\nenter the day of the week:  ");
 scanf("%d",&x);
  printf("\n the day of the week:%d",x);
printf("\nenter the number of overnight: ");
  scanf("%d",&y);
   printf("\nthe number of overnight:%d",y);
printf("\nenter the number of three-day: ");
   scanf("%d",&z);
    printf("\nthe number of three-day:%d ",z);
printf("\nenter the number of weekly: ");
  scanf("%d",&t);
   printf("\nthe number of weekly:%d",t);
   printf("\ntotal cost of renting the DVDs:%d",7*y+5*z+3*t);



 return 0;
}
