/*STACK USING LINKED LIST*/
#include <stdio.h>  
#include <stdlib.h>
struct node   
{ 
	int data;
	struct node *next;}; 
struct node *head;  
void push ()  
{ 
	int val;
      struct node *ptr = (struct node*)malloc(sizeof(struct node));   
      printf("Enter the value: ");  
      scanf("%d",&val);  
      if(head==NULL){
      	ptr->data = val;  
      	ptr -> next = NULL;  
      	head=ptr;}  
      else{
      	ptr->data = val;  
            ptr->next = head;  
            head=ptr;}
            printf("\nInserted\n");}    
void pop()
{ 
	int item;
      struct node *ptr;  
      if (head == NULL){ 
          printf("\nUnderflow\n");}  
      else{
      	item = head->data;  
            ptr = head;  
            head = head->next;  
            free(ptr);  
            printf("\nDeleted\n");}  
}  
void display()  
{   
	int i;
      struct node *ptr;  
      ptr=head;  
      if(ptr == NULL){  
      	printf("\nStack is empty\n");}
      else{
      	printf("Stack elements are: \n");  
            while(ptr!=NULL){
            	printf("%d\n",ptr->data);  
              	ptr = ptr->next;}  
      }  
}  
void main ()  
{
	int ch;
      printf("\nMENU\n1.Push\n2.Pop\n3.Display\n4.Exit");         
      while(1){
      	printf("\nEnter your choice: ");        
            scanf("%d",&ch);  
            switch(ch){
            	case 1:{
            		push();  
                    	break;}  
                  case 2:{ 
                  	pop();  
                        break;} 
                  case 3:{  
                  	display();  
                    	break;} 
                  case 4:{   
                  	printf("\nExited\n");  
                    	exit(0);}   
                  default:{  
                  	printf("\nError,wrong input\n");}  
         }   
    }  
}  
      


