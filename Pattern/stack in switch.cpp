#include<stdio.h>
int MAXSIZE=5;
int stack[5];
int top=1;

int isempty(){
	if(top==-1)
	return -1;
	else
	return 0;
}
int isfull(){
	if(top==MAXSIZE)
	return 1;
	else
	return 0;
}

int peek(){
	return stack[top];
}

int pop(){
	int data;
	if(!isempty()){
		data = stack[top];
		top=top-1;
		return data;
	}else{
		printf("could not retrive data stack is empty.\n");
	}
}

int push(int data){
	if(!isfull()){
	    top=top+1;
	    stack[top]=data;
	}else{
		printf("could not retrive data stack is full.\n");
	}
}
				
int main(){
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	push(8);
	printf("element at top of stack:%d\n",peek());
	printf("element:\n");
	
	while(!isempty()){
		int data = pop();
		printf("%d\n",data);
	}
	printf("stack full:%s\n",isfull()?"true":"false");
    printf("stack empty:%s\n",isempty()?"true":"false");
    return 0;
}
	
	

