//============================================================================
// Name        : MyChessEngine.cpp
// Author      : Olaf Kriese
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/***************************************************************
 *   Create the Chess Engine Object and call its run method
 *   run will loop forever until a "quit" command is received
 *   ****************************************************************/

#include "TChessEngine.h"

int main()
{
	TChessEngine* engine;
	engine = new TChessEngine();
	engine->run();
	delete engine;
	return 0;
}
