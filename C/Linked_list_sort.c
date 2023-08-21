#include <stdio.h>
#include <stdlib.h>

/*Create linked list with randam data members between 0:49 range
 sort lined list and removed duplicates  */
typedef struct list_R{
    int data;
    struct list_R* ptr;
    }list;

list* create_element( int d)
{
    list*New=(list*)malloc(sizeof(list));
    if(New!=NULL)
    {
     New->data=d;
     New->ptr=NULL;

    }
    else
    {
     printf("Error in new node creation");
    }
 return New;
}

int main() {
    list*head=NULL;
    list*next=NULL;
    list*new=NULL;
    list*prev=NULL;
    list*temp1=NULL;
    int temp=0;
    int i,j=0;
    for (i = 0; i < 100; i++)
        {

        /*rand() value divided by 49 and reminder is stored*/
          new=create_element(rand()%49+1);
          if(head==NULL)
          {
              head=new;
              next=new;
          }
          else
          {
                new->ptr=head;
                head=new;
                prev=head;
                next=prev->ptr;
                while(prev->ptr!=NULL)
                {
                    if(next->data < prev->data )
                    {
                        temp=next->data;
                        next->data=prev->data;
                        prev->data=temp;
                    }

                    next=next->ptr;
                    prev=prev->ptr;
                }


          }

        }
          next=head;
         /* Print data*/
          printf("sort list numbers\n");
          printf("----------------------------------------------------------------------\n");
         for (i = 0; i < 100; i++)
         {

                printf("%d\t\t",next->data);
                next=next->ptr;
                j++;
                if(j%5==0)
                {
                    printf("\n");
                }


         }
          printf("remove duplicate list elements\n");
          printf("----------------------------------------------------------------------\n");
          prev=head;
          next=prev->ptr;
          while(prev->ptr!=NULL)
          {

                if(next->data == prev->data)
                {
                     temp1=next;  
                     prev->ptr=next->ptr;
                     next=prev->ptr;
                     temp1->ptr=NULL;
                     free(temp1); /* delete node of duplicate value*/

                }
                else
                {
                   next=next->ptr;
                   prev=prev->ptr;
                }


          }
          prev=head;
          j=0;
          while(prev->ptr!=NULL)
          {
              printf("%d\t\t",prev->data);
                prev=prev->ptr;
                j++;
                if(j%5==0)
                {
                    printf("\n");
                }

          }

    return 0;
}
