/*
 * StringListIterator.h
 *
 *  Created on: 2012/12/02
 *      Author: takepu
 */

#ifndef STRINGLISTITERATOR_H_
#define STRINGLISTITERATOR_H_

#include <string>

class StringList;

namespace std {

//---------------------------------------------------------------------------
class StringListIterator {
public:
	StringListIterator( StringList *list );
	virtual ~StringListIterator();
	bool	HasNext();
	string&	Next();

protected:
	StringList *PStringList;
	long	   Current;
};

} /* namespace std */
#endif /* STRINGLISTITERATOR_H_ */
