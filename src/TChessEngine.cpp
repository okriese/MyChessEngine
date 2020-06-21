/*
 * TChessEngine.cpp
 *
 *  Created on: Jun 21, 2020
 *      Author: krieseo
 */

#include "TChessEngine.h"
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

TChessEngine::TChessEngine() {
	// TODO Auto-generated constructor stub

}

void TChessEngine::run()
{
	for(; ;) // loop forever
	{
		if (!processGuiMessages(50)) break;
	}
}

bool TChessEngine::processGuiMessages(int wait)
{
	if (inputThread.isNewInputAvailable())
	{
		string input = inputThread.getNewInput();
		if (input.length() > 0)
		{
			return inputHandler(input);
		}
	}
	else if (wait>0)
		sleep(wait);

	return true;
}

bool TChessEngine::inputHandler(std::string input)
{
	vector v;
	std::string string0;
	split( v, input, " " ); // split the line into a vector of words
	string0 = v[0];         // the 1st word is the command id
	if (string0=="quit") return false;
	if (string0=="uci")
	{
		sendUCIResponse();
		return true;
	} // more commands }
}
TChessEngine::~TChessEngine() {
	// TODO Auto-generated destructor stub
}

