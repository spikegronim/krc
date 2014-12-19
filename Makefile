# use GCC, we might use something else
CC=gcc
# Warn for all types of errors. This is SUPER important to writing reliable C code.
# TODO: add -Werror so that warnings are errors that block compilation
CFLAGS= -Wall

# The compiler turns .c files into object files (.o files).
# The linker turns many .o files into an executable file.
# You might add something like "-lm" to LDFLAGS to link against
# the GNU math library libm.
# Your examples are all single file, so you don't need this yet.
LDFLAGS=

# Definae a variable with all your source files
SOURCES=$(wildcard *.c)

# Define a rule that maps .c files to files with no suffix
EXECUTABLES=$(SOURCES:.c=)


# all, the default tmake target, depends on our executables
all: $(EXECUTABLES)

# our executables need to know how to turn .c files
# into no-suffix files; this rule says how to do that
.c:
	$(CC) $(CFLAGS) $< -o $@

# remove the executables and NOT the .c files
# also any object files that you may create
clean:
	rm -f [0-9]-[0-9] [0-9]-[0-9][0-9] *.o

