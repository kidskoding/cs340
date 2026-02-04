# Module 2 – C (not C++)

**C** is a very popular **low-level programming language**. Low-level languages are very beneficial because they give you lots of control over your computer. This means that you, as the programmer, have direct control over a computer’s memory and processing.

---

## How is C different from C++?

1. No Templates  
2. No Classes  
3. No `new` or `delete`  
4. No pass-by-reference  
5. No standard C++ library (strings, vectors, maps, `cin` / `cout`, etc.)

---

## Structs in C

Is the code below in **Example 1.1** valid C code?

```c
// Example 1.1: An invalid C struct
struct food {
  int amount;
  int age;

  int can_eat() {
    if (amount > 0 && age < 10) {
      return 1;
    }
    return 0;
  }
};
```

**NO!**

Structs in C are created in a different way than C++!

1. Create a struct with **ONLY member variables**
2. Functions **must** work with a pointer to an instance of that struct

---

**Example 1.2** shows a correct way to declare the struct in C, following the two rules above.

```c
// Example 1.2: Corrected C struct from Example 1.1
typedef struct food {
  int amount;
  int age;
} food;

int can_eat(food *self) {
  if (self->age < 10) {
    return 1;
  }
  return 0;
}
```

---

## Revisiting `.` (dot operator) and `->` (arrow operator) from C++

- `.` (**dot operator**) – Used to access members from an **object**
- `->` (**arrow operator**) – Used to access members from a **pointer**

Suppose we took **Example 1.2** and instead of having `can_eat` take in a pointer to struct `food`, it takes in an object instead. The code would now look like **Example 1.3**.

```c
// Example 1.3: Function takes object instead of pointer
typedef struct food {
  int amount;
  int age;
} food;

int can_eat(food self) {
  if (self.age < 10) {
    return 1;
  }
  return 0;
}
```

Notice that the only difference is using the dot operator instead of the arrow operator. The dot operator is used because it is the appropriate operator to access members of an object.

---

## `malloc` and `free`

`malloc` – equivalent to C++ `new`. Allocates `size` bytes on the **heap** and returns a **pointer** to that memory location.

```c
void *malloc(size_t size);
```

`malloc` takes in the total size of memory to allocate, which is typically done using the `sizeof` operator.

```c
// Example 1.4: Using malloc in C
int *ptr = malloc(sizeof(int));
```

Where `sizeof(int) = 4` bytes (32 bits).

`free` – equivalent to C++ `delete`.

<!--stackedit_data:
eyJoaXN0b3J5IjpbNzAxNTUxNTMwXX0=
-->