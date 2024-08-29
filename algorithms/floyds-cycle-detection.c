// Robert W. Floyd's algorithm to detect cycles in a sequence of values.
struct Node {
    int data;
    struct Node *next;
};

int has_cycle(struct Node *head) {
    struct Node *slow = head, *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return 1;  // Cycle detected
        }
    }

    return 0;  // No cycle
}
