#pragma once
#include "stack_float_t.hpp"
#include <iostream>
#include <cstdio>
#include <cstring> 
using namespace std;

namespace AED {

class evaluador_RPN_t {

private:



public:
evaluador_RPN_t(void);
~evaluador_RPN_t(void);
int eval( char* expres);
bool es_operando( char* expres);





};
}