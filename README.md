# ArrayCategoriesTest

This project demonstrates the four main categories of arrays based on memory allocation and size determination in **C++** and **JavaScript**:

## 🔢 Categories Implemented

1. **Fixed Stack Dynamic**  
   - Size fixed at compile-time  
   - Stored in stack memory
   - Array size is **fixed at compile-time** and stored in the **stack memory**.
   - Array size is hardcoded (5 elements).
   - Allocated on the stack.
   - Fast, but inflexible.
   - JavaScript arrays are always dynamic internally, but here it mimics fixed behavior.

2. **Stack Dynamic**
   - Size decided at runtime  
   - Stored in stack memory
   - Array is stored on the stack, but its size is determined at runtime (i.e., user input).
   - Allowed in C99 and some C++ compilers.
   - Not standard in modern C++.
   - Uses runtime input to allocate stack memory.
   - Still internally heap-based in JavaScript.


4. **Fixed Heap Dynamic**  
   - Size fixed at runtime  
   - Stored in heap memory
   - Array size is fixed, but memory is allocated in the heap.
   - Dynamically allocated using new.
   - Must be manually deallocated using delete[].
   - Stored on the heap automatically. 

5. **Heap Dynamic**  
   - Fully dynamic size and memory  
   - Stored in heap memory
   - Array is fully dynamic — both size and content can change over time, stored in the heap.
   - Uses std::vector, a dynamic array from the Standard Template Library (STL).
   - Resizes automatically.
   - JavaScript arrays are fully dynamic.
   - Elements can be added/removed on the fly.

## 🧪 Languages Used

- **C++** (Using `iostream`, `vector`)
- **JavaScript** (Using dynamic and fixed arrays)

## 📁 File Structure
ArrayCategoriesTest/
│
├── cpp/
│ ├── fixed_stack_dynamic.cpp
│ ├── stack_dynamic.cpp
│ ├── fixed_heap_dynamic.cpp
│ └── heap_dynamic.cpp
│
├── js/
│ ├── fixed_stack_dynamic.js
│ ├── stack_dynamic.js
│ ├── fixed_heap_dynamic.js
│ └── heap_dynamic.js
│
└── README.md
