// ConsoleTextGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ConsoleTextGame.cpp
// Console Text Game
//
// Created by Ezaiah Akyeem / Eazythedev / Erujine
// Date: February 12, 2026
// A console text-based adventure video game!

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Welcome to Eastaria!" << '\n';

    string name;

    cout << "Choose a name: ";
    cin >> name;
    cout << '\n' << "Welcome, " << name << " to the land of Eastaria.";
    cout << "The story begins with you ";

    return 0;
}
