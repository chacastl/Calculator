//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#include "Base_Array.h"
#include <stdexcept>

template <typename T>
Base_Array<T>::Base_Array(void)
	:data_(nullptr),
	cur_size_(0),
	max_size_(0)
{

}

template <typename T>
Base_Array<T>::Base_Array(size_t length)
	:data_(nullptr),
	cur_size_(length),
	max_size_(length)
{
	if (length > 0)
	{
		data_ = new T[length];
	}
}

template <typename T>
Base_Array<T>::Base_Array(size_t length, T fill)
	:data_(nullptr),
	cur_size_(length),
	max_size_(length)
{
	if (length > 0)
	{
		data_ = new T[length];
		this->fill(fill);
	}
}

template <typename T>
Base_Array<T>::Base_Array(const Base_Array& array)
	:data_(nullptr),
	cur_size_(array.size()),
	max_size_(array.max_size())
{
	if (array.max_size() > 0)
	{
		data_ = new T[array.max_size()];
		data_ = array;
	}
}

template <typename T>
Base_Array<T>::~Base_Array(void)
{
	if (data_ != nullptr)
	{
		delete[] data_;
	}
}

template <typename T>
const Base_Array<T>& Base_Array<T>::operator = (const Base_Array& rhs)
{
	if (this != &rhs)
	{
		delete[] data_;
		data_ = new T[rhs.max_size()];
		cur_size_ = rhs.size();
		max_size_ = rhs.max_size();
		data_ = rhs;
	}
}

template <typename T>
T& Base_Array<T>::operator [] (size_t index)
{
	if (index >= max_size_)
	{
		throw std::out_of_range("index out of range");
	}
	return data_[index];
}

template <typename T>
const T& Base_Array<T>::operator [] (size_t index) const
{
	if (index >= max_size_)
	{
		throw std::out_of_range("index out of range");
	}
	return data_[index];
}

template <typename T>
T Base_Array<T>::get(size_t index) const
{
	if (index >= max_size_)
	{
		throw std::out_of_range("index out of range");
	}
	return data_[index];
}

template <typename T>
void Base_Array<T>::set(size_t index, T value)
{
	if (index >= cur_size_)
	{
		throw std::out_of_range("index out of range");
	}
	else
	{
		data_[index] = value;
	}
}

template <typename T>
int Base_Array<T>::find(T value) const
{
	return this->find(value, 0);
}

template<typename T>
int Base_Array<T>::find(T val, size_t start) const
{
	if (start >= max_size_)
	{
		throw std::out_of_range("index out of range");
	}
	for (int i = start; i < max_size_ i++)
	{
		if (data_[i] == val)
		{
			return static_cast<int>(i);
		}
	}
	return -1;
}

template <typename T>
bool Base_Array<T>::operator == (const Base_Array& rhs) const
{
	if (this == &rhs)
	{
		return true;
	}
	if (cur_size_ == rhs.size() && max_size_ == rhs.max_size())
	{
		for (size_t i = 0; i < max_size_ i++)
		{
			if (data_[i] != rhs[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

template <typename T>
bool Base_Array <T>::operator != (const Base_Array& rhs) const
{
	return !(*this == rhs)
}

template <typename T>
void Base_Array <T>::fill(T value)
{
	data_ = value;
}
