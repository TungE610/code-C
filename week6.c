#include<stdio.h>
#include<stdlib.h>>

int main(){
	/*Bài 6.1*/
	int i;
	char x;
	char se[100];

	printf("Enter a sequence: ") ;
	scanf("%s",se);
	int n=strlen(se);
	x=se[0];
for(i=1;i<n;i++){
	if(se[i]<x){ 
	x=se[i];
	}}
	printf("%c",x);
	/*Bài 6.2*/
	float de;
    printf("Enter heading in degrees: ");
    scanf("%f",&de);
    if(0<=de&&de<90){
        printf("BEARING COMPUTATION: north (heading) east\n");
    }
    if(90<=de&&de<180){
        printf("south (180.0 -heading) east \n");
    }
    if(180<=de&&de<270){
        printf("south (heading -180.0) west\n");
    }
    if(270<=de&&de<360){
        printf("north (360.0 - heading) west\n ");
    }
    
	/*Bài 6.3*/
	int a;
	printf("\nEnter the age:");
		scanf("%d",&a);
  if(a<0){
  	printf("Enter a positive number");
  }
  if(a<18){
  	printf("\nYour class is child");
  	}
  	else{
  		if(18<=a&&a<65){
  			printf("Your class is:Adult");
  			
		  }else{
		  	printf("Your class is senior Citizen");
		  }
	  }
	/*Bài 6.4*/
		int b;
		char class[20];
	printf("\nEnter the age:");
		scanf("%d",&b);
  if(b<0){
  	printf("Enter a positive number");
  }
  class = (b<18)?  "child":" Adult";
  class = (b<65)? " Adult":"SeniorCitizen";
  printf("%s",class);
  	/*Bài 6.5*/
  	int m;
  	printf("Guess your positive number:");
  	scanf("%d",&m);
  	int z=rand()%(101);
  	if(m==z){
  	printf("You're correct!!");
  	}
	  	else{
	  		if(m>z){
			 printf("The guess was too great");
			  }else{
			 printf("the guess was too small");
			  }
			  }
			  printf("\nThe correct number is:%d",z);
		  /*Bài 6.6*/
		  int j,k,l;
		  printf("enter 3 integer numbers (j,k,l): ");
		  
		  scanf("(%d,%d,%d)",&j,&k,&l);
		 if(j<k&&j<l){
		 	printf("j is the smallest number");
		 }
		  if(k<j&&k<l){
		 	printf("k is the smallest number");
		 }
		  if(l<j&&l<k){
		 	printf("l is the smallest number");
		 }
		 if(j==l&&k==l){
		 	printf("No smallest");}
		 	/*Bài 6.7*/
		 	int y;
		 	printf("Enter your age:" );
		 	scanf("%d,&y);
		 	if(y<0){
  	printf("Enter a positive number");
  }
  switch(y){
  case 
  }
			      int year;
printf("Enter the year:");
scanf("%d",&year);
if(year%4==0&&year%400!=0){
	int month;
printf("Enter the month:");
scanf("%d",&month);
char flag1[100];
if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
flag1="write";}
else{if(month==2){
flag1="yellow";
}else{
flag1="black";
}}
switch(flag1)
	case 'write':
		printf("The number of days:31");
		break;
	case 'yellow':
		printf("The number of days:28");
		break;
    case 'black':
		printf("The number of days:30");
		break;
	
	
}}
			      
			      /*Bài 6.6------------------------*/
int x1,x2,x3;
    printf("enter x1,x2,x3: ");
    scanf("%d%d%d",&x1,&x2,&x3);
    if(x1<=x2&&x1<=x3){
        printf("the smallest :%d\n",x1);
    }
    if(x2<=x3&&x2<=x1){
        printf("the smallest :%d\n",x2);
    }
    if(x3<=x2&&x3<=x1){
        printf("the smallest :%d\n",x3);
    }
    
	return 0;
	
	}
