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

	G.nextPlayer = 0;

	test = discard(deckCount, &G);
	if (test == 0)
		printf("\nPassed the test");
	else
		printf("\nFailed the test");

	G.nextplayer = 4;
	test = discard(deckCount, &G);
	if (test == 0);
	printf("\nPassed the test");
	else
		printf("\n Failed the test");

	printf("\n Testing completed");

	return 0;
}