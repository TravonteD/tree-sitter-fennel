#include <tree_sitter/parser.h>
#include <stdio.h>
#include <wctype.h>

enum TokenType {
  FIELD,
  COLON
};

void * tree_sitter_fennel_external_scanner_create() { return NULL; }
void tree_sitter_fennel_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_fennel_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_fennel_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool
is_non_symbol_char(int symbol) {
  switch (symbol) {
    case '"':
    case '\'':
    case '`': 
    case '(':
    case ')':
    case '{':
    case '}':
    case '[':
    case ']':
      return true;
    default:
      return false;
  }
}

bool
tree_sitter_fennel_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  while(iswspace(lexer->lookahead)) {
    lexer->advance(lexer, true);
  }
  if (valid_symbols[FIELD] && lexer->lookahead == ':') {
    lexer->advance(lexer, false);

    if (is_non_symbol_char(lexer->lookahead))
      return false;

    if (iswspace(lexer->lookahead)) {
      lexer->result_symbol = COLON;
      return true;
    }

    lexer->advance(lexer, false);

    for (;;) {
      if (iswspace(lexer->lookahead) || is_non_symbol_char(lexer->lookahead)) {
        lexer->result_symbol = FIELD;
        return true;
      }
      lexer->advance(lexer, false);
    }
  }
  return false;
}
