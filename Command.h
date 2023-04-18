//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "Stack.h"
#include "Visitor.h"

class Command
{
public:
	Command(void) {};
	virtual ~Command(void) {};
	virtual void accept(Visitor&) = 0;
};

#endif