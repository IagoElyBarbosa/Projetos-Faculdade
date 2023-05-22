#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "list.h"

list_t* create() {
    list_t* list = malloc(sizeof(list_t));

    list->head = NULL;
    list->size = 0;

    return list;
}

void push_front(list_t* list, int value) {
    node_t* node = malloc(sizeof(node_t));

    node->value = value;
    node->next = list->head;
    list->head = node;

    list->size++;
}

void print_list(list_t* list) {
    node_t* cur = list->head;

    while(cur != NULL) {
        printf("%d ", cur->value);
        cur = cur->next;
    }printf("\n");
}

bool is_empty(list_t* list) {
    return list->head == NULL;
}

int peek_front(list_t* list) {
    if(is_empty(list) == true){
        fprintf(stderr, "Impossible to peek empty list");
        abort();
    }
    
    return list->head->value;
}

void destroy_list(list_t* list) {
    node_t* cur = list->head;
    
    while(cur != NULL) {
        node_t* trash = cur;
        
        cur = cur->next;
        free(trash)
    }
    
    free(list);
}

void push_back(list_t* link, int value) {
    node_t* node = malloc(sizeof(node_t));
    
    node->value = value;
    node->next = NULL;
    
    node_t* cur = list->head;
    
    while(cur != NULL && cur->next != NULL) {
        cur = cur->next;
    }
    
    if(cur == NULL) { //empty list
        list->head = node;
    } else {
        cur->next = node;
    }
    
    list->size++;
}

void peek_back(list_t* list) {
    if (is_empty(list) == true) {
        fprintf(stderr, "Impossible to peek empty list.");
        abort();
    }
    
    node_t* cur = list_head;
    
    while(cur->next != NULL) {
        cur = cur->next;
    }
    
    return cur->value;
}

int pop_front(list_t* list) {
    
    if(is_empty(list)){
        fprintf(stderr, "Impossible to pop from empty list");
        abort();
    }
    
    node_t trash = list->head;
    int value = trash->value;
    
    list->head = list->head->next;
    
    free(trash);
    list->size--;
    
    return value;
}

int pop_back(list_t* list) {
    if(is_empty(list)){
        fprintf(stderr, "Impossible to pop from empty list");
        abort();
    }
    
    node_t* prev = NULL;
    node_t* cur = list->head;
    
    while (cur->next != NULL) {
        prev = cur;
        cur = cur->next;
    }
    
    int value = cur->value;
    
    if (cur == list->head) { // one element
        list->head = NULL;
    }
    
    else {
        prev->next = NULL; //more than one element
    }
    
    free(cur);
    list->size--;
    
    return value;
}

bool list_remove(list_t* list, int value) {
    if(is_empty(list)){
        return false;
    }
    
    node_t* prev = NULL;
    node_t* cur = list->head;
    
    while (cur !=  NULL && cur != value) {
        prev = cur;
        cur =  cur->next;
    }
    
    if (cur != NULL) {
        node_t* trash = cur;
        
        f
        
        free(trash);
        
        return true;
    }
    
    return false;
}