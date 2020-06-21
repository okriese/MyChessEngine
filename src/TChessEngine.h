/*
 * TChessEngine.h
 *
 *  Created on: Jun 21, 2020
 *      Author: krieseo
 */

#ifndef TCHESSENGINE_H_
#define TCHESSENGINE_H_

#include <string>

class TChessEngine {
public:
	TChessEngine();

	void run();
	bool processGuiMessages(int wait);
	bool inputHandler(std::string input);

	virtual ~TChessEngine();
};

#endif /* TCHESSENGINE_H_ */
