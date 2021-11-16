#include<iostream>
#include<set>
#include "functions.h"
using namespace std;

void mainMenu(AVLtree& avlTree){
	char c;
	int ch;
	do{
		cout<<"\n  ***** MAIN MENU *****\n\n"
				<<" 1 ) Read file Data\n 2 ) Add new word\n"
				<<" 3 ) Remove a word\n 4 ) Search for a word\n"
				<<" 5 ) Get number of words\n"
				<<" 6 ) Print In Order\n 7 ) Print In Level\n"
				<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 1 : readFileData(avlTree);
						break;
			case 2 : addNewWord(avlTree);
						break;
			case 3 : removeWord(avlTree);
						break;
			case 4 : searchWord(avlTree);
						break;
			case 5 : getNumOfWord(avlTree);
						break;
			case 6 : showAllInRange(avlTree);
						break;
			case 7 : avlTree.printInOrder(avlTree.getRoot());
						break;
			case 8 : avlTree.printInLevel();
						break;
			default : cout<<" INVALID CHOICE \n";
		}
		cout<<"\nshow menu again ? (y/n)";
		cin>>c;
	}while(c == 'y' || c == 'Y');
}

void readFileData(AVLtree& avlTree){
	Entry *e;
	string word,meaning;
	ifstream fin;
	cout<<"Enter file name : ";
	cin>>word;
	fin.open("words.txt");
	if(!fin.is_open())
		cout<<"\nError in file opening.\n";
	else{
		cout<<"File reading succesful.\n";
		while(fin>>word){
			getline(fin,meaning);
			meaning[0]=' ';
			if(word[0]>='A' && word[0]<='Z')
				word[0]+=32;
			e = new Entry(word,meaning);
			avlTree.insert(e);
		}
	}
	fin.close();
}

void addNewWord(AVLtree& avlTree){
	string word, meaning;
	cout<<"\nEnter word :  ";
	cin>>word;
	cout<<"Enter meaning :  ";
	cin>>meaning;
	Entry *e = new Entry(word,meaning);
	avlTree.insert(e);
	cout<<" Entry added.\n";
}

void removeWord(AVLtree& avlTree){
	string word;
	cout<<"Enter the word to removed :\n";
	cin>>word;
	avlTree.remove(word);
}

void searchWord(AVLtree& avlTree){
	string word;
	cout<<"Enter the word to be searched for :\n";
	cin>>word;
	Entry *e=avlTree.search(word);
	if(e==NULL)
		cout<<" Sorry, No match found !\n";
	else
		cout<<e->word<<"  :  "<<e->meaning<<endl;
}

void getNumOfWord(AVLtree& avlTree){
	cout<<"Total number of words  :  "<<avlTree.getSize()<<endl;
}

void showAllInRange(AVLtree& avlTree){
	string w1,w2;
	cout<<"Enter lower limit of range  :  ";
	cin>>w1;
	cout<<"Enter upper limit of range  :  ";
	cin>>w2;
	avlTree.count=0;
	cout<<endl;
	avlTree.showAllInRange(avlTree.getRoot(),w1,w2);
	cout<<"\n  Total words in range  :  "<<avlTree.count<<endl;


}


