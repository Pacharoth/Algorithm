#include<iostream>

/* mostly we create root and recursive function with extra
 parameters, when case tree depth*/
//big O
// to do that we start create node
struct node
{
    struct node *next;      //so we have next to point to child
    struct node *child;     //child for the tree
    std::string data;       //data to store value
};

void printtree_r(struct node *node, int depth)
{
    int i;

    while (node)
    {
        if (node->child) {
            for (int i = 0; i < depth*3; i++)   //as we initialize we start to make
                std::cout<<" "<<std::endl;      //or ptint { to make them like a tree
            std::cout<<"{"<<std::endl;
            printtree_r(node->child, depth +1);
            for (int i = 0; i < depth*3; i++)
                std::cout<<" "<<std::endl;
            std::cout<<"}"<<std::endl;
            for (int i = 0; i < depth*3; i++)
                std::cout<<" "<<std::endl;
            std::cout<<node->data.c_str();      //convert to the characyer of the string
            node = node->next;
        }
    }
}

void printtree(node *root)
{
    printtree_r(root, 20);
}

int main(int argc, char const *argv[]) {
    node *root;
    printtree(root);
    return 0;
}
