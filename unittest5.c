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
	printf("\n start Testing tribute Card\n");

	G.choice2 = nullptr;

	test = getCost(2, &G);
	if (test == 0)
		printf("\nPassed the test");
	else
		printf("\nFailed the test");
	
	printf("\n Test completed");

}