#include "aed_buffer_t.hpp"
#include <iostream>

using namespace std;

namespace AED {


aed_buffer_t::aed_buffer_t(int max_buff_sz_):
		cola_(),
		max_buff_sz_(max_buff_sz_),
		curr_buff_sz_(0){}
		
		
		aed_buffer_t::~aed_buffer_t(void) {
			flush();
		}

		void aed_buffer_t::flush(void) {
			while(!cola_.empty()) {
				cout << cola_.get()<<endl;
				
			}
			curr_buff_sz_=0;
		}

		
		void aed_buffer_t::put(char c) {
			
			if(curr_buff_sz_==max_buff_sz_){
				
				flush();
				cola_.put(c);
				curr_buff_sz_++;
			}
		}
}