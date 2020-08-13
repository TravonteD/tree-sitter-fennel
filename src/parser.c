#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  sym_identifier = 16,
  sym_program = 17,
  sym__statement = 18,
  sym__function = 19,
  sym__variable_declaration = 20,
  sym_let_definition = 21,
  sym_local_definition = 22,
  sym_var_definition = 23,
  sym_global_definition = 24,
  sym_assignments = 25,
  sym_assignment = 26,
  sym_function_definition = 27,
  sym_lambda_definition = 28,
  sym__function_body = 29,
  sym_parameters = 30,
  sym_function_call = 31,
  sym_sequential_table = 32,
  sym_table = 33,
  sym__expression = 34,
  sym_string = 35,
  aux_sym_program_repeat1 = 36,
  aux_sym_assignments_repeat1 = 37,
  aux_sym_parameters_repeat1 = 38,
  aux_sym_table_repeat1 = 39,
  aux_sym_string_repeat1 = 40,
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
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'v') ADVANCE(25);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
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
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_local);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_global);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
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
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
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
  [14] = {.lex_state = 4},
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
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
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
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(57),
    [sym__statement] = STATE(6),
    [sym__function] = STATE(6),
    [sym__variable_declaration] = STATE(6),
    [sym_let_definition] = STATE(6),
    [sym_local_definition] = STATE(6),
    [sym_var_definition] = STATE(6),
    [sym_global_definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_lambda_definition] = STATE(6),
    [sym_function_call] = STATE(6),
    [sym_sequential_table] = STATE(6),
    [sym_table] = STATE(6),
    [sym__expression] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_identifier] = ACTIONS(13),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym__variable_declaration] = STATE(2),
    [sym_let_definition] = STATE(2),
    [sym_local_definition] = STATE(2),
    [sym_var_definition] = STATE(2),
    [sym_global_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(20),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(26),
    [sym_number] = ACTIONS(29),
    [sym_identifier] = ACTIONS(29),
  },
  [3] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym__variable_declaration] = STATE(2),
    [sym_let_definition] = STATE(2),
    [sym_local_definition] = STATE(2),
    [sym_var_definition] = STATE(2),
    [sym_global_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [4] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym__variable_declaration] = STATE(2),
    [sym_let_definition] = STATE(2),
    [sym_local_definition] = STATE(2),
    [sym_var_definition] = STATE(2),
    [sym_global_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [5] = {
    [sym__statement] = STATE(3),
    [sym__function] = STATE(3),
    [sym__variable_declaration] = STATE(3),
    [sym_let_definition] = STATE(3),
    [sym_local_definition] = STATE(3),
    [sym_var_definition] = STATE(3),
    [sym_global_definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_lambda_definition] = STATE(3),
    [sym_function_call] = STATE(3),
    [sym_sequential_table] = STATE(3),
    [sym_table] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(40),
    [sym_identifier] = ACTIONS(40),
  },
  [6] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym__variable_declaration] = STATE(2),
    [sym_let_definition] = STATE(2),
    [sym_local_definition] = STATE(2),
    [sym_var_definition] = STATE(2),
    [sym_global_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [7] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym__variable_declaration] = STATE(2),
    [sym_let_definition] = STATE(2),
    [sym_local_definition] = STATE(2),
    [sym_var_definition] = STATE(2),
    [sym_global_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [8] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym__variable_declaration] = STATE(2),
    [sym_let_definition] = STATE(2),
    [sym_local_definition] = STATE(2),
    [sym_var_definition] = STATE(2),
    [sym_global_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [9] = {
    [sym__statement] = STATE(4),
    [sym__function] = STATE(4),
    [sym__variable_declaration] = STATE(4),
    [sym_let_definition] = STATE(4),
    [sym_local_definition] = STATE(4),
    [sym_var_definition] = STATE(4),
    [sym_global_definition] = STATE(4),
    [sym_function_definition] = STATE(4),
    [sym_lambda_definition] = STATE(4),
    [sym_function_call] = STATE(4),
    [sym_sequential_table] = STATE(4),
    [sym_table] = STATE(4),
    [sym__expression] = STATE(4),
    [sym_string] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(50),
    [sym_identifier] = ACTIONS(50),
  },
  [10] = {
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
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(54),
    [sym_identifier] = ACTIONS(54),
  },
  [11] = {
    [sym__statement] = STATE(8),
    [sym__function] = STATE(8),
    [sym__variable_declaration] = STATE(8),
    [sym_let_definition] = STATE(8),
    [sym_local_definition] = STATE(8),
    [sym_var_definition] = STATE(8),
    [sym_global_definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_lambda_definition] = STATE(8),
    [sym_function_call] = STATE(8),
    [sym_sequential_table] = STATE(8),
    [sym_table] = STATE(8),
    [sym__expression] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(58),
    [sym_identifier] = ACTIONS(58),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
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
    STATE(50), 14,
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
  [33] = 6,
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
  [66] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    ACTIONS(66), 2,
      sym_number,
      sym_identifier,
    STATE(16), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_parameters_repeat1,
  [90] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    ACTIONS(70), 2,
      sym_number,
      sym_identifier,
    STATE(18), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_parameters_repeat1,
  [114] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    ACTIONS(74), 2,
      sym_number,
      sym_identifier,
    STATE(17), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_parameters_repeat1,
  [138] = 6,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 2,
      sym_number,
      sym_identifier,
    STATE(17), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_parameters_repeat1,
  [162] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(74), 2,
      sym_number,
      sym_identifier,
    STATE(17), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym_parameters_repeat1,
  [186] = 1,
    ACTIONS(92), 10,
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
  [199] = 1,
    ACTIONS(94), 10,
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
  [212] = 1,
    ACTIONS(96), 10,
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
  [225] = 1,
    ACTIONS(98), 10,
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
  [238] = 1,
    ACTIONS(100), 10,
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
  [251] = 1,
    ACTIONS(102), 10,
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
  [264] = 1,
    ACTIONS(104), 10,
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
  [277] = 1,
    ACTIONS(106), 10,
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
  [290] = 1,
    ACTIONS(108), 10,
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
  [303] = 1,
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
  [316] = 1,
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
  [329] = 1,
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
  [342] = 1,
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
  [355] = 1,
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
  [368] = 1,
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
  [381] = 1,
    ACTIONS(122), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [391] = 1,
    ACTIONS(124), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [401] = 1,
    ACTIONS(126), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [411] = 7,
    ACTIONS(128), 1,
      anon_sym_let,
    ACTIONS(130), 1,
      anon_sym_local,
    ACTIONS(132), 1,
      anon_sym_var,
    ACTIONS(134), 1,
      anon_sym_global,
    ACTIONS(136), 1,
      anon_sym_fn,
    ACTIONS(138), 1,
      anon_sym_lambda,
    ACTIONS(140), 1,
      sym_identifier,
  [433] = 1,
    ACTIONS(142), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [443] = 4,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_string,
    STATE(39), 1,
      aux_sym_table_repeat1,
  [456] = 4,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(9), 1,
      sym_parameters,
    STATE(62), 1,
      sym__function_body,
  [469] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_string,
    STATE(39), 1,
      aux_sym_table_repeat1,
  [482] = 3,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(46), 2,
      sym_assignment,
      aux_sym_assignments_repeat1,
  [493] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym_string,
    STATE(41), 1,
      aux_sym_table_repeat1,
  [506] = 3,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(42), 2,
      sym_assignment,
      aux_sym_assignments_repeat1,
  [517] = 4,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(9), 1,
      sym_parameters,
    STATE(61), 1,
      sym__function_body,
  [530] = 3,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(46), 2,
      sym_assignment,
      aux_sym_assignments_repeat1,
  [541] = 3,
    ACTIONS(168), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      aux_sym_string_token1,
    STATE(49), 1,
      aux_sym_string_repeat1,
  [551] = 3,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 1,
      aux_sym_string_token1,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [561] = 3,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      aux_sym_string_token1,
    STATE(48), 1,
      aux_sym_string_repeat1,
  [571] = 1,
    ACTIONS(181), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      sym_identifier,
  [577] = 2,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(59), 1,
      sym_assignment,
  [584] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_assignments,
  [591] = 2,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_parameters,
  [598] = 1,
    ACTIONS(144), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [603] = 2,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(58), 1,
      sym_assignment,
  [610] = 2,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(60), 1,
      sym_assignment,
  [617] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [621] = 1,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
  [625] = 1,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
  [629] = 1,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [633] = 1,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
  [637] = 1,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 33,
  [SMALL_STATE(14)] = 66,
  [SMALL_STATE(15)] = 90,
  [SMALL_STATE(16)] = 114,
  [SMALL_STATE(17)] = 138,
  [SMALL_STATE(18)] = 162,
  [SMALL_STATE(19)] = 186,
  [SMALL_STATE(20)] = 199,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 225,
  [SMALL_STATE(23)] = 238,
  [SMALL_STATE(24)] = 251,
  [SMALL_STATE(25)] = 264,
  [SMALL_STATE(26)] = 277,
  [SMALL_STATE(27)] = 290,
  [SMALL_STATE(28)] = 303,
  [SMALL_STATE(29)] = 316,
  [SMALL_STATE(30)] = 329,
  [SMALL_STATE(31)] = 342,
  [SMALL_STATE(32)] = 355,
  [SMALL_STATE(33)] = 368,
  [SMALL_STATE(34)] = 381,
  [SMALL_STATE(35)] = 391,
  [SMALL_STATE(36)] = 401,
  [SMALL_STATE(37)] = 411,
  [SMALL_STATE(38)] = 433,
  [SMALL_STATE(39)] = 443,
  [SMALL_STATE(40)] = 456,
  [SMALL_STATE(41)] = 469,
  [SMALL_STATE(42)] = 482,
  [SMALL_STATE(43)] = 493,
  [SMALL_STATE(44)] = 506,
  [SMALL_STATE(45)] = 517,
  [SMALL_STATE(46)] = 530,
  [SMALL_STATE(47)] = 541,
  [SMALL_STATE(48)] = 551,
  [SMALL_STATE(49)] = 561,
  [SMALL_STATE(50)] = 571,
  [SMALL_STATE(51)] = 577,
  [SMALL_STATE(52)] = 584,
  [SMALL_STATE(53)] = 591,
  [SMALL_STATE(54)] = 598,
  [SMALL_STATE(55)] = 603,
  [SMALL_STATE(56)] = 610,
  [SMALL_STATE(57)] = 617,
  [SMALL_STATE(58)] = 621,
  [SMALL_STATE(59)] = 625,
  [SMALL_STATE(60)] = 629,
  [SMALL_STATE(61)] = 633,
  [SMALL_STATE(62)] = 637,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(37),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(47),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 3, .production_id = 5),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(43),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(47),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(17),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_definition, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_table, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_definition, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_definition, 4, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_definition, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_definition, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_definition, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_table, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignments, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignments, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(47),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignments_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignments_repeat1, 2), SHIFT_REPEAT(12),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(48),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
