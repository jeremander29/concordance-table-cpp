//Jeremiah Ibarra
//Word Frequency Table

#include <iostream>
using namespace std;
#include "Struct.h"
#include "BST.h"

istream& operator>> (istream& in, word& w)
{
	in >> w.name >> w.count >> w.line;
	return in;
}

ostream& operator<< (ostream& out, word w)
{
	out << ' ' << w.name << ' ' << w.count << ' ' << w.line << endl;
	return out;
}

bool word::operator== (word w)
{
	if (name == w.name)
	{
		return true;
	}
	else

	{
		return false;
	}
}

bool word::operator< (const word& w)const
{
	if (name < w.name)
	{
		return true;
	}
	else

	{
		return false;
	}
}

bool word::operator> (const word& w)
{
	if (name > w.name)
	{
		return true;
	}
	else

	{
		return false;
	}
}

bool word::operator<= (const word& w)
{
	if (name <= w.name)
	{
		return true;
	}
	else

	{
		return false;
	}
}

void word::operator= (const word& w)
{
	name = w.name;
	count = w.count;
	line = w.line;
}