cls
gcc -c -DBUILD_DLL pyfindw.c -o out.o
gcc -shared -o pyfindw.dll out.o -Wl,--out-implib,pyfindw.a
del out.o
pause