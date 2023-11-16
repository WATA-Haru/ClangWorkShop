CC = gcc
ROOT_DIR = ./
SHELL=/bin/bash

EX01_SRC = $(ROOT_DIR)ex01/plus_five.c
EX02_SRC = $(ROOT_DIR)ex02/welcome_printf.c
EX03_SRC = $(ROOT_DIR)ex03/ascii_town.c

EX01_main = $(ROOT_DIR)main/ex01main.c
EX02_main = $(ROOT_DIR)main/ex02main.c
EX03_main = $(ROOT_DIR)main/ex03main.c

EX01_EX = $(ROOT_DIR)plus_five
EX02_EX = $(ROOT_DIR)welcome_printf
EX03_EX = $(ROOT_DIR)ascii_town

CORRECT_01= $(ROOT_DIR)main/correct_ex01.txt
CORRECT_02 = $(ROOT_DIR)main/correct_ex02.txt
CORRECT_03 = $(ROOT_DIR)main/correct_ex03.txt

OUTPUTS_01 = $(ROOT_DIR)ex01.txt
OUTPUTS_02 = $(ROOT_DIR)ex02.txt
OUTPUTS_03 = $(ROOT_DIR)ex03.txt

all: test01 test02 test03

test01:
	@echo "test01"
	@grep -v '^\s*//' $(EX01_SRC) | grep -v '^\s*$$' > $(ROOT_DIR)remove_comment.txt
	@if [ $$(grep -cE 'for|switch|case|define' $(ROOT_DIR)remove_comment.txt) -eq 0 ] ;\
	then \
		printf 'format \033[32m [OK] \033[m\n' ;\
	else \
		printf 'format \033[31m [KO] \033[m\n' ;\
	fi
	@rm -f $(ROOT_DIR)remove_comment.txt

	@$(CC) -o $(EX01_EX) $(EX01_SRC) $(EX01_main)
	@./$(EX01_EX) > $(OUTPUTS_01)
	
	@if diff $(OUTPUTS_01) $(CORRECT_01) >/dev/null ;\
	then \
		printf 'function \033[32m [OK] \033[m\n' ;\
	else \
		printf 'function \033[31m [KO] \033[m\n' ;\
	fi

test02:
	@echo "test02"
	@grep -v '^\s*//' $(EX02_SRC) | grep -v '^\s*$$' > $(ROOT_DIR)remove_comment.txt
	@if [ $$(grep -cE 'for|switch|case|define' $(ROOT_DIR)remove_comment.txt) -eq 0 ] ;\
	then \
		printf 'format \033[32m [OK] \033[m\n' ;\
	else \
		printf 'format \033[31m [KO] \033[m\n' ;\
	fi
	@rm -f $(ROOT_DIR)remove_comment.txt

	@$(CC) -o $(EX02_EX) $(EX02_SRC) $(EX02_main)
	@./$(EX02_EX) > $(OUTPUTS_02)
	
	@if diff $(OUTPUTS_02) $(CORRECT_02) >/dev/null ;\
	then \
		printf 'function \033[32m [OK] \033[m\n' ;\
	else \
		printf 'function \033[31m [KO] \033[m\n' ;\
	fi

test03:
	@echo "test03"
	@grep -v '^\s*//' $(EX03_SRC) | grep -v '^\s*$$' > $(ROOT_DIR)remove_comment.txt
	@if [ $$(grep -cE 'for|switch|case|define' $(ROOT_DIR)remove_comment.txt) -eq 0 ] ;\
	then \
		printf 'format \033[32m [OK] \033[m\n' ;\
	else \
		printf 'format \033[31m [KO] \033[m\n' ;\
	fi
	@rm -f $(ROOT_DIR)remove_comment.txt

	@$(CC) -o $(EX03_EX) $(EX03_SRC) $(EX03_main)
	@./$(EX03_EX) > $(OUTPUTS_03)
	
	@if diff $(OUTPUTS_03) $(CORRECT_03) >/dev/null ;\
	then \
		printf 'function \033[32m [OK] \033[m\n' ;\
	else \
		printf 'function \033[31m [KO] \033[m\n' ;\
	fi

clean:
	rm -f $(EX01_EX) $(EX02_EX) $(EX03_EX)

fclean: clean
	rm -f $(OUTPUTS_01) $(OUTPUTS_02) $(OUTPUTS_03)


.PHONY: test01 test02 test03 all clean fclean
