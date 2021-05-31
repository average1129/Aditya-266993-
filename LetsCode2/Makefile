#Target_name : Dependencies
#<TAB>Command
SRC = test.c sum.c multiply.c divide.c subtract.c
INC = complex_t.h funcs.h 
result :  $(SRC) 
	gcc $^ -o all.out

run: result
	./all.out 

clean: 
	rm all.out 
