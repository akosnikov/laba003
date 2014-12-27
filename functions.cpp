#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// ������� del ������� ������ � ��p���� �����.
// ����p����� ��������� ������.
// �������� ��������� �� ��p���� �����.
char del(struct st **head)
{
  struct st *ptr;
  char a;
  // ���� ���� ����,  ����p������� '\0'
  if(*head==nullptr) return '\0';
  // � ptr - ��p�� ��p���� �����
  ptr=*head;
  a=ptr->c;
  // �������� ��p�� ��p���� �����
  *head=ptr->next;
  // ������������ ������
  free(ptr);
  // ����p�� ������� � ��p���� �����
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
