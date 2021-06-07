/**
 * @file stack.h
 * @author Bharath.G ()
 * @brief Implementation of Stack Data structure
 * @version 0.1
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef _STACK_H_
#define _STACK_H_

#include "stdio.h"
#include "stdint.h"
#include "stdbool.h"

#define MAX_STACK_SIZE  (10)


typedef int stack_data_type;

typedef enum error_t 
{
    SUCCESS,
    STACK_FULL,
    STACK_EMPTY,
    NULL_PTR
}error_t;

typedef struct stack 
{
    unsigned int top;
    size_t size_of_stack;
    stack_data_type *data_array;

} stack;

stack* create_stack(size_t size_of_stack);

static bool is_full(stack* stack_ptr);

static bool is_empty(stack* stakc_ptr);

error_t push(stack* stack_ptr, stack_data_type data);

error_t pop (stack* stack_ptr);

stack_data_type peep (stack* stack_ptr);


#endif  /* _STACK_H_ */

