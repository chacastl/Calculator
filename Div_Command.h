//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _DIV_COMMAND_H_
#define _DIV_COMMAND_H_

#include "Stack.h"

#include "Binary_Command.h"

class Div_Command : public Binary_Command
{
public:
	Div_Command(void) {};
	void accept(Visitor&);
	int precedence();
};
#endif