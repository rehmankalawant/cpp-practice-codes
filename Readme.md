# C++ Pointer & Initialization Notes

## 1. Initialize Pointers with `NULL`

```cpp
int main() {
    Vehicle* vehicleArray = NULL;
}
```

* Initialize pointers to `NULL` to avoid using an uninitialized pointer.
* In modern C++, prefer `nullptr`.

---

## 2. Pointer Reference `*&`

```cpp
static void allocateHeapMemory(Vehicle*& vh, int noOfVehicles)
```

* Use `Vehicle*&` when a function needs to modify the pointer itself.
* This is useful when allocating dynamic memory inside the function.

---

## 3. `for` Loop Condition

```cpp
for (int i = 0; i < noOfVehicles; i++) {
    vh[i].insertVehicleRecord();
}
```

* `i < noOfVehicles` ensures the loop runs for the required number of vehicles.
* `i < 0` would not work when `i` starts from `0`.

---

## 4. `public:` Access Specifier

```cpp
class Vehicle {

    // Data members

public:

    // Constructor
    // Methods
};
```

* In a C++ `class`, members are **private by default**.
* Use `public:` when constructors or methods need to be accessed from outside the class.

---

## 5. `LibraryMember*&` vs `LibraryMember`

### `LibraryMember*&`

```cpp
LibraryMember*&
```

* Reference to a pointer.
* Allows the function to modify the original pointer.
* Commonly used when handling dynamically allocated arrays.

### `LibraryMember`

```cpp
LibraryMember
```

* Represents the **data type/class**.
* Can be used to create an individual object.

---

## 6. Use References with Objects/Streams

```cpp
friend ostream& operator<<(ostream& out, Complex& com);

Complex(Complex& copyObj);
```

* `&` passes the existing object by reference instead of making a copy.
* `ostream&` is required so the same output stream can be returned/used.

---

## 7. Dynamic Memory Allocation with Pointer Reference

```cpp
void allocate(int*& arr, int& noe);
```

* Use `int*&` when the function needs to allocate/change the caller's pointer.
* Use `int&` when the function needs to modify the original variable `noe`.
* Typical pattern:

```cpp
void allocate(int*& arr, int& noe) {
    arr = new int[noe];
}
```

### Quick Rule

| Syntax       | Meaning                |
| ------------ | ---------------------- |
| `int*`       | Pointer                |
| `int&`       | Reference              |
| `int*&`      | Reference to a pointer |
| `ClassName`  | Object/data type       |
| `ClassName&` | Reference to an object |


## 8. Use `delete[]` for Dynamic Arrays

When memory is allocated using `new[]`, use `delete[]`.

```cpp
int* arr = new int[10];

delete[] arr;   // ✅
```

```cpp
delete arr;     // ❌ Wrong for an array
delete[] arr;   // ✅ Correct
```

**Rule:**

* `new` → `delete`
* `new[]` → `delete[]`

---

## 9. Don't Forget `public:`

Class members are **private by default**.

```cpp
class Vehicle {

public:
    Vehicle();
    void display();
};
```

Use `public:` when the constructor or methods need to be accessed from outside the class.

```cpp
Vehicle v;
v.display();    // ✅
```

---

## 10. Cleanup After Deleting Dynamic Arrays

After deleting a dynamic array, set the pointer to `nullptr` to avoid a **dangling pointer**.

```cpp
int* arr = new int[10];

// Use arr...

delete[] arr;
arr = nullptr;   // ✅ Cleanup
```

**Rule:**

```text
new[]       → delete[]
delete[]    → nullptr
```

After `delete[]`, the pointer still contains the old memory address, but that memory is no longer valid.

```cpp
delete[] arr;
arr[0] = 10;     // ❌ Dangling pointer
```

Correct:

```cpp
delete[] arr;
arr = nullptr;   // ✅
```
