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
	StringListIterator* iterator01 = PStrList->GetIterator();
	StringListIterator* iterator02 = PStrList->GetIterator();
	string				str;

	//-----------------------------------------------------------------------
	if( iterator01->HasNext() == false ) {
		cout << endl << "ToDo is nothing.";
	}
	else {
		cout << endl << "Display ToDo." << endl;
		while( iterator01->HasNext() == true ) {
			cout << iterator01->Next() << endl;
			cout << iterator02->Next() << endl;
		}
	}

	delete PStrList;
	iterator01->HasNext();
	iterator02->HasNext();

	delete iterator01;
	delete iterator02;
}
