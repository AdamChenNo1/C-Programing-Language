DEBUG:=-g
.PHONY:all

all:$(subst .c,.exe, $(wildcard *test.c)) 4-3.exe 4-5.exe 4-4.exe

4-1_test.exe:4-1_test.c 4-1.c
	cc -o 4-1_test.exe $(DEBUG) 4-1_test.c 4-1.c
4-2_test.exe:4-2_test.c 4-2.c
	cc -o 4-2_test.exe $(DEBUG) 4-2_test.c 4-2.c	
4-3.exe:4-3.c
	cc -o 4-3.exe $(DEBUG) 4-3.c
4-4.exe:4-4.c
	cc -o 4-4.exe $(DEBUG) 4-4.c
4-5.exe:4-5.c
	cc -o 4-5.exe $(DEBUG) 4-5.c

4-13_test.exe:4-13_test.c
	cc -o 4-13_test.exe $(DEBUG) 4-13_test.c 4-13.c
4-14_test.exe:4-14_test.c
	cc -o 4-14_test.exe $(DEBUG) 4-14_test.c

clean:
	rm -f *.exe