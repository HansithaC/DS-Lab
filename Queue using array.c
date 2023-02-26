#include<stdio.h>
#include<stdlib.h>
#define max 100
void insert();
void delete();
void display();
int front=-1,rear=-1;
int queue[max];          //declaring array
void enqueue()          // to insert element into the queue
{
	int item;
	printf("Enter the element\n"); //taikng input for element to be inserted
	scanf("%d",&item);
	if(rear==max-1) // if queue is full
	{
		printf("overflow\n");
		return;
	}
	if(front==-1&&rear==-1) // if queue is empty
	{
		front=0;
		rear=0;
	}
	else  
	{
		rear=rear+1; //increment rear by 1
	}
	queue[rear]=item; // insert item at rear
	printf("Value inserted\n"); 
}
void dequeue() // to delete an element from the queue
{
	int item;
	if(front==-1||front>rear) // if queue is empty
	{
		printf("underflow\n");
		return;
	}
	else
	{
		item=queue[front]; //item is value of front 
		if(front==rear) // if queue has 1 element
		{
			front=-1; //delete that 1 element
			rear=-1;
		}
		else //if queue has more than 1 element
		{
			front=front+1; // delete value of front by incrementing it by 1
		}
		printf("Value deleted\n");
	}
}
void display()
{
	int i;
	if(rear==-1) // if queue is empty
	{
		printf("Empty queue\n");
	}
	else
	{
		printf("Printing values:\n");
		for(i=front;i<=rear;i++) // print elements from front to rear
		{
			printf("%d\n",queue[i]);
		}
	}
}
int main()//main function
{
  	int choice;
  	while(1)
  	{
   		printf("Select the operation:\n");
    		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n"); 
    		scanf("%d",&choice);//operation input from user
    		switch(choice)
    		{
      		case 1: enqueue();
      		break;
      		case 2: dequeue();
              	break;
      		case 3: display();
              	break;
      		case 4: exit(0);
      		default: printf("Invalid choice\n");
              	break;
     	}   
   	}
  	return 0;
} 





