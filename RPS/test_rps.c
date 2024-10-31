#include <stdio.h>
#include <assert.h>
#include <string.h>

const char* determine_winner(const char* player1, const char* player2);

void test_determine_winner() {
	assert(strcmp(determine_winner("Rock", "Scissors"), "Player1") == 0);
	assert(strcmp(determine_winner("Scissors", "Paper"), "Player1") == 0);
	assert(strcmp(determine_winner("Paper", "Rock"), "Player1") == 0);
	assert(strcmp(determine_winner("Rock", "Rock"), "Draw") == 0);
	assert(strcmp(determine_winner("Rock", "Paper"), "Player2") == 0);
	assert(strcmp(determine_winner("Invalid", "Rock"), "Invalid") == 0);
}
