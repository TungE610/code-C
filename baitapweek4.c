#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){
    /*Bài 4.1*/
    int i;
    float j;
    printf("enter an integer and an floating point: ");
    scanf("%d%f",&i,&j);
    printf("\nthe integer is %d and the floating point is %3.2f\n",i,j);
    /*Bài 4.2*/
    char a[100];
    printf("\nLimit of the data types int : %d -> %d \n",INT_MIN,INT_MAX);
    printf("Limit of the data types long : %d -> %d \n",LONG_MIN,LONG_MAX);
    printf("Limit of the data types char : %d -> %d \n",CHAR_MIN,CHAR_MAX);
    printf("Enter the String: ");
    scanf("%s",a);
    printf("The String : %s\n",a);
    /*Bài 4.3*/
    char str[20];
    printf("Enter a string: ");
    scanf("%[abc]",str);
    printf("\nthe string is: %s\n",str);
    
    /*4.5*/
    printf("\nBai 4.5");
    const float Pi=3.14;
    float x;
    printf("\nenter the radius of a circle:  ");
    scanf("%f",&x);
    printf("Its area : %5.2f",pow(x,2)*Pi);
    /*Bài 4.6*/
    int hour;
    printf("\nEnter the number of hours: ");
    scanf("%d",&hour);
    printf("\nThe total of salary is : %d($)\n",40*25000+(hour-40)*40000);
    /*4.7*/
    int y,p,q;
    char z[100];
    char t[100];
 printf("\nEnter the Qty: ");
 scanf("%d",&y);
 printf("\nEnter the ISBN: ");
 scanf("%s",&z);
  printf("Enter the Title: ");
scanf("%s",&t);
  printf("\nEnter the Price($): ");
scanf("%d",&p);
  printf("\nEnter the Price($): ");

printf("\nEnter the Quantity");
    scanf("%d",&q);
printf("\nBK Bookseller\n");
printf("Qty|ISBN|Title|Price|Total");
return 0;
}
