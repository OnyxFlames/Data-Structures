#pragma once
#include <iostream>
#include <stack>
#include <string>

class BinaryTree
{
public:
	struct Node
	{
		int64_t value = 0;
		Node *left, *right;
		Node()
		{ }
	};
private:
	Node* root = nullptr;
	// traversal methods
	void pre_order_traversal(Node* node)
	{
		if (node != nullptr)
		{
			std::cout << node->value << " ";
			pre_order_traversal(node->left);
			pre_order_traversal(node->right);
		}
	}
	void inorder_traversal(Node* node)
	{
		if (node != nullptr)
		{
			inorder_traversal(node->left);
			std::cout << node->value << " ";
			inorder_traversal(node->right);
		}
	}
	void post_order_traversal(Node* node)
	{
		if (node != nullptr)
		{
			post_order_traversal(node->left);
			post_order_traversal(node->right);
			std::cout << node->value << " ";
		}
	}
	std::stack<Node*> free_stack;
public:
	BinaryTree()
	{ }
	~BinaryTree()
	{
		// This is until we can safely traverse the tree to delete everything properly
		while (!free_stack.empty())
		{
			delete free_stack.top();
			free_stack.pop();
		}
	}
	void insert(int64_t data)
	{
		Node* temp = new Node();
		temp->left = nullptr;
		temp->right = nullptr;
		temp->value = data;

		free_stack.push(temp);

		Node *current, *parent;


		if (root == nullptr)
		{
			root = temp;
		}
		else
		{
			current = root;
			parent = nullptr;

			while (true)
			{
				parent = current;
				// Data is smaller than node, so left side
				if (data < parent->value)
				{
					current = current->left;

					if (current == nullptr)
					{
						parent->left = temp;
						return;
					}
				}
				// Data is larger than node, place on right
				else
				{
					current = current->right;

					if (current == nullptr)
					{
						parent->right = temp;
						return;
					}
				}
			}
		}
	}
	template<typename T>
	Node* search(int64_t data)
	{
		Node *current = root;

		while (current->value != data)
		{
			// explore left branch
			if (current->value > data)
				current = current->left;
			// explore right branch
			else
				current = current->right;

			// not found
			if (current == nullptr)
				return nullptr;
		}
		return nullptr;
	}
	void list()
	{
		pre_order_traversal(root);
		std::cout << '\n' << std::string(16, '-') << '\n';
		inorder_traversal(root);
		std::cout << '\n' << std::string(16, '-') << '\n';
		post_order_traversal(root);
	}
};
