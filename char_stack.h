/* File: char_stack.h       

  Header file for a very basic array-based implementation of a stack.

*/
class char_stack
{
  public:
    char_stack();
    void push( char item );
    char pop(); 
    char top();
    bool empty();
    int size();

  private:
    // fill this in.
    static const int capacity = 1000 ; // the array size 
    int A[capacity] ; // the array.
    int top_index ; // this will index the top of the stack in the array
    int current_size;
};

