//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include "Num_Command.h"

Num_Command::Num_Command(int n)
	:val(n)
{

}

void Num_Command::accept(Visitor& v)
{
	v.visit_Num_Command(*this);
}

int Num_Command::getval()
{
	return val;
}