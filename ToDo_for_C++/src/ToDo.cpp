//============================================================================
// Name        : todo.cpp
// Author      : takepu
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>
#include "application.h"

using namespace std;

int main() {
	Application apl;

	apl.Initial();
	apl.Run();
	apl.Exit();
}
