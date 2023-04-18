

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.


template <typename T>
Stack <T>::Stack (void)
{

}


template <typename T>
Stack <T>::Stack (const Stack & stack)
  :arr_ (Array <T> (stack.arr_))
{
 
}

template <typename T>
Stack <T>::~Stack (void)
{

}

template <typename T>
void Stack <T>::push (T element)
{
  arr_.resize(size()+1);
  arr_.set(size()-1,element);
}


template <typename T>
T Stack <T>::pop (void)
{
  if(is_empty())
  {
    throw empty_exception();
  }
  return arr_[size()];
}

template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{

  if (this != &rhs)
    this->arr_ = rhs.arr_;

  return *this;

}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{ 
  arr_.resize(0);
}
