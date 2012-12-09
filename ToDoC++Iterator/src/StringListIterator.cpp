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
StringListIterator::StringListIterator( StringList *list ) {
	PStringList = list;
	Current     = 0;
}

//---------------------------------------------------------------------------
StringListIterator::~StringListIterator() {
	// TODO Auto-generated destructor stub
} /* namespace std */

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
