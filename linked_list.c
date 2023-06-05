// Define the Node structure
struct Node {
    int data;               // Data element
    struct Node* next;      // Pointer to the next node
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Add a node to the linked list
struct Node* addToLinkedList(struct Node* head, int data) {
    // If the list is empty, assign a new node address to head
    if (head == NULL) {
        head = createNode(data);
    } else {
        // Else, add new node at the end
        struct Node* temp = head;
        // Go to the end of the list
        while (temp->next != NULL) {
            temp = temp->next;
        }
        // Link the last node with new node
        temp->next = createNode(data);
    }
    return head;
}
