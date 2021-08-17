SRC = src/parser.c src/scanner.c
OBJ = $(SRC:.c=.o)

INCS = -Isrc/
TSCFLAGS = $(CPPFLAGS) $(CFLAGS) -fPIC
TSLDFLAGS = $(LDFLAGS) --shared

fennel.so: $(OBJ)
	$(CC) $(TSLDFLAGS) -o $@ $(OBJ)

.c.o:
	$(CC) -c $(TSCFLAGS) -o $@ $<

src/parser.c: grammar.js
	npx tree-sitter generate

generate: src/parser.c

test: generate
	npx tree-sitter test

clean:
	rm -f fennel.so $(OBJ)

.PHONY: generate test clean
