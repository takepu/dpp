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
// アプリケーション実行本体
// @note	下記順番でコールすること
//			Initial()
//			Run()
//			Exit()
//---------------------------------------------------------------------------
class Application {
public:
	//-----------------------------------------------------------------------
	// コンストラクタ
	//-----------------------------------------------------------------------
	Application();

	//-----------------------------------------------------------------------
	// デストラクタ
	//-----------------------------------------------------------------------
	virtual ~Application();

	//-----------------------------------------------------------------------
	// 初期化
	//-----------------------------------------------------------------------
	virtual void Initial();

	//-----------------------------------------------------------------------
	// 実行
	//-----------------------------------------------------------------------
	virtual void Run();

	//-----------------------------------------------------------------------
	// 終了
	//-----------------------------------------------------------------------
	virtual void Exit();

protected:
	StringList*	PStrList;
};
}
#endif /* APPLICATION_H_ */
