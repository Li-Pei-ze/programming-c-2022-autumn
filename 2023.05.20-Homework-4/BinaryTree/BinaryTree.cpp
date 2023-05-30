// BinaryTree.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

template<typename T = int>
class BinaryTree
{

private:

	struct BinaryNode
	{
		T element;
		BinaryNode* leftNode;
		BinaryNode* rightNode;
		BinaryNode(const T& ele, BinaryNode* left, BinaryNode* right)
			: element(ele), leftNode(left), rightNode(right) {};

		BinaryNode(const T& ele)
			: element(ele), leftNode(nullptr), rightNode(nullptr) {};

		BinaryNode(const BinaryNode* bNode)
			: element(bNode->element), leftNode(bNode->leftNode), rightNode(bNode->rightNode)
		{
		}

	};

	BinaryNode* root;
	BinaryNode* clone(const BinaryNode* bNode);
	void insert(const T& theElement, BinaryNode*& t);
	void remove(const T& theElement, BinaryNode*& t);
	void makeEmpty(BinaryNode*& t);
	bool isFind(const T& theElement, BinaryNode* t)  const;
	BinaryNode* findMin(BinaryNode* bNode) const;
	BinaryNode* findMax(BinaryNode* bNode) const;
	void preOrder(BinaryNode* bNode) const;
	void inOrder(BinaryNode* bNode) const;
	void postOrder(BinaryNode* bNode) const;
public:
	BinaryTree() = default;
	BinaryTree(const BinaryTree& bt);
	BinaryTree(const T& theElement);

	~BinaryTree();

	void insert(const T& theElement);
	void remove(const T& theElement);
	void makeEmpty();
	bool isFind(const T& theElement)  const;
	void preOrder() const;
	void inOrder() const;
	void postOrder() const;

	friend void putput(ostream &stream, BinaryNode* bNode)
	{
		if (nullptr != bNode)
		{
			putput(stream, bNode->leftNode);
			stream << bNode->element << " ";
			putput(stream, bNode->rightNode);
		}
	}
	friend ostream& operator <<(ostream &stream, BinaryTree& Tree)
	{
		putput(stream, Tree.root);
		return stream;
	}
};

template <typename T>
BinaryTree<T>::BinaryTree(const BinaryTree& bt)
{
	if (nullptr != bt.root)
	{
		this->root = clone(bt.root);
	}
	else
	{
		root = nullptr;
	}

};

template <typename T>
BinaryTree<T>::BinaryTree(const T& theElement)
{
	root = new BinaryNode(theElement);
}

template <typename T>
BinaryTree<T>::~BinaryTree()
{
	makeEmpty();
};

template <typename T>
void BinaryTree<T>::insert(const T& theElement)
{
	insert(theElement, root);
};

template <typename T>
void BinaryTree<T>::remove(const T& theElement)
{
	remove(theElement, root);
};

template <typename T>
void BinaryTree<T>::makeEmpty()
{
	makeEmpty(root);
};

template <typename T>
bool BinaryTree<T>::isFind(const T& theElement) const
{
	isFind(theElement, root);
};

template <typename T>
void BinaryTree<T>::preOrder() const
{
	preOrder(root);
};

template <typename T>
void BinaryTree<T>::inOrder() const
{
	inOrder(root);
};


template <typename T>
void BinaryTree<T>::postOrder() const
{
	postOrder(root);
};


template <typename T>
typename BinaryTree<T>::BinaryNode* BinaryTree<T>::clone(const BinaryNode* r)
{
	if (nullptr == r)
	{
		return nullptr;
	}
	else
	{
		return  new BinaryNode(r->element, clone(r->leftNode), clone(r->rightNode));
	}
}

template <typename T>
void BinaryTree<T>::insert(const T& theElement, BinaryNode*& t)
{
	if (nullptr == t)
	{
		t = new BinaryNode(theElement);
	}
	else if (theElement < t->element)
	{
		insert(theElement, t->leftNode);
	}
	else if (theElement > t->element)
	{
		insert(theElement, t->rightNode);
	}
};

template <typename T>
void BinaryTree<T>::remove(const T& theElement, BinaryNode*& t)
{
	if (nullptr == t)
	{
		return;
	}
	else
	{
		if (theElement < t->element)
		{
			remove(t->leftNode);
		}
		else if (theElement > t->element)
		{
			remove(t->rightNode);
		}
		else if (nullptr != t->leftNode && nullptr != t->rightNode)
		{

			t->element = findMin(t->rightNode)->element;
			remove(t->element, t->rightNode);
		}
		else
		{
			BinaryNode* oldNode = t;
			t = (nullptr != t->leftNode) ? t->leftNode : t->rightNode;
			delete oldNode;
		}
	}
};

template <typename T>
void BinaryTree<T>::makeEmpty(BinaryNode*& t)
{
	if (nullptr != t)
	{
		makeEmpty(t->leftNode);
		makeEmpty(t->rightNode);
		std::cout << "delete: " << t->element << std::endl;
		delete t;
	}
	t = nullptr;
};

template <typename T>
bool BinaryTree<T>::isFind(const T& theElement, BinaryNode* t) const
{
	if (nullptr == t)
	{
		return false;
	}
	else if (theElement < t->element)
	{
		return isFind(theElement, t->leftNode);
	}
	else if (theElement > t->element)
	{
		return isFind(theElement, t->rightNode);
	}
	else
	{
		return true;
	}
};


template <typename T>
typename BinaryTree<T>::BinaryNode* BinaryTree<T>::findMin(BinaryNode* bNode) const
{
	if (nullptr != bNode)
	{
		while (nullptr != bNode->leftNode)
		{
			bNode = bNode->leftNode;
		}
	}
	return bNode;
}

template <typename T>
typename BinaryTree<T>::BinaryNode* BinaryTree<T>::findMax(BinaryNode* bNode) const
{
	if (nullptr != bNode)
	{
		while (nullptr != bNode->rightNode)
		{
			bNode = bNode->rightNode;
		}
	}
	return bNode;
}


template <typename T>
void BinaryTree<T>::preOrder(BinaryNode* bNode) const
{
	if (nullptr != bNode)
	{
		std::cout << bNode->element << " ";
		preOrder(bNode->leftNode);
		preOrder(bNode->rightNode);
	}
};

template <typename T>
void BinaryTree<T>::inOrder(BinaryNode* bNode) const
{
	if (nullptr != bNode)
	{
		inOrder(bNode->leftNode);
		std::cout << bNode->element << " ";
		inOrder(bNode->rightNode);
	}
};

template <typename T>
void BinaryTree<T>::postOrder(BinaryNode* bNode) const
{
	postOrder(bNode->leftNode);
	postOrder(bNode->rightNode);
	std::cout << bNode->element << " ";
};

int main(int argc, char** argv)
{

	BinaryTree<int> bTree(5);
	bTree.insert(1);
	bTree.insert(3);
	bTree.insert(4);
	bTree.insert(6);
	bTree.insert(4);
	bTree.insert(2);
	bTree.preOrder();
	std::cout << bTree;
	return 0;
}
