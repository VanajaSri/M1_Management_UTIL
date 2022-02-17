
#ifndef __INC_H__
#define __INC_H__

 typedef struct library
{
  char bookname[30];
  char authorname[30];
  int pages;
  float price;
} library;

int menu(void);
int addbook(int i, struct library *l, int count);
void display_book(struct library *l, int count);
void search_author(struct library *l, int count);
void search_book(struct library *l, int count);
void count_book(struct library *l, int count);


#endif
