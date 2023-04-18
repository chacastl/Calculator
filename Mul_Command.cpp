//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include "Mul_Command.h"

void Mul_Command::accept(Visitor& v)
{
	v.visit_Mul_Command(*this);
}

int Mul_Command::precedence()
{
	return 2;
}

