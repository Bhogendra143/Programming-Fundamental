/*
Name:Bhogendra Yadav
Roll No:05
Subject:Programming Fundamentals
Program:Write a c program to use of assignment operator
Lab NO:04
Date:20th Oct,2016
*/

#include<stdio.h>
//#include<conio.h>

int main ()

{
  
 int a,b;
printf("Enter first value (a):\n");
scanf("%d",&a);

printf("Enter second value (b):\n");
scanf("%d",&b);

a-=b;
printf("Use of '-=' operator:%d\n",a);

a+=b;
printf("Use of '+=' operator:%d\n",a);

a*=b;
printf("Use of '*=' operator:%d\n",a);

a%=b;
printf("Use of '%=' operator:%d\n",a);

   
return (0);
//return 0;

}
