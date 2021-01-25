DEBUG:=-g

all:dup.exe $(subst .c,.exe,$(wildcard *test.c)) cp.exe

dup.exe:dup.c
	cc -o dup.exe $(DEBUG) dup.c
getchar_test.exe:getchar_test.c getchar.c
	cc -o getchar_test.exe $(DEBUG) getchar_test.c getchar.c
getchar_v2_test.exe:getchar_v2_test.c getchar_v2.c
	cc -o getchar_v2_test.exe $(DEBUG) getchar_v2_test.c getchar_v2.c
get_test.exe:get_test.c get.c
	cc -o get_test.exe $(DEBUG) get_test.c get.c
cp.exe:cp.c error.c
	cc -o cp.exe $(DEBUG) cp.c error.c
file_test.exe:file_test.c file.c
	cc -o file_test.exe $(DEBUG) file_test.c file.c
clean:
	rm -f *.exe