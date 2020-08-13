#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_LPAREN = 1,
  anon_sym_let = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_fn = 6,
  anon_sym_lambda = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_token1 = 11,
  sym_number = 12,
  sym_identifier = 13,
  sym_program = 14,
  sym__statement = 15,
  sym__function = 16,
  sym_let_definition = 17,
  sym_assignments = 18,
  sym_assignment = 19,
  sym_function_definition = 20,
  sym_lambda_definition = 21,
  sym__function_body = 22,
  sym_function_call = 23,
  sym_sequential_table = 24,
  sym_table = 25,
  sym__expression = 26,
  sym_string = 27,
  aux_sym_program_repeat1 = 28,
  aux_sym_assignments_repeat1 = 29,
  aux_sym__function_body_repeat1 = 30,
  aux_sym_table_repeat1 = 31,
  aux_sym_string_repeat1 = 32,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_let] = "let",
  [anon_sym_RPAREN] = ")",
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
  [sym_let_definition] = "let_definition",
  [sym_assignments] = "assignments",
  [sym_assignment] = "assignment",
  [sym_function_definition] = "function_definition",
  [sym_lambda_definition] = "lambda_definition",
  [sym__function_body] = "_function_body",
  [sym_function_call] = "function_call",
  [sym_sequential_table] = "sequential_table",
  [sym_table] = "table",
  [sym__expression] = "_expression",
  [sym_string] = "string",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_assignments_repeat1] = "assignments_repeat1",
  [aux_sym__function_body_repeat1] = "_function_body_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_let_definition] = sym_let_definition,
  [sym_assignments] = sym_assignments,
  [sym_assignment] = sym_assignment,
  [sym_function_definition] = sym_function_definition,
  [sym_lambda_definition] = sym_lambda_definition,
  [sym__function_body] = sym__function_body,
  [sym_function_call] = sym_function_call,
  [sym_sequential_table] = sym_sequential_table,
  [sym_table] = sym_table,
  [sym__expression] = sym__expression,
  [sym_string] = sym_string,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_assignments_repeat1] = aux_sym_assignments_repeat1,
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_let_definition] = {
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
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 3:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '?') ADVANCE(3);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
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
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym__statement] = STATE(8),
    [sym__function] = STATE(8),
    [sym_let_definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_lambda_definition] = STATE(8),
    [sym_function_call] = STATE(8),
    [sym_sequential_table] = STATE(8),
    [sym_table] = STATE(8),
    [sym__expression] = STATE(8),
    [sym_string] = STATE(8),
    [aux_sym_program_repeat1] = STATE(8),
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
    [sym_let_definition] = STATE(2),
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
    [sym_let_definition] = STATE(2),
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
    [sym__statement] = STATE(3),
    [sym__function] = STATE(3),
    [sym_let_definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_lambda_definition] = STATE(3),
    [sym_function_call] = STATE(3),
    [sym_sequential_table] = STATE(3),
    [sym_table] = STATE(3),
    [sym__expression] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
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
    [sym_let_definition] = STATE(2),
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
    [sym_let_definition] = STATE(2),
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
    [sym__statement] = STATE(5),
    [sym__function] = STATE(5),
    [sym_let_definition] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_lambda_definition] = STATE(5),
    [sym_function_call] = STATE(5),
    [sym_sequential_table] = STATE(5),
    [sym_table] = STATE(5),
    [sym__expression] = STATE(5),
    [sym_string] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(46),
    [sym_identifier] = ACTIONS(46),
  },
  [8] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym_let_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [9] = {
    [sym__statement] = STATE(6),
    [sym__function] = STATE(6),
    [sym_let_definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_lambda_definition] = STATE(6),
    [sym_function_call] = STATE(6),
    [sym_sequential_table] = STATE(6),
    [sym_table] = STATE(6),
    [sym__expression] = STATE(6),
    [sym_string] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(52),
    [sym_identifier] = ACTIONS(52),
  },
  [10] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym_let_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [11] = {
    [sym__statement] = STATE(10),
    [sym__function] = STATE(10),
    [sym_let_definition] = STATE(10),
    [sym_function_definition] = STATE(10),
    [sym_lambda_definition] = STATE(10),
    [sym_function_call] = STATE(10),
    [sym_sequential_table] = STATE(10),
    [sym_table] = STATE(10),
    [sym__expression] = STATE(10),
    [sym_string] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(58),
    [sym_identifier] = ACTIONS(58),
  },
  [12] = {
    [sym__statement] = STATE(14),
    [sym__function] = STATE(14),
    [sym_let_definition] = STATE(14),
    [sym_function_definition] = STATE(14),
    [sym_lambda_definition] = STATE(14),
    [sym_function_call] = STATE(14),
    [sym_sequential_table] = STATE(14),
    [sym_table] = STATE(14),
    [sym__expression] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_program_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(62),
    [sym_identifier] = ACTIONS(62),
  },
  [13] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym_let_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [14] = {
    [sym__statement] = STATE(2),
    [sym__function] = STATE(2),
    [sym_let_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_lambda_definition] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_sequential_table] = STATE(2),
    [sym_table] = STATE(2),
    [sym__expression] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(34),
    [sym_identifier] = ACTIONS(34),
  },
  [15] = {
    [sym__statement] = STATE(13),
    [sym__function] = STATE(13),
    [sym_let_definition] = STATE(13),
    [sym_function_definition] = STATE(13),
    [sym_lambda_definition] = STATE(13),
    [sym_function_call] = STATE(13),
    [sym_sequential_table] = STATE(13),
    [sym_table] = STATE(13),
    [sym__expression] = STATE(13),
    [sym_string] = STATE(13),
    [aux_sym_program_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(70),
    [sym_identifier] = ACTIONS(70),
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
    ACTIONS(72), 2,
      sym_number,
      sym_identifier,
    STATE(52), 10,
      sym__statement,
      sym__function,
      sym_let_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
  [29] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 2,
      sym_number,
      sym_identifier,
    STATE(51), 10,
      sym__statement,
      sym__function,
      sym_let_definition,
      sym_function_definition,
      sym_lambda_definition,
      sym_function_call,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
  [58] = 6,
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
    STATE(18), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [82] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 2,
      sym_number,
      sym_identifier,
    STATE(18), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [106] = 6,
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
    STATE(19), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [130] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 2,
      sym_number,
      sym_identifier,
    STATE(18), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [154] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_RBRACK,
    ACTIONS(102), 2,
      sym_number,
      sym_identifier,
    STATE(24), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [178] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    ACTIONS(106), 2,
      sym_number,
      sym_identifier,
    STATE(21), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [202] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 2,
      sym_number,
      sym_identifier,
    STATE(18), 5,
      sym_sequential_table,
      sym_table,
      sym__expression,
      sym_string,
      aux_sym__function_body_repeat1,
  [226] = 1,
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
  [239] = 1,
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
  [252] = 1,
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
  [265] = 1,
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
  [278] = 1,
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
  [291] = 1,
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
  [304] = 1,
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
  [317] = 1,
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
  [330] = 1,
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
  [343] = 1,
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
  [356] = 1,
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
  [369] = 1,
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
  [382] = 1,
    ACTIONS(134), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [392] = 1,
    ACTIONS(136), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_number,
      sym_identifier,
  [402] = 3,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(43), 2,
      sym_assignment,
      aux_sym_assignments_repeat1,
  [413] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_table_repeat1,
  [426] = 4,
    ACTIONS(144), 1,
      anon_sym_let,
    ACTIONS(146), 1,
      anon_sym_fn,
    ACTIONS(148), 1,
      anon_sym_lambda,
    ACTIONS(150), 1,
      sym_identifier,
  [439] = 4,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_string,
    STATE(42), 1,
      aux_sym_table_repeat1,
  [452] = 3,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(43), 2,
      sym_assignment,
      aux_sym_assignments_repeat1,
  [463] = 3,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(39), 2,
      sym_assignment,
      aux_sym_assignments_repeat1,
  [474] = 4,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_string,
    STATE(40), 1,
      aux_sym_table_repeat1,
  [487] = 3,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      aux_sym_string_token1,
    STATE(46), 1,
      aux_sym_string_repeat1,
  [497] = 3,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(54), 1,
      sym__function_body,
  [507] = 3,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(55), 1,
      sym__function_body,
  [517] = 3,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_string_token1,
    STATE(50), 1,
      aux_sym_string_repeat1,
  [527] = 3,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      aux_sym_string_token1,
    STATE(46), 1,
      aux_sym_string_repeat1,
  [537] = 1,
    ACTIONS(152), 2,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [542] = 1,
    ACTIONS(183), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [547] = 2,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_assignments,
  [554] = 1,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
  [558] = 1,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
  [562] = 1,
    ACTIONS(191), 1,
      anon_sym_LBRACK,
  [566] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 29,
  [SMALL_STATE(18)] = 58,
  [SMALL_STATE(19)] = 82,
  [SMALL_STATE(20)] = 106,
  [SMALL_STATE(21)] = 130,
  [SMALL_STATE(22)] = 154,
  [SMALL_STATE(23)] = 178,
  [SMALL_STATE(24)] = 202,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 239,
  [SMALL_STATE(27)] = 252,
  [SMALL_STATE(28)] = 265,
  [SMALL_STATE(29)] = 278,
  [SMALL_STATE(30)] = 291,
  [SMALL_STATE(31)] = 304,
  [SMALL_STATE(32)] = 317,
  [SMALL_STATE(33)] = 330,
  [SMALL_STATE(34)] = 343,
  [SMALL_STATE(35)] = 356,
  [SMALL_STATE(36)] = 369,
  [SMALL_STATE(37)] = 382,
  [SMALL_STATE(38)] = 392,
  [SMALL_STATE(39)] = 402,
  [SMALL_STATE(40)] = 413,
  [SMALL_STATE(41)] = 426,
  [SMALL_STATE(42)] = 439,
  [SMALL_STATE(43)] = 452,
  [SMALL_STATE(44)] = 463,
  [SMALL_STATE(45)] = 474,
  [SMALL_STATE(46)] = 487,
  [SMALL_STATE(47)] = 497,
  [SMALL_STATE(48)] = 507,
  [SMALL_STATE(49)] = 517,
  [SMALL_STATE(50)] = 527,
  [SMALL_STATE(51)] = 537,
  [SMALL_STATE(52)] = 542,
  [SMALL_STATE(53)] = 547,
  [SMALL_STATE(54)] = 554,
  [SMALL_STATE(55)] = 558,
  [SMALL_STATE(56)] = 562,
  [SMALL_STATE(57)] = 566,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(41),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(49),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 5, .production_id = 10),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 4, .production_id = 9),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 4, .production_id = 8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 4, .production_id = 7),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 3, .production_id = 6),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 3, .production_id = 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 3, .production_id = 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_body_repeat1, 2), SHIFT_REPEAT(20),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__function_body_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_body_repeat1, 2), SHIFT_REPEAT(45),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_body_repeat1, 2), SHIFT_REPEAT(49),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__function_body_repeat1, 2), SHIFT_REPEAT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_definition, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_definition, 4, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_table, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_table, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_definition, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignments, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignments, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(49),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignments_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignments_repeat1, 2), SHIFT_REPEAT(16),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(46),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
