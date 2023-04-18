//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _BINARY_COMMAND_H_
#define _BINARY_COMMAND_H_

#include "Stack.h"

#include"Command.h"

class Binary_Command : public Command
{
public:
	Binary_Command (void) {};
	virtual ~Binary_Command(void);
	virtual void accept(Visitor&) = 0;
	virtual int precedence() = 0;

	Command* getChild1();
	void setChild1(Command*);

	Command* getChild2();
	void setChild2(Command*);

private:
	Command* child1;
	Command* child2;

};
#endif