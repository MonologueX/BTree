#pragma once
#include "bintree.h"

#include<stdio.h>
#include <windows.h>

int main()
{
	TestPreOrder();
	TestPreOrderNor();
	TestInOrder();
	TestInOrderNor();
	TestPostOrder();
	TestPostOrderNor();
	TestBTSize();
	TestGetLeafCount();
	TestGetKLevalCount();
	TestBTDepth();
	TestBTFind();
	TestLevelOrder();
	TestBTreeIsComplete1();
	TestBTreeIsComplete2();
	system("pause");
	return 0;
}