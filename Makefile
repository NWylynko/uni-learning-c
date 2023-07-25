CC=gcc
CFLAGS=-Wall -ansi -pedantic
SRCDIR=src
OUTDIR=out
SRC=$(shell find $(SRCDIR) -name '*.c')
OBJS=$(patsubst $(SRCDIR)/%.c,$(OUTDIR)/%,$(SRC))

.PHONY: directories

all: directories $(OBJS)

$(OUTDIR)/%: $(SRCDIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) $< -o $@

directories:
	mkdir -p $(OUTDIR)

run: 
	$(foreach exec,$(OBJS),./$(exec);)

clean:
	rm -rf $(OUTDIR)
