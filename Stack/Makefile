SRC = stack.c test_stack.c unity/unity.c
INC = stack.h

result : $(SRC)
	gcc $^ -o all.out

run: result
	./all.out

analyze: result
	cppcheck --enable=all *.c

memory_leak: result
	valgrind ./all.out

coverage: 
	gcc -fprofile-arcs -ftest-coverage stack.c test_stack.c unity/unity.c -Iunity -o all.out
	./all.out
	gcov -all*.c
	
clean:
	rm -rf *.out *.gcov *.gcda *.gcno *.out