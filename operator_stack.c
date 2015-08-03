#include <stdio.h>
#include "operator_stack.h"

/*
 *operation_stack type:
 *	stack[]:	the physical array that acts as the stack
 *	top:		the top operator in the stack
 *	size:		the size of the stack
 */

struct operation_stack{
	char stack[MAXSIZE];
	char top;
	int size;
};

typedef struct operation_stack oper_stack;

oper_stack *OSCreate (char* func ){
	oper_stack *list = (oper_stack *)malloc(sizeof(oper_stack));
	list->top = NULL;
	list->size = 0;
	return list;
}

/* Function for adding an operator to the stack */
void push (oper_stack *stack_list){
	char toAdd;
	if (stack_list.size == (MAXSIZE - 1)){
		print("Too many operations loaded to stack \n");
		return;
	}else{
		print("Enter the element to be pushed \n");
		scanf ("%c", &toAdd);
		stack_list[stack.size] = toAdd;
		stack_list.size ++;
	}
	return;
}

/* Function for popping out an operator from the top of the stack */
char pop (oper_stack *stack_list){
	char ret;
	if(stack_list.size == 0){
		printf("Stack is Empty\n");
		return stack_list.top;
	}else{
		ret = stack_list.top;
		printf("popped elelment is: %c". stack_list[stack_list.top]);
		stack_list.size --;
	}
	return ret;
}

void peak(oper_stack *stack_list) {
	char topOper;
	if(stack_list.size == 0){
		printf("Stack is Empty\n");
		printf(stack_list.top);
	}else{
		ret = stack_list.top;
		printf("popped elelment is: %c". stack_list[stack_list.top]);
	}
}