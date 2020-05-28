#include<iostream>

/*we want to find the maximum height of the tree
 to do that we have to check node if empty so return to 0
 otherwise which one bigger plus one to check the tree*/

struct element{
    int data;
    element* right;
    element*  left;
};
typedef struct node node;

//create empty node
element* newElement(int newData)
{
    element* tmp;
    tmp = new element();
    tmp->data = newData;
    tmp->right = NULL;
    tmp->left = NULL;
    return (tmp);
}

int maxDepth(element* element)
{
    if (element == NULL)
        return 0;
    else
    {
        //we start compute the depth
        int lDepth = maxDepth(element->left);
        int rDepth = maxDepth(element->right);
        if (rDepth<lDepth)
            return (lDepth+1);
        else return (rDepth+1);
    }
}
int main(int argc, char const *argv[]) {
    element *root = newElement(1);
    root->left = newElement(2);
    root->right = newElement(3);
    root->left->left= newElement(4);
    root->left->left = newElement(5);
    root->left->left->left = newElement(6);
    root->left->left->right = newElement(7);
    std::cout<<"The maximum of the height: "<<maxDepth(root)<<std::endl;

    return 0;
}
