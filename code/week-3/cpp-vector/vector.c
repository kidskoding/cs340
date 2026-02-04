#include "vector.h"
#include <stdlib.h>

int vector_init(vector *vec) {
    if(vec == NULL) {
        return 0;
    }

    vec->capacity = 1;
    vec->size = 0;
    
    vec->data = (int*) malloc(vec->capacity * sizeof(int));
    if(vec->data == NULL) {
        return 0;
    }

    return 1;
}

int vector_push_back(vector *vec, int value) {
    if(vec->size == vec->capacity) {
        int new_capacity = vec->capacity * 2;

        int* new_data = (int*) realloc(vec->data, new_capacity * sizeof(int));
        if(new_data == NULL) {
            return 0;
        }

        vec->data = new_data;
        vec->capacity = new_capacity;
    }

    vec->data[vec->size] = value;
    vec->size++;
    return 1;
}

int vector_get(vector *vec, size_t index) {
    if(vec == NULL || index >= vec->size) {
        return -1;
    }

    return vec->data[index];
}

int vector_set(vector *vec, size_t index, int value) {
    if(vec == NULL || index >= vec->size) {
        return 0;
    }

    vec->data[index] = value;
    return 1;
}

int vector_pop_back(vector *vec) {
    if(vec == NULL || vec->size == 0) {
        return 0;
    }

    vec->size--;
    return 1;
}

void vector_destroy(vector *vec) {
    if(vec == NULL) {
        return;
    }

    if(vec->data != NULL) {
        free(vec->data);
        vec->data = NULL;
    }

    vec->size = 0;
    vec->capacity = 0;
}