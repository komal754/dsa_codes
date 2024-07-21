#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    //  constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory free up for node with data " << value << endl;
    }
};
//& used bcz we dont wNT TO MAKE COPY

// insertion at starting
void InsertnodeatHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insertion at last
void InsertnodeatTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

// inset at positiont

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    Node *temp = head;

    // insertion at start node
    if (position == 1)
    {
        InsertnodeatHead(head, d);
        return;
    }
    int cnt = 1;
    // traversing
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insertion AT LAST
    if (temp->next == NULL)
    {
        InsertnodeatTail(tail, d);
        return;
    }

    // insertion in middle
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deleteNode(Node *&head, Node *&tail, int position)
{

    // delete start node or first
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free of start node:
        temp->next = NULL;
        delete temp;

        // if linked list is empty:
        if (head == NULL)
        {
            tail == NULL;
        }
    }

    else
    {
        // deleting middle
        Node *curr = head;
        Node *temp = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            temp = curr;
            curr = curr->next;
            cnt++;
        }

        // for last node
        temp->next = curr->next;
        curr->next = NULL;
        tail = temp;
        delete curr;
    }
}
Node *revereseNode(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (curr != NULL)
    {
        Node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    cout << "reversed list" << endl;
    head = prev;
    return prev;
}

int print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}
Node *middleElement(Node *head)
{
    Node *temp = head;
    int len = getLength(head);
    int ans = len / 2;
    while (ans--)
    {
        temp = temp->next;
    }
    return temp;
}

// check for loop

bool floydDetectLoop(Node *head)
{
    // If head is already NULL, then it is the circular linked list
    // with length zero.
    if (head == NULL)
    {
        return true;
    }

    if (head->next == NULL)
    {
        return false;
    }

    Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }

    if (slow == fast && slow == head)
    {
        return true;
    }

    return false;
}

// node where the slow and fast pointers
Node *floydCyclepresent(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "cycle present at" << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = floydCyclepresent(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

//for remkoving the loop
void removeLoop(Node* head){
    if(head==NULL){
        return;
    }
    Node* startofloop=getStartingNode(head);
    Node* temp=startofloop;
    while(temp->next!=startofloop){
        temp=temp->next;
    }
temp->next=NULL;
}

/* bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
} */

int main()
{
    Node *node1 = new Node(10);
    /*     cout << node1->data << endl;
        cout << node1->next << endl; */
    Node *head = node1;
    Node *tail = node1;
    // print(head);
    cout << endl;
    // InsertnodeatHead(head, 10);
 /*    InsertnodeatTail(tail, 22);
    InsertnodeatTail(tail, 30);
    InsertnodeatTail(tail, 40);
    InsertnodeatTail(tail, 100);
    InsertnodeatTail(tail, 110); */
    InsertnodeatTail(tail, 12);
    InsertnodeatTail(tail, 15);
    insertAtPosition(tail, head, 4, 22);

    // print(head);
    /* deleteNode(head,tail,3);
    // print(head);
    deleteNode(head,tail,1);
    // print(head);
    cout<<endl; */
    cout << "nodes in linked list: " << endl;
    print(head);
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    cout << endl;
/*     deleteNode(head, tail, 3);
    print(head); */

    // finding middle element
    cout << endl;
    Node *mid = middleElement(head);
    if (mid != NULL)
    {
        cout << "Middle element: " << mid->data << endl;
    }
    else
    {
        cout << "List is empty" << endl;
    }

    // reversing
    cout << endl;
    /*     revereseNode(head);
        print(head);
        cout << endl; */

    // creating loop
    tail->next = head->next;
    if (floydDetectLoop(head))
    {
        cout << "Loop present" << endl;
    }
    else
    {
        cout << "Loop not present" << endl;
    }

    Node *loop = getStartingNode(head);
    if (loop != NULL)
    {
        cout << "Loop starting at: " << loop->data << endl;
    }
    else
    {
        cout << "No loop detected" << endl;
    }

removeLoop(head);
print(head);
    return 0;
}
