#include <iostream>
#include <string.h>
#include "stack_float_t.hpp"
#include "aed_buffer_t.hpp"
namespace AED {

int main(void) {

aed_buffer_t alm(10);
char quijote[]="En un lugar de la Mancha de cuyo nombre no quiero acordarme, no ha mucho tiempo que vivía un hidalgo de los de lanza en astillero, adarga antigua, rocín flaco y galgo corredor ";

for(int i=0; i< strlen(quijote);i++) {


	alm.put(quijote[i]);
}






}
}