----//Bài 11.1---------------------------------------------------------------------------------------------------------
 #include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Nhập 3 số a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    int *ptr = &a;
    printf("\n%d",*ptr);
     ptr = &b;
    printf("\n%d",*ptr);
     ptr = &c;
    printf("\n%d",*ptr);

    return 0;
}
  
  ----//Bài 11.2---------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main()
{

int a[]={12,-355,235,47,67,943,1222};
int *ptr = a;
printf("\n%p",ptr);
printf("\n%p",ptr+1);
printf("\n%p",ptr+2);
printf("\n%p",ptr+3);
printf("\n%p",ptr+4);


return 0;
}
----//Bài 11.3---------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main(){
    float *ptr;
    printf("Nhập vào 3 số : ");
    scanf("%f%f%f",ptr,ptr+1,ptr+2);
    *ptr=*ptr+100;
    *(ptr+1)=*(ptr+1)+100;
    *(ptr+2)=*(ptr+2)+100;
   printf("Giá trị lúc sau là : %3.2f -- %3.2f -- %3.2f",*ptr,*(ptr+1),*(ptr+2));
    return 0;
}
----//Bài 11.4---------------------------------------------------------------------------------------------------------
#include<stdio.h>
void dao(int *a,int *b,int *c){
    int dem;
dem=*a;
*a=*b;
*b=*c;
*c=dem;
}
int main(){
int a,b,c;
printf("Nhập 3 số : ");
scanf("%d%d%d",&a,&b,&c);
dao(&a,&b,&c);
printf("3 số a,b,c lúc sau :%d %d %d ",a,b,c);
return 0;
}
----//Bài 11.5---------------------------------------------------------------------------------------------------------
#include<stdio.h>
void dao(int *a,int *b,int *c){
    int dem;
dem=*a;
*a=*b;
*b=*c;
*c=dem;
}
int main(){
    fflush(stdin);
int x,y,z;
printf("Nhập giá trị x,y,z: ");
scanf("%d%d%d",&x,&y,&z);
int *p,*q,*r;
p=&x;
q=&y;
r=&z;
printf("\nGiá trị của x,y,z:%d %d %d ",x,y,z);
printf("\nGiá trị của p,q,r:%p %p %p ",p,q,r);
printf("\nGiá trị của biến mà p,q,r chỉ tới :%d %d %d ",*p,*q,*r);
dao(&x,&y,&z);
printf("Sau khi đảo x,y,z: \n");
printf("\nGiá trị của x,y,z:%d %d %d ",x,y,z);
printf("\nGiá trị của p,q,r:%p %p %p ",p,q,r);
printf("\nGiá trị của biến mà p,q,r chỉ tới :%d %d %d ",*p,*q,*r);
int *tem;
tem=p;
p=q;
q=r;
r=tem;
printf("Sau khi đảo các địa chỉ: ")
printf("\nGiá trị của x,y,z:%d %d %d ",x,y,z);
printf("\nGiá trị của p,q,r:%p %p %p ",p,q,r);
printf("\nGiá trị của biến mà p,q,r chỉ tới :%d %d %d ",*p,*q,*r);
    return 0;
}
----//Bài 11.6---------------------------------------------------------------------------------------------------------
