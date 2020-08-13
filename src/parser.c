#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_LPAREN = 1,
  anon_sym_let = 2,
  anon_sym_RPAREN = 3,
  anon_sym_local = 4,
  anon_sym_var = 5,
  anon_sym_global = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_fn = 9,
  anon_sym_lambda = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_token1 = 14,
  sym_number = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym__ = 19,
  anon_sym_DOT_DOT = 20,
  anon_sym_DOT = 21,
  sym_identifier = 22,
  sym_program = 23,
  sym__statement = 24,
  sym__function = 25,
  sym__variable_declaration = 26,
  sym_let_definition = 27,
  sym_local_definition = 28,
  sym_var_definition = 29,
  sym_global_definition = 30,
  sym_assignments = 31,
  sym_assignment = 32,
  sym_function_definition = 33,
  sym_lambda_definition = 34,
  sym__function_body = 35,
  sym_parameters = 36,
  sym_function_call = 37,
  sym_sequential_table = 38,
  sym_table = 39,
  sym__expression = 40,
  sym_string = 41,
  sym__operator = 42,
  aux_sym_program_repeat1 = 43,
  aux_sym_assignments_repeat1 = 44,
  aux_sym_parameters_repeat1 = 45,
  aux_sym_table_repeat1 = 46,
  aux_sym_string_repeat1 = 47,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_let] = "let",
  [anon_sym_RPAREN] = ")",
  [anon_sym_local] = "local",
  [anon_sym_var] = "var",
  [anon_sym_global] = "global",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_fn] = "fn",
  [anon_sym_lambda] = "lambda",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_number] = "number",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym__] = "_",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__function] = "_function",
  [sym__variable_declaration] = "_variable_declaration",
  [sym_let_definition] = "let_definition",
  [sym_local_definition] = "local_definition",
  [sym_var_definition] = "var_definition",
  [sym_global_definition] = "global_definition",
  [sym_assignments] = "assignments",
  [sym_assignment] = "assignment",
  [sym_function_definition] = "function_definition",
  [sym_lambda_definition] = "lambda_definition",
  [sym__function_body] = "_function_body",
  [sym_parameters] = "parameters",
  [sym_function_call] = "function_call",
  [sym_sequential_table] = "sequential_table",
  [sym_table] = "table",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [sym__operator] = "identifier",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_assignments_repeat1] = "assignments_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_number] = sym_number,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__function] = sym__function,
  [sym__variable_declaration] = sym__variable_declaration,
  [sym_let_definition] = sym_let_definition,
  [sym_local_definition] = sym_local_definition,
  [sym_var_definition] = sym_var_definition,
  [sym_global_definition] = sym_global_definition,
  [sym_assignments] = sym_assignments,
  [sym_assignment] = sym_assignment,
  [sym_function_definition] = sym_function_definition,
  [sym_lambda_definition] = sym_lambda_definition,
  [sym__function_body] = sym__function_body,
  [sym_parameters] = sym_parameters,
  [sym_function_call] = sym_function_call,
  [sym_sequential_table] = sym_sequential_table,
  [sym_table] = sym_table,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [sym__operator] = sym_identifier,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_assignments_repeat1] = aux_sym_assignments_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__function] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_let_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_local_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_var_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_global_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_assignments] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__function_body] = {
    .visible = false,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_sequential_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_name = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[6] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_body, 2, .inherited = true},
    {field_name, 2, .inherited = true},
  [4] =
    {field_body, 1},
  [5] =
    {field_body, 2},
    {field_name, 0},
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'g') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 3:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(63),
    [sym__statement] = STATE(7),
    [sym__function] = STATE(7),
    [sym__variable_declaration] = STATE(7),
    [sym_let_definition] = STATE(7),
    [sym_local_definition] = STATE(7),
    [sym_var_definition] = STATE(7),
    [sym_global_definition] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_lambda_definition] = STATE(7),
    [sym_function_call] = STATE(7),
    [sym_sequential_table] = STATE(7),
    [sym_table] = STATE(7),
    [sym__expression] = STATE(7),
    [sym_string] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_identifier] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      sym_number,
      sym_identifier,
    STATE(2), 15,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_program_repeat1,
  [38] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    ACTIONS(34), 2,
      sym_number,
      sym_identifier,
    STATE(8), 15,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_program_repeat1,
  [75] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 2,
      sym_number,
      sym_identifier,
    STATE(2), 15,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_program_repeat1,
  [112] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 2,
      sym_number,
      sym_identifier,
    STATE(2), 15,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_program_repeat1,
  [149] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(44), 2,
      sym_number,
      sym_identifier,
    STATE(4), 15,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_program_repeat1,
  [186] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 2,
      sym_number,
      sym_identifier,
    STATE(2), 15,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_program_repeat1,
  [223] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 2,
      sym_number,
      sym_identifier,
    STATE(2), 15,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_program_repeat1,
  [260] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    ACTIONS(38), 2,
      sym_number,
      sym_identifier,
    STATE(2), 15,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_program_repeat1,
  [297] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    ACTIONS(54), 2,
      sym_number,
      sym_identifier,
    STATE(5), 15,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_program_repeat1,
  [334] = 7,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    ACTIONS(58), 2,
      sym_number,
      sym_identifier,
    STATE(9), 15,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_program_repeat1,
  [371] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 2,
      sym_number,
      sym_identifier,
    STATE(49), 14,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
  [404] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 2,
      sym_number,
      sym_identifier,
    STATE(54), 14,
      sym__statement,
      sym__function,
      sym__variable_declaration,
      sym_let_definition,
      sym_local_definition,
      sym_var_definition,
      sym_global_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
  [437] = 10,
    ACTIONS(64), 1,
      anon_sym_let,
    ACTIONS(66), 1,
      anon_sym_local,
    ACTIONS(68), 1,
      anon_sym_var,
    ACTIONS(70), 1,
      anon_sym_global,
    ACTIONS(72), 1,
      anon_sym_fn,
    ACTIONS(74), 1,
      anon_sym_lambda,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(11), 1,
      sym__operator,
    ACTIONS(76), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym__,
      anon_sym_DOT_DOT,
  [472] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    ACTIONS(84), 2,
      sym_number,
      sym_identifier,
    STATE(18), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_parameters_repeat1,
  [496] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 2,
      sym_number,
      sym_identifier,
    STATE(17), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_parameters_repeat1,
  [520] = 6,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 2,
      sym_number,
      sym_identifier,
    STATE(17), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_parameters_repeat1,
  [544] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 2,
      sym_number,
      sym_identifier,
    STATE(17), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_parameters_repeat1,
  [568] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    ACTIONS(108), 2,
      sym_number,
      sym_identifier,
    STATE(16), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_parameters_repeat1,
  [592] = 1,
    ACTIONS(110), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [605] = 1,
    ACTIONS(112), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [618] = 1,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [631] = 1,
    ACTIONS(116), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [644] = 1,
    ACTIONS(118), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [657] = 1,
    ACTIONS(120), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [670] = 1,
    ACTIONS(122), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [683] = 1,
    ACTIONS(124), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [696] = 1,
    ACTIONS(126), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [709] = 1,
    ACTIONS(128), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [722] = 1,
    ACTIONS(130), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [735] = 1,
    ACTIONS(132), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [748] = 1,
    ACTIONS(134), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [761] = 1,
    ACTIONS(136), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [774] = 1,
    ACTIONS(138), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [787] = 1,
    ACTIONS(140), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [797] = 1,
    ACTIONS(142), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [807] = 1,
    ACTIONS(144), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [817] = 1,
    ACTIONS(146), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [827] = 1,
    ACTIONS(148), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [837] = 4,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_string,
    STATE(40), 1,
      aux_sym_table_repeat1,
  [850] = 3,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(41), 2,
      sym_assignment,
      aux_sym_assignments_repeat1,
  [861] = 4,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(10), 1,
      sym_parameters,
    STATE(58), 1,
      sym__function_body,
  [874] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_string,
    STATE(40), 1,
      aux_sym_table_repeat1,
  [887] = 3,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(41), 2,
      sym_assignment,
      aux_sym_assignments_repeat1,
  [898] = 4,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      sym_identifier,
    STATE(10), 1,
      sym_parameters,
    STATE(61), 1,
      sym__function_body,
  [911] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_string,
    STATE(43), 1,
      aux_sym_table_repeat1,
  [924] = 3,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(44), 2,
      sym_assignment,
      aux_sym_assignments_repeat1,
  [935] = 3,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym_string_token1,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [945] = 1,
    ACTIONS(179), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [951] = 3,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_string_token1,
    STATE(51), 1,
      aux_sym_string_repeat1,
  [961] = 3,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      aux_sym_string_token1,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [971] = 2,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(62), 1,
      sym_assignment,
  [978] = 2,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(60), 1,
      sym_assignment,
  [985] = 1,
    ACTIONS(150), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [990] = 2,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(59), 1,
      sym_assignment,
  [997] = 2,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym_assignments,
  [1004] = 2,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_parameters,
  [1011] = 1,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [1015] = 1,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
  [1019] = 1,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
  [1023] = 1,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
  [1027] = 1,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
  [1031] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 260,
  [SMALL_STATE(10)] = 297,
  [SMALL_STATE(11)] = 334,
  [SMALL_STATE(12)] = 371,
  [SMALL_STATE(13)] = 404,
  [SMALL_STATE(14)] = 437,
  [SMALL_STATE(15)] = 472,
  [SMALL_STATE(16)] = 496,
  [SMALL_STATE(17)] = 520,
  [SMALL_STATE(18)] = 544,
  [SMALL_STATE(19)] = 568,
  [SMALL_STATE(20)] = 592,
  [SMALL_STATE(21)] = 605,
  [SMALL_STATE(22)] = 618,
  [SMALL_STATE(23)] = 631,
  [SMALL_STATE(24)] = 644,
  [SMALL_STATE(25)] = 657,
  [SMALL_STATE(26)] = 670,
  [SMALL_STATE(27)] = 683,
  [SMALL_STATE(28)] = 696,
  [SMALL_STATE(29)] = 709,
  [SMALL_STATE(30)] = 722,
  [SMALL_STATE(31)] = 735,
  [SMALL_STATE(32)] = 748,
  [SMALL_STATE(33)] = 761,
  [SMALL_STATE(34)] = 774,
  [SMALL_STATE(35)] = 787,
  [SMALL_STATE(36)] = 797,
  [SMALL_STATE(37)] = 807,
  [SMALL_STATE(38)] = 817,
  [SMALL_STATE(39)] = 827,
  [SMALL_STATE(40)] = 837,
  [SMALL_STATE(41)] = 850,
  [SMALL_STATE(42)] = 861,
  [SMALL_STATE(43)] = 874,
  [SMALL_STATE(44)] = 887,
  [SMALL_STATE(45)] = 898,
  [SMALL_STATE(46)] = 911,
  [SMALL_STATE(47)] = 924,
  [SMALL_STATE(48)] = 935,
  [SMALL_STATE(49)] = 945,
  [SMALL_STATE(50)] = 951,
  [SMALL_STATE(51)] = 961,
  [SMALL_STATE(52)] = 971,
  [SMALL_STATE(53)] = 978,
  [SMALL_STATE(54)] = 985,
  [SMALL_STATE(55)] = 990,
  [SMALL_STATE(56)] = 997,
  [SMALL_STATE(57)] = 1004,
  [SMALL_STATE(58)] = 1011,
  [SMALL_STATE(59)] = 1015,
  [SMALL_STATE(60)] = 1019,
  [SMALL_STATE(61)] = 1023,
  [SMALL_STATE(62)] = 1027,
  [SMALL_STATE(63)] = 1031,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 3, .production_id = 5),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(46),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(50),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(17),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_definition, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_table, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_definition, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_definition, 4, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_definition, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_definition, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_table, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operator, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignments, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignments, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(50),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignments_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignments_repeat1, 2), SHIFT_REPEAT(12),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(48),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fennel(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
