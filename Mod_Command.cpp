//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include "Mod_Command.h"

void Mod_Command::accept(Visitor& v)
{
	v.visit_Mod_Command(*this);
}

int Mod_Command::precedence()
{
	return 2;
}
