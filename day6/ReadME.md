Problem Statement
----

An `XOR linked list` is a more memory efficient doubly linked list.  
Instead of each node holding next and prev fields, it holds a field named both, which is an XOR of the next node and the previous node.  

Implement an XOR linked list  
- `add(element)` which adds the element to the end,  
- `get(index)` which returns the node at index.

**Note:**  
If using a language that has no pointers (such as Python),  
you can assume you have access to get_pointer and dereference_pointer functions that converts between nodes and memory addresses.