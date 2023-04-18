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
Array<T>::Array(void)
	:Base_Array<T>()
{

}

template <typename T>
Array<T>::Array(size_t length)
	:Base_Array<T>(length)
{

}

template <typename T>
Array<T>::Array(size_t length, T fill)
	:Base_Array<T>(length, fill)
{

}

template <typename T>
Array<T>::Array(const Array & array)
	:Base_Array<T>(array)
{

}

template <typename T>
Array<T>::~Array(void)
{

}

template <typename T>
const Array <T>& Array <T>::operator = (const Array& rhs)
{
	if (this != &rhs)
	{
		delete[] this->data_;
		this->data_ = new T[rhs.max_size_()];
		this->cur_size_ = rhs.size();
		this->max_size_ = rhs.max_size();

		this->data_ = rhs;
	}
}

template <typename T>
void Array <T>::resize(size_t new_size)
{
	if (new_size == 0)
	{
		this->data_ = nullptr;
		this->cur_size_ = 0;
		this->max_size_ = 0;
	}

	else if (this->max_size_ < new_size)
	{
		T* temp = this->data_;
		this->data_ = new T[new_size];
		this->max_size_ = new_size;
		data_ = temp;
		delete[] temp;
	}

	else if (this->max_size_ > new_size)
	{
		if (this->cur_size_ > new_size)
		{
			this->cur_size_ = new_size;
		}
		T* temp = this->data_;

		this->data_ = new T[new_size];

		this->max_size_ = new_size;

		data_ = temp;
		delete[] temp;
	}

	else
	{
		return;
	}
}