#include "stack.h"

unsigned int top = 0;

void* create_stack(size_t size_of_stack)
{
    return calloc(size_of_stack, sizeof(stack_data_type));
}

static bool is_full()
{
    return (top >= MAX_STACK_SIZE) ? true : false;
}

error_t push(void* stack, stack_data_type data)
{
    //top
    // stack_data_type is int, float, char
    // stack_data_type structure 
    error_t ret_val = SUCCESS;
    if(!is_full())
    {
        //(stack_data_type *)stack[top] = data;
        memcpy((stack_data_type *)&stack[top], data, sizeof(stack_data_type));
        top++;
    }
    else
    {
        ret_val = STACK_FULL;
    }
    
    return ret_val;
    
}
//malloc(size) + memset, calloc(size, type)