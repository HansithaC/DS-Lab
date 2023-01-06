#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node                           //intialising structure
{
int val;
struct node*next;
};
struct node*head;                   //pointer structure for the value
void push()                           //funcion to push the elements
{
int val;
struct node*ptr=(struct node*)malloc(sizeof(struct node));        //allocating memory for structure 
if(ptr==NULL)
printf("not able to stack the elements\n");
else
{
printf("enter the value:\n");
scanf("%d",&val);
if(head==NULL)
{
ptr->val=val;                                  //pushing the value
ptr->next=head;                                //set next to head
head=ptr;                                      //equation head to new structure
}
printf("value pushed\n");
}
}
void pop()                                    //function to pop elements
{
int item;
struct node*ptr;
if(head==NULL)
printf("stack empty\n");
else
{
item=head->val;
ptr=head;
head=head->next;                           //linking head to previous nodes address 
free(ptr);                                  //poping out elements
printf("items poped\n");
}
}
void display()                             //function to display all the elements
{
int i;
struct node*ptr;        
ptr=head;
if(ptr==NULL)
printf("stack empty\n");
else
{
printf("display elementd\n");
while(ptr!=NULL)
{
printf("%d\n",ptr->val);                    //printing values 
ptr=ptr->next;
}
}
}
void main()
{
int choice;
while(1)                                    //to get infinte loop till termination
{
printf("enter ur choice:\n 1push\n 2.pop\n 3.display\n 4.exit\n\n");
scanf("%d",&choice);                       //taking choice input
switch(choice)
{
case 1:push();                              //function call to push a value
break;
case 2:pop();                              //function call to pop the value 
break;
case 3:display();                           //function call to display the values
break;
case 4:exit(0);                              //program termination
break;
default:printf("enter a correct choice:\n");
break;
}
}
}
