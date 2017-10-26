//
// Definition for binary tree:
// template<typename T>
// struct Tree {
//   Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
//   T value;
//   Tree *left;
//   Tree *right;
// };
//https://codefights.com/interview-practice/task/TG4tEMPnAc3PnzRCs
int subSum = 0;
bool hasPathWithGivenSum(Tree<int> * t, int s) {
    if(!t) return s == 0;
    bool re = 0;
    subSum += t->value;
    
    if(subSum == s && !t->left && !t->right)
    {
        return 1;
    }
    if(t->left)
    {
        re = re || hasPathWithGivenSum(t->left, s);
    }
    if(t->right)
    {
        re = re || hasPathWithGivenSum(t->right, s);
    }
    return re;
}