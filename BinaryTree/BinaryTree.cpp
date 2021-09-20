#include <iostream>
#include "BinaryNode.h"

int main()
{

	auto* bt = new BinaryNode<int>({5,3,7,6,9,5,5,2,4,3});

	
	bt->PostOrder();
	std::cout << std::endl << std::endl << std::endl;
	bt->PostOrderIterative();
}

