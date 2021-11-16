/* Prepared By:-Abdi Kitesa
			   -Alula Yohannes
			   -Ermias Kebebe
*/
#include<iostream>
#include "AVLtree.hpp"
#include "functions.h"
using namespace std;

int main(){
	char choice;
	AVLtree avlTree;
	cout<<"\n===== DICTIONARY =====\n\n";
	cout<<"Read word meaning file ? (y/n)\n";
	cin>>choice;
	if( choice == 'y' || choice == 'Y' ){
		readFileData(avlTree);
		mainMenu(avlTree);
	}
	else
		mainMenu(avlTree);
return 0;
}

