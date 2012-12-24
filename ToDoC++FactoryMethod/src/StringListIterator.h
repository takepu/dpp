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
// 文字列リスト参照クラス
//---------------------------------------------------------------------------
class StringListIterator {
public:
	//-----------------------------------------------------------------------
	// コンストラクタ
	//-----------------------------------------------------------------------
	StringListIterator( class StringList *list );

	//-----------------------------------------------------------------------
	// デストラクタ
	//-----------------------------------------------------------------------
	virtual ~StringListIterator();

	//-----------------------------------------------------------------------
	// 次レコード有無
	//-----------------------------------------------------------------------
	bool	HasNext();

	//-----------------------------------------------------------------------
	// 次レコード参照
	//-----------------------------------------------------------------------
	string&	Next();

protected:
	class StringList *PStringList;
	long	   Current;
};

} /* namespace std */
#endif /* STRINGLISTITERATOR_H_ */