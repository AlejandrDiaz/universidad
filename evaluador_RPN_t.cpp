#include "evaluador_RPN_t.hpp"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>

namespace AED {

evaluador_RPN_t::evaluador_RPN_t(void)
					{}




int evaluador_RPN_t::eval( char* expres) {
	
		stack_float_t pila;
		char* pch = NULL;
		pch = strtok(expres, " ");
		while(pch != NULL) {
		
			if(es_operando(pch)) {
			
				float aux = atof(pch);
				pila.push(aux);
			}
			else {
			
				
				int right = pila.pop();
				int left = pila.pop();

				switch(*pch) {
				
					case '+':
						pila.push(left + right);	
						break;

					case '-':
						pila.push(left - right);	
						break;

					case '*':
						pila.push(left * right);	
						break;

					case '/':
						pila.push(left / right);	
						break;
				}
				
			}

			pch = strtok(NULL, " ");
		}

		return(pila.pop());
}


bool evaluador_RPN_t::es_operando(char* expres) {
			
			if(((*expres)>='0')&&((*expres)<='9')) {
				
				return true;
			}
			else {
				return false;
			}
			
}
	
}
