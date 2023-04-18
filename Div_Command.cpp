//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include "Div_Command.h"

void Div_Command::accept(Visitor& v)
{
	v.visit_Div_Command(*this);
}

int Div_Command::precedence()
{
	return 2;
}