/*
 * application.cpp
 *
 *  Created on: 2012/12/02
 *      Author: takepu
 */

#include <iostream>
#include <string>
#include "Application.h"
#include "StringList.h"
#include "StringListIterator.h"

using namespace std;

//---------------------------------------------------------------------------
Application::Application() {
	PStrList = new StringList;
}

//---------------------------------------------------------------------------
Application::~Application() {
	delete PStrList;
}

//---------------------------------------------------------------------------
void Application::Initial() {
}

//---------------------------------------------------------------------------
// 文字列をリストに登録する
// コンソールから入力された文字列をリストに登録する。
// [end]と入力すると終了。
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
void Application::Run()
{
	string 		cin_str;

	while(1)
	{
		cout << "Please input your ToDo ([end]=exit) : ";
		getline(cin, cin_str);
		if( cin_str == "end" )
		{
			break;
		}
		PStrList->Add( cin_str );
	}
	cout << "Program is over.";
}

//---------------------------------------------------------------------------
// リストに登録された文字列を表示する
// イテレーターを２つ作って、リセットされる様子を観察する
//---------------------------------------------------------------------------
void Application::Exit() {
	StringListIterator* iterator01 = PStrList->GetIterator();
	StringListIterator* iterator02 = PStrList->GetIterator();
	string				str;

	//-----------------------------------------------------------------------
	if( iterator01->HasNext() == false ) {
		cout << endl << "ToDo is nothing.";
	}
	else {
		cout << endl << "Display ToDo 1st." << endl;
		while( iterator01->HasNext() == true ) {
			cout << iterator01->Next() << endl;
			cout << iterator02->Next() << endl;
		}
	}

	iterator01->ResetAll();
	cout << endl << "Display ToDo 2nd." << endl;
	while( iterator01->HasNext() == true ) {
		cout << iterator01->Next() << endl;
		cout << iterator02->Next() << endl;
	}

	delete iterator01;
	delete iterator02;
}
