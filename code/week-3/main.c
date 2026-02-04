#include "cpp-vector/vector.h"

int main() {
    vector vec;
    vector_init(&vec);

    printf("\nPushing elements 10, 20, 30, 40, 50...\n");
    vector_push_back(&vec, 10);
    printf("After push 10: size=%zu, capacity=%zu\n", vec.size, vec.capacity);
    
    vector_push_back(&vec, 20);
    printf("After push 20: size=%zu, capacity=%zu\n", vec.size, vec.capacity);
    
    vector_push_back(&vec, 30);
    printf("After push 30: size=%zu, capacity=%zu\n", vec.size, vec.capacity);
    
    vector_push_back(&vec, 40);
    printf("After push 40: size=%zu, capacity=%zu\n", vec.size, vec.capacity);
    
    vector_push_back(&vec, 50);
    printf("After push 50: size=%zu, capacity=%zu\n", vec.size, vec.capacity);

    printf("\nGetting elements:\n");
    for (size_t i = 0; i < vec.size; i++) {
        printf("vec[%zu] = %d\n", i, vector_get(&vec, i));
    }

    printf("\nSetting vec[2] = 999...\n");
    vector_set(&vec, 2, 999);
    printf("vec[2] = %d\n", vector_get(&vec, 2));

    // Test Case 5: Pop elements
    printf("\nPopping elements:\n");
    for (int i = 0; i < 3; i++) {
        int popped = vector_pop_back(&vec);
        printf("Popped: %d, new size=%zu\n", popped, vec.size);
    }

    // Test Case 6: Out of bounds access
    printf("\nTrying out of bounds access at index 100...\n");
    int result = vector_get(&vec, 100);
    printf("Result: %d (should be -1)\n", result);

    // Test Case 7: Large scale test
    printf("\nLarge scale test: pushing 1000 elements...\n");
    vector vec2;
    vector_init(&vec2);
    for (int i = 0; i < 1000; i++) {
        vector_push_back(&vec2, i);
    }
    printf("After 1000 pushes: size=%zu, capacity=%zu\n", vec2.size, vec2.capacity);
    vector_destroy(&vec2);

    // Clean up
    vector_destroy(&vec);
    printf("\nVector destroyed successfully!\n");

    return 0;
}