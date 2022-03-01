SRC = src/managemain.c\
src/vf.c\

INC = -Iinc\

PROJECT_NAME = MANAGEMENT.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME) 

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}
	gcov -a src/managemain.c src/vf.c
