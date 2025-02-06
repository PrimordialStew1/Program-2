// ItemType.h - ItemType declaration
// For program 2 assignment
//
// Author: Aaron Davis, this is entirely my own work.
// I understand that I may be asked questions about my submission.
// email: amd0047@uah.edu
// for CS221, Spring 2025 Mrs. Delugach
// Compiler g++

#pragma once
#include <iostream>
#include <string>

using std::string;

enum Comp
{
    LESS,
    GREATER,
    EQUAL,
    INDETERMINATE
};

class ItemType
{
private:
    string songTitle = "";
    int catalogNumber = 0;

    const string DEFAULT_SONG_TITLE = "Crazy";

public:
    ItemType();
    ItemType(string p_songTitle, int p_catalogNumber);
    ~ItemType();

    Comp Compare(ItemType* p_itemType);
    string GetData(int& p_catalogNumber);
    void PrintInfo();
};