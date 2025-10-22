//*****************************************************************************************************
//
//		File:					LList.h
//
//		Student:				Spencer Verharst
//
//		Assignment:				Program #05
//
//		Course Name:			Data Structures I
//
//		Course Number:			COSC 3050-Z1
//
//		This program is the driver for the LList class.
//	
//		Other files required: 
//			1.	LList.h
// 			2.  Node.h
//			
//*****************************************************************************************************

#include <iostream>
using namespace std;
#include "LList.h"

//*****************************************************************************************************

int main()
{
	LList<double> doubleList;

	cout << "To an empty list..." << endl;
	if (doubleList.insert(2.2))
	{
		doubleList.display();
		cout << endl << "The numValues is " << doubleList.getNumValues()
			<< "\t the number inserted was 2.2" << endl << endl;
	}
	else
	{
		cout << "Unable to insert 2.2";
	}

	cout << "To a new front..." << endl;
	if (doubleList.insert(1.1))
	{
		doubleList.display();
		cout << endl << "The numValues is " << doubleList.getNumValues()
			<< "\t the number inserted was 1.1" << endl << endl;
	}
	else
	{
		cout << "Unable to insert 1.1";
	}


	cout << "To a new back..." << endl;
	if (doubleList.insert(5.5))
	{
		doubleList.display();
		cout << endl << "The numValues is " << doubleList.getNumValues()
			<< "\t the number inserted was 5.5" << endl << endl;
	}
	else
	{
		cout << "Unable to insert 5.5";
	}

	cout << "To the middle..." << endl;
	if (doubleList.insert(3.1))
	{
		doubleList.display();
		cout << endl << "The numValues is " << doubleList.getNumValues()
			<< "\t the number inserted was 3.1" << endl << endl;
	}
	else
	{
		cout << "Unable to insert 3.1";
	}

	cout << "retrive front..." << endl;
	double retrieveTest1 = 1.1;
	if (doubleList.retrieve(retrieveTest1))
	{
		doubleList.display();
		cout << endl << "the number retrived from front is: " << retrieveTest1 << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve " << retrieveTest1;
	}

	cout << "retrive middle..." << endl;
	double retrieveTest2 = 3.1;
	if (doubleList.retrieve(retrieveTest2))
	{
		doubleList.display();
		cout << endl << "the number retrived from middle is: " << retrieveTest2 << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve " << retrieveTest2;
	}

	cout << "retrive back..." << endl;
	double retrieveTest3 = 5.5;
	if (doubleList.retrieve(retrieveTest3))
	{
		doubleList.display();
		cout << endl << "the number retrived from back is: " << retrieveTest3 << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve " << retrieveTest3;
	}

	cout << "retrieve empty list: " << endl;
	LList<double> emptyRetrieve;
	if (emptyRetrieve.retrieve(retrieveTest3))
	{
		doubleList.display();
		cout << endl << "the number retrived from back is: " << retrieveTest3 << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve " << retrieveTest3 << " from an empty list: " 
			<< emptyRetrieve.isEmpty()<< endl << endl;
	}

	cout << "Remove empty list: " << endl;
	if (emptyRetrieve.remove(retrieveTest3))
	{
		doubleList.display();
		cout << endl << "the number retrived from back is: " << retrieveTest3 << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve " << retrieveTest3 << " from an empty list: "
			<< emptyRetrieve.isEmpty()<< endl << endl;
	}

	cout << "Remove Middle..." << endl;
	double temp0 = 2.2;
	doubleList.display();
	if (doubleList.remove(temp0))
	{
		cout << endl;
		doubleList.display();
		cout << endl << "The numValues is " << doubleList.getNumValues()
			<< "\t The value removed was " << temp0 << endl << endl;
	}
	else
	{
		cout << "unable to remove " << temp0;
	}

	cout << "Remove Front..." << endl;
	double temp1 = 1.1;
	doubleList.display();
	if (doubleList.remove(temp1))
	{
		cout << endl;
		doubleList.display();
		cout << endl << "The numValues is " << doubleList.getNumValues()
			<< "\t The value removed was " << temp1 << endl << endl;
	}
	else
	{
		cout << "unable to remove " << temp1;
	}

	cout << "Remove back..." << endl;
	double temp2 = 5.5;
	doubleList.display();
	if (doubleList.remove(temp2))
	{
		cout << endl;
		doubleList.display();
		cout << endl << "The numValues is " << doubleList.getNumValues()
			<< "\t The value removed was " << temp2 << endl << endl;
	}
	else
	{
		cout << "unable to remove " << temp2;
	}

	doubleList.insert(4.4);
	doubleList.insert(6.6);
	doubleList.insert(8.8);
	cout << "Remove non-existant front..." << endl;
	double nonFront1 = 2.7;
	if (doubleList.remove(nonFront1))
	{
		cout << endl;
		doubleList.display();
		cout << endl << "The numValues is " << doubleList.getNumValues()
			<< "\t The value removed was " << nonFront1 << endl << endl;
	}
	else
	{
		doubleList.display();
		cout << endl << "unable to remove " << nonFront1 << endl << endl;
	}

	cout << "Remove non-existant middle..." << endl;
	double nonFront2 = 5.5;
	if (doubleList.remove(nonFront2))
	{
		cout << endl;
		doubleList.display();
		cout << endl << "The numValues is " << doubleList.getNumValues()
			<< "\t The value removed was " << nonFront2 << endl << endl;
	}
	else
	{
		doubleList.display();
		cout << endl << "unable to remove " << nonFront2 << endl << endl;
	}

	cout << "Remove non-existant end..." << endl;
	double nonFront3 = 9.9;
	if (doubleList.remove(nonFront3))
	{
		cout << endl;
		doubleList.display();
		cout << endl << "The numValues is " << doubleList.getNumValues()
			<< "\t The value removed was " << nonFront3 << endl << endl;
	}
	else
	{
		doubleList.display();
		cout << endl << "unable to remove " << nonFront3 << endl << endl;
	}

	cout << "Retrieve non-existant front..." << endl;
	if (doubleList.retrieve(nonFront1))
	{
		cout << endl;
		doubleList.display();
		cout << "The value retrieved was " << nonFront1 << endl << endl;
	}
	else
	{
		doubleList.display();
		cout << endl << "unable to retrieve " << nonFront1 << endl << endl;
	}

	cout << "Retrieve non-existant middle..." << endl;
	if (doubleList.retrieve(nonFront2))
	{
		cout << endl;
		doubleList.display();
		cout << "The value retrieved was " << nonFront2 << endl << endl;
	}
	else
	{
		doubleList.display();
		cout << endl << "unable to retrieve " << nonFront2 << endl << endl;
	}

	cout << "Retrieve non-existant end..." << endl;
	if (doubleList.remove(nonFront3))
	{
		cout << endl;
		doubleList.display();
		cout << "The value retrieved was " << nonFront2 << endl << endl;
	}
	else
	{
		doubleList.display();
		cout << endl << "unable to retrieve " << nonFront3 << endl << endl;
	}

	double val1;
	cout << "Viewing front data..." << endl;
	doubleList.display();
	if (doubleList.viewFront(val1))
	{
		cout << endl << "The front data is: " << val1 << endl << endl;
	}
	else
	{
		cout << "unable to find front.";
	}

	double val;
	cout << "Viewing back data..." << endl;
	doubleList.display();
	if (doubleList.viewRear(val))
	{
		cout << endl << "The data in the last Node is: " << val << endl << endl;
	}
	else
	{
		cout << "unable to find rear.";
	}

	double tester;
	cout << "Viewing front data that doesnt exist..." << endl;
	LList<double> testing;
	if (testing.viewFront(tester))
	{
		cout << endl << "The front data is: " << tester << endl << endl;
	}
	else
	{
		cout << "unable to find front, the list is empty: " << testing.isEmpty() << endl << endl;
	}

	cout << "Viewing back data that doesnt exist..." << endl;
	if (testing.viewRear(tester))
	{
		cout << endl << "The back data is: " << tester << endl << endl;
	}
	else
	{
		cout << "unable to find back, the list is empty: " << testing.isEmpty() << endl << endl;
	}

	cout << "Testing empty..." << endl;
	LList<double> testList;
	if (testList.isEmpty())
	{
		cout << "Yes, list is empty." << endl << endl;
	}
	else
	{
		cout << "No, list is not empty." << endl << endl;
	}

	cout << "Testing empty thats not empty..." << endl;
	if (doubleList.isEmpty())
	{
		cout << "Yes, list is empty." << endl << endl;
	}
	else
	{
		cout << "No, list is not empty." << endl << endl;
	}

	cout << "Testing full..." << endl;
	if (testList.isFull())
	{
		cout << "Yes, list is full." << endl << endl;
	}
	else
	{
		cout << "No, list is not full." << endl << endl;
	}

	return 0;
}

//*****************************************************************************************************

/*To an empty list...
2.2
The numValues is 1       the number inserted was 2.2

To a new front...
1.1     2.2
The numValues is 2       the number inserted was 1.1

To a new back...
1.1     2.2     5.5
The numValues is 3       the number inserted was 5.5

To the middle...
1.1     2.2     3.1     5.5
The numValues is 4       the number inserted was 3.1

retrive front...
1.1     2.2     3.1     5.5
the number retrived from front is: 1.1

retrive middle...
1.1     2.2     3.1     5.5
the number retrived from middle is: 3.1

retrive back...
1.1     2.2     3.1     5.5
the number retrived from back is: 5.5

retrieve empty list:
Unable to retrieve 5.5 from an empty list: 1

Remove empty list:
Unable to retrieve 5.5 from an empty list: 1

Remove Middle...
1.1     2.2     3.1     5.5
1.1     3.1     5.5
The numValues is 3       The value removed was 2.2

Remove Front...
1.1     3.1     5.5
3.1     5.5
The numValues is 2       The value removed was 1.1

Remove back...
3.1     5.5
3.1
The numValues is 1       The value removed was 5.5

Remove non-existant front...
3.1     4.4     6.6     8.8
unable to remove 2.7

Remove non-existant middle...
3.1     4.4     6.6     8.8
unable to remove 5.5

Remove non-existant end...
3.1     4.4     6.6     8.8
unable to remove 9.9

Retrieve non-existant front...
3.1     4.4     6.6     8.8
unable to retrieve 2.7

Retrieve non-existant middle...
3.1     4.4     6.6     8.8
unable to retrieve 5.5

Retrieve non-existant end...
3.1     4.4     6.6     8.8
unable to retrieve 9.9

Viewing front data...
3.1     4.4     6.6     8.8
The front data is: 3.1

Viewing back data...
3.1     4.4     6.6     8.8
The data in the last Node is: 8.8

Viewing front data that doesnt exist...
unable to find front, the list is empty: 1

Viewing back data that doesnt exist...
unable to find back, the list is empty: 1

Testing empty...
Yes, list is empty.

Testing empty thats not empty...
No, list is not empty.

Testing full...
No, list is not full.*/