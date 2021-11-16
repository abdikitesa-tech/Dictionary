#ifndef AVLTREE_HPP
#define AVLTREE_HPP
#include<string>
#include "entry.hpp"
using namespace std;

class AVLtree{
	private:
			int size;
			Entry *root;
	public:
			AVLtree();
			~AVLtree();
			int count;
			int getSize();
			int max(int,int);
			int getHeightDif(Entry*);
			Entry* getRoot();
			Entry* newNode(string,string);
			Entry* rotateRight(Entry*);
			Entry* rotateLeft(Entry*);
			void insert(Entry*);
			void remove(string);
			Entry* search(string);
			Entry* findPreSuc(string);
			void showAllInRange(Entry*,string,string);
			void printInOrder(Entry*);
			void printInLevel();
};

#endif
