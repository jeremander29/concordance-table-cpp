#pragma once
//Jeremiah Ibarra
//Concordance Table

#include <iostream>
using namespace std;

#ifndef wordStruct
#define wordStruct

struct word
{


	string name;
	int count = 1;
	int line = 1;


	bool operator== (word);
	bool operator< (const word& i)const;
	bool operator> (const word& i);
	bool operator<= (const word& i);
	void operator= (const word& i);

};

istream& operator>> (istream&, word&);
ostream& operator<< (ostream&, word);



#endif
