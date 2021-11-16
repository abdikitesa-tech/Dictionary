#ifndef ENTRY_HPP
#define ENTRY_HPP
#include<string>
using namespace std;

class Entry{
	public:
		string word,meaning;
		Entry *parent,*leftChild,*rightChild;
		int height;
		
		Entry();
		Entry(string,string);
		
		bool operator == (Entry e){
			return this->word == e.word;
		}

		bool operator != (Entry e){
			return this->word != e.word;
		}

		bool operator > (Entry e){
			return this->word > e.word;
		}
		
		bool operator < (Entry e){
			return this->word < e.word;
		}
};

#endif
