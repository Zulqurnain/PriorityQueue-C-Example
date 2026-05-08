# PriorityQueue-C-Example

A C++ Priority Queue implementation using a max-heap array data structure.

## Features

- Array-based Priority Queue (max-heap)
- Enqueue, Dequeue, Peek operations
- Size and capacity tracking
- PrintAll with sort option
- Cross-platform (Linux/macOS/Windows)

## Build & Run

```bash
g++ PriorityQueue.cpp source.cpp -o pq_example
./pq_example
```

## API

```cpp
PriorityQueue pq(10);  // capacity 10
pq.Enqueue(5);
pq.Enqueue(2);
pq.Enqueue(7);
int top = pq.Dequeue();  // returns 7 (max)
pq.PrintAll(true);       // sorted print
```

---

**Built by [Zulqurnain Haider](https://zulqurnainj.com/) — Senior Full Stack Engineer**

For full portfolio visit: [https://zulqurnainj.com/](https://zulqurnainj.com/)
