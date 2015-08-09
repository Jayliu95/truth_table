#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
/*typedef truth_table as tTable for easier reference*/
typedef struct truth_table tTable;

#define CHARSET 26

tTable *tTableCreate(int vars){
	int indexer;
	tTable *table = (tTable *)malloc(sizeof(tTable));
	table->numVars = vars;
	table->numRows = findNumRow(vars);
	table->numCols = 0; //numVars + operators
	table->input_list = (elem **) malloc(table->numRows * sizeof(elem*));
	for(indexer=0; indexer<table->numRows; indexer++){
		table->input_list[indexer] = (elem *)malloc(vars * sizeof(elem*));
	}
	return table;
}

//helper function that finds numRow based on numVars
int findNumRow(int raisedTo){
	int i, retVal;
	retVal = 1; // if 1 when returned = no variable
	for(i = 0; i<raisedTo; i++){
		retVal = retVal * 2;
	}
	return retVal;
}

//helper function that finds the number of variables from user
int countTotalVar(char *input){
	int i, j, shouldAdd, numvar;
	char seen[CHARSET];
	numvar = 0;
	for(i=0; i<strlen(input);i++){
		shouldAdd = 0;
		if (isalpha(input[i])){
			for(j=0; j<strlen(seen);j++){
				if(input[i]==seen[j]){	//have counted the variable already
					shouldAdd = 1;
					break;
				}
			}
			//add current char to seen
			strncat(seen, &input[i], 1);
			if(shouldAdd==0){
				numvar++;
			}
		}
	}
	return numvar;
}


void printTable(tTable *table){
	int i, j;

}

int main(int argc, char **argv) {

	char input[255];
	int numVar;
	numVar = 0;
	printf("enter your operation: \n");
	gets(input);
	numVar = countTotalVar(input);	
	tTable *table = tTableCreate(numVar);
	printf("table var: %d \t table rows: %d\n", table->numVars,table->numRows);
	return 0;
}
