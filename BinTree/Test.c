#pragma once
#include "bintree.c"

#include<stdio.h>
#include <windows.h>

int main()
{
	TestPreOrder();
	TestInOrder();
	TestPostOrder();
	TestBTSize();
	TestGetLeafCount();
	TestGetKLevalCount();
	TestBTDepth();
	TestBTFind();
	system("pause");
	return 0;
}