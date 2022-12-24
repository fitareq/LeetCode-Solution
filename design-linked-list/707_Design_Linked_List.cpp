 class Node{
    public:
    int val;
    Node* next;
    Node(int x): val(x), next(NULL){}
};

class MyLinkedList {
public:
Node* head;
int size;
    MyLinkedList():head(NULL), size(0){}
    
    int get(int index) {
        if(index>=size || index<0) return -1;
        
        Node* current = head;
        for(int i = 0; i < index; i++){
            current = current->next;
        }
        return current->val;
    }
    
    void addAtHead(int val) {
        addAtIndex(0, val);
    }
    
    void addAtTail(int val) {
        addAtIndex(size, val);
    }
    
    void addAtIndex(int index, int val) {
        if(index>size || index<0) return;
        
        Node* current = head;
        Node* newNode = new Node(val);
        if(index == 0){
            newNode->next = current;
            head = newNode;
        }else{
            for(int i = 0; i<index-1; i++){
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
        ++size;
    }
    
    void deleteAtIndex(int index) {
    if(index>=size || index<0) return;
    
    if(index == 0){
        Node* nextNode = head->next;
        delete head;
        head = nextNode;
    }else
    {
        Node* current = head;
        for(int i = 0; i<index-1; i++){
            current = current->next;
        }
        Node* nextNode = current->next->next;
        delete current->next;
        current->next = nextNode;
    }
    --size;
    }
};
