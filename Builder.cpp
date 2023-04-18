//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include "Builder.h"

bool Builder::build_add_command()
{
	Add_Command* temp = new Add_Command();
	clear_op_stack(temp->precedence());
	op_stack.push(temp);
	return temp;
}
bool Builder::build_sub_command()
{
	Sub_Command* temp = new Sub_Command();
	clear_op_stack(temp->precedence());
	op_stack.push(temp);
	return temp;
}
bool Builder::build_mul_command()
{
	Mul_Command* temp = new Mul_Command();
	clear_op_stack(temp->precedence());
	op_stack.push(temp);
	return temp;
}
bool Builder::build_div_command()
{
	Div_Command* temp = new Div_Command();
	clear_op_stack(temp->precedence());
	op_stack.push(temp);
	return temp;
}
bool Builder::build_mod_command()
{
	Mod_Command* temp = new Mod_Command();
	clear_op_stack(temp->precedence());
	op_stack.push(temp);
	return temp;
}

bool Builder::build_num_command(int n)
{
	Num_Command* temp = new Num_Command(n);
	tree_stack.push(temp);
	return temp;
}

bool Builder::clear_op_stack(int prec)
{
	while (!op_stack.is_empty() && op_stack.top()->precedence() <= prec)
	{
		Binary_Command* temp = op_stack.pop();
		temp->setChild1(tree_stack.pop());
		temp->setChild2(tree_stack.pop());
		tree_stack.push(temp);
		return temp;
	}
}

void Builder::push_tree(Command* command)
{
	tree_stack.push(command);
}

Command* Builder::get_top()
{
	clear_op_stack(5);
	return tree_stack.top();
}
