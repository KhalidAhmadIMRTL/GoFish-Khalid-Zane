#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "deck.h"
#include "player.h"
#include "card.h"
using namespace std;


Player::Player() {
    myName = "";
}

void Player::addCard(Card c) {
    myHand.push_back(c);
}


void Player::bookCards(Card c1, Card c2) {
    myBook.push_back(c1);
    myBook.push_back(c2);

}

//optional
/*bool Player::checkHandForBook(Card &c1, Card &c2) {
 if (c1.getRank() == c2.getRank()){
     bookCards(c1, c2);
 }
}*/

//optional
/*bool Player::rankInHand(Card c) const {
    for (int i; i < 5; i++){
        if (c.getRank() == myHand[i].getRank()){
            return true;
        }
    }
    return false;
}*/

Card Player::chooseCardFromHand() const {
    int divisor = myHand.size();
    int number = rand();
    return myHand[number%divisor];
}

bool Player::cardInHand(Card c) const{
    for (int i = 0; i< 5; i++){
        if (myHand[i] == c){
            return true;
        }
    }
    return false;
}

Card Player::removeCardFromHand(Card c){
    int index = 0;
    while (myHand[index].getRank() != NULL) {
        if (c.toString() == myHand[index].toString()) {
            myHand.erase(myHand.begin() + index);
        }
        index++;
    }
    return c;
}

string Player::showHand() const{
    int index = 0;
    for(std::vector<Card>::const_iterator it = myHand.begin() ; it != myHand.end(); ++it){
        cout << myHand[index].toString() << ", ";
        index++;
    }
    return "";
}

string Player::showBooks() const{
    return "";
}

int Player::getHandSize() const{
    return myHand.size();
}
int Player::getBookSize() const {
    return myBook.size();
}


//optional
/*bool Player::checkHandForPair(Card &c1, Card &c2){

}*/


bool Player::sameRankInHand(Card c) const{
    int index = 0;
    while(myHand[index].getRank() != NULL) {
        if (c.getRank() == myHand[index].getRank()) {
            return true;
        }
        index++;
    }
    return false;
}



