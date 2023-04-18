//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include "Add_Command.h"

void Add_Command::accept(Visitor& v)
{
	v.visit_Add_Command(*this);
}

int Add_Command::precedence()
{
	return 3;
}
