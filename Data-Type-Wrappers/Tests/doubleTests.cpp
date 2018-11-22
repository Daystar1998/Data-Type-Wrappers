#pragma once

#include "doubleTests.h"

void runDoubleTests() {

	shared_ptr<Primitive> primitive;
	primitive = make_shared<Double>(5.3);

	shared_ptr<Primitive> primChar;
	primChar = make_shared<Character>(3);

	shared_ptr<Primitive> primDouble;
	primDouble = make_shared<Double>(6.5);

	shared_ptr<Primitive> primFloat;
	primFloat = make_shared<Float>(7.5);

	shared_ptr<Primitive> primInt;
	primInt = make_shared<Integer>(8);

	shared_ptr<Primitive> primLong;
	primLong = make_shared<Long>(9);

	shared_ptr<Primitive> primShort;
	primShort = make_shared<Short>(11);

	/******************************************************************************
		Addition Tests
	******************************************************************************/

	if ((*(*primitive + *primChar)).getDouble() == primitive->getDouble() + primChar->getChar())
		cout << "Double Addition Test 1: Success" << endl;
	else
		cout << "Double Addition Test 1: Failed" << endl;

	if ((*(*primitive + *primDouble)).getDouble() == primitive->getDouble() + primDouble->getDouble())
		cout << "Double Addition Test 2: Success" << endl;
	else
		cout << "Double Addition Test 2: Failed" << endl;

	if ((*(*primitive + *primFloat)).getDouble() == primitive->getDouble() + primFloat->getFloat())
		cout << "Double Addition Test 3: Success" << endl;
	else
		cout << "Double Addition Test 3: Failed" << endl;

	if ((*(*primitive + *primInt)).getDouble() == primitive->getDouble() + primInt->getInt())
		cout << "Double Addition Test 4: Success" << endl;
	else
		cout << "Double Addition Test 4: Failed" << endl;

	if ((*(*primitive + *primLong)).getDouble() == primitive->getDouble() + primLong->getLong())
		cout << "Double Addition Test 5: Success" << endl;
	else
		cout << "Double Addition Test 5: Failed" << endl;

	if ((*(*primitive + *primShort)).getDouble() == primitive->getDouble() + primShort->getShort())
		cout << "Double Addition Test 6: Success" << endl;
	else
		cout << "Double Addition Test 6: Failed" << endl;

	/******************************************************************************
		Subtraction Tests
	******************************************************************************/

	if ((*(*primitive - *primChar)).getDouble() == primitive->getDouble() - primChar->getChar())
		cout << "Double Subtraction Test 1: Success" << endl;
	else
		cout << "Double Subtraction Test 1: Failed" << endl;

	if ((*(*primitive - *primDouble)).getDouble() == primitive->getDouble() - primDouble->getDouble())
		cout << "Double Subtraction Test 2: Success" << endl;
	else
		cout << "Double Subtraction Test 2: Failed" << endl;

	if ((*(*primitive - *primFloat)).getDouble() == primitive->getDouble() - primFloat->getFloat())
		cout << "Double Subtraction Test 3: Success" << endl;
	else
		cout << "Double Subtraction Test 3: Failed" << endl;

	if ((*(*primitive - *primInt)).getDouble() == primitive->getDouble() - primInt->getInt())
		cout << "Double Subtraction Test 4: Success" << endl;
	else
		cout << "Double Subtraction Test 4: Failed" << endl;

	if ((*(*primitive - *primLong)).getDouble() == primitive->getDouble() - primLong->getLong())
		cout << "Double Subtraction Test 5: Success" << endl;
	else
		cout << "Double Subtraction Test 5: Failed" << endl;

	if ((*(*primitive - *primShort)).getDouble() == primitive->getDouble() - primShort->getShort())
		cout << "Double Subtraction Test 6: Success" << endl;
	else
		cout << "Double Subtraction Test 6: Failed" << endl;

	/******************************************************************************
		Unary Minus Tests
	******************************************************************************/

	if ((-(*primitive))->getDouble() == -primitive->getDouble())
		cout << "Double Unary Minus Test 1: Success" << endl;
	else
		cout << "Double Unary Minus Test 1: Failed" << endl;

	/******************************************************************************
		Multiplication Tests
	******************************************************************************/

	if ((*(*primitive * *primChar)).getDouble() == primitive->getDouble() * primChar->getChar())
		cout << "Double Multiplication Test 1: Success" << endl;
	else
		cout << "Double Multiplication Test 1: Failed" << endl;

	if ((*(*primitive * *primDouble)).getDouble() == primitive->getDouble() * primDouble->getDouble())
		cout << "Double Multiplication Test 2: Success" << endl;
	else
		cout << "Double Multiplication Test 2: Failed" << endl;

	if ((*(*primitive * *primFloat)).getDouble() == primitive->getDouble() * primFloat->getFloat())
		cout << "Double Multiplication Test 3: Success" << endl;
	else
		cout << "Double Multiplication Test 3: Failed" << endl;

	if ((*(*primitive * *primInt)).getDouble() == primitive->getDouble() * primInt->getInt())
		cout << "Double Multiplication Test 4: Success" << endl;
	else
		cout << "Double Multiplication Test 4: Failed" << endl;

	if ((*(*primitive * *primLong)).getDouble() == primitive->getDouble() * primLong->getLong())
		cout << "Double Multiplication Test 5: Success" << endl;
	else
		cout << "Double Multiplication Test 5: Failed" << endl;

	if ((*(*primitive * *primShort)).getDouble() == primitive->getDouble() * primShort->getShort())
		cout << "Double Multiplication Test 6: Success" << endl;
	else
		cout << "Double Multiplication Test 6: Failed" << endl;

	/******************************************************************************
		Division Tests
	******************************************************************************/

	if ((*(*primitive / *primChar)).getDouble() == primitive->getDouble() / primChar->getChar())
		cout << "Double Division Test 1: Success" << endl;
	else
		cout << "Double Division Test 1: Failed" << endl;

	if ((*(*primitive / *primDouble)).getDouble() == primitive->getDouble() / primDouble->getDouble())
		cout << "Double Division Test 2: Success" << endl;
	else
		cout << "Double Division Test 2: Failed" << endl;

	if ((*(*primitive / *primFloat)).getDouble() == primitive->getDouble() / primFloat->getFloat())
		cout << "Double Division Test 3: Success" << endl;
	else
		cout << "Double Division Test 3: Failed" << endl;

	if ((*(*primitive / *primInt)).getDouble() == primitive->getDouble() / primInt->getInt())
		cout << "Double Division Test 4: Success" << endl;
	else
		cout << "Double Division Test 4: Failed" << endl;

	if ((*(*primitive / *primLong)).getDouble() == primitive->getDouble() / primLong->getLong())
		cout << "Double Division Test 5: Success" << endl;
	else
		cout << "Double Division Test 5: Failed" << endl;

	if ((*(*primitive / *primShort)).getDouble() == primitive->getDouble() / primShort->getShort())
		cout << "Double Division Test 6: Success" << endl;
	else
		cout << "Double Division Test 6: Failed" << endl;

	/******************************************************************************
		Postfix Incrementation Tests
	******************************************************************************/

	double tmp = primitive->getDouble();

	if (tmp == ((*primitive)++)->getDouble()) {

		if (tmp + 1 == primitive->getDouble())
			cout << "Double Postfix Incrementation Test 1: Success" << endl;
		else
			cout << "Double Postfix Incrementation Test 1: Failed Late" << endl;
	} else
		cout << "Double Postfix Incrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Incrementation Tests
	******************************************************************************/

	tmp = primitive->getDouble();

	if (tmp + 1 == (++(*primitive)).getDouble()) {

		cout << "Double Prefix Incrementation Test 1: Success" << endl;
	} else
		cout << "Double Prefix Incrementation Test 1: Failed" << endl;

	/******************************************************************************
		Postfix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getDouble();

	if (tmp == ((*primitive)--)->getDouble()) {

		if (tmp - 1 == primitive->getDouble())
			cout << "Double Postfix Decrementation Test 1: Success" << endl;
		else
			cout << "Double Postfix Decrementation Test 1: Failed Late" << endl;
	} else
		cout << "Double Postfix Decrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getDouble();

	if (tmp - 1 == (--(*primitive)).getDouble()) {

		cout << "Double Prefix Decrementation Test 1: Success" << endl;
	} else
		cout << "Double Prefix Decrementation Test 1: Failed" << endl;

	/******************************************************************************
		Equal To Tests
	******************************************************************************/

	if ((*primitive == *primChar)->getBool() == (primitive->getDouble() == primChar->getChar()))
		cout << "Double Equal To Test 1: Success" << endl;
	else
		cout << "Double Equal To Test 1: Failed" << endl;

	if ((*primitive == *primDouble)->getBool() == (primitive->getDouble() == primDouble->getDouble()))
		cout << "Double Equal to Test 2: Success" << endl;
	else
		cout << "Double Equal To Test 2: Failed" << endl;

	if ((*primitive == *primFloat)->getBool() == (primitive->getDouble() == primFloat->getFloat()))
		cout << "Double Equal To Test 3: Success" << endl;
	else
		cout << "Double Equal To Test 3: Failed" << endl;

	if ((*primitive == *primInt)->getBool() == (primitive->getDouble() == primInt->getInt()))
		cout << "Double Equal To Test 4: Success" << endl;
	else
		cout << "Double Equal To Test 4: Failed" << endl;

	if ((*primitive == *primLong)->getBool() == (primitive->getDouble() == primLong->getLong()))
		cout << "Double Equal To Test 5: Success" << endl;
	else
		cout << "Double Equal To Test 5: Failed" << endl;

	if ((*primitive == *primShort)->getBool() == (primitive->getDouble() == primShort->getShort()))
		cout << "Double Equal To Test 6: Success" << endl;
	else
		cout << "Double Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Not Equal To Tests
	******************************************************************************/

	if ((*primitive != *primChar)->getBool() == (primitive->getDouble() != primChar->getChar()))
		cout << "Double Not Equal To Test 1: Success" << endl;
	else
		cout << "Double Not Equal To Test 1: Failed" << endl;

	if ((*primitive != *primDouble)->getBool() == (primitive->getDouble() != primDouble->getDouble()))
		cout << "Double Not Equal to Test 2: Success" << endl;
	else
		cout << "Double Not Equal To Test 2: Failed" << endl;

	if ((*primitive != *primFloat)->getBool() == (primitive->getDouble() != primFloat->getFloat()))
		cout << "Double Not Equal To Test 3: Success" << endl;
	else
		cout << "Double Not Equal To Test 3: Failed" << endl;

	if ((*primitive != *primInt)->getBool() == (primitive->getDouble() != primInt->getInt()))
		cout << "Double Not Equal To Test 4: Success" << endl;
	else
		cout << "Double Not Equal To Test 4: Failed" << endl;

	if ((*primitive != *primLong)->getBool() == (primitive->getDouble() != primLong->getLong()))
		cout << "Double Not Equal To Test 5: Success" << endl;
	else
		cout << "Double Not Equal To Test 5: Failed" << endl;

	if ((*primitive != *primShort)->getBool() == (primitive->getDouble() != primShort->getShort()))
		cout << "Double Not Equal To Test 6: Success" << endl;
	else
		cout << "Double Not Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Tests
	******************************************************************************/

	if ((*primitive > *primChar)->getBool() == (primitive->getDouble() > primChar->getChar()))
		cout << "Double Greater Than Test 1: Success" << endl;
	else
		cout << "Double Greater Than Test 1: Failed" << endl;

	if ((*primitive > *primDouble)->getBool() == (primitive->getDouble() > primDouble->getDouble()))
		cout << "Double Greater Than Test 2: Success" << endl;
	else
		cout << "Double Greater Than Test 2: Failed" << endl;

	if ((*primitive > *primFloat)->getBool() == (primitive->getDouble() > primFloat->getFloat()))
		cout << "Double Greater Than Test 3: Success" << endl;
	else
		cout << "Double Greater Than Test 3: Failed" << endl;

	if ((*primitive > *primInt)->getBool() == (primitive->getDouble() > primInt->getInt()))
		cout << "Double Greater Than Test 4: Success" << endl;
	else
		cout << "Double Greater Than Test 4: Failed" << endl;

	if ((*primitive > *primLong)->getBool() == (primitive->getDouble() > primLong->getLong()))
		cout << "Double Greater Than Test 5: Success" << endl;
	else
		cout << "Double Greater Than Test 5: Failed" << endl;

	if ((*primitive > *primShort)->getBool() == (primitive->getDouble() > primShort->getShort()))
		cout << "Double Greater Than Test 6: Success" << endl;
	else
		cout << "Double Greater Than Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Tests
	******************************************************************************/

	if ((*primitive < *primChar)->getBool() == (primitive->getDouble() < primChar->getChar()))
		cout << "Double Less Than Test 1: Success" << endl;
	else
		cout << "Double Less Than Test 1: Failed" << endl;

	if ((*primitive < *primDouble)->getBool() == (primitive->getDouble() < primDouble->getDouble()))
		cout << "Double Less Than Test 2: Success" << endl;
	else
		cout << "Double Less Than Test 2: Failed" << endl;

	if ((*primitive < *primFloat)->getBool() == (primitive->getDouble() < primFloat->getFloat()))
		cout << "Double Less Than Test 3: Success" << endl;
	else
		cout << "Double Less Than Test 3: Failed" << endl;

	if ((*primitive < *primInt)->getBool() == (primitive->getDouble() < primInt->getInt()))
		cout << "Double Less Than Test 4: Success" << endl;
	else
		cout << "Double Less Than Test 4: Failed" << endl;

	if ((*primitive < *primLong)->getBool() == (primitive->getDouble() < primLong->getLong()))
		cout << "Double Less Than Test 5: Success" << endl;
	else
		cout << "Double Less Than Test 5: Failed" << endl;

	if ((*primitive < *primShort)->getBool() == (primitive->getDouble() < primShort->getShort()))
		cout << "Double Less Than Test 6: Success" << endl;
	else
		cout << "Double Less Than Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive >= *primChar)->getBool() == (primitive->getDouble() >= primChar->getChar()))
		cout << "Double Greater Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Double Greater Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive >= *primDouble)->getBool() == (primitive->getDouble() >= primDouble->getDouble()))
		cout << "Double Greater Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Double Greater Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive >= *primFloat)->getBool() == (primitive->getDouble() >= primFloat->getFloat()))
		cout << "Double Greater Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Double Greater Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive >= *primInt)->getBool() == (primitive->getDouble() >= primInt->getInt()))
		cout << "Double Greater Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Double Greater Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive >= *primLong)->getBool() == (primitive->getDouble() >= primLong->getLong()))
		cout << "Double Greater Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Double Greater Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive >= *primShort)->getBool() == (primitive->getDouble() >= primShort->getShort()))
		cout << "Double Greater Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Double Greater Than Or Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive <= *primChar)->getBool() == (primitive->getDouble() <= primChar->getChar()))
		cout << "Double Less Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Double Less Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive <= *primDouble)->getBool() == (primitive->getDouble() <= primDouble->getDouble()))
		cout << "Double Less Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Double Less Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive <= *primFloat)->getBool() == (primitive->getDouble() <= primFloat->getFloat()))
		cout << "Double Less Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Double Less Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive <= *primInt)->getBool() == (primitive->getDouble() <= primInt->getInt()))
		cout << "Double Less Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Double Less Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive <= *primLong)->getBool() == (primitive->getDouble() <= primLong->getLong()))
		cout << "Double Less Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Double Less Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive <= *primShort)->getBool() == (primitive->getDouble() <= primShort->getShort()))
		cout << "Double Less Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Double Less Than Or Equal To Test 6: Failed" << endl;
}