#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue_array[MAX];
int rear =-1;
int front =-1;
int main(){
	int choice;
	while(1){
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("4.quit\n");
		printf("Enter your choice: ");
		if(choice==4){
			break;
		}
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
			    delete();
			    break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("error");
				break;
		}
	}
}
void insert(){
	int item;
	if(rear == MAX){
		printf("queue overflow");
	}else{
		if(front== -1){
			front =0;
			printf("insert the element in queue: ");
			scanf("%d",&item);
			rear = rear+1;
			queue_array[rear] = item;
		}
	}
}
void delete(){
	if(front==-1){
		printf("queue underflow");
		return;
	}else{
		printf("Element deleted from queue is: %d",queue_array[front]);
		front = front+1;
	}
}
void display(){
	int i;
	if(front ==-1){
		printf("queue is empty: ");
	}else{
		printf("queue is: ");
	}
	for(i=front;i<=rear;i++){
		printf("%d ",queue_array[i]);
		printf(" ");
	}
}
