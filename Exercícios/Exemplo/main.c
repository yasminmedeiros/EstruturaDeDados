#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    No* my_list = NULL;
    
    ll_insert_sorted(&my_list, 3);
    ll_print(my_list, "my list:");
    ll_insert_sorted(&my_list, 1);
    ll_print(my_list, "my list:");  
    ll_insert_sorted(&my_list, 10);
    ll_print(my_list, "my list:");
    ll_insert_sorted(&my_list, 7);
    ll_print(my_list, "my list:");
    ll_insert_sorted(&my_list, 11);
    ll_print(my_list, "my list:");
    ll_insert_sorted(&my_list, 17);
    ll_print(my_list, "my list:");
    ll_insert_sorted(&my_list, 0);
    ll_print(my_list, "my list:");
    ll_insert_sorted(&my_list, 51);
    ll_print(my_list, "my list:");
    
    ll_clear(&my_list);    
  
    ll_insert_first(&my_list, -3);
    ll_print(my_list, "my list:");
    ll_insert_first(&my_list, 8);
    ll_print(my_list, "my list:");
    ll_insert_first(&my_list, 0);
    ll_print(my_list, "my list:");
    ll_insert_last(&my_list, -2);
    ll_print(my_list, "my list:");
    ll_insert_last(&my_list, 18);
    ll_print(my_list, "my list:");
    
    printf("-3 Exists? %d \n", ll_exists(my_list, -3));
    ll_remove(&my_list, -3);
    ll_print(my_list, "my list:");
    printf("-3 Exists? %d \n", ll_exists(my_list, -3));    

    printf("list size: %d\n", ll_size(my_list));
     ll_clear(&my_list);
   
 return 0;   
}
