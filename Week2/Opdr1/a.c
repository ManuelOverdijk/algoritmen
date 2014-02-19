// Manuel Overdijk

#include <stdio.h>     
#include <stdlib.h>     
#include <time.h> 


int main()
{ 
	//Generate random graph

	//number of NODES
	int NODES = 10;

	int graph[NODES][NODES];
	int i,j;
	srand(4321854);
	for(i=0;i<NODES;i++)
		for(j=0;j<NODES;j++)
			if( rand() %2 )
				graph[i][j]=rand() %100+1;
			else
				graph[i][j]=-1;
}