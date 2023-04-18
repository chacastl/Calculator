//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "Stack.h"
#include "Binary_Command.h"

class Add_Command : public Binary_Command

{
public:
	Add_Command(void) {};
	void accept(Visitor&);
	int precedence();
};

#endif