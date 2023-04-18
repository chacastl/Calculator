//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include <stdexcept>

template <typename T>
Queue<T>::Queue(void)
	:array(10),
	cur_size_(0),
	is_empty_(true)
{

}

template <typename T>
Queue<T>::Queue(const Queue& queue)
	:array(queue.array.max_size()),
	cur_size_(queue.size()),
	is_empty_(queue.is_empty())
{
	array = queue.array;
}

template <typename T>
Queue<T>::~Queue(void)
{

}

template <typename T>
const Queue<T>& Queue<T>::operator = (const Queue& rhs)
{
	if (this !- &rhs)
	{
		array = Array<T>(rhs.array.max_size());
		cur_size_ = rhs.size();
		array = rhs.array;
	}
}

template <typename T>
void Queue<T>::enqueue(T element)
{
	if (cur_size_ == array.max_size())
	{
		array.resize(array.max_size() * 2);
	}
	array.set(cur_size_, element);
	cur_size_ = cur_size_ + 1;
	if (is_empty_)
	{
		is_empty_ = false;
	}
}

template <typename T>
T Queue<T>::dequeue(void)
{
	if (is_empty_)
	{
		throw Queue < T::empty_exception();
	}

	T temp = array[0];

	for (int i = 0; i < cur_size_ - 1; i++)
	{
		array[i] = array[i + 1];
	}
	cur_size_ -= 1;

	if (cur_size_ == 0)
	{
		is_empty_ = true;
	}
	return temp;
}

template <typename T>
void Queue<T>::clear(void)
{
	Array < T Array(10);
	cur_size_ = 0;
	is_empty_ = true;
}