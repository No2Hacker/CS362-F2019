#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
	struct gameState G;
	printf("\n start Testing Ambassador Card\n");

	G.choice2 = 0;
	
	test = handPos(choice1, &G);
	if (test == 0)
		printf("\nPassed the test");
	else
		printf("\nFailed the test");

	printf("\n Testing completed");

	return 0;
}