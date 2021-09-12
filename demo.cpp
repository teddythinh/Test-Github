// AVL Tree
#include <iostream>
#include <queue>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct Node {
    float key;
    Node* left;
    Node* right;
};

void LeftRotate(Node* &pRoot) {
    Node* p = pRoot->right;
    pRoot->right = p->left;
    p->left = pRoot;
    pRoot = p;
}

void RightRotate(Node* &pRoot) {
    Node* p = pRoot->left;
    pRoot->left = p->right;
    p->right = pRoot;
    pRoot = p;
}

Node* createNode(float value) {
    Node* p = new Node;
    p->key = value;
    p->left = NULL;
    p->right = NULL;
    return p;
}

int Height(Node* pRoot) {
    if (pRoot == NULL) return 0;
    return max(Height(pRoot->left), Height(pRoot->right)) + 1;
}

void rebalanced(Node* &pRoot) {
    int bal = Height(pRoot->left) - Height(pRoot->right);
    if (bal > 1) {
        if (Height(pRoot->left->left) >= Height(pRoot->left->right)) {
            RightRotate(pRoot);
        }
        else {
            LeftRotate(pRoot->left);
            RightRotate(pRoot);
        }
    }
    else if (bal < -1) {
        if (Height(pRoot->right->right) >= Height(pRoot->right->left)) {
            LeftRotate(pRoot);
        }
        else {
            RightRotate(pRoot->right);
            LeftRotate(pRoot);
        }
    }
}

void Insert(Node* &pRoot, float x) {
    if (pRoot == NULL) {
        pRoot = createNode(x);
    }
    if (pRoot->key == x) return;
    if (pRoot->key < x) Insert(pRoot->right, x);
    if (pRoot->key > x) Insert(pRoot->left, x);
    rebalanced(pRoot);
}

void Remove(Node* &pRoot, float x) {
    if (pRoot == NULL) return;
    else if (pRoot->key < x) Remove(pRoot->right, x);
    else if (pRoot->key > x) Remove(pRoot->left, x);
    else {
        if (pRoot->left == NULL && pRoot->right == NULL) {
            delete pRoot;
            pRoot = NULL;
        }
        else if (pRoot->left != NULL && pRoot->right == NULL) {
            Node* p = pRoot;
            pRoot = pRoot->left;
            delete p;
        }
        else if (pRoot->left == NULL && pRoot->right != NULL) {
            Node* p = pRoot;
            pRoot = pRoot->right;
            delete p;
        }
        else {
            Node* p = pRoot->right;
            while (p->left != NULL) p = p->left;
            pRoot->key = p->key;
            Remove(pRoot->right, pRoot->key);
        }
    }
    if (pRoot == NULL) return;
    rebalanced(pRoot);
}

Node* createTree(float a[], int n) {
    Node* p = NULL;
    for (int i = 0; i < n; i++) {
        Insert(p, a[i]);
    }
    return p;
}

void LevelOrder(Node* pRoot) {
    if (pRoot == NULL) return;
    queue<Node*> q;
    q.push(pRoot);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        if (temp->left != NULL) q.push(temp->left);
        if (temp->right != NULL) q.push(temp->right);
        cout << temp->key << " ";
    }
}

void Insert_BST(Node* &pRoot, int x) {
    if (pRoot == NULL) {
        pRoot = createNode(x);
        return;
    }
    if (pRoot->key == x) return;
    if (pRoot->key < x) Insert_BST(pRoot->right, x);
    if (pRoot->key > x) Insert_BST(pRoot->left, x);
}

Node* createBST(vector<int> a) {
    Node* p = NULL;
    for (int i = 0; i < a.size(); i++) {
        Insert_BST(p, a[i]);
    }
    return p;
}

float findMin(Node* pRoot) {
    if (pRoot == NULL) return 1000000;
    return min(min(findMin(pRoot->left), findMin(pRoot->right)), pRoot->key);
}

float findMax(Node* pRoot) {
    if (pRoot == NULL) return -1000000;
    return max(max(findMax(pRoot->left), findMax(pRoot->right)), pRoot->key);
}

bool isBST(Node* pRoot) {
    if (pRoot == NULL) return true;
    if (pRoot->key < findMin(pRoot->right) && pRoot->key > findMax(pRoot->left))
        return isBST(pRoot->left) && isBST(pRoot->right);
    return false;
}

bool isAVL(Node* pRoot) {
    if (pRoot == NULL) return true;
    int h = Height(pRoot->left) - Height(pRoot->right);
    return (-1 <= h) && (h <= 1) && isBST(pRoot) && isAVL(pRoot->left) && isAVL(pRoot->right);
}

int main() {
    ifstream fin("input.txt");
    int n;
    fin >> n;
    float* a = new float[n];
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }
    Node* pRoot = createTree(a, n);
    LevelOrder(pRoot);
    cout << endl;
    string l3, l4, ans;
    getline(fin, l3);
    getline(fin, l3);
    stringstream p(l3);
    float x;
    while (getline(p, ans, ' ')) {
        x = stof(ans);
        Remove(pRoot, x);
    }
    LevelOrder(pRoot);
    cout << endl;
    delete[] a;
    vector<int> arr;
    getline(fin, l4);
    stringstream p1(l4);
    int k;
    while (getline(p1, ans, ' ')) {
        k = stoi(ans);
        arr.push_back(k);
    }
    Node* bstTree = createBST(arr);
    if (isAVL(bstTree)) cout << "1";
    else cout << "0";
    fin.close();
    return 0;
}

//Code from TeddyThinh
