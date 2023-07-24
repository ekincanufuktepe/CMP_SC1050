#include<stdio.h>
#include<time.h>
#include<stdlib.h>

typedef struct card {
    char* face;
    char* suit;
    int value;
} Card;

void create_card_deck(Card* deck);
void print_card_deck(Card* deck);
void shuffle_card_deck(Card* deck, int shuffle_amount);

#define DECK_SIZE 52
#define SUIT_SIZE 4
#define FACE_SIZE 13

int main() {
    srand(time(NULL));
    Card deck[DECK_SIZE] = {0};

    create_card_deck(deck);
    print_card_deck(deck);
    
    printf("After Shuffling Card Deck\n");

    shuffle_card_deck(deck, 50);
    print_card_deck(deck);

    return 0;
}

void create_card_deck(Card* deck) {
    char* faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
                        "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    char* suits[] = {"Hearts", "Diamond", "Spades", "Clubs"};

    for(int i=0; i<SUIT_SIZE; i++) {
        for(int j=0; j<FACE_SIZE; j++) {
            deck->face = faces[j];
            deck->suit = suits[i];
            if(j > 9) {
                deck->value = 10;
            }
            else {
                deck->value = j + 1;
            }
            deck++;
        }
    }
}

void print_card_deck(Card* deck) {
    // for(int j=0; j<FACE_SIZE; j++) {
    //     for(int i=0; i<SUIT_SIZE; i++) {
    //         printf("%s of %s\t", deck->face, deck->suit);
    //         deck++;    
    //     }
    //     printf("\n");
    // }

    for(int j=0; j<DECK_SIZE; j++) {
        printf("%s of %s\n", (deck+j)->face, (deck+j)->suit);    
    }
}

void shuffle_card_deck(Card* deck, int shuffle_amount) {
    for(int i=0; i<shuffle_amount; ++i) {
        int first_pos = rand()%DECK_SIZE;
        int second_pos = rand()%DECK_SIZE;

        Card tmp = deck[first_pos];
        deck[first_pos] = deck[second_pos];
        deck[second_pos] = tmp;
    }
    
}