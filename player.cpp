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

}

void Player::bookCards(Card c1, Card c2) {

}

bool Player::checkHandForBook(Card &c1, Card &c2) {

}

bool Player::rankInHand(Card c) const {

}

Card Player::chooseCardFromHand() const {

}

bool Player::cardInHand(Card c) const{

}

Card Player::removeCardFromHand(Card c){

}

string Player::showHand() const{

}

string Player::showBooks() const{

}

int Player::getHandSize() const{

}
int Player::getBookSize() const {

}

bool Player::checkHandForPair(Card &c1, Card &c2){

}

bool Player::sameRankInHand(Card c) const{

}



