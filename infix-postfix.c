#include <stdio.h>
#include <stdlib.h>

char stack[30];
int top = -1;

void push(char data) { stack[++top] = data; }

int pop() {
  if (top < 0) {
    printf("stack is empty");
    return 0;
  }
  return stack[top--];
}

int isp(char data) {
  switch (data) {
  case ')':
    return 0;
    break;
  case '*':
  case '/':
    return 2;
    break;
  case '+':
  case '-':
    return 1;
    break;
  }
}

int icp(char data) {
  switch (data) {
  case ')':
    return 3;
    break;
  case '*':
  case '/':
    return 2;
    break;
  case '+':
  case '-':
    return 1;
    break;
  }
}

int main() {
  while (1) {
    char *data = (char *)malloc(30);
    printf("Enter the infix notation>>");
    fgets(data, 30, stdin);

    if (data[0] == 'q') {
      return 0;
    }

    for (int i = 0; data[i] != 0; i++) {
      if (data[i] != '+' && data[i] != '-' && data[i] != '*' &&
          data[i] != '/' && data[i] != '(' && data[i] != ')') {
        printf("%c ", data[i]);
      } else if (data[i] == ' ') {
        continue;
      } else if (data[i] == ')') {
        while (stack[top] != '(') {
          printf("%c ", pop());
        }
        if (stack[top] == '(') {
          pop();
        }
      } else {
        while (top >= 0 && isp(stack[top]) >= icp(data[i])) {
          printf("%c ", pop());
        }
        push(data[i]);
      }
    }
    while (top >= 0) {
      if (stack[top] != '(' && stack[top] != ')' && stack[top] != ' ') {
        printf("%c ", pop());
      }
    }
    printf("\n");
  }
}
