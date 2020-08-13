.PHONY: gen
gen:
	npx tree-sitter generate

.PHONY: test
test: gen
	npx tree-sitter test
