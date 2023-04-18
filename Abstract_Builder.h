//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _ABSTRACT_BUILDER_H_
#define _ABSTRACT_BUILDER_H_

#include "Command.h"
#include "Num_Command.h"
#include "Binary_Command.h"
#include "Add_Command.h"
#include "Sub_Command.h"
#include "Mul_Command.h"
#include "Div_Command.h"
#include "Mod_Command.h"

class Abstact_Builder
{
public:
	virtual bool build_add_command(void) = 0;
	virtual bool build_sub_command(void) = 0;
	virtual bool build_mul_command(void) = 0;
	virtual bool build_div_command(void) = 0;
	virtual bool build_mod_command(void) = 0;
	virtual bool build_num_command(int) = 0;
	virtual bool clear_op_stack(int) = 0;
	virtual void push_tree(Command*) = 0;
	virtual Command* get_top() = 0;
};

#endif