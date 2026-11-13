#include <iostream>
using namespace std;
int main()
{
    cout << "Descryptix. (c)Copyright 1999 Libert \n";
    cout << "Associates, Inc. Version 0.2\n " <<endl;

    cout << "There are two ways to play Descryptix: ";
    cout << " either you can guess a pattern I create, ";
    cout << "or I can guess yout pattern.\n\n";
    cout << "If you are guessing, I will think of a\n ";
    cout << "On each turn, you guess the pattern and\n";
    cout << " I will tell you how many letters you \n";
    cout << "got right, and how many of the correct\n";
    cout << " letters were in the correct position.\n\n";

    cout << "The goal is to decode the puzzle as quickly\n";
    cout << "as possible. You control how many letters \n";
    cout << "can be used and how many positions\n";
    cout << " (e.g., 5 possible letters in 4 positions) \n";
    cout << "as well as whetter or not the pattern might\n";
    cout << " contain duplicates letters (e.g., aabcd).\n\n";
    
    cout << "If I'm guessing, you think of a pattern \n";
    cout << "and score each of my answers.\n\n" <<endl;

    const int minletters = 2;
    const int maxletters = 10;
    const int minPositions = 3;
    const int maxpositions = 10;

    int howmanyletters = 0, howmanypositions = 0;
    bool duplicatesallowed = false;
    int round = 1;

    cout << "How many letters? (";
    cout << minletters << "-" <<maxpositions << "): ";
    cin >> howmanypositions;

    char choice;
    cout << "Allow duplicates (y/n)?";
    cin >> choice;
    return 0;
}