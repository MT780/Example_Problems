//Just a simple binary tree to review how it works
//Also retrieves the smallest  value.
#include "BinarySearchTree.h"
//Default constructor that defaults root to NULL
BinarySearchTree::BinarySearchTree()
{
   root = NULL;
}

/*Inserts a value of type int within the binary tree
  @param value, is the value of the integer
*/
void BinarySearchTree::insert(int value)
{
   TreeNode* new_node = new TreeNode;

   new_node->value = value;
   new_node->left = NULL;
   new_node->right = NULL;

   if (root == NULL)
      root = new_node;
   else
      root->insert_node(new_node);
}

/*Erases the node that has the same value provided within the parameters
  @param value, is the value of the integer
  */
void BinarySearchTree::erase(int value)
{
   TreeNode* to_be_removed = root;
   TreeNode* parent = NULL;

   bool not_found = true;

   while (not_found && to_be_removed != NULL)
   {
      if (value < to_be_removed->value)
      {
         parent = to_be_removed;
         to_be_removed = to_be_removed->left;
      }

      else if (value > to_be_removed->value)
      {
         parent = to_be_removed;
         to_be_removed = to_be_removed->right;
      }

      else
         not_found = false;
   }

   if (not_found)
      return;

   if (to_be_removed->left == NULL || to_be_removed->right == NULL)
   {
      TreeNode* new_child;
      if (to_be_removed->left == NULL)
         new_child = to_be_removed->right;
      else
         new_child = to_be_removed->left;
      
      if (parent == NULL)
         root = new_child;
      else if (parent->left == to_be_removed)
         parent->left = new_child;
      else
      {
         parent->right = new_child;
         delete to_be_removed;
      }

      return;
   }

   TreeNode* smallest_parent = to_be_removed;
   TreeNode* smallest = to_be_removed->right;

   while (smallest->left != NULL)
   {
      smallest_parent = smallest;
      smallest = smallest->left;
   }

   to_be_removed->value = smallest->value;
   if (smallest_parent == to_be_removed)
      smallest_parent->right = smallest->right;
   else
      smallest_parent->left = smallest->right;
}

/*Prints the binary tree from least to greatest*/
void BinarySearchTree::print() const
{
   if (root != NULL)
      root->print_node();
   
   std::cout << "\n";
}

int BinarySearchTree::smallest()
{
   TreeNode* smallest = root;
   TreeNode* parent = NULL;

   while(smallest != NULL)
   {
      parent = smallest;
      smallest = smallest->left;
   }

   return parent->value;
}

/*Default constructor for a tree's node*/
TreeNode::TreeNode()
{
   value = 0;
   left = NULL;
   right = NULL;
}

/*inserts the node in the proper position of the binary tree
  @param new_node, is the node pointer containing the value, left pointer, and right pointer*/
void TreeNode::insert_node(TreeNode* new_node)
{
   if (new_node->value < value)
   {
      if (left == NULL)
         left = new_node;
      else 
         left->insert_node(new_node);
   }
   else if (new_node->value > value)
   {
      if (right == NULL)
         right = new_node;
      else
         right->insert_node(new_node);
   }
}

/*Portion of the print function that actually traverses the binary tree, and prints*/
void TreeNode::print_node() const
{
   if (left != NULL)
      left->print_node();

   std::cout << value << ", ";

   if (right != NULL)
      right->print_node();
}