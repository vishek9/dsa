#include<stdio.h>
#include<conio.h>
void main(){
int w,base,i,j,l1,l2,loc=0,n;
clrscr();
printf("enter the row :");
scanf("%d",&i);
printf("enter the column :");
scanf("%d",&j);
printf("enter the lower bound :");
scanf("%d",&l1);
printf("enter the lower bound2 :");
scanf("%d",&l2);
printf("enter the address :");
scanf("%d",&base);
printf("enter the no.of rows  :");
scanf("%d",&n);
printf("enter the word space :");
scanf("%d",&w);
loc=base+w*(n*(i-l1)+(j-l2));
printf("loc is %d",loc);
getch();
}
