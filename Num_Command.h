//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _NUM_COMMAND_H_
#define _NUM_COMMAND_H_

#include "Stack.h"
#include "Command.h"

class Num_Command : public Command
{
public:
	Num_Command(int);
	void accept(Visitor&);
	int getval();

private:
	int val;
};
#endif