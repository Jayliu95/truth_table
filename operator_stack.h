#define MAXSIZE 25
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
oper_stack *OSCreate ();
/* Function for adding an operator to the stack */
void push (oper_stack *stack_list);

/* Function for popping out an operator from the top of the stack */
char pop (oper_stack *stack_list);

/* Function for peaking the operator from the top of the stack */
void peak(oper_stack *stack_list);