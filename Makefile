fennel.so: grammar.js gen
	cc -o fennel.so -I./src src/parser.c --shared -Os -lstdc++ -fPIC

.PHONY: gen
gen:
	npx tree-sitter generate

.PHONY: test
test: gen
	npx tree-sitter test
