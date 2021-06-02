SRC = stack.c

TEST_SRC = test_stack.c\
unity/unity.c

coverage:$(SRC) $(TEST_SRC)
	gcc -Iunity -fprofile-arcs -ftest-coverage $^ -o all.out
	./all.out
	gcov -a stack.c

analyze:all $(SRC)
	cppcheck --enable=all $(SRC)
	valgrind ./all.out

clean:
	rm -rf *.o *.out *.gcd* *.gcno* *.gcov* 