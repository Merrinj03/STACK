/*STACK OPERATIONS USING ARRAY*/
#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int stack[SIZE],top =-1;

void push(int value){
   if(top == SIZE-1)
      printf("\nStack is Full\n");
   else{
      top++;
      stack[top] = value;
      printf("\nInserted\n");
   }
}
void pop(){
   if(top ==-1)
      printf("\nStack is Empty\n");
   else{
      printf("\nDeleted element is: %d", stack[top]);
      top--;
   }
}
void display(){
   if(top == -1)
      printf("\nStack is Empty\n");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}
void findtop(){
	printf("\nTop position %d",top);
	printf("\nTop value %d",stack[top]);
}
void main()
{
   int entry,ch;
   printf("\nMENU\n");
   printf("1.Push\n2.Pop\n3.Display\n4.Find top\n5.Exit");
   while(1){
      printf("\nEnter your choice: ");
      scanf("%d",&ch);
      switch(ch){
	 case 1: {
	 	 printf("Enter the value to push: ");
		 scanf("%d",&entry);
		 push(entry);
		 break;}
		 
	 case 2:{
	 	 pop();
		 break;}
		 
	 case 3:{ 
	 	display();
		 break;}
	 case 4:{
	 	findtop();
	 	break;}
		 
	 case 5:{
	 	 printf("Exited!\n");
	 	 exit(0);}
	 default: printf("\nError,wrong input\n");
      }
   }
}
