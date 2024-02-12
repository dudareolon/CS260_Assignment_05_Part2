// Code modified from a conversation with ChatGPT

#include <iostream>
#include <sstream>
#include <string>

#include "autosort_linked_list.h"
#include "node.h"

using std::cout;
using std::endl;
using std::string;

// define the list class
list::list() {
    head = nullptr;
}

// this function inserts the value in the linked list in ascending value
void list::insert(int value) {
    // create a new node with the given data
    node *new_node = new node;
    new_node->data = value;
    new_node->next = nullptr;

    // if head is null, then our list is empty and we need to set that node to head
    // also if the head data is bigger or equal to the data we are trying to input, then the new data becomes the head
    if(head == nullptr || head->data >= value) {
        new_node -> next = head;
        head = new_node;
    } else {
        // if data is less than head, insert at the beginning of the list
        if (value < head->data) {
            new_node->next = head;
            head = new_node;
        } else {
            // find the node where node->next->data is greater than new data, so that we can insert after that position
            node *iteration_pointer = head;

            //iteration_plus_one = iteration_pointer -> next; //if the iteration pointer is pointing to the second element on the list, this is the address of the third element

            while (iteration_pointer->next != nullptr && iteration_pointer->next->data < value) {
                iteration_pointer = iteration_pointer->next;
            }

            // insert the new node at the position
            new_node->next = iteration_pointer->next;
            iteration_pointer->next = new_node;
        }
    }
}

// this function turns the linked list into a string that includes the data of all the nodes of the list in the sequence they are located in the list
string list::to_string() {

    // stringstream is a stream class defined in the sstream included on the beginning of this file
    // strings only store data but with stringstreams the programmer has the ability to manipulate the data in the string
    std::stringstream result_string_stream;

    // check if the list is empty
    if(head == nullptr){ //if head is the last node of the list, last node points to nullptr
        result_string_stream << "[empty list]";
    } else {
        
        // start the iteration at the head/beginning of the list
        node *iteration_pointer = head;

        result_string_stream << "["; // springstreams allow you to add different values to the string variable and compose it on multiple code lines
        while (iteration_pointer != nullptr) { // until it reaches the end of the list
            result_string_stream << iteration_pointer->data; // more data is added to the string
            if(iteration_pointer->next != nullptr) { // if iteration reaches end of list then it would not need the comma
                result_string_stream << ", ";
            }
            iteration_pointer = iteration_pointer->next; // equivalent to ++i
        }
        result_string_stream << "]";
    }

    // str() is a function of the stringstream class that turns the stringstream into a normal string of the ones we are used to working
    // C++ is not capable of returning a stringstream
    return result_string_stream.str();
}


// this function searches for a specific value in the list
// you can't do binary search with linked lists so I had to a more costly option which is to traverse the entire list in the search of the value
int list::search(int value){

    // check if the list is empty
    if(head == nullptr){ //if head is the last node of the list, last node points to nullptr
        cout << "the value you searched is not in the list because the list is empty" << endl;
        return 0;
    } else {
        node *iteration_pointer = head; 

        while (iteration_pointer != nullptr) {
            if (iteration_pointer->data == value){
                return value;
            }
            iteration_pointer = iteration_pointer->next;
        }
        
        cout << "The number " << value << " is not in the list or it is not a positive integer" << endl ; 
        return 0;
    }
}