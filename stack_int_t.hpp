#pragma once

#include "dll_t.hpp"

#include <iostream>
using namespace std;

namespace AED {

    class stack_float_t {
    private:
        dll_t list_;

    public:
        stack_float_t(void);
        virtual ~stack_float_t(void);

	    void push(float c);
	    float pop(void);
	    
	    bool empty(void);

        ostream& write(ostream& os);
    };

}