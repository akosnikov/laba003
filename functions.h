#ifndef FUNCTIONS_H
#define FUNCTIONS_H

 /* �������� ��p����p�(�������� �����) */
struct st
{
    char c;
    struct st *next;
};

struct st *push(struct st *, char);

/* �p������� ������� */
char del(struct st **);
int prior(char a);
#endif
