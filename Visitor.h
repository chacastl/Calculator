//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _VISITOR_H_
#define _VISITOR_H_

#include "Stack.h"

class Add_Command;
class Sub_Command;
class Mul_Command;
class Div_Command;
class Mod_Command;
class Num_Command;

class Visitor
{
public:
	Visitor(void) {};

	virtual void visit_Add_Command(Add_Command&) = 0;
	virtual void visit_Sub_Command(Sub_Command&) = 0;
	virtual void visit_Mul_Command(Mul_Command&) = 0;
	virtual void visit_Div_Command(Div_Command&) = 0;
	virtual void visit_Mod_Command(Mod_Command&) = 0;
	virtual void visit_Num_Command(Num_Command&) = 0;

};

#endif