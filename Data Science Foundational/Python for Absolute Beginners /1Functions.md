# Basic Python 

def function_name():
    print("Hello")

* strings are immutable
* list are mutable

- when we reassign list, then that is by reference
- list1 = [2,1,4,5]
- list2 = list1
- So now list2 is basically pointing to list1, not a copy of list1
- we can use deepcopy() of copy module to solve this problem


- All mutable datatypes are reassigned using reference
- All immutable datatypes are reassigned using copy

- A shallow copy creates a new array, but it does not create new copies of the elements within the array. Instead, it points to the same elements as the original array.
- A deep copy, on the other hand, creates a completely independent copy of both the array and its data. It does not share any data with the original array.


- Dictionary is unordered in python
- Dict is mutable

- Tuple are immutable
- Tuple takes less memory compared to list of same size


- Sets are unordered 


