class LRUCache {
public:
    class Node{
        public:
            int key, val;
            Node* prev;
            Node* next;
            Node(int k, int v){
                key = k;
                val = v;
                prev = next = NULL;
            }
    };
    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    unordered_map<int, Node*> m;
    int limit;
    void delNode(Node* oldNode){
        Node* tempPrev = oldNode->prev;
        Node* tempNext = oldNode->next;
        tempPrev->next = tempNext;
        tempNext->prev = tempPrev;
    }
    void addNode(Node* newNode){
        Node* temp = head->next;
        head->next = newNode;
        temp->prev = newNode;
        newNode->next = temp;
        newNode->prev = head;
    }
    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }
    int get(int key) {
        if(m.find(key)==m.end()) return -1;

        int ans = m[key]->val;
        Node* ansNode = m[key];

        m.erase(key);
        delNode(ansNode);

        addNode(ansNode);
        m[key] = ansNode;

        return ans;
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            Node* oldNode = m[key];
            delNode(oldNode);
            m.erase(key);
            delete oldNode;
        }
        if(m.size()==limit){
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }
        Node* newNode = new Node(key, value);
        addNode(newNode);
        m[key]=newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */