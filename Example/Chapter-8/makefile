DEBUG:=-g

all:dup.exe $(subst .c,.exe,$(wildcard *test.c))

dup.exe:dup.c
	cc -o dup.exe $(DEBUG) dup.c
getchar_test.exe:getchar_test.c getchar.c
	cc -o getchar_test.exe $(DEBUG) getchar_test.c getchar.c
getchar_v2_test.exe:getchar_v2_test.c getchar_v2.c
	cc -o getchar_v2_test.exe $(DEBUG) getchar_v2_test.c getchar_v2.c
get_test.exe:get_test.c get.c
	cc -o get_test.exe $(DEBUG) get_test.c get.c
clean:
	rm -f *.exe