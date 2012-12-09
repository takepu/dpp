/*
 * StringListIterator.cpp
 *
 *  Created on: 2012/12/02
 *      Author: takepu
 */

#include <iostream>
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
	if( PStringList == NULL ) {
		return false;
	}

	if( Current >= PStringList->GetLength() ) {
		return false;
	}

	return true;
}

//---------------------------------------------------------------------------
string&	StringListIterator::Next() {
	if( PStringList == NULL ) {
		return NullStr;
	}

	string& str = PStringList->Get(Current);
	Current++;
	return str;
}

//---------------------------------------------------------------------------
void StringListIterator::DeleteList( ){
	PStringList = NULL;
	Current     = 0;
	cout << "StringListIterator::DeleteList() Call" << endl;
}
