//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

template <typename T>
inline
size_t Queue<T>::size(void) const
{
	return cur_size_;
}

template <typename T>
inline
bool Queue <T>::is_empty(void) const
{
	return is_empty_;
}