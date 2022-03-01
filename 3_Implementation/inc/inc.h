
#ifndef __INC_H__
#define __INC_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct library
{
  char bookname[30];
  char authorname[30];
  int pages;
  float price;
} library;

int menu(void);
int add_book(int i, struct library *l, int count);
void display(struct library *l, int count);
void search_author(struct library *l, int count);
void search_book(struct library *l, int count);
void book_count(struct library *l, int count);

#endif
