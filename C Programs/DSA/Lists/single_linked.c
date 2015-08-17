#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* link;
} node;

void display(node*);
void count(node*);
void search(node*, int);
node* push_start(node*, int);
node* push_end(node*, int);
node* insert_after(node*, int, int);
node* insert_before(node*, int, int);

int main() {
    int num_elements;
    node* start;
    start = NULL;

    start = push_start(start, 7);
    start = push_start(start, 3);
    start = push_end(start, 5);
    start = push_end(start, 1);
    display(start);
    count(start);
    search(start, 3);
    start = insert_after(start, 5, 8);
    display(start);
    start = insert_before(start, 3, 2);
    display(start);

    printf("\n");

    return 0;

}

void search(node* start, int key) {
    struct node *p;
    p = start;
    int pos = 1;
    while (p != NULL) {
        if(p->data == key) {
            printf("\nItem %d found at position %d.\n", p->data, pos);
            return;
        }
        p = p->link;
        pos++;
    }
    printf("\nItem not found in list!\n");
}

void count(node* start) {
    int c = 0;
    node *p;
    p = start;

    while (p != NULL) {
        p = p->link;
        c++;
    }
    printf("\nNumber of elements in the list: %d\n", c);
}

void display(node* start) {
    node* p;
    p = start;

    if(start == NULL) {
        printf("\nThe list is empty!\n");
        return;
    }

    printf("\nElements in list: \n");
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->link;
    }
}

node* push_start(node* start, int data) {
    node* temp;
    temp = (node*) malloc(sizeof(node*));
    temp->data = data;
    temp->link = start;
    start = temp;
    printf("\nInserted %d at the beginning of list.\n", data);
    return start;
}

node* push_end(node* start, int data) {
    node* temp;
    node* p;
    temp = (node*) malloc(sizeof(node*));
    temp->data = data;
    p = start;
    while (p->link != NULL) {
        p = p->link;
    }
    p->link = temp;
    temp->link = NULL;
    printf("\nInserted %d at the beginning of list.\n", data);
    return start;
}

node* insert_after(node* start, int key, int data) {
    node* temp;
    node* p;
    node* q;
    if(start == NULL) {
        printf("\nThe list is empty!\n");
        return start;
    }
    while (p != NULL) {
        if(p->data == key) {
            temp = (node*)malloc(sizeof(node*));
            temp->data = data;
            temp->link = p->link;
            p->link = temp;
            printf("\nInserted %d after %d.\n", data, key);
            return start;
        }
        p = p->link;
    }
    printf("\nItem %d not present in list. Couldn't insert.\n", key);
    return start;
}

node* insert_before(node* start, int key, int data) {
    node* temp;
    node* p;
    node* q;
    if(start == NULL) {
        printf("\nThe list is empty!\n");
        return start;
    }
    if(key == start->data) {
        temp =(node*)malloc(sizeof(node*));
        temp->data = data;
        temp->link = start;
        start = temp;
        printf("\nInserted %d before %d.\n", data, key);
        return start;
    }
    p = start;
    while (p->link != NULL) {
        if(p->link->data == key) {
            temp =(node*)malloc(sizeof(node*));
            temp->data = data;
            temp->link = p->link;
            p->link = temp;
            printf("\nInserted %d before %d.\n", data, key);
            return start;
        }
        p = p->link;
    }
    printf("\nItem %d not present in list. Couldn't insert.\n", key);
    return start;
}
