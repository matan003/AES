# Compiler
CC=g++

# Flags
CFLAGS=-Wall -g

# Headers
INCLUDES=-Iinclude

# Source files
SRCS=../src/main.cpp ../src/aes.cpp

# Headers

HDRS=

# Object files
OBJS=$(SRCS:.cpp=.o)

# Main
MAIN=../bin/aes

.PHONY: depend clean

all:	$(MAIN)
	@echo AES has been compiled

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS) $(LFLAGS)

# Suffix replacement
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

# Cleanup
clean:
	-$(RM) $(OBJS) $(MAIN) *~ $(INCLUDES)/*~

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it