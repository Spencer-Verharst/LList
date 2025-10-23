
//*****************************************************************************************************
//
//		File:					Node.h
//
//		Student:				Spencer Verharst
//
//		Course Name:			Data Structures I
//
//		This program sets up the Node struct as a template.
//	
//		Other files required: 
//			1.	LList.h
//			2.  LDriver.cpp
//			
//*****************************************************************************************************

#ifndef NODE_H
#define NODE_H

//*****************************************************************************************************

template <typename TYPE>
struct Node
{
	TYPE data;
	Node<TYPE>* next;
	Node();
	Node(const TYPE& dat, Node<TYPE>* nex = nullptr);
};

//*****************************************************************************************************

template <typename TYPE>
Node<TYPE>::Node()
{
	data = 0;
	next = nullptr;
}

//*****************************************************************************************************

template <typename TYPE>
Node<TYPE>::Node(const TYPE& dat, Node<TYPE>* nex)
{
	data = dat;
	next = nex;
}

//*****************************************************************************************************


#endif
