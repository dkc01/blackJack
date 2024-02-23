#include <iostream>

using namespace std;

int main()
{
    // Declare symbolic constants
   const unsigned short DIAMONDS = 1,
                        CLUBS = 2,
                        HEARTS = 3,
                        SPADES = 4;
 
    
    // Declare variables
    unsigned short cardFace, cardSuit;
    string suitName, faceName;
    unsigned short sum = 0;
    char reply;
    
    // Seeding the random generator
    srand(time(NULL));
    
    // Ask the user whether the user wants a card
    cout << "Do you want another card (y/n)" << endl;
    cin >> reply;
    reply = tolower ( reply ); // it has to be after reading the reply 
    
    // Declare win or loss
    if ( 21 == sum )
    {
        cout << "You won blackjack" << endl;
    }
    
    else
    {
        if ( sum > 21 )
        {
        cout << " You lost blackjack " << endl;
        }
        else
        {
            // Deal another card
            // Add it to sum
            // If sum is over 21, the player won
            // else the player lost
            
        }
    }
    while( 'y' == reply && sum < 21 )
    {
        // Deal a card 
        
        // Input / Randomly generate the face and suit of a card 
        cardFace = rand() % 13 + 1;
        cardSuit = rand() % 4 + 1;
        
        // Calculate face of the card 
        switch (cardFace) {
            case 1: faceName = "Ace";
                break;
            case 2: faceName = "Two";
                break;
            case 3: faceName = "Three";
                break;
            case 4: faceName = "Four";
                break;
            case 5: faceName = "Five";
                break;
            case 6: faceName = "Six";
                break;
            case 7: faceName = "Seven";
                break;
            case 8: faceName = "Eight";
                break;
            case 9: faceName = "Nine";
                break;
            case 10: faceName = "Ten";
                break;
            case 11: faceName = "Jack";
                break;
            case 12: faceName = "Queen";
                break;
            case 13: faceName = "King";
                break;
        }
        
        
        // Calculate the suit of the card 
        switch (cardSuit) {
            case DIAMONDS: suitName = "Diamonds";
                break;
            case CLUBS: suitName = "Clubs";
                break;
            case HEARTS: suitName = "Hearts";
                break;
            case SPADES: suitName = "Spades";
                break;
            default: suitName = "Invalid";
        }
        
        // Output the face and suit of a card
        cout << faceName << " of " << suitName << endl;
        
        // Add the new card to sum
        if (cardFace < 10)
        {
            sum =  sum + cardFace;
        }
        else 
        {
            sum = sum + 10;
        }
        
        // Print the sum
        cout << "Your sum so far is " << sum << endl;
        // Ask the user whether the user wants a card
        cout << "Do you want another card (y/n)" << endl;
        cin >> reply;
        reply = tolower ( reply ); // it has to be after reading the reply 
     
        
    }
    return 0;
}



