//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _SUB_COMMAND_H_
#define _SUB_COMMAND_H_

#include "Stack.h"
#include "Binary_Command.h"

class Sub_Command : public Binary_Command
{
public:
	Sub_Command(void) {};
	void accept(Visitor&);
	int precedence();
};

#endif