// random test for case baron
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
#include <assert.h>



int main() {
	int k[10] = { baron, minion, tribute, adventurer, council_room, gardens, mine, remodel, village, great_hall };
// may include i, j, n, p, choice1, hand, handCount, seed, discardCount
	int i, j, n;
	int hand, player, currentPlayer, handCount, discardCount, supplyCount, p;
	int seed = 1000;
	int choice1 = 0;
	struct gameState G;	
	srand(time(NULL));

	printf("running the random test for the baron case\n");
	for (i = 0; i < 10000; i++) {
		// here is to clear the game state
		memset(&G, 23, sizeof(struct gameState));
		/*-----------------------------------------------------------------------------------------------------------
		here always come out a wired problem is that the initializeGame and 
		baronCardEffect function, I can't comment them out since they are
		useful part in my program. 
		-------------------------------------------------------------------------------------------------------------*/
		initializeGame(player, k, seed, &G);
		// now randomize the player
		player = rand() % 2 + 2;
		baronCardEffect(choice1, &G, player,0);
		currentPlayer = rand() % 2;
		hand = rand() % (player + 1);
		G.handCount[0] = hand;
		G.discardCount[player] = rand() % 2;
		if (discardCount <= handCount)
			printf("test is passed");
		else
			printf("test is failed");
	}
	printf("here is the end of the testing of baron cases\n");
	return 0;

}
