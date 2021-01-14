
.PHONY:all

all:calculator.exe atof_test.exe atoi.exe calaulator_ex.exe qsort_test.exe

qsort_test.exe: qsort.c qsort_test.c
	cc -o qsort_test.exe qsort_test.c qsort.c
calaulator_ex.exe:calaulator_ex.c getch.c stack.c
	cc -o calaulator_ex.exe calaulator_ex.c getch.c stack.c
calculator.exe:calculator.c getline.c atof.c
	cc -o calculator.exe calculator.c getline.c atof.c
atof_test.exe:atof_test.c atof.c 
	cc -o  atof_test.exe atof_test.c atof.c 
atoi.exe:atoi.c atof.c
	cc -o atoi.exe atoi.c atof.c
clean:
	rm -f *.exe
