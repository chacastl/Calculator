//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _MUL_COMMAND_H_
#define _MUL_COMMAND_H_

#include "Stack.h"
#include "Binary_Command.h"

class Mul_Command : public Binary_Command
{
public:
	Mul_Command(void) {};
	void accept(Visitor&);
	int precedence();
};
#endif