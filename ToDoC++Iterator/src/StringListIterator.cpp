/*
 * StringListIterator.cpp
 *
 *  Created on: 2012/12/02
 *      Author: takepu
 */

#include "StringList.h"
#include "StringListIterator.h"

using namespace std;

//---------------------------------------------------------------------------
StringListIterator::StringListIterator( std::StringList *list ) {
	PStringList = list;
	Current     = 0;
}

//---------------------------------------------------------------------------
StringListIterator::~StringListIterator() {
}

//---------------------------------------------------------------------------
bool StringListIterator::HasNext() {
	if( Current >= PStringList->GetLength() ) {
		return false;
	}
	return true;
}

//---------------------------------------------------------------------------
string&	StringListIterator::Next() {
	string& str = PStringList->Get(Current);
	Current++;
	return str;
}
