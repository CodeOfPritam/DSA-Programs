#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int key;
    int val;
    Node* prev;
    Node* next;

    Node(int k, int v) {
        key = k;
        val = v;
        prev = nullptr;
        next = nullptr;
    }
};

class LRUCache {
    unordered_map<int, Node*> m;
    int limit;
    Node* head;
    Node* tail;

public:
    LRUCache(int capacity) {
        limit = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node* newNode) {
        Node* oldNext = head->next;
        head->next = newNode;
        newNode->prev = head;
        newNode->next = oldNext;
        oldNext->prev = newNode;
    }

    void delNode(Node* oldNode) {
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;
        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    int get(int key) {
        if (m.find(key) == m.end()) {
            return -1;
        }
        Node* ansNode = m[key];
        int ans = ansNode->val;

        m.erase(key);
        delNode(ansNode);

        addNode(ansNode);
        m[key] = ansNode;

        return ans;
    }

    void put(int key, int val) {
        if (m.find(key) != m.end()) {
            Node* oldNode = m[key];
            m.erase(key);
            delNode(oldNode);
        }

        if (m.size() == limit) {
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }

        Node* newNode = new Node(key, val);
        addNode(newNode);
        m[key] = newNode;
    }
};

int main() {
    LRUCache cache(2); // capacity = 2

    cache.put(1, 10);
    cache.put(2, 20);
    cout << cache.get(1) << endl; // returns 10

    cache.put(3, 30); // evicts key 2
    cout << cache.get(2) << endl; // returns -1 (not found)

    cache.put(4, 40); // evicts key 1
    cout << cache.get(1) << endl; // returns -1 (not found)
    cout << cache.get(3) << endl; // returns 30
    cout << cache.get(4) << endl; // returns 40

    return 0;
}
