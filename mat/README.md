compiler command flags:

g++ `pkg-config --cflags opencv` foo.c -o foo `pkg-config --libs opencv`
