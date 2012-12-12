/*
 * application.cpp
 *
 *  Created on: 2012/12/02
 *      Author: takepu
 */

#include <iostream>
#include <string>
#include "Application.h"

using namespace std;

//---------------------------------------------------------------------------
Application::Application() {
	PStrList = new StringList;
}

//---------------------------------------------------------------------------
Application::~Application() {
	delete PStrList;
	PStrList = NULL;
}

//---------------------------------------------------------------------------
void Application::Initial() {
}

//---------------------------------------------------------------------------
// 文字列をリストに登録する
// コンソールから入力された文字列をリストに登録する。
// [end]と入力すると終了。
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
void Application::Exit() {
}
