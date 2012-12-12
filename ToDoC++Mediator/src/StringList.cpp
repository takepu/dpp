/*
 * stringList.cpp
 *
 *  Created on: 2012/12/02
 *      Author: takepu
 */

#include "StringListIterator.h"
#include "StringList.h"
#include <iostream>
#include <string>

using namespace std;

//---------------------------------------------------------------------------
StringList::StringList() {

}

//---------------------------------------------------------------------------
StringList::StringList( StringList *StringList )
{
}

//---------------------------------------------------------------------------
StringList::~StringList() {
}

//---------------------------------------------------------------------------
void StringList::Add( string &str )
{
	StrList.push_back( str );
}

//---------------------------------------------------------------------------
string& StringList::Get( unsigned long idx )
{
	if( idx >= StrList.size() )
	{
		return NullStr;
	}
	return StrList[idx];
}

//---------------------------------------------------------------------------
long StringList::GetLength()
{
	return StrList.size();
}

//---------------------------------------------------------------------------
StringListIterator* StringList::GetIterator()
{
	class StringListIterator* iterator;

	iterator = new StringListIterator( this );
	IteratorList.push_back( iterator );

	return iterator;
}

//---------------------------------------------------------------------------
void StringList::ReleaseIterator( class StringListIterator* obj )
{
	vector <class StringListIterator*>::iterator iter;
	for( iter=IteratorList.begin(); iter!=IteratorList.end(); iter++ )
	{
		if( (*iter) == obj )
		{
			iter = IteratorList.erase( iter );
			cout << "Iterator Release!" << endl;
			break;
		}
	}
}

//---------------------------------------------------------------------------
void StringList::ResetAll()
{
	unsigned int idx;

	for( idx=0; idx<IteratorList.size(); idx++)
	{
		IteratorList[idx]->Reset();
	}
}
