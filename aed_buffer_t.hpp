#pragma once
#include <iostream>
#include "queue_char_t.hpp"
using namespace std;
 namespace AED {





class aed_buffer_t {
		
		private:
		queue_char_t cola_;
		int max_buff_sz_;
		int curr_buff_sz_;
		
		public:
		aed_buffer_t(int max_buff_sz_);
		~aed_buffer_t(void);
		void flush(void);
		void put(char c);
			
			
		
			
};

}		