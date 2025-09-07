TREESITTER ?= npx tree-sitter

SRC = src/parser.c
OBJ = $(SRC:.c=.o)

TSCFLAGS = $(CPPFLAGS) $(CFLAGS) -fPIC
TSLDFLAGS = $(LDFLAGS) --shared

test: generate
	$(TREESITTER) test

generate: src/parser.c

src/parser.c: grammar.js
	$(TREESITTER) generate

fennel.so: $(OBJ)
	$(CC) $(TSLDFLAGS) -o $@ $(OBJ)

.c.o:
	$(CC) -c $(TSCFLAGS) -o $@ $<

clean:
	rm -f fennel.so $(OBJ)

.PHONY: generate test clean
