// random test for case minion
/*
name: Siyuan Chen

*/
#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



int main() {
	int k[10] = { baron, minion, tribute, adventurer, council_room, gardens, mine, remodel, village, great_hall };
	// may include i, j, n, p, choice1, choice2, handPos, seed, handCount
	int i, j, n;
	int player, currentPlayer, discardCount, supplyCount, p;
	int handCount = 0;
	int seed = 1000;
	int choice1 = 0;
	int choice2 = 0;
	struct gameState G;
	srand(time(NULL));
	/*-----------------------------------------------------------------------------------------------------------
		here always come out a wired problem is that the initializeGame and
		baronCardEffect function, I can't comment them out since they are
		useful part in my program.
		-------------------------------------------------------------------------------------------------------------*/
	printf("running the random test for the minion case\n");
	for (i = 0; i < 10000; i++) {
		memset(&G, player, sizeof(struct gameState));
		initializeGame(player, k, seed, &G);
		player = 0;
		G.handCount[player] = rand() % 4;
		G.discardCount[player] = rand() % 1;
		if (handCount >= discardCount)
			printf("testing passed");
		else
			printf("testing failed");

	}
	printf("finished testing minion case\n");

	return 0;

}
