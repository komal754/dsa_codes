#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void deleteNode(Node* node) {
    // Check if the node to be deleted is NULL or the last node.
    if (node == nullptr || node->next == nullptr) {
        return;
    }

    // Copy the data from the next node to the current node.
    node->data = node->next->data;

    // Point the current node's next to the next node's next.
    Node* temp = node->next;
    node->next = node->next->next;
    // Free the memory of the next node.
    delete temp;
}
/* 
Head -> 1 -> 2 -> 3 -> 4 -> 5
                       ^
                       |
                       Node to be deleted (node with value 3)

Head -> 1 -> 2 -> 4 -> 4 -> 5
                       ^
                       |
                   Node with copied value (now has value 4)


Head -> 1 -> 2 -> 4 -> 5
 */
