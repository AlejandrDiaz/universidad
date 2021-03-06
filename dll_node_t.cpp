#include "dll_node_t.hpp"

#include <iostream>
#include <cstdio>

using namespace std;

namespace AED {

   dll_node_t::dll_node_t() :
	next_(NULL),
	prev_(NULL)
    {}

    dll_node_t::~dll_node_t(void) {}

	void dll_node_t::set_next(dll_node_t* next)
	{
		next_ = next;
	}

	dll_node_t* dll_node_t::get_next(void) const
	{
		return next_;
	}
	
	void dll_node_t::set_prev(dll_node_t* prev)
	{
		prev_ = prev;
	}

	dll_node_t* dll_node_t::get_prev(void) const
	{
		return prev_;
	}	

}