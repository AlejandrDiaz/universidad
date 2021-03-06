#pragma once
#include "dll_int_node_t.hpp"
#include "dll_t.hpp"

#include <iostream>
using namespace std;

namespace AED {

    class queue_char_t {
    private:
        dll_t list_;

    public:
        queue_char_t(void);
        virtual ~queue_char_t(void);

	    void put(char c);
	    char get(void);
	    
	    bool empty(void);

        ostream& write(ostream& os);
    };

}