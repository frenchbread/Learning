//
//  main.cpp
//  guessGame
//
//  Created by Damir Mustafin on 27/11/15.
//  Copyright (c) 2015 Damir Mustafin. All rights reserved.
//

#include <iostream>
using namespace std;

class Player{
public:
    virtual int getGuess(){
        return 0;
    }
};

class ComputerPlayer : public Player{
public:
    int getGuess() {
        int min = 0;
        int max = 100;
        int randNum = rand()%(max-min + 1) + min;
        cout << "Inputting - " << randNum << endl;
        return randNum;
    }
};

class HumanPlayer : public Player{
public:
    int getGuess(){
        int value;
        cout << "Enter a value from 0 to 100: " << endl;
        cin >> value;
        cout << "Inputting - " << value << endl;
        return value;
    }
};

bool checkForWin(int guess, int answer);
void play(Player &player1, Player &player2);
int getRandom(int min, int max);

int main(int argc, const char * argv[]) {

    HumanPlayer player1;
    ComputerPlayer player2;
    
    play(player1, player2);
    
    
    return 0;
}

bool checkForWin(int guess, int answer) {
    if (answer == guess) {
        cout << "You're right! You win!" << endl;
        return true;
    }
    else if (answer < guess)
        cout << "Your guess is too high." << endl;
    else
        cout << "Your guess is too low." << endl;
    
    return false;
}

void play(Player &player1, Player &player2) {
    int guess = 0;
    int answer = getRandom(0, 100);
    bool win = false;
    while (!win) {
        cout << "Human's turn to guess." << endl; guess = player1.getGuess();
        win = checkForWin(guess, answer);
        if (win) return;
        cout << "Computer's turn to guess." << endl; guess = player2.getGuess();
        win = checkForWin(guess, answer);
    }
}

int getRandom(int min, int max){
    return rand()%(max-min + 1) + min;
}