/* File: char_stack.cpp

  Implementation of functions for basic simple array-based implementation of a stack.

*/
#include "char_stack.h"// contains the declarations of the variables and functions.
// Fill this in.

char_stack::char_stack(){
//the default constructor initializes the private variables
	top_index = -1; // indicates that the stack is empty
	current_size = 0;
}

//push operator to insert element on top of the stack
void char_stack::push( char item ){
	top_index = top_index + 1;
	current_size = current_size + 1;
 	A[top_index] = item ;
}

char char_stack::top(){
  	return A[top_index];
}

char char_stack::pop(){
  	top_index = top_index - 1;
	current_size = current_size - 1;
  	return A[ top_index + 1 ];
}


bool char_stack::empty(){
  return top_index == -1 ; 
}

int char_stack::size(){
  return current_size;
}
