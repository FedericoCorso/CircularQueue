#ifndef MY_CIRCULAR_QUEUE_H
#define MY_CIRCULAR_QUEUE_H
 
 
/*
* C++-style examples
*
*/
 
#include <stdexcept>
#include <string>
#include <iostream>
 
 
namespace my {
  
 
   /** A circular queue of chars with a fixed capacity
   */
   class CircularQueue {
      
       private:
// fields       
// eventually, also some methods if needed
        int size;
        int head;
        int capacity;
        char* arr; // array di caratteri che rappresenta la mia CircularQueue

       public:
           // methods
           /* Initializes the queue, reserving space for a number of elements equal to provided capacity.                   
               - dynamically allocates a char array inside            
               - If capacity is <= 0, throws std::invalid_argument
               - Complexity: O(capacity)
           */       
           // WRITE CONSTRUCTOR METHOD
           CircularQueue(int capacity);
 
           /**  Destroys the instance, deleting any dynamic attribute
            */
           // WRITE DESTRUCTOR METHOD
           ~CircularQueue(); // il distruttore deve deallocare la memoria dinamica allocata con il costruttore
                      
              
           /**  Return the size of the queue.
              
                   - Complexity: O(1)
           */     
           // WRITE METHOD  int get_size()
           int get_size();
 
		/*	NO!!   RENDE ACCESSIBILE L’arr PRIVATO ALL’ESTERNO!
		public:
int* get_arr(){   
				return this->arr;
		}
*/
 
 
           /** Return the capacity of the queue, that is, the maximum number of allowed elements in the queue.
                  
                   - Complexity: O(1)
           */           
           // WRITE METHOD get_capacity
           int get_capacity();
 
           /**
               Return true if the queue is empty, false otherwise.
              
               - Complexity: O(1)
           */    
           // WRITE METHOD isEmpty
           bool isEmpty();
           /**
                Return the element at the head of the queue, without removing it.
              
                   - If the queue is empty, raises std::runtime_error
                   - Complexity: O(1)
                  
           */
            // WRITE METHOD top
            char top();
 
           /** Enqueues provided element v at the end of the queue.
              
                   - If the queue is full, raises std::runtime_error
                   - Complexity: O(1)
           */           
            void enqueue(char new_elem);
 
           /** Removes head element and returns it.
                      
               - If the queue is empty, raises a std::runtime_error
               - Complexity: O(1)
           */
            char dequeue(); 
      
   };
  
};
#endif // MY_CIRCULAR_QUEUE_H

