//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include "Sub_Command.h"

void Sub_Command::accept(Visitor& v)
{
	v.visit_Sub_Command(*this);
}

int Sub_Command::precedence()
{
	return 3;
}