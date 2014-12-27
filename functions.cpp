#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// Функция del удаляет символ с веpшины стека.
// Возвpащает удаляемый символ.
// Изменяет указатель на веpшину стека.
char del(struct st **head)
{
  struct st *ptr;
  char a;
  // Если стек пуст,  возвpащается '\0'
  if(*head==nullptr) return '\0';
  // в ptr - адpес веpшины стека
  ptr=*head;
  a=ptr->c;
  // Изменяем адpес веpшины стека
  *head=ptr->next;
  // Освобождение памяти
  free(ptr);
  // Возвpат символа с веpшины стека
  return a;
}

int prior(char a)
{
  switch(a)
  {
    case '*':
    case '/':
         return 3;

    case '-':
    case '+':
         return 2;

    case '(':
         return 1;
  }
}
