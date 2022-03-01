#include"inc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add_book(int i, struct library *l, int count)
{
      printf("Enter book name = ");
      scanf("%29s", l[i].bookname);

      printf("Enter author name = ");
      scanf("%29s", l[i].authorname);

      printf("Enter pages = ");
      scanf("%d", &l[i].pages);

      printf("Enter price = ");
      scanf("%f", &l[i].price);
      count++;
      return count;
}

void book_count(struct library *l, int count)
{
    printf("\n No of books in library : %d\n", count);
    
}

void display(struct library *l, int count)
{
    printf("Information about book\n");
      for (int i = 0; i < count; i++)
      {
        printf("Book name = %s", l[i].bookname);

        printf("\t Author name = %s", l[i].authorname);

        printf("\t  Pages = %d", l[i].pages);

        printf("\t  Price = %f", l[i].price);

        printf("\n");
      }
      
}

int menu(void)
{
    printf("\n\n1. Add books\n2. Display books\n");
    printf("3. Search book by author\n");
    printf("4. Search book by book name\n");
    printf("5. Total count\n");
    printf("6. Exit");
    return 0;
}

void search_author(struct library *l, int count)
{
    char arNm[30];
          printf("Author name : ");
      scanf("%s", arNm);
      for (int i = 0; i < count; i++)
      {
        if (strcmp(arNm, l[i].authorname) == 0)
          printf("%s \t %s\t  %d\t  %f \t \n", l[i].bookname, l[i].authorname, l[i].pages, l[i].price);
      }
      
}


void search_book(struct library *l, int count)
{
      char  bookNm[30];
      printf("Book name : ");
      scanf("%s", bookNm);
      for (int i = 0; i < count; i++)
      {
        if (strcmp(bookNm, l[i].bookname) == 0)
          printf("%s \t %s \t %d \t %f \t \n", l[i].bookname, l[i].authorname, l[i].pages, l[i].price);
      }


}
