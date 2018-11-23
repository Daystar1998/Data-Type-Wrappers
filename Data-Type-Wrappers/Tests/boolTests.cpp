#include "boolTests.h"

void runBoolTests() {

	shared_ptr<Primitive> primBool1;
	primBool1 = make_shared<Boolean>(true);

	shared_ptr<Primitive> primBool2;
	primBool2 = make_shared<Boolean>(false);

	/******************************************************************************
		Bitwise NOT Test
	******************************************************************************/
	if ((~*primBool1)->getBool())
		cout << "Bool Bitwise NOT Test: Success" << endl;
	else
		cout << "Bool Bitwise NOT Test: Failed" << endl;

	/******************************************************************************
		Bitwise AND Test
	******************************************************************************/
	if ((*primBool1 & *primBool2)->getBool())
		cout << "Bool Bitwise AND Test: Failed" << endl;
	else
		cout << "Bool Bitwise AND Test: Success" << endl;

	/******************************************************************************
		Bitwise OR Test
	******************************************************************************/
	if ((*primBool1 | *primBool2)->getBool())
		cout << "Bool Bitwise OR Test: Success" << endl;
	else
		cout << "Bool Bitwise OR Test: Failed" << endl;

	/******************************************************************************
		Bitwise XOR Test
	******************************************************************************/
	if ((*primBool1 ^ *primBool2)->getBool())
		cout << "Bool Bitwise XOR Test: Success" << endl;
	else
		cout << "Bool Bitwise XOR Test: Failed" << endl;

	/******************************************************************************
		Logical NOT Test
	******************************************************************************/
	if ((!*primBool1)->getBool())
		cout << "Bool Logical NOT Test: Failed" << endl;
	else
		cout << "Bool Logical NOT Test: Success" << endl;

	/******************************************************************************
		Logical AND Test
	******************************************************************************/
	if ((*primBool1 && *primBool2)->getBool())
		cout << "Bool Logical AND Test: Failed" << endl;
	else
		cout << "Bool Logical AND Test: Success" << endl;

	/******************************************************************************
		Logical OR Test
	******************************************************************************/
	if ((*primBool1 || *primBool2)->getBool())
		cout << "Bool Logical OR Test: Success" << endl;
	else
		cout << "Bool Logical OR Test: Failed" << endl;
}