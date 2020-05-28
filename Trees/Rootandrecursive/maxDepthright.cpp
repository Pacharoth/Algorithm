#include <iostream>

struct element{
    int data;
    element *right;
    element *left;
};
typedef struct element element;

//create new Element
element *newElement(int newdata)
{
    element *Element;
    Element = new element();
    Element->data = newdata;
    Element->right = NULL;
    Element->left = NULL;
    return (Element);
}

int maxDepth(element *element)
{
    if (element == NULL)
        return 0;
    else
    {
        int lDepth = maxDepth(element->left);
        int rDepth = maxDepth(element->right);
        if(rDepth>lDepth)
            return (rDepth+1);
        else return (lDepth+1);
    }
}
int main(int argc, char const *argv[]) {
    element *root = newElement(1);
    root->left = newElement(2);
    root->right = newElement(3);
    root->right->left = newElement(4);
    root->right->right   = newElement(5);
    std::cout<<"The maximum height of the tree is "<<maxDepth(root)<<std::endl;


    return 0;
}
