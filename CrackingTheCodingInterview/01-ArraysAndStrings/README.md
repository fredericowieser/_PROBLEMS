# 1. Arrays and Strings

## Hash Tables

A hash table is a data structure that maps keys to values using an array of linked lists and a hash code function, allowing efficient lookup. The process involves computing a key's hash code, mapping it to an array index, storing key-value pairs in linked lists at the corresponding index, and handling collisions, with an expected average lookup time of O(1) if collisions are minimized, and O(n) in the worst case where n is the number of keys, for many collisions.

## ArrayLists and Resizable Arrays
- In many languages arrays are resizable post initialisation.
- Some languages like Java have fixed length arrays that are predefined at initialisation.

An ArrayList is an array that resizes itself as needed, providing O(1) access.

## Making Our Own Implementations of StringBuilder, HashTable and ArrayList.

