#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char** argv){

//set your card array
//int k[10]={adventurer, council_room, feast,gardens, mine,remodel,smithy, village, baron, great_hall};



//declare the game state
struct gameState G;

//declare the arrays
/*
int coppers[MAX_HAND];
int slivers[MAX_HAND];
int golds[MAX_HAND];
  */


printf("\n start Testing Baron Card\n");


//set the state of your variables
//comment on what this is going to test
printf("\n test for over discard");

G.card_not_discard=2;
test = handCount(1, &G);

if(test==0)
printf("\nPassed the test");
else
printf("\nFailed the test");

G.card_not_discard=0;
test = handCount(1, &G);
if(test==-1)
printf("\nfailed the test");
else
printf("\nPassed the test");

printf("\n Testing completed");

return 0;


}
