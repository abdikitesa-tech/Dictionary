#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<fstream>
#include "entry.hpp"
#include "AVLtree.hpp"
using namespace std;

void mainMenu(AVLtree&);
void addNewWord(AVLtree&);
void removeWord(AVLtree&);
void searchWord(AVLtree&);
void getNumOfWord(AVLtree&);
void showAllInRange(AVLtree&);
void readFileData(AVLtree&);

#endif
