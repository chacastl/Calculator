//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <exception>

template <typename T>
class Queue
{
public:
	typedef T type;

	//Exception handling

	class empty_exception : public std::exception {
	public:
		empty_exception(void)
			:std::exception()
		{

		}
		empty_exception(const char* error)
			: std::exception(error)
		{

		}
	};
	//default Constructor
	Queue(void);
	//copy Constuctor
	Queue(const Queue& q);
	//Deconstrucor
	~Queue(void);
	//Assignment operator
	const Queue& operator = (const Queue& rhs);
	//Enqueue adds a new element to the list
	void enqueue(T element);
	//remores the element from the list
	T dequeue(void);
	//checks if queue is empty
	bool is_empty(void) const;
	//Number of element
	size_t size(void) const;
	//wipes elements
	void clear(void);

private:
	Array <T> array;

	size_t cur_size_;

	bool is_empty_;
};

#include "Queue.cpp"

#include"Queue.inl"

#endif