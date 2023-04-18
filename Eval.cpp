//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include "Eval.h"

void Eval::visit_Add_Command(Add_Command& command)
{
	command.getChild1()->accept(*this);
	command.getChild2()->accept(*this);
	int n1 = this->stack.pop(), n2 = this->stack.pop();
	stack.push(n1 + n2);
}

void Eval::visit_Sub_Command(Sub_Command& command)
{
	command.getChild1()->accept(*this);
	command.getChild2()->accept(*this);
	int n1 = this->stack.pop(), n2 = this->stack.pop();
	stack.push(n1 + n2);
}

void Eval::visit_Mul_Command(Mul_Command& command)
{
	command.getChild1()->accept(*this);
	command.getChild2()->accept(*this);
	int n1 = this->stack.pop(), n2 = this->stack.pop();
	stack.push(n1 + n2);
}

void Eval::visit_Div_Command(Div_Command& command)
{
	command.getChild1()->accept(*this);
	command.getChild2()->accept(*this);
	int n1 = this->stack.pop(), n2 = this->stack.pop();
	stack.push(n1 + n2);
}

void Eval::visit_Mod_Command(Mod_Command& command)
{
	command.getChild1()->accept(*this);
	command.getChild2()->accept(*this);
	int n1 = this->stack.pop(), n2 = this->stack.pop();
	stack.push(n1 + n2);
}

void Eval::visit_Num_Command(Num_Command& command)
{
	this->stack.push(command.getval());
}

int Eval::pop()
{
	return this->stack.pop();
}
