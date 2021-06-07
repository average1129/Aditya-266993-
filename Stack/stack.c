#include "stack.h"
#include "stdlib.h"
#include <string.h>

//unsigned int top = 0;

stack * create_stack(size_t size_of_stack)
{
    stack* stack_ptr = (stack*)calloc(1, sizeof(stack_data_type));
    stack_ptr->top=0;
    stack_ptr->size_of_stack= MAX_STACK_SIZE;
    stack_ptr->data_array=(stack_data_type*) calloc(MAX_STACK_SIZE, sizeof(stack_data_type));
    return stack_ptr;
}

static bool is_full(stack* stack_ptr)
{
    if (stack_ptr->top >= MAX_STACK_SIZE) return  true ;
    else return false;
}

static bool is_empty(stack* stack_ptr)
{
    if (stack_ptr->top==0) return true;
    else return false;

}

error_t push(stack* stack, stack_data_type data)
{
    //top
    // stack_data_type is int, float, char
    // stack_data_type structure 
    error_t ret_val = SUCCESS;
    if(!is_full(stack))
    {
        //(stack_data_type *)stack[top] = data;
        memcpy((stack_data_type *)&(stack->data_array[stack->top]), &data, sizeof(stack_data_type));
        stack->top++;
    }
    else
    {
        ret_val = STACK_FULL;
    }
    
    return ret_val;
    
}
error_t pop(stack* stack)
{
    error_t ret_val = SUCCESS;
    if (!is_empty(stack))
    {
        //stack->data_array[stack->top]=NULL;
        stack->top--;

    }
    else
    {
        ret_val= STACK_EMPTY;
    }

return ret_val;}

stack_data_type peep (stack* stack)
{
    error_t ret_val = SUCCESS;
    if (!is_empty(stack))
    {
        return(stack->data_array[stack->top]);
        
    }

    else return 0;
}