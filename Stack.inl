

// Honor Pledge:
//
// I pledge that I have neither given nor received any help on
// this assignment.

//
// size
//
template <typename T>
inline
size_t Stack <T>::size (void) const
{
	return arr_.size();
}

//
// top
//
template <typename T>
inline
T Stack <T>::top (void) const
{
	if(is_empty())
	{
	throw empty_exception();
	}
	return arr_[(size() - 1)];
}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
	if(size() == 0)
	{
		return true;
	}
	else
	{
	return false;
	}
}
