#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_LPAREN = 1,
  anon_sym_fn = 2,
  anon_sym_RPAREN = 3,
  anon_sym_lambda = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  sym_number = 11,
  sym_identifier = 12,
  sym_program = 13,
  sym__statement = 14,
  sym__function = 15,
  sym_function_definition = 16,
  sym_lambda_definition = 17,
  sym__function_body = 18,
  sym_function_call = 19,
  sym_sequential_table = 20,
  sym_table = 21,
  sym__expression = 22,
  sym_string = 23,
  aux_sym_program_repeat1 = 24,
  aux_sym__function_body_repeat1 = 25,
  aux_sym_table_repeat1 = 26,
  aux_sym_string_repeat1 = 27,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_fn] = "fn",
  [anon_sym_RPAREN] = ")",
  [anon_sym_lambda] = "lambda",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__function] = "_function",
  [sym_function_definition] = "function_definition",
  [sym_lambda_definition] = "lambda_definition",
  [sym__function_body] = "_function_body",
  [sym_function_call] = "function_call",
  [sym_sequential_table] = "sequential_table",
  [sym_table] = "table",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__function_body_repeat1] = "_function_body_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__function] = sym__function,
  [sym_function_definition] = sym_function_definition,
  [sym_lambda_definition] = sym_lambda_definition,
  [sym__function_body] = sym__function_body,
  [sym_function_call] = sym_function_call,
  [sym_sequential_table] = sym_sequential_table,
  [sym_table] = sym_table,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__function_body_repeat1] = aux_sym__function_body_repeat1,
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
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
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
  [aux_sym__function_body_repeat1] = {
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
  field_parameters = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_name] = "name",
  [field_parameters] = "parameters",
};

static const TSFieldMapSlice ts_field_map_slices[11] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 3},
  [6] = {.index = 12, .length = 3},
  [7] = {.index = 15, .length = 4},
  [8] = {.index = 19, .length = 4},
  [9] = {.index = 23, .length = 4},
  [10] = {.index = 27, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_parameters, 0},
    {field_parameters, 1},
  [3] =
    {field_body, 2, .inherited = true},
    {field_name, 2, .inherited = true},
    {field_parameters, 2, .inherited = true},
  [6] =
    {field_body, 2},
    {field_parameters, 0},
    {field_parameters, 1},
  [9] =
    {field_parameters, 0},
    {field_parameters, 1},
    {field_parameters, 2},
  [12] =
    {field_name, 0},
    {field_parameters, 1},
    {field_parameters, 2},
  [15] =
    {field_body, 3},
    {field_parameters, 0},
    {field_parameters, 1},
    {field_parameters, 2},
  [19] =
    {field_body, 3},
    {field_name, 0},
    {field_parameters, 1},
    {field_parameters, 2},
  [23] =
    {field_name, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
  [27] =
    {field_body, 4},
    {field_name, 0},
    {field_parameters, 1},
    {field_parameters, 2},
    {field_parameters, 3},
};

static TSSymbol ts_alias_sequences[11][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(45),
    [sym__statement] = STATE(7),
    [sym__function] = STATE(7),
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
  [2] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
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
    [sym__statement] = STATE(9),
    [sym__function] = STATE(9),
    [sym_function_definition] = STATE(9),
    [sym_lambda_definition] = STATE(9),
    [sym_function_call] = STATE(9),
    [sym_sequential_table] = STATE(9),
    [sym_table] = STATE(9),
    [sym__expression] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
  },
  [5] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [6] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(42),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [7] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [8] = {
    [sym__statement] = STATE(5),
    [sym__function] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_lambda_definition] = STATE(5),
    [sym_function_call] = STATE(5),
    [sym_sequential_table] = STATE(5),
    [sym_table] = STATE(5),
    [sym__expression] = STATE(5),
    [sym_string] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(48),
    [sym_identifier] = ACTIONS(48),
  },
  [9] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [10] = {
    [sym__statement] = STATE(6),
    [sym__function] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_lambda_definition] = STATE(6),
    [sym_function_call] = STATE(6),
    [sym_sequential_table] = STATE(6),
    [sym_table] = STATE(6),
    [sym__expression] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(54),
    [sym_identifier] = ACTIONS(54),
  },
  [11] = {
    [sym__statement] = STATE(3),
    [sym__function] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_lambda_definition] = STATE(3),
    [sym_function_call] = STATE(3),
    [sym_sequential_table] = STATE(3),
    [sym_table] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(58),
    [sym_identifier] = ACTIONS(58),
  },
  [12] = {
    [sym__statement] = STATE(41),
    [sym__function] = STATE(41),
    [sym_function_definition] = STATE(41),
    [sym_lambda_definition] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_sequential_table] = STATE(41),
    [sym_table] = STATE(41),
    [sym__expression] = STATE(41),
    [sym_string] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(60),
    [sym_identifier] = ACTIONS(60),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(73), 2,
      sym_number,
      sym_identifier,
    STATE(13), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [25] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    ACTIONS(78), 2,
      sym_number,
      sym_identifier,
    STATE(13), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [49] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    ACTIONS(82), 2,
      sym_number,
      sym_identifier,
    STATE(17), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [73] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(78), 2,
      sym_number,
      sym_identifier,
    STATE(13), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [97] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    ACTIONS(78), 2,
      sym_number,
      sym_identifier,
    STATE(13), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [121] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 2,
      sym_number,
      sym_identifier,
    STATE(14), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [145] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    ACTIONS(78), 2,
      sym_number,
      sym_identifier,
    STATE(13), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [169] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    ACTIONS(96), 2,
      sym_number,
      sym_identifier,
    STATE(16), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [193] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(100), 2,
      sym_number,
      sym_identifier,
    STATE(19), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [217] = 1,
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
  [230] = 1,
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
  [243] = 1,
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
  [256] = 1,
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
  [269] = 1,
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
  [282] = 1,
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
  [295] = 1,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [307] = 1,
    ACTIONS(116), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [319] = 1,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [331] = 1,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [343] = 4,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_string,
    STATE(32), 1,
      aux_sym_table_repeat1,
  [356] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_string,
    STATE(32), 1,
      aux_sym_table_repeat1,
  [369] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      sym_string,
    STATE(33), 1,
      aux_sym_table_repeat1,
  [382] = 3,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_string_token1,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [392] = 3,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 1,
      aux_sym_string_token1,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [402] = 3,
    ACTIONS(140), 1,
      anon_sym_fn,
    ACTIONS(142), 1,
      anon_sym_lambda,
    ACTIONS(144), 1,
      sym_identifier,
  [412] = 3,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(42), 1,
      sym__function_body,
  [422] = 3,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(43), 1,
      sym__function_body,
  [432] = 3,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      aux_sym_string_token1,
    STATE(36), 1,
      aux_sym_string_repeat1,
  [442] = 1,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [447] = 1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [451] = 1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
  [455] = 1,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
  [459] = 1,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 25,
  [SMALL_STATE(15)] = 49,
  [SMALL_STATE(16)] = 73,
  [SMALL_STATE(17)] = 97,
  [SMALL_STATE(18)] = 121,
  [SMALL_STATE(19)] = 145,
  [SMALL_STATE(20)] = 169,
  [SMALL_STATE(21)] = 193,
  [SMALL_STATE(22)] = 217,
  [SMALL_STATE(23)] = 230,
  [SMALL_STATE(24)] = 243,
  [SMALL_STATE(25)] = 256,
  [SMALL_STATE(26)] = 269,
  [SMALL_STATE(27)] = 282,
  [SMALL_STATE(28)] = 295,
  [SMALL_STATE(29)] = 307,
  [SMALL_STATE(30)] = 319,
  [SMALL_STATE(31)] = 331,
  [SMALL_STATE(32)] = 343,
  [SMALL_STATE(33)] = 356,
  [SMALL_STATE(34)] = 369,
  [SMALL_STATE(35)] = 382,
  [SMALL_STATE(36)] = 392,
  [SMALL_STATE(37)] = 402,
  [SMALL_STATE(38)] = 412,
  [SMALL_STATE(39)] = 422,
  [SMALL_STATE(40)] = 432,
  [SMALL_STATE(41)] = 442,
  [SMALL_STATE(42)] = 447,
  [SMALL_STATE(43)] = 451,
  [SMALL_STATE(44)] = 455,
  [SMALL_STATE(45)] = 459,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(37),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(40),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 3, .production_id = 4),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 4, .production_id = 9),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 4, .production_id = 8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 4, .production_id = 7),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 3, .production_id = 6),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 5, .production_id = 10),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 3, .production_id = 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_body_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_body_repeat1, 2), SHIFT_REPEAT(20),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_body_repeat1, 2), SHIFT_REPEAT(34),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_body_repeat1, 2), SHIFT_REPEAT(40),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_body_repeat1, 2), SHIFT_REPEAT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_table, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_table, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_definition, 4, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(35),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [160] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
