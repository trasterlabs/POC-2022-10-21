
CPP            = gcc
CPPFLAGSD      = -Wall -O1
CPPFLAGS11D    = $(CPPFLAGSD) -std=gnu++17

DIRINCLUDE = include/
DIRSOURCE  = src/
BINDIR     = bin/
LIBDIR     = lib/
OBJDIR     = obj/

BASICINCLUDE = -I./$(DIRINCLUDE)
SOURCEINCLUDE = -I./$(DIRSOURCE)

BASICLIBRARY = -lm -lstdc++ -pthread -lrt
DIRLIBRARYSEARCH = -L./$(LIBDIR)

all: create_directories \
     execute_program

NAME_PROGRAM = POC-various-object-shared-header

COMPILED_FILES  = $(OBJDIR)classa.o $(OBJDIR)classb.o
COMPILED_FILES += $(OBJDIR)main.o

$(NAME_PROGRAM): $(COMPILED_FILES)
	# [Trasterlabs] joining the obj files into an executable
	$(CPP) $^ -o $(BINDIR)$@ $(BASICINCLUDE) $(SOURCEINCLUDE) $(BASICLIBRARY) $(DIRLIBRARYSEARCH)

execute_program: $(NAME_PROGRAM)
	# executing $<
	./$(BINDIR)/$(NAME_PROGRAM)

create_directories:
	if [ ! -d ./$(LIBDIR) ]; then mkdir -p ./$(LIBDIR); fi
	if [ ! -d ./$(BINDIR) ]; then mkdir -p ./$(BINDIR); fi
	if [ ! -d ./$(OBJDIR) ]; then mkdir -p ./$(OBJDIR); fi

$(OBJDIR)%.o: $(DIRSOURCE)%.cpp
	# [Trasterlabs] Compile $<
	$(CPP) $(CPPFLAGS11D) $(BASICINCLUDE) -c $< -o $@

default: all
