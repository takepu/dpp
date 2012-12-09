/*
 * stringList.cpp
 *
 *  Created on: 2012/12/02
 *      Author: takepu
 */

#include "StringListIterator.h"
#include "StringList.h"

using namespace std;

//---------------------------------------------------------------------------
StringList::StringList() {
	// TODO 自動生成されたコンストラクター・スタブ

}

//---------------------------------------------------------------------------
StringList::StringList( StringList *StringList )
{
}

//---------------------------------------------------------------------------
StringList::~StringList() {
	// TODO Auto-generated destructor stub
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
	return new StringListIterator( this );
}
