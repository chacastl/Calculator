//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _BUILDER_H_
#define _BUILDER_H_

#include "Abstract_Builder.h"

class Builder : Abstact_Builder
{
public:
	Builder(void) {};
	~Builder(void) {};
	bool build_add_command(void);
	bool build_sub_command(void);
	bool build_mul_command(void);
	bool build_div_command(void);
	bool build_mod_command(void);
	bool build_num_command(int);
	bool clear_op_stack(int);
	void push_tree(Command*);
	Command* get_top();

private:
	Stack<Binary_Command*> op_stack;
	Stack<Command*> tree_stack;
};
#endif