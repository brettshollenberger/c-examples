#include <stdio.h>
#include <strings.h>

// Example of single-line comment

/*
 * Example of multiline comment
 */

#define MAXLINE 1000 // Max line
#define TRUE  1
#define FALSE 0

int comment_is_open = FALSE; 
int single_quoted_string_is_open = FALSE;
int double_quoted_string_is_open = FALSE;
int multiline = FALSE;

int nextline(char input[], int lim) {
  int c, i=0;

  while ((c = getchar()) != EOF && c != '\n' && i < lim) {
    input[i] = c;
    i++;
  }

  if (c == '\n') {
    input[i] = c;
    i++;
  }

  input[i] = '\0';

  return i;
}

void handle_single_quoted_string() {
  extern int single_quoted_string_is_open;

  if (single_quoted_string_is_open == TRUE) {
    single_quoted_string_is_open = FALSE;
  } else {
    single_quoted_string_is_open = TRUE;
  }
}

void handle_double_quoted_string() {
  extern int double_quoted_string_is_open;

  if (double_quoted_string_is_open == TRUE) {
    double_quoted_string_is_open = FALSE;
  } else {
    double_quoted_string_is_open = TRUE;
  }
}

void replace_comments(char line[], char replacechar) {
  int i = 0; 
  int previous_char_is_backslash = FALSE;
  int previous_char_is_asterisk = FALSE;
  extern int comment_is_open;
  extern int single_quoted_string_is_open;
  extern int double_quoted_string_is_open;
  extern int multiline;

  for (i = 0; line[i] != '\0'; i++) {

    if (comment_is_open == FALSE) {
      if (line[i] == '\'') {
        handle_single_quoted_string();
      } else if (line[i] == '\"') {
        handle_double_quoted_string();
      }
    }

    if (single_quoted_string_is_open == FALSE && double_quoted_string_is_open == FALSE) {
      if (previous_char_is_backslash == TRUE) {
        if (line[i] == '/' || line[i] == '*') {
          comment_is_open = TRUE;
          line[i-1] = replacechar;
          previous_char_is_backslash = FALSE;
        }

        if (line[i] == '*') {
          multiline = TRUE;
        }
      } else if (previous_char_is_asterisk == TRUE) {
        if (line[i] == '/') {
          comment_is_open = FALSE;
          multiline = FALSE;
          line[i] = replacechar;
        }
      } else if (line[i] == '/') {
        previous_char_is_backslash = TRUE;
      } else if (line[i] == '*') {
        previous_char_is_asterisk = TRUE;
        previous_char_is_backslash = FALSE;
      } else {
        previous_char_is_backslash = FALSE;
        previous_char_is_asterisk = FALSE;
      }

      if (comment_is_open == TRUE) {
        line[i] = replacechar;
      }
    }
  }

  if (multiline == FALSE) {
    comment_is_open = FALSE;
  }
}

int main() {
  char line[MAXLINE];
  int len;

  while ((len = nextline(line, MAXLINE)) > 0) { 
    replace_comments(line, ' ');
    printf("%s", line);
  }
}
