#include <stdio.h>
#include <stdlib.h>

struct card {
	char *face;
	char *suit;
};

int main(void)
{
	struct card aCard;

	aCard.face = "Ace";
	aCard.suit = "Spades";
	struct card *cardptr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, "of", aCard.suit, cardptr->face, "of", cardptr->suit, (*cardptr).face, "of", (*cardptr).suit);
}