# ArrayCategoriesTest

This project demonstrates the four main categories of arrays based on memory allocation and size determination in **C++** and **JavaScript**:

## 🔢 Categories Implemented

1. **Fixed Stack Dynamic**  
   - Size fixed at compile-time  
   - Stored in stack memory
   - In C++, a fixed stack dynamic array is declared using a constant size at compile time, such as int arr[5];. This array is allocated in the stack memory, meaning it is fast and efficient, but its size cannot change during program execution. In JavaScript, there is no true concept of stack-allocated arrays. However, we can mimic this behavior by declaring an array with fixed values like let arr = [1, 2, 3, 4, 5];. Although this appears similar, JavaScript arrays are always allocated on the heap, and their size can technically be modified.
     

2. **Stack Dynamic**
   - Size decided at runtime  
   - Stored in stack memory
   - C++ allows stack dynamic arrays through Variable Length Arrays (VLAs), such as int arr[n];, where n is determined during runtime. These are stored in the stack and provide some flexibility, although they are not part of the standard C++ specification and depend on compiler support. In JavaScript, dynamic size is the default behavior. When using let arr = new Array(n);, the size can be set during runtime based on user input. Despite the appearance of fixed allocation, these arrays are still managed in the heap.

4. **Fixed Heap Dynamic**  
   - Size fixed at runtime  
   - Stored in heap memory
   - In C++, fixed heap dynamic arrays are created using the new keyword, like int* arr = new int[5];. This allocates a fixed-size array in the heap memory, giving more flexibility compared to stack arrays, especially for larger sizes. However, the programmer must manually free the memory using delete[]. In JavaScript, we use new Array(5) to create an array of fixed length. The difference is that JavaScript arrays are automatically managed by the garbage collector, and manual memory deallocation is not needed.
5. **Heap Dynamic**  
   - Fully dynamic size and memory  
   - Stored in heap memory
   - C++ supports heap dynamic arrays through containers like std::vector. A vector<int> can dynamically resize itself with methods like push_back, providing flexible heap allocation and memory management through the STL. In JavaScript, all arrays are inherently heap dynamic. A declaration like let arr = []; followed by arr.push(10); will automatically expand the array. Both languages support this dynamic behavior, but JavaScript does so more naturally, while C++ achieves it through library support.

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
