//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _EVAL_H_
#define _EVAL_H_

#include "Stack.h"
#include "Visitor.h"
#include "Add_Command.h"
#include "Sub_Command.h"
#include "Mul_Command.h"
#include "Div_Command.h"
#include "Mod_Command.h"
#include "Num_Command.h"

class Eval : public Visitor
{
public:
	Eval(void) {};
	~Eval(void) {};
	void visit_Add_Command(Add_Command&);
	void visit_Sub_Command(Sub_Command&);
	void visit_Mul_Command(Mul_Command&);
	void visit_Div_Command(Div_Command&);
	void visit_Mod_Command(Mod_Command&);
	void visit_Num_Command(Num_Command&);
	int pop();

private:
	Stack <int> stack;
};
#endif