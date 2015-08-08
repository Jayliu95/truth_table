#include <stdio.h>
#include <stdlib.h>
#include "operator_stack.c"

/*functionalities
1. Build truth tables 
	-input: number of variables. table type (ex: and, or, not, conditional, biconditional)
	-output: truth table with given variables
2. If something equals something else

*/

struct elem_{
	char name;
	int value;
};

/*typedef the elem structure for easier reference */
typedef struct elem_ elem;


/*Truth Table Type:
 *numVars:	Number of variables found/using
 *numRows:	Number of rows for truth_table. Determined by number of vars
 *numCols:	Number of cols for turth_table. Determined by number of operation characters
 *
 */
struct truth_table{
	int numVars;
	int numRows;
	int numCols;
	elem **input_list;
};

struct truth_table* build_Truth_Table(){
	return NULL;
}

int main(int argc, char **argv) {
	oper_stack *oper_list = OSCreate();
	push(oper_list);
	pop(oper_list);
}
