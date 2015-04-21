#include "stack_float_t.hpp"
#include "dll_int_node_t.hpp"

#include <iostream>
#include <cstdio>

using namespace std;

namespace AED {

    stack_char_t::stack_float_t(void):
    list_()
    {}
    
    stack_char_t::~stack_float_t(void)
    {}

    void stack_float_t::push(float c)
    {
        list_.insert_beginning(new dll_int_node_t(c));
    }
    
    int stack_float_t::pop(void)
    {
        dll_int_node_t* n_aux = (dll_int_node_t*)(list_.extract_beginning());
        
        int aux = n_aux->get_data();
        
        delete n_aux;
        
        return aux;
    }
    
    bool stack_float_t::empty(void)
    {
        return list_.empty();
    }

    ostream& stack_float_t::write(ostream& os)
    {
        list_.write(os);
        
        return os;
    }
}