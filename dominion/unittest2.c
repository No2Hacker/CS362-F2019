#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char** argv) {

	//set your card array
	//int k[10]={baron, minion, ambassador,tribute, mine,remodel,smithy, village, , great_hall};



	//declare the game state
	struct gameState G;

	//declare the arrays
	/*
	int coppers[MAX_HAND];
	int slivers[MAX_HAND];
	int golds[MAX_HAND];
	  */


	printf("\n start Testing Minion Card\n");


	//set the state of your variables
	//comment on what this is going to test
	printf("\n test for not enough handCard");
	
	G.numHandCard = G.numHandCard - 1;
	test = handPos(1, &G);
	if (test >= 0)
		printf("\nPassed the test");
	else
		printf("\nFailed the test");

	printf("\n Testing completed");

	return 0;


}
