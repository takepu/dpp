/*
 * StringList.h
 *
 *  Created on: 2012/12/02
 *      Author: takepu
 */
#ifndef STRINGLIST_H_
#define STRINGLIST_H_

#include <string>
#include <vector>

namespace std {

class StringListIterator;

//---------------------------------------------------------------------------
class StringList {
public:
	StringList();
	StringList( StringList *StringList );
	virtual ~StringList();
	void Add( string &str );
	string& Get( unsigned long idx );
	long GetLength();
	StringListIterator* GetIterator();
	int test(){return 0;}

protected:
	vector <string> StrList;
	string NullStr;;
};
}
#endif /* STRINGLIST_H_ */
