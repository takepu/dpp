/*
 * StringListIterator.h
 *
 *  Created on: 2012/12/02
 *      Author: takepu
 */

#ifndef STRINGLISTITERATOR_H_
#define STRINGLISTITERATOR_H_

#include <string>

namespace std {

//---------------------------------------------------------------------------
class StringListIterator {
public:
	StringListIterator( class StringList *list );
	virtual ~StringListIterator();
	bool	HasNext();
	string&	Next();
	void    DeleteList( );

protected:
	class StringList *PStringList;
	long	         Current;
	string           NullStr;;
};

} /* namespace std */
#endif /* STRINGLISTITERATOR_H_ */
