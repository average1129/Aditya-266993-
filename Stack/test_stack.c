/**
 * @file test_stack.c
 * @author Bharath.G ()
 * @brief 
 * @version 0.1
 * @date 2021-05-31
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity/unity.h"
#include "stack.h"
stack* ptr = NULL;
/**
 * @brief Set the Up object
 * Required by the unity test framework
 */
void setUp() {}

/**
 * @brief Release the objects that are setup for tests
 * Required by the unity test framework
 */
void tearDown() {}

void test_stack_creation()
{
    ptr = create_stack(3);
    TEST_ASSERT_NOT_EQUAL(NULL, ptr);
}

void test_stack_push()
{
    TEST_ASSERT_EQUAL(SUCCESS, push(ptr, 1));
    TEST_ASSERT_EQUAL(SUCCESS, push(ptr, 2));
    TEST_ASSERT_EQUAL(SUCCESS, push(ptr, 3));
    TEST_ASSERT_EQUAL(STACK_FULL, push(ptr, 4));
}

void test_stack_pop()
{
  TEST_ASSERT_EQUAL(SUCCESS,pop(ptr));
  TEST_ASSERT_EQUAL(SUCCESS,pop(ptr));
  TEST_ASSERT_EQUAL(SUCCESS,pop(ptr));
  TEST_ASSERT_EQUAL(STACK_EMPTY,pop(ptr));
}

void test_stack_peep()
{
  TEST_ASSERT_EQUAL(0,peep(ptr));
}

int main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(test_stack_creation);
  RUN_TEST(test_stack_push);
  RUN_TEST(test_stack_pop);
  RUN_TEST(test_stack_peep);
  /* Close the Unity Test Framework */
  return UNITY_END();
}
