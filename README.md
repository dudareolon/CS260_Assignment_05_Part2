# CS260_Assignment_05_Part2
Eduarda Reolon - Auto-sorting list operations

Description: This program creates a linked-list that inserts integer values in ascending order and that can search for elements in the list. 

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Design: There will be 4 files in my program:

1- node.h: define what the node struct is. Each node has two slots, one for the data that it holds and another for the address of the next node in the list

![image](https://github.com/dudareolon/CS260_Assignment_05_Part2/assets/102680672/7f59fce5-7c85-4e10-ab0d-40eb132595de)

2- autosort_linked_list.h: define what the class list is, this file will be taken from the in-class exercise. Defines what makes a linked list, and what of its information is private or public.

3- autosort_linked_list.cpp: actual code for the behavior of the linked list. This will include 3 functions:

- insert(int value): insert the integer in the list in an ascending format;

- search(int value): will search for a specific value in the list. To do binary search you need to be able to randomly access elements on the list, this is not applicable to a linked list, because linked lists do not have an index on their elements, they simply have an address that points to the next node. For this search function I will have to use a more expensive and time consuming method which is to traverse the list from the begining/head of the list until it reaches the value I am searching for or the end of the list. 

- to_string(): turns the linked list into a string, this does not change the functionability of my code, but it will be extremely necessary for testing purposes. 

4- testing_autosort_linked_list.cpp: this file will run the tests on my program to make sure it is correctly running. The tests I will perform are:

- test_autosort_list_constructor()
- test_autosort_list_insert_first_node()
- test_autosort_list_insert_second_node()
- test_autosort_list_insert_node_after_end()
- test_autosort_list_insert_node_with_same_value_as_head()
- test_autosort_list_insert_node_before_head()
- test_autosort_list_insert_node_in_middle_of_list()

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Requirements:

1- automatically inserts values in the correct position based on some order of sorting (perhaps ascending integers or lexicographical sorting of words):

![image](https://github.com/dudareolon/CS260_Assignment_05_Part2/assets/102680672/47ab637c-b3ba-469b-bb9c-349540f2cbf6)



2- efficiently searches for elements (likely binary search for the array list, but what about the linked-list?):

![image](https://github.com/dudareolon/CS260_Assignment_05_Part2/assets/102680672/2372195b-6400-4f06-b56a-5427abb2fd4e)


------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Complexity Analysis:

Insert function:
  The part of the code where a new node is created is a constant time operation and can be considered a O(1).
  The part of the code that traverses through the list to find the correct position to insert the new node, in the best case scenario is a O(1) since it would only run once, but in the worst case scenario (which is the one I am considering that will most likely happen) is that the iteration will happen for the entire linked list and that would fit into the O(n) notation.

Search function:
  The search function also does the same as the insert function in which it traverses the entire linked list. By traversing I mean that it goes node by node of the linked list looking for a value. If we are searchign for the first value of the list than the complexity would simply be O(1) since it would run the iteration only once. However, that is not the case most of the times, so like on the previous function I will consider the worst case scenario which is to iterate the entire list and that would be an O(n) complexity. 


Here is a chart to make it clearer: 

![image](https://github.com/dudareolon/CS260_Assignment_05_Part2/assets/102680672/9f6da01f-85db-4cb2-b5c3-6d7e53a20e24)



