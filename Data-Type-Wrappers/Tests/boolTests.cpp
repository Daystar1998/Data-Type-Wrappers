#include "boolTests.h"

void runBoolTests() {

	shared_ptr<Primitive> primBool1;
	primBool1 = make_shared<Boolean>(true);

	shared_ptr<Primitive> primBool2;
	primBool2 = make_shared<Boolean>(false);

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