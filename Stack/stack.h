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
// #pragma once

/*
    1) How can I reuse this code in any place
    2) How can i make it more readable
    3) Argument, faster, with less space usage
    4) Try passing the arguments for result if possible
    5) Avoid dynamic allocation only
    6) large buffers, dont go with static memory, prefer dynamic memory
    7) Avoid definitions, creating variables and pointers in headerfile
*/

// Static memory  - Array of known size
// Dynamic memory - Runtime decision

typedef int stack_data_type;

typedef enum error_t 
{
    SUCCESS,
    STACK_FULL,
    STACK_EMPTY,
    NULL_PTR
}error_t;

/**
 * @brief Create a stack object
 * 
 * @param size_of_stack 
 * @return void* 
 */
void* create_stack(size_t size_of_stack);

/**
 * @brief Push the data into the stack
 * 
 * @param stack 
 * @param data 
 * @return error_t 
 */
error_t push(void* stack, stack_data_type data);

//pop();

//peek();

#endif  /* _STACK_H_ */


/*
Build
    1) Precprocessor : Removal of comments, Preprocessor directives are processed,
                       Include file content is placed, Macros will be replaced with value

                    gcc -E 1.c -> .i
    2) Compilation - Check for errors
                    if no errors, convert to asm
                    .S
                    gcc -S 1.c
    3) Assembling - Assembly to machine
                    .o
                    gcc -c 1.c 
    4) Linking      - Exterenal function call linking (Symbol table)
                    nm a.out
                    gcc 1.c
                    Libraries - C, OS, CPU Architecture
*/