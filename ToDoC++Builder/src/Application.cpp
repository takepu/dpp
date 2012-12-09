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
	// TODO 自動生成されたコンストラクター・スタブ

}

//---------------------------------------------------------------------------
Application::~Application() {
	PStrList = new StringList;
}

//---------------------------------------------------------------------------
void Application::Initial() {
	delete PStrList;
}

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
	StringListIterator* iterator = PStrList->GetIterator();

	if( iterator->HasNext() == false ) {
		cout << endl << "ToDo is nothing.";
	}
	else {
		cout << endl << "Display ToDo." << endl;
		while( iterator->HasNext() == true ) {
			cout << iterator->Next() << endl;
		}
	}

	delete iterator;
}
