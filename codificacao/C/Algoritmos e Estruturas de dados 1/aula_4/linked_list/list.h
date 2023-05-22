#ifndef LIST_H
#define LIST_H

#include "list.c"
#include <stdbool.h>

typedef struct node_t {
    int value;
    struct node_t* next;
} node_t;

typedef struct list_t {
    node_t* head;
    int size;
} list_t;

list_t* create();
void push_front(list_t* list, int value);
void print_list(list_t* list);
bool is_empty(list_t* list);
int peek_front(list_t* list);
void destroy_list(list_t* list);
void push_back(list_t* link, int value);
void peek_back(list_t* list);
int pop_front(list_t* list);
int pop_back(list_t* list);
bool list_remove(list_t* list, int value);

#endif