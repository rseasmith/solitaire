// Bridge ordering: Clubs < Diamonds < Hearts < Spades
typedef enum
{
  CLUBS,
  DIAMONDS,
  HEARTS,
  SPADES,
  NUM_SUITS
} suit_t;

// Aces have value 1, Jokers have value 53
struct card_tag
{
  unsigned value;
  suit_t suit;
};
typedef struct card_tag card_t;

card_t* makeCard(unsigned value);
void printCard(card_t* pCard);