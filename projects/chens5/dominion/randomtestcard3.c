// random test for case tribute
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
	// may include i, j, n, seed, handCount,supplyCount, discardCount, nextPlayer
	int i, j, n;
	
	int player, currentPlayer, nextPlayer, handCount, deckCount, supplyCount, discardCount;
	int seed = 1000;
	struct gameState G, testG;
	srand(time(NULL));
	/*-----------------------------------------------------------------------------------------------------------
		here always come out a wired problem is that the initializeGame and
		baronCardEffect function, I can't comment them out since they are
		useful part in my program.
		-------------------------------------------------------------------------------------------------------------*/
	printf("running the random test for the tribute case\n");
	for (i = 0; i < 10000; i++) {
		player = rand() % 2;
		initializeGame(player, k, seed, &G);
		player = 0;
		nextPlayer = 1;
		G.deckCount[player] = rand() % (4 - 1) + 1;
		G.discardCount[player] = rand() % 2;
		G.handCount[player] = rand() % 2;
		G.handCount[nextPlayer] = rand() % 2;
		G.discardCount[nextPlayer] = rand() % 3;
		G.handCount[nextPlayer] = rand() % 2;

		int tributeRevealCard[2];
		tributeRevealCard[0] = rand() % (4 - 1) + 1;
		tributeRevealCard[1] = rand() % (4 - 1) + 1;
		memcpy(&testG, &G, sizeof(struct gameState));
		tributeCardEffect(j, &testG, &tributeRevealCard, player, nextPlayer);

	}
	printf("finished testing tribute case\n");

	return 0;

}
