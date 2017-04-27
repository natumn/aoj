#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 100

int push(int);
int pop();
void isEmpty();
void isFull();
char peratorDecision(char);
int calcRpn(int, int, char);


int stack[STACK_SIZE];
int stackSize=0;
char input[STACK_SIZE];

int main() {
  char operator;
  int result;

  scanf("%s", input);

  if()
  result = calcRpn();
  printf("%d\n", result);
  return 0;
}

//TODO: 数値をスタックから外す。
int pop() {
  if(isEmpty()) return 0;
  stackSize--;
  return stack[stackSize+1];
}

//TODO: 数値をスタックに加える。
int push(int n) {
  if(isFull()) return 0;
  stack[stackSize++]= n;
  return stack[stackSize];
}

void isEmpty() {
  return stackSize == 0;
}

void isFull() {
  return stackSize >= STACK_SIZE-1;
}

//TODO: 数値か演算子かを判定する。数値なら数値用のスタックに入れる。演算子ならoperator変数に格納する。
void numberDecision(char input) {
  int inputLen;
  char operator[STACK_SIZE];

  inputLen = strlen(input);
  for (int i = 0; i <inputLen ; i++) {
    if (input[i]>='0' || input[i]<='9') {
      push(atoi(input[i]));
    }
    else {
      operator[] = input[i];
    }
  }
}


//TODO: 逆ポーランドを計算する。
int calcRpn(int stack1, int stack2, char operator) {
  int stack;

  if(operator == '+') {
    stack = stack1 + stack2;
    push(stack);
    return stack;
  }
  else if(operator == '-') {
    stack = stack1 - stack2;
    push(stack);
    return stack;
  }
  else if(operator == '*') {
    stack =  stack1 * stack2;
    push(stack);
    return stack;
  }
}
