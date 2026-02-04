#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    size_t size;
    size_t capacity;
    int* data;
} vector;

int vector_init(vector* vec);
int vector_push_back(vector* vec, int value);
int vector_get(vector* vec, size_t index);
int vector_set(vector* vec, size_t index, int value);
int vector_pop_back(vector* vec);
void vector_destroy(vector* vec);