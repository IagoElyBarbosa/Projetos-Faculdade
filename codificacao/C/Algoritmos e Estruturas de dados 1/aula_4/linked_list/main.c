#include "list.h"
#include <stdio.h>

int main(void){
    
    list_t* list = create();
    
    push_front(list, 10);
    push_front(list, 20);
    push_front(list, 30);
    print_list(list);
    printf("%d\n", peek_front(list));
    
    push_back(list, 40);
    push_back(list, 50);
    push_back(list, 60);
    print_list(list);
    printf("%d\n", peek_back(list));
    printf("%d\n", pop_front(list));
    print_list(list);
    
    printf("%d\n", pop_back(list));
    printf("%d\n", pop_back(list));
    print_list(list);
    list_remove(list, 10);
    print_list(list);
    
    
    
    destroy_list(list);
    
    return 0;
}