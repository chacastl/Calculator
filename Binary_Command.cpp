//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include "Binary_Command.h"

Binary_Command::~Binary_Command(void)
{
	delete child1;
	delete child2;
}

Command* Binary_Command::getChild1()
{
	return child1;
}

Command* Binary_Command::getChild2()
{
	return child2;
}

void Binary_Command::setChild1(Command* command)
{
	child1 = command;
}

void Binary_Command::setChild2(Command* command)
{
	child2 = command;
}
