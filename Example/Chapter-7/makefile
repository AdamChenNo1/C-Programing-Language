DEBUG:= -g
all:lower.exe calc.exe cat.exe cat_v2.exe

lower.exe:lower.c
	cc -o lower.exe $(DEBUG) lower.c
calc.exe:calc.c
	cc -o calc.exe $(DEBUG) calc.c
readDate.exe:readDate.c
	cc -o readDate.exe $(DEBUG) readDate.c
cat.exe:cat.c filecopy.c
	cc -o cat.exe $(DEBUG) cat.c filecopy.c
cat_v2.exe:cat_v2.c filecopy.c
	cc -o cat_v2.exe $(DEBUG) cat_v2.c filecopy.c
clean:
	rm -f *.exe