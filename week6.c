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
	return 0;
	
	}
