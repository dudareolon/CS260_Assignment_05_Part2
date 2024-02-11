# CS260_Assignment_05_Part2
Eduarda Reolon - Auto-sorting list operations

Description: This program creates a linked-list that inserts integer values in ascending order and that can search for elements in the list. 

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Design: There will be 4 files in my program:

1- node.h: define what the node struct is. Each node has two slots, one for the data that it holds and another for the address of the next node in the list

![image](https://github.com/dudareolon/CS260_Assignment_05_Part2/assets/102680672/7f59fce5-7c85-4e10-ab0d-40eb132595de)

2- autosort_linked_list.h: define what the class list is, this file will be taken from the in-class exercise. Defines what makes a linked list, and what of its information is private or public.

3- autosort_linked_list.cpp: actual code for the behavior of the linked list. This will include 3 functions:

- insert(): insert the integer in the list in an ascending format;

- search(): will search for a specific value in the list. To do binary search you need to be able to randomly access elements on the list, this is not applicable to a linked list, because linked lists do not have an index on their elements, they simply have an address that points to the next node. For this search function I will have to use a more expensive and time consuming method which is to traverse the list from the begining/head of the list until it reaches the value I am searching for or the end of the list. 

- toString(): turns the linked list into a string, this does not change the functionability of my code, but it will be extremely necessary for testing purposes. 

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

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Complexity Analysis:
