//
//  Person.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 9/26/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include "Person.hpp"

template <typename T>
Pimpl<T>::Pimpl():impl(new T{}){
    
    
}
template <typename T>
Pimpl<T>::~Pimpl(){
    
}

template <typename T>
template <typename... Args)
Pimpl<T>::Pimpl(Args&& ...args)
:impl {new T{std::forward<Args>(args)...}}
    
}

template <typename T>
T* Pimpl<T>::operator->(){
    return impl.get();
}

template <typename T>
T& Pimpl<T>::operator*(){
    return *impl.get();
}



