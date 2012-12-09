/*
 * application.h
 *
 *  Created on: 2012/12/02
 *      Author: takepu
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "StringList.h"

namespace std{

//---------------------------------------------------------------------------
class Application {
public:
	Application();
	virtual ~Application();
	virtual void Initial();
	virtual void Run();
	virtual void Exit();

protected:
	StringList*	PStrList;
};
}
#endif /* APPLICATION_H_ */
