#include "stdio.h"
#include "stdlib.h"

typedef struct Stack{
	int data;
	struct Stack* next;
} stack;
typedef struct Stack1{
	int data;
	struct Stack1* next;
} stack1;	

void push(stack* top, int data){
	stack* ptr = (stack*)malloc(sizeof(stack));
	ptr->data = data;
	ptr->next = top;
}
stack* pop(stack* top){
	if(top == NULL){
		return top;
	}
//	printf("Deleted: %d\n", top->data);
	stack* ptr_next = top->next;
	free(top);
	return ptr_next;
}
void show(stack* top){
	stack* cur = top;
	while(cur!=NULL){
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	
}

int main(){
	stack1* top = NULL;
	top = push(top, 1);
	top = push(top, 2);
	top = push(top, 3);
	top = push(top, 4);
	
//	while(top){
//		top = pop(top);		
//	}

//	show(top);
	printf("%d", pop(top));	
}
