#include<iostream>
#include<string>
#include "entry.hpp"
using namespace std;

Entry::Entry(){
	this->height = 0;
	this->word.push_back('\0');
	this->meaning.push_back('\0');
	this->parent = NULL;
	this->rightChild = NULL;
	this->leftChild = NULL;
}

Entry::Entry(string wordInp,string meaningInp){
	for(int i=0;i<wordInp.size();i++)
		this->word.push_back(wordInp[i]);
	for(int i=0;i<meaningInp.size();i++)
		this->meaning.push_back(meaningInp[i]);
	this->height = 0;
	this->parent = NULL;
	this->rightChild = NULL;
	this->leftChild = NULL;
}
