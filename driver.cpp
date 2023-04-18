//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include"Builder.h"

#include"Eval.h"

#include <stdexcept>
#include<iostream>
#include<sstream>
#include<cstdlib>

void run();
bool infix_to_postfix(std::istringstream&, Builder&);
bool check(std::istringstream&);
bool is_integer(std::string);
bool eval(Command*);

int main()
{
	run();
}

void run()
{
	std::string input;
	bool keepGoing = true;
	while (true)
	{
		std::istringstream infix ("");
		Command* command;
		keepGoing = false;
		printf("please enter a equation(in infix)");
		std::cin >> input;
		if (input == "QUIT")
		{
			break;
		}
		if (input.find_first_not_of(' ') != std::string::npos)
		{
			//std::cout << "TESTI FWORK";
			keepGoing = true;
		}
		if (keepGoing)
		{
			std::cout << "TEST CON";
			infix.clear();
			infix.str(input);
			//keepGoing = check(infix);
		}
		if (keepGoing)
		{
			std::cout << "TEST CON1212 ";
			infix.clear();
			infix.str(input);
			Builder builder;
			infix_to_postfix(infix, builder);
			command = builder.get_top();
			eval(command);
		}
	}
	printf("Ending Program");
}

bool eval(Command* command)
{
	Eval v;
	try
	{
		command->accept(v);
		printf("%d\n", v.pop());
	}
	catch (int e)
	{
		printf("Undefined Error");
	}
	delete command;
	return false;
}

bool infix_to_postfix(std::istringstream& infix, Builder& builder)
{
	std::string token;
	while (!infix.eof())
	{
		infix >> token;

		if (token == "+")
		{
			builder.build_add_command();
		}
		else if (token == "-")
		{
			builder.build_sub_command();
		}
		else if (token == "*")
		{
			builder.build_mul_command();
		}
		else if (token == "/")
		{
			builder.build_div_command();
		}
		else if (token == "%")
		{
			builder.build_mod_command();
		}
		else if (token == "(")
		{
			Builder other;
			infix_to_postfix(infix, other);
			builder.push_tree(other.get_top());
		}
		else if (token == ")")
		{
			return true;
		}
		else
		{
			builder.build_num_command(std::stoi(token));
		}
	}
	return true;
}

bool check(std::istringstream& check)
{
	std::string token;
	bool num_next = true;
	int parens = 0;

	while (!check.eof())
	{
		check >> token;
		std::cout << token;

		if (is_integer(token))
		{
			if (num_next)
			{
				num_next = false;
			}
			else
			{
				printf("Error: Expected op");
				return false;
			}
		}
		else if (token.compare("+") == 0 || token.compare("-") == 0 || token.compare("*") == 0 || token.compare("/") == 0 || token.compare("%") == 0)
		{
			if (!num_next)
			{
				num_next = true;
			}
			else
			{
				printf("Error: Op with no number");
				return false;
			}
		}
		else if (token.compare("(") == 0)
		{
			parens += 1;
			if (num_next)
			{
				num_next = true;
			}
			else
			{
				printf("Error: Expected Op");
				return false;
			}
		}
		else if (token.compare(")") == 0)
		{
			parens -= 1;
			if (!num_next)
			{
				if (parens < 0)
				{
					printf("Error: Error ) without (");
					return false;
				}
			}
			else
			{
				printf("Error: invalid equation inside para");
				return false;
			}
		}
		else
		{
			printf(" not recognized");
			return false;
		}
	}
	if (parens != 0)
	{
		printf("Error: unequal ( and )");
		return false;
	}
}

	bool is_integer(std::string line)
	{
		char* p;
		strtol(line.c_str(), &p, 10);
		return *p == 0;

	}


