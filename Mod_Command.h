//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _MOD_COMMAND_H_
#define _MOD_COMMAND_H_

#include "Stack.h"
#include "Binary_Command.h"

class Mod_Command : public Binary_Command
{
public:
	Mod_Command(void) {};
	void accept(Visitor&);
	int precedence();
};

#endif