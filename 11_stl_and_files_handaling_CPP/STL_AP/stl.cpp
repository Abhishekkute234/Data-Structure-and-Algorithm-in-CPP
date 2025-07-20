/*
 * COMPLETE STL CONTAINERS GUIDE WITH DEFINITIONS
 *
 * STL (Standard Template Library) provides a collection of template classes
 * and functions that implement common data structures and algorithms.
 */

#include <iostream>
#include <vector>        // Dynamic array
#include <list>          // Doubly linked list
#include <deque>         // Double-ended queue
#include <queue>         // Queue and priority queue
#include <stack>         // Stack (LIFO)
#include <map>           // Ordered key-value pairs (Red-Black tree)
#include <unordered_map> // Hash table for key-value pairs
#include <set>           // Ordered unique elements (Red-Black tree)
#include <unordered_set> // Hash table for unique elements
#include <algorithm>     // STL algorithms
#include <utility>       // Utility functions like pair, make_pair

using namespace std;

/*
 * VECTOR - Dynamic resizable array
 * - Elements stored in contiguous memory
 * - Random access O(1)
 * - Insertion/deletion at end O(1) amortized
 * - Insertion/deletion in middle O(n)
 * - Automatically manages memory
 */
void demonstrateVector()
{
  cout << "\n=== VECTOR - Dynamic Array ===\n";

  // Declaration and initialization
  vector<int> v1;                   // Empty vector
  vector<int> v2(5, 10);            // 5 elements, all initialized to 10
  vector<int> v3 = {1, 2, 3, 4, 5}; // Initializer list

  // Basic operations
  v1.push_back(100); // Add element at end - O(1) amortized
  v1.push_back(200);
  v1.push_back(300);

  cout << "Size: " << v1.size() << endl;         // Number of elements
  cout << "Capacity: " << v1.capacity() << endl; // Allocated memory size
  cout << "Empty: " << v1.empty() << endl;       // Check if empty

  // Access elements - All O(1)
  cout << "First element: " << v1.front() << endl;           // First element
  cout << "Last element: " << v1.back() << endl;             // Last element
  cout << "Element at index 1: " << v1[1] << endl;           // Direct access (no bounds check)
  cout << "Element at index 1 (safe): " << v1.at(1) << endl; // Safe access (throws exception)

  // Iterators - Objects that point to elements
  cout << "Elements: ";
  for (auto it = v1.begin(); it != v1.end(); ++it)
  {                     // begin() = first element, end() = past-last
    cout << *it << " "; // Dereference iterator to get value
  }
  cout << endl;

  // Range-based for loop (C++11)
  cout << "Elements (range-based): ";
  for (const auto &elem : v1)
  { // Auto deduces type, const& for efficiency
    cout << elem << " ";
  }
  cout << endl;

  // Modifying operations
  v1.insert(v1.begin() + 1, 150); // Insert 150 at position 1 - O(n)
  v1.erase(v1.begin());           // Remove first element - O(n)
  v1.pop_back();                  // Remove last element - O(1)
  v1.clear();                     // Remove all elements - O(n)

  // Resizing operations
  v3.resize(8, 99);   // Resize to 8 elements, new elements = 99
  v3.shrink_to_fit(); // Reduce capacity to fit current size
}

/*
 * LIST - Doubly Linked List
 * - Elements stored in non-contiguous memory nodes
 * - No random access (must traverse from begin/end)
 * - Insertion/deletion at any position O(1) if iterator known
 * - Bi-directional traversal
 * - No indexing operator []
 */
void demonstrateList()
{
  cout << "\n=== LIST - Doubly Linked List ===\n";

  list<int> l1 = {10, 20, 30, 40};

  // Basic operations - O(1)
  l1.push_front(5); // Add at beginning - unique to list (not in vector)
  l1.push_back(50); // Add at end
  l1.pop_front();   // Remove from beginning - unique to list
  l1.pop_back();    // Remove from end

  cout << "Size: " << l1.size() << endl;   // Number of elements
  cout << "Front: " << l1.front() << endl; // First element
  cout << "Back: " << l1.back() << endl;   // Last element

  // Insert and erase with iterators
  auto it = l1.begin();
  advance(it, 2);    // Move iterator 2 positions forward - O(n) for list
  l1.insert(it, 25); // Insert before iterator position - O(1)

  // List-specific operations (work because list maintains order)
  list<int> l2 = {3, 1, 4, 1, 5, 9, 2, 6};
  l2.sort();   // Sort the list in-place - O(n log n)
  l2.unique(); // Remove consecutive duplicates - O(n)

  cout << "Sorted unique list: ";
  for (const auto &elem : l2)
  {
    cout << elem << " ";
  }
  cout << endl;

  // Merge two sorted lists - O(n + m)
  list<int> l3 = {1, 3, 5};
  list<int> l4 = {2, 4, 6};
  l3.merge(l4); // l4 becomes empty, l3 contains merged sorted result

  cout << "Merged list: ";
  for (const auto &elem : l3)
  {
    cout << elem << " ";
  }
  cout << endl;
}

/*
 * DEQUE - Double-ended Queue
 * - Combination of vector and list features
 * - Random access O(1) like vector
 * - Efficient insertion/deletion at both ends O(1)
 * - Insertion/deletion in middle O(n)
 * - Implemented as array of arrays (blocks)
 */
void demonstrateDeque()
{
  cout << "\n=== DEQUE - Double-ended Queue ===\n";

  deque<int> dq = {20, 30, 40};

  // Basic operations - O(1)
  dq.push_front(10); // Add at beginning - efficient unlike vector
  dq.push_back(50);  // Add at end
  dq.pop_front();    // Remove from beginning - efficient unlike vector
  dq.pop_back();     // Remove from end

  cout << "Size: " << dq.size() << endl;   // Number of elements
  cout << "Front: " << dq.front() << endl; // First element
  cout << "Back: " << dq.back() << endl;   // Last element

  // Random access - O(1) like vector
  cout << "Element at index 1: " << dq[1] << endl;           // Direct access
  cout << "Element at index 1 (safe): " << dq.at(1) << endl; // Safe access

  // Insert and erase - O(n)
  dq.insert(dq.begin() + 1, 25); // Insert at position
  dq.erase(dq.begin());          // Remove at position

  cout << "Elements: ";
  for (const auto &elem : dq)
  {
    cout << elem << " ";
  }
  cout << endl;
}

/*
 * PAIR - Container for two values
 * - Stores two values of possibly different types
 * - Access via .first and .second
 * - Supports comparison operators (lexicographical)
 * - Useful for returning multiple values from functions
 * - Used internally by map, set, etc.
 */
void demonstratePair()
{
  cout << "\n=== PAIR - Two-element Container ===\n";

  // Creating pairs - different methods
  pair<int, string> p1(1, "One");             // Constructor
  pair<int, string> p2 = make_pair(2, "Two"); // make_pair function
  auto p3 = make_pair(3, "Three");            // Auto type deduction

  // Accessing elements
  cout << "p1: (" << p1.first << ", " << p1.second << ")" << endl; // .first and .second members
  cout << "p2: (" << p2.first << ", " << p2.second << ")" << endl;
  cout << "p3: (" << p3.first << ", " << p3.second << ")" << endl;

  // Comparison - lexicographical (first element, then second)
  pair<int, int> a(1, 2);
  pair<int, int> b(1, 3);
  cout << "a < b: " << (a < b) << endl; // true because 1==1, but 2<3

  // Swapping pairs
  swap(p1, p2); // Swaps contents of p1 and p2
  cout << "After swap - p1: (" << p1.first << ", " << p1.second << ")" << endl;
}

/*
 * QUEUE - FIFO (First In, First Out) Container
 * - Adapter container (uses deque by default)
 * - Elements added at back, removed from front
 * - No iterators (no direct access to middle elements)
 * - All operations O(1)
 */
void demonstrateQueue()
{
  cout << "\n=== QUEUE - FIFO Container ===\n";

  queue<int> q; // Default underlying container is deque

  // Basic operations - all O(1)
  q.push(10); // Add element to back of queue
  q.push(20);
  q.push(30);

  cout << "Size: " << q.size() << endl;   // Number of elements
  cout << "Front: " << q.front() << endl; // First element (next to be removed)
  cout << "Back: " << q.back() << endl;   // Last element (most recently added)

  // Process queue (FIFO order)
  cout << "Processing queue: ";
  while (!q.empty())
  {                           // Check if queue is empty
    cout << q.front() << " "; // Access front element
    q.pop();                  // Remove front element
  }
  cout << endl;
}

/*
 * PRIORITY_QUEUE - Heap-based Priority Queue
 * - Elements automatically sorted by priority
 * - Default: max-heap (largest element has highest priority)
 * - Implemented using heap data structure
 * - Insertion and deletion O(log n)
 * - Top access O(1)
 */
void demonstratePriorityQueue()
{
  cout << "\n=== PRIORITY_QUEUE - Heap Container ===\n";

  // Max heap (default behavior) - largest element at top
  priority_queue<int> pq_max;
  pq_max.push(30); // Insert element - O(log n)
  pq_max.push(10);
  pq_max.push(50);
  pq_max.push(20);

  cout << "Max heap: ";
  while (!pq_max.empty())
  {
    cout << pq_max.top() << " "; // Access highest priority element - O(1)
    pq_max.pop();                // Remove highest priority element - O(log n)
  }
  cout << endl;

  // Min heap - smallest element at top
  priority_queue<int, vector<int>, greater<int>> pq_min; // Custom comparator
  pq_min.push(30);
  pq_min.push(10);
  pq_min.push(50);
  pq_min.push(20);

  cout << "Min heap: ";
  while (!pq_min.empty())
  {
    cout << pq_min.top() << " ";
    pq_min.pop();
  }
  cout << endl;

  // Priority queue with pairs (compares first element by default)
  priority_queue<pair<int, string>> pq_pair;
  pq_pair.push({3, "Three"}); // Higher number = higher priority
  pq_pair.push({1, "One"});
  pq_pair.push({2, "Two"});

  cout << "Pair priority queue: ";
  while (!pq_pair.empty())
  {
    cout << "(" << pq_pair.top().first << "," << pq_pair.top().second << ") ";
    pq_pair.pop();
  }
  cout << endl;
}

/*
 * MAP - Ordered Key-Value Container
 * - Implemented as Red-Black Tree (balanced BST)
 * - Keys are unique and automatically sorted
 * - All operations O(log n)
 * - Keys must be comparable (have < operator)
 * - Maintains sorted order of keys
 */
void demonstrateMap()
{
  cout << "\n=== MAP - Ordered Key-Value Pairs ===\n";

  map<string, int> m; // Keys: string, Values: int

  // Insertion methods - all O(log n)
  m["apple"] = 5; // Subscript operator
  m["banana"] = 3;
  m["cherry"] = 8;
  m.insert({"date", 2});                // Insert with pair
  m.insert(make_pair("elderberry", 6)); // Insert with make_pair

  cout << "Size: " << m.size() << endl; // Number of key-value pairs

  // Access methods
  cout << "apple count: " << m["apple"] << endl; // Direct access (creates if not exists)
  cout << "fig count: " << m["fig"] << endl;     // Creates entry with default value (0)

  // Safe access (doesn't create new entries)
  if (m.find("grape") != m.end())
  { // find() returns iterator
    cout << "grape found" << endl;
  }
  else
  {
    cout << "grape not found" << endl;
  }

  // Iteration (automatically sorted by key)
  cout << "Map contents: ";
  for (const auto &pair : m)
  { // pair has .first (key) and .second (value)
    cout << "(" << pair.first << ":" << pair.second << ") ";
  }
  cout << endl;

  // Erase operations - O(log n)
  m.erase("fig");             // Erase by key
  auto it = m.find("banana"); // Find iterator to element
  if (it != m.end())
  {
    m.erase(it); // Erase by iterator (more efficient if you have iterator)
  }

  // Lower and upper bounds - O(log n)
  auto lower = m.lower_bound("cherry"); // Iterator to first element >= key
  auto upper = m.upper_bound("cherry"); // Iterator to first element > key

  if (lower != m.end())
  {
    cout << "Lower bound of 'cherry': " << lower->first << endl;
  }
}

/*
 * MULTIMAP - Ordered Key-Value Container with Duplicate Keys
 * - Similar to map but allows duplicate keys
 * - Implemented as Red-Black Tree
 * - All operations O(log n)
 * - Keys with same value are stored together
 * - No subscript operator [] (since keys aren't unique)
 */
void demonstrateMultimap()
{
  cout << "\n=== MULTIMAP - Duplicate Keys Allowed ===\n";

  multimap<string, int> mm;

  // Insert multiple values for same key - all O(log n)
  mm.insert({"fruit", 1}); // Same key "fruit" multiple times
  mm.insert({"fruit", 2});
  mm.insert({"vegetable", 3});
  mm.insert({"fruit", 4});

  cout << "Size: " << mm.size() << endl;                     // Total number of pairs
  cout << "Count of 'fruit': " << mm.count("fruit") << endl; // Number of pairs with key "fruit"

  // Find range of elements with same key - O(log n)
  auto range = mm.equal_range("fruit"); // Returns pair of iterators [first, last)
  cout << "All 'fruit' entries: ";
  for (auto it = range.first; it != range.second; ++it)
  {
    cout << it->second << " "; // Print values for key "fruit"
  }
  cout << endl;

  // Iterate all elements (keys appear in sorted order)
  cout << "All elements: ";
  for (const auto &pair : mm)
  {
    cout << "(" << pair.first << ":" << pair.second << ") ";
  }
  cout << endl;
}

/*
 * UNORDERED_MAP - Hash Table for Key-Value Pairs
 * - Implemented using hash table
 * - Keys are unique but not sorted
 * - Average O(1) operations, worst case O(n)
 * - Keys must be hashable
 * - No guaranteed order of elements
 */
void demonstrateUnorderedMap()
{
  cout << "\n=== UNORDERED_MAP - Hash Table ===\n";

  unordered_map<string, int> um;

  // Insertion - average O(1)
  um["apple"] = 5;
  um["banana"] = 3;
  um["cherry"] = 8;
  um.insert({"date", 2});

  cout << "Size: " << um.size() << endl;                 // Number of elements
  cout << "Bucket count: " << um.bucket_count() << endl; // Number of hash buckets
  cout << "Load factor: " << um.load_factor() << endl;   // Size/bucket_count ratio

  // Access - average O(1)
  cout << "apple count: " << um["apple"] << endl;

  // Find - average O(1)
  auto it = um.find("banana");
  if (it != um.end())
  {
    cout << "Found banana: " << it->second << endl;
  }

  // Iteration (no guaranteed order)
  cout << "Unordered map contents: ";
  for (const auto &pair : um)
  {
    cout << "(" << pair.first << ":" << pair.second << ") ";
  }
  cout << endl;

  // Reserve space to avoid rehashing
  um.reserve(100); // Reserve space for at least 100 elements
}

/*
 * SET - Ordered Container of Unique Elements
 * - Implemented as Red-Black Tree (balanced BST)
 * - Elements are unique and automatically sorted
 * - All operations O(log n)
 * - Elements must be comparable (have < operator)
 * - No direct element modification (would break ordering)
 */
void demonstrateSet()
{
  cout << "\n=== SET - Ordered Unique Elements ===\n";

  set<int> s = {30, 10, 50, 20, 30, 10}; // Duplicates automatically removed

  cout << "Size: " << s.size() << endl; // Only unique elements counted

  // Insertion - O(log n)
  s.insert(40); // Insert element
  s.insert(15);

  // Find - O(log n)
  if (s.find(20) != s.end())
  {
    cout << "20 is in the set" << endl;
  }

  cout << "Contains 25: " << (s.count(25) > 0) << endl; // count() returns 0 or 1 for set

  // Iteration (automatically sorted order)
  cout << "Set contents: ";
  for (const auto &elem : s)
  {
    cout << elem << " ";
  }
  cout << endl;

  // Lower and upper bound - O(log n)
  auto lower = s.lower_bound(25); // First element >= 25
  auto upper = s.upper_bound(25); // First element > 25

  if (lower != s.end())
  {
    cout << "Lower bound of 25: " << *lower << endl;
  }
  if (upper != s.end())
  {
    cout << "Upper bound of 25: " << *upper << endl;
  }

  // Equal range - O(log n)
  auto range = s.equal_range(30); // Range of elements equal to 30
  cout << "Equal range of 30: ";
  for (auto it = range.first; it != range.second; ++it)
  {
    cout << *it << " ";
  }
  cout << endl;

  // Erase operations - O(log n)
  s.erase(10);        // Erase by value
  s.erase(s.begin()); // Erase by iterator
}

/*
 * MULTISET - Ordered Container Allowing Duplicate Elements
 * - Similar to set but allows duplicate elements
 * - Implemented as Red-Black Tree
 * - All operations O(log n)
 * - Elements automatically sorted (including duplicates)
 * - count() can return values > 1
 */
void demonstrateMultiset()
{
  cout << "\n=== MULTISET - Ordered with Duplicates ===\n";

  multiset<int> ms = {30, 10, 50, 20, 30, 10}; // Duplicates are kept

  cout << "Size: " << ms.size() << endl;           // All elements counted
  cout << "Count of 10: " << ms.count(10) << endl; // Number of occurrences
  cout << "Count of 30: " << ms.count(30) << endl;

  // Insertion - O(log n)
  ms.insert(25);
  ms.insert(30); // Add another 30

  // Iteration (sorted order, duplicates included)
  cout << "Multiset contents: ";
  for (const auto &elem : ms)
  {
    cout << elem << " ";
  }
  cout << endl;

  // Find first occurrence - O(log n)
  auto it = ms.find(30); // Returns iterator to first occurrence
  if (it != ms.end())
  {
    cout << "Found 30, erasing one occurrence" << endl;
    ms.erase(it); // Erases only one occurrence
  }

  cout << "After erasing one 30: ";
  for (const auto &elem : ms)
  {
    cout << elem << " ";
  }
  cout << endl;

  // Erase all occurrences of a value - O(log n + count)
  ms.erase(10); // Erases ALL occurrences of 10

  cout << "After erasing all 10s: ";
  for (const auto &elem : ms)
  {
    cout << elem << " ";
  }
  cout << endl;
}

/*
 * UNORDERED_SET - Hash Table for Unique Elements
 * - Implemented using hash table
 * - Elements are unique but not sorted
 * - Average O(1) operations, worst case O(n)
 * - Elements must be hashable
 * - No guaranteed order of elements
 */
void demonstrateUnorderedSet()
{
  cout << "\n=== UNORDERED_SET - Hash Table for Unique Elements ===\n";

  unordered_set<string> us = {"apple", "banana", "cherry", "apple"}; // Duplicate "apple" removed

  cout << "Size: " << us.size() << endl;                 // Only unique elements
  cout << "Bucket count: " << us.bucket_count() << endl; // Number of hash buckets

  // Insertion - average O(1)
  us.insert("date");
  us.insert("elderberry");

  // Find - average O(1)
  if (us.find("banana") != us.end())
  {
    cout << "Found banana" << endl;
  }

  cout << "Contains 'grape': " << (us.count("grape") > 0) << endl; // count() returns 0 or 1

  // Iteration (no guaranteed order)
  cout << "Unordered set contents: ";
  for (const auto &elem : us)
  {
    cout << elem << " ";
  }
  cout << endl;

  // Erase - average O(1)
  us.erase("apple");

  cout << "After erasing apple: ";
  for (const auto &elem : us)
  {
    cout << elem << " ";
  }
  cout << endl;
}

/*
 * LOWER_BOUND & UPPER_BOUND - Binary Search Functions
 * - Work on sorted containers or ranges
 * - lower_bound: first position where element can be inserted
 * - upper_bound: first position after last occurrence
 * - All operations O(log n) for random access iterators
 * - Used for efficient searching in sorted data
 */
void demonstrateBounds()
{
  cout << "\n=== LOWER_BOUND & UPPER_BOUND - Binary Search ===\n";

  vector<int> v = {1, 2, 4, 4, 4, 6, 8, 9}; // Must be sorted for binary search
  cout << "Vector: ";
  for (const auto &elem : v)
  {
    cout << elem << " ";
  }
  cout << endl;

  // Lower bound: first position where value can be inserted to keep sorted order
  auto lower = lower_bound(v.begin(), v.end(), 4); // O(log n)
  cout << "Lower bound of 4: index " << (lower - v.begin()) << ", value " << *lower << endl;

  // Upper bound: first position after last occurrence of value
  auto upper = upper_bound(v.begin(), v.end(), 4); // O(log n)
  cout << "Upper bound of 4: index " << (upper - v.begin());
  if (upper != v.end())
  {
    cout << ", value " << *upper;
  }
  cout << endl;

  // Equal range: range of elements equal to value
  auto range = equal_range(v.begin(), v.end(), 4); // O(log n)
  cout << "Equal range of 4: from index " << (range.first - v.begin())
       << " to " << (range.second - v.begin()) << endl;
  cout << "Count of 4: " << (range.second - range.first) << endl;

  // Binary search: check if element exists - O(log n)
  cout << "Binary search for 4: " << binary_search(v.begin(), v.end(), 4) << endl;
  cout << "Binary search for 5: " << binary_search(v.begin(), v.end(), 5) << endl;

  // Using bounds to find insertion position
  int target = 5;
  auto pos = lower_bound(v.begin(), v.end(), target);
  cout << "Position to insert " << target << ": index " << (pos - v.begin()) << endl;

  // Example with set (has built-in lower_bound and upper_bound)
  set<int> s = {1, 2, 4, 4, 6, 8, 9}; // Note: set removes duplicate 4
  auto s_lower = s.lower_bound(4);    // Set's member function - more efficient
  auto s_upper = s.upper_bound(4);    // than generic algorithm

  if (s_lower != s.end())
  {
    cout << "Set lower bound of 4: " << *s_lower << endl;
  }
  if (s_upper != s.end())
  {
    cout << "Set upper bound of 4: " << *s_upper << endl;
  }
}

/*
 * STACK - LIFO (Last In, First Out) Container
 * - Adapter container (uses deque by default)
 * - Elements added and removed from same end (top)
 * - No iterators (no direct access to middle elements)
 * - All operations O(1)
 */
void demonstrateStack()
{
  cout << "\n=== STACK - LIFO Container ===\n";

  stack<int> st; // Default underlying container is deque

  st.push(10); // Add element to top of stack
  st.push(20);
  st.push(30);

  cout << "Size: " << st.size() << endl; // Number of elements
  cout << "Top: " << st.top() << endl;   // Top element (most recently added)

  // Process stack (LIFO order)
  cout << "Processing stack: ";
  while (!st.empty())
  {                          // Check if stack is empty
    cout << st.top() << " "; // Access top element
    st.pop();                // Remove top element
  }
  cout << endl;
}

// Main function to demonstrate all STL containers
int main()
{
  cout << "=== STL CONTAINERS COMPREHENSIVE GUIDE ===\n";

  // Sequence Containers
  demonstrateVector(); // Dynamic array
  demonstrateList();   // Doubly linked list
  demonstrateDeque();  // Double-ended queue

  // Container Adapters
  demonstrateQueue();         // FIFO queue
  demonstratePriorityQueue(); // Heap-based priority queue
  demonstrateStack();         // LIFO stack

  // Associative Containers
  demonstrateSet();      // Ordered unique elements
  demonstrateMultiset(); // Ordered with duplicates
  demonstrateMap();      // Ordered key-value pairs
  demonstrateMultimap(); // Ordered key-value with duplicate keys

  // Unordered Associative Containers
  demonstrateUnorderedSet(); // Hash set
  demonstrateUnorderedMap(); // Hash map

  // Utility
  demonstratePair(); // Two-element container

  // Algorithms
  demonstrateBounds(); // Binary search functions

  cout << "\n=== END OF STL GUIDE ===\n";

  return 0;
}