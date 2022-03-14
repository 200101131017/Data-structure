#include<stdio.h>
#define max 50
void insert();
int array[MAX];
int rear = -1;
int front = -1;
main(){
	int add_item;
	int choice;
	while(1){
	printf("1.Insert an element to the queue \n");
	printf("2.Display elements of queue \n");
	printf("Quit \n");
	printf("Enter your choice :");
	scanf("%d",&choice);
	switch (choice){
		case 1:
			insert()
			break;
			case 2:
			 display();
			 case 3:
			 exit(1);
			default:
				printf("Wrong choice \n");
	}
}
}
void insert(){
	int add_item;
	if (rear ==MAX -1)
	printf("Queue overflow \n");
	else{
		if (front == -1)
		front =0;
		printf("Insert the element in queue :")
		scanf("%d",&add_item);
		rear = rear +1;
		array{ rear}=add_item;
		
	}
	
}
void didpaly(){
	int i;
	if(front == -1)
	printf("Queue is empty \n");
	else{
		printf("Queue is : \n");
		for(i = front;i <=rear; i++)
		printf("%d",array[i]);
		printf("\n");
			}
}