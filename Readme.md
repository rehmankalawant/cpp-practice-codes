# C++ Pointer & Initialization Notes

## 1. Initialization of Pointer to `NULL`

**`Vehicle.cpp`**

```cpp
int main() {

    Vehicle* vehicleArray = NULL;

}
```

* Always initialize the pointer to `NULL`.
* Sometimes, errors may occur due to an uninitialized pointer.

---

## 2. Pointer with Reference Address

```cpp
static void allocateHeapMemory(Vehicle*& vh, int noOfVehicles)
```

* Always write `Vehicle*&` when passing the pointer with its reference address.

---

## 3. `for` Loop Conditional Part

```cpp
for (int i = 0; i < noOfVehicles; i++) {

    vh[i].insertVehicleRecord();

}
```

* The condition `i < noOfVehicles` is required.
* It ensures that the loop runs for the required number of vehicles.
* Don't put condition like `i < 0`   

---

## 4. Uninitialized or Inaccessible Problem

* Always write `public:` when you are done declaring variables (data members) and start writing the constructor and methods.

```cpp
class Vehicle {

    // Data members

public:

    // Constructor
    // Methods

};
```

---

## 5. Not an Error / Useful

### `LibraryMember*&`

```cpp
LibraryMember*&
```

* Gives access to the **entire array** through the pointer reference.

### `LibraryMember`

```cpp
LibraryMember
```

* Gives access to **an individual object**.
* It is used as a **data type**.
