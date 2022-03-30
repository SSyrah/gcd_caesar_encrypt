#pragma once
#include <iostream>
#include <string>
#include "RANDOM.H"


int menu();
int check_option();
int syt(int x, int y);
bool check(int result, int quess);
void randomnumbers(int &);
std::string caesar_encrypt(std::string input, int key);

