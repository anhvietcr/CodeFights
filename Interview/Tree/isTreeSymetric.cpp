//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
//https://codefights.com/interview-practice/task/tXN6wQsTknDT6bNrf/solutions
bool isMirror(Tree<int> *t1, Tree<int> *t2)
{
    if(!t1 && !t2) return true;
    if(t1 && t2 && t1->value == t2->value)
        return isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
    return false;
}
bool isTreeSymmetric(Tree<int> * t) {
    return isMirror(t, t);
}