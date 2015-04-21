#include <iostream>

#include "stack_char_t.hpp"
#include "queue_char_t.hpp"

#define N_CHARS 26

using namespace std;

int main(void)
{
    AED::stack_char_t pila;
    
    for(int i = 0; i < N_CHARS; i++){
        pila.push('a' + i);
        cout << (char)('a' + i);
    }
    
    cout << endl;
    
    for(int i = 0; i < N_CHARS; i++)
        cout << pila.pop();
        
    cout << endl;    
    
    
    AED::queue_char_t cola;
    
    for(int i = 0; i < N_CHARS; i++){
        cola.put('a' + i);
        cout << (char)('a' + i);
    }
    
    cout << endl;
    
    
    for(int i = 0; i < N_CHARS; i++)
        cout <<cola.get();
        
    cout << endl;     
    return 0;
}