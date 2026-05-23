# Data Structures & Algorithms - Complete Course

## Project Overview

This project provides a comprehensive guide to various data structures and their implementations in C. The course covers theoretical foundations, practical implementations, and best practices for working with data structures. Each module includes abstract data type (ADT) implementations with complete documentation and examples.

## Topics Covered

- [Abstract Data Types (ADT)](https://github.com/olooolll/data-structures-algorithms/tree/main/ADT)
- Arrays and Strings
- Linked Lists (Single and Double)
- Stacks
- Queues
- Trees
- Graphs
- Hash Tables
- Sorting Algorithms
- Search Algorithms
- Complexity Analysis

## ADT Implementations

1. **Arrays**: Implementation of dynamic and static arrays with operations such as insertion, removal, and access.
2. **Linked Lists**: Single and double-linked list implementations with various traversal and manipulation methods.
3. **Stacks**: Stack implementation with push, pop, and peek operations.
4. **Queues**: Queue implementation with enqueue, dequeue, and front operations.
5. **Trees**: Binary tree and binary search tree implementations with traversal algorithms.
6. **Graphs**: Graph representation using adjacency matrix and adjacency list, with traversal methods such as DFS (Depth-First Search) and BFS (Breadth-First Search).
7. **Hash Tables**: Hash table implementation with collision resolution techniques.

## Directory Structure

```
data-structures-algorithms/
├── ADT/                          # Abstract Data Type implementations
│   ├── Account/
│   ├── Course/
│   ├── Fraction/
│   └── Rectangle/
├── Stack/                        # Stack implementation
├── Queue/                        # Queue implementation
├── LinkedList/                   # Linked List implementation
├── List/                         # Array-based List implementation
├── Assessments/                  # Assessment exercises
├── Simulations/                  # Simulation and test files
└── README.md
```

## How to Compile and Run

### Prerequisites
- GCC or Clang compiler
- CMake (version 3.10+)

### Build Instructions

1. Clone the repository:
   ```bash
   git clone https://github.com/olooolll/data-structures-algorithms.git
   cd data-structures-algorithms
   ```

2. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```

3. Generate build files with CMake:
   ```bash
   cmake ..
   ```

4. Compile the project:
   ```bash
   make
   ```

5. Run a specific program:
   ```bash
   ./program_name
   ```

## Project Structure Details

### ADT Module
The ADT module contains implementations of various abstract data types:
- **Account**: Bank account management system
- **Course**: Course management system
- **Fraction**: Fraction arithmetic operations
- **Rectangle**: Geometric rectangle operations

### Data Structures
- **Stack**: Last-In-First-Out (LIFO) data structure
- **Queue**: First-In-First-Out (FIFO) data structure
- **LinkedList**: Dynamic linked list implementation
- **List**: Array-based list with dynamic resizing

## Learning Outcomes

After completing this course, you will:
- Understand the fundamental data structures and their use cases
- Know how to implement data structures from scratch
- Learn when to use each data structure for optimal performance
- Master algorithms for searching, sorting, and traversing
- Develop a strong foundation for advanced computer science topics

## Technologies Used

- **Language**: C
- **Build System**: CMake
- **Compiler**: GCC/Clang

## Author

Created as a comprehensive learning resource for data structures and algorithms.

## License

This project is open source and available for educational purposes.

## Contributing

Contributions, suggestions, and improvements are welcome! Feel free to fork this repository and submit pull requests.

---

**Last Updated**: 2026
