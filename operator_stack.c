#include <stdio.h>
#include "operator_stack.h"

oper_stack *OSCreate (){
	oper_stack *list = (oper_stack *)malloc(sizeof(oper_stack));
	list->size = 0;
	return list;
}

/* Function for adding an operator to the stack */
void push (oper_stack *stack_list){
	char toAdd;
	if (stack_list->size == (MAXSIZE - 1)){
		printf("Too many operations loaded to stack \n");
		return;
	}else{
		printf("Enter the element to be pushed \n");
		scanf ("%c", &toAdd);
		stack_list->stack[stack_list->size] = toAdd;
		stack_list->size ++;
		stack_list->top = toAdd;
	}
	return;
}

/* Function for popping out an operator from the top of the stack */
char pop (oper_stack *stack_list){
	char ret;
	if(stack_list->size == 0){
		printf("Stack is Empty\n");
		return stack_list->top;
	}else{
		ret = stack_list->top;
		printf("popped elelment is: %c", stack_list->top);
		stack_list->size --;
	}
	return ret;
}

void peak(oper_stack *stack_list) {
	char topOper;
	if(stack_list->size == 0){
		printf("Stack is Empty\n");
		printf("The top of the stack: %c", stack_list->top);
	}else{
		topOper = stack_list->top;
		printf("popped elelment is: %c", topOper);
	}
}