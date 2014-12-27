#ifndef FUNCTIONS_H
#define FUNCTIONS_H

 /* Описание стpуктуpы(элемента стека) */
struct st
{
    char c;
    struct st *next;
};

struct st *push(struct st *, char);

/* Пpототипы функций */
char del(struct st **);
int prior(char a);
#endif
