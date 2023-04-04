#include<stdio.h>
#include<conio.h>
void main(){
int i,arr[5]={1,2,3,4,5},s,c=0;
clrscr();
printf("enter the number to search");
scanf("%d",&s);
 for(i=0;i<5;i++){
 if(arr[i]==s)
 {
 printf("the element is present at index %d",i);
 c++;
 break;
 }
 }
if(c==0){
 printf("not found");  }

 getch();
 }