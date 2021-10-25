/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
    int arr[100][100];
	for (int row = 0 ; row <= n; row++){
		for (int col = 0; col <= row ;col++){
			if (col == 0 || col == row){
				printf("%d",arr[row][col]= 1);
			}else if (col > 0 && col <= n){
			arr[row][col]= arr[row-1][col-1]+ arr[row-1][col];
			printf("%d", arr[row][col]);
			}
		} printf("\n");
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
