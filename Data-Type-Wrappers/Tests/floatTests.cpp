#pragma once

#include "floatTests.h"

void runFloatTests() {

	shared_ptr<Primitive> primitive;
	primitive = make_shared<Float>(5.3);

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

	if ((*(*primitive + *primChar)).getFloat() == primitive->getFloat() + primChar->getChar())
		cout << "Float Addition Test 1: Success" << endl;
	else
		cout << "Float Addition Test 1: Failed" << endl;

	if ((*(*primitive + *primDouble)).getDouble() == primitive->getFloat() + primDouble->getDouble())
		cout << "Float Addition Test 2: Success" << endl;
	else
		cout << "Float Addition Test 2: Failed" << endl;

	if ((*(*primitive + *primFloat)).getFloat() == primitive->getFloat() + primFloat->getFloat())
		cout << "Float Addition Test 3: Success" << endl;
	else
		cout << "Float Addition Test 3: Failed" << endl;

	if ((*(*primitive + *primInt)).getFloat() == primitive->getFloat() + primInt->getInt())
		cout << "Float Addition Test 4: Success" << endl;
	else
		cout << "Float Addition Test 4: Failed" << endl;

	if ((*(*primitive + *primLong)).getFloat() == primitive->getFloat() + primLong->getLong())
		cout << "Float Addition Test 5: Success" << endl;
	else
		cout << "Float Addition Test 5: Failed" << endl;

	if ((*(*primitive + *primShort)).getFloat() == primitive->getFloat() + primShort->getShort())
		cout << "Float Addition Test 6: Success" << endl;
	else
		cout << "Float Addition Test 6: Failed" << endl;

	/******************************************************************************
		Subtraction Tests
	******************************************************************************/

	if ((*(*primitive - *primChar)).getFloat() == primitive->getFloat() - primChar->getChar())
		cout << "Float Subtraction Test 1: Success" << endl;
	else
		cout << "Float Subtraction Test 1: Failed" << endl;

	if ((*(*primitive - *primDouble)).getDouble() == primitive->getFloat() - primDouble->getDouble())
		cout << "Float Subtraction Test 2: Success" << endl;
	else
		cout << "Float Subtraction Test 2: Failed" << endl;

	if ((*(*primitive - *primFloat)).getFloat() == primitive->getFloat() - primFloat->getFloat())
		cout << "Float Subtraction Test 3: Success" << endl;
	else
		cout << "Float Subtraction Test 3: Failed" << endl;

	if ((*(*primitive - *primInt)).getFloat() == primitive->getFloat() - primInt->getInt())
		cout << "Float Subtraction Test 4: Success" << endl;
	else
		cout << "Float Subtraction Test 4: Failed" << endl;

	if ((*(*primitive - *primLong)).getFloat() == primitive->getFloat() - primLong->getLong())
		cout << "Float Subtraction Test 5: Success" << endl;
	else
		cout << "Float Subtraction Test 5: Failed" << endl;

	if ((*(*primitive - *primShort)).getFloat() == primitive->getFloat() - primShort->getShort())
		cout << "Float Subtraction Test 6: Success" << endl;
	else
		cout << "Float Subtraction Test 6: Failed" << endl;

	/******************************************************************************
		Unary Minus Tests
	******************************************************************************/

	if ((-(*primitive))->getFloat() == -primitive->getFloat())
		cout << "Float Unary Minus Test 1: Success" << endl;
	else
		cout << "Float Unary Minus Test 1: Failed" << endl;

	/******************************************************************************
		Multiplication Tests
	******************************************************************************/

	if ((*(*primitive * *primChar)).getFloat() == primitive->getFloat() * primChar->getChar())
		cout << "Float Multiplication Test 1: Success" << endl;
	else
		cout << "Float Multiplication Test 1: Failed" << endl;

	if ((*(*primitive * *primDouble)).getDouble() == primitive->getFloat() * primDouble->getDouble())
		cout << "Float Multiplication Test 2: Success" << endl;
	else
		cout << "Float Multiplication Test 2: Failed" << endl;

	if ((*(*primitive * *primFloat)).getFloat() == primitive->getFloat() * primFloat->getFloat())
		cout << "Float Multiplication Test 3: Success" << endl;
	else
		cout << "Float Multiplication Test 3: Failed" << endl;

	if ((*(*primitive * *primInt)).getFloat() == primitive->getFloat() * primInt->getInt())
		cout << "Float Multiplication Test 4: Success" << endl;
	else
		cout << "Float Multiplication Test 4: Failed" << endl;

	if ((*(*primitive * *primLong)).getFloat() == primitive->getFloat() * primLong->getLong())
		cout << "Float Multiplication Test 5: Success" << endl;
	else
		cout << "Float Multiplication Test 5: Failed" << endl;

	if ((*(*primitive * *primShort)).getFloat() == primitive->getFloat() * primShort->getShort())
		cout << "Float Multiplication Test 6: Success" << endl;
	else
		cout << "Float Multiplication Test 6: Failed" << endl;

	/******************************************************************************
		Division Tests
	******************************************************************************/

	if ((*(*primitive / *primChar)).getFloat() == primitive->getFloat() / primChar->getChar())
		cout << "Float Division Test 1: Success" << endl;
	else
		cout << "Float Division Test 1: Failed" << endl;

	if ((*(*primitive / *primDouble)).getDouble() == primitive->getFloat() / primDouble->getDouble())
		cout << "Float Division Test 2: Success" << endl;
	else
		cout << "Float Division Test 2: Failed" << endl;

	if ((*(*primitive / *primFloat)).getFloat() == primitive->getFloat() / primFloat->getFloat())
		cout << "Float Division Test 3: Success" << endl;
	else
		cout << "Float Division Test 3: Failed" << endl;

	if ((*(*primitive / *primInt)).getFloat() == primitive->getFloat() / primInt->getInt())
		cout << "Float Division Test 4: Success" << endl;
	else
		cout << "Float Division Test 4: Failed" << endl;

	if ((*(*primitive / *primLong)).getFloat() == primitive->getFloat() / primLong->getLong())
		cout << "Float Division Test 5: Success" << endl;
	else
		cout << "Float Division Test 5: Failed" << endl;

	if ((*(*primitive / *primShort)).getFloat() == primitive->getFloat() / primShort->getShort())
		cout << "Float Division Test 6: Success" << endl;
	else
		cout << "Float Division Test 6: Failed" << endl;

	/******************************************************************************
		Postfix Incrementation Tests
	******************************************************************************/

	float tmp = primitive->getFloat();

	if (tmp == ((*primitive)++)->getFloat()) {

		if (tmp + 1 == primitive->getFloat())
			cout << "Float Postfix Incrementation Test 1: Success" << endl;
		else
			cout << "Float Postfix Incrementation Test 1: Failed Late" << endl;
	} else
		cout << "Float Postfix Incrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Incrementation Tests
	******************************************************************************/

	tmp = primitive->getFloat();

	if (tmp + 1 == (++(*primitive)).getFloat()) {

		cout << "Float Prefix Incrementation Test 1: Success" << endl;
	} else
		cout << "Float Prefix Incrementation Test 1: Failed" << endl;

	/******************************************************************************
		Postfix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getFloat();

	if (tmp == ((*primitive)--)->getFloat()) {

		if (tmp - 1 == primitive->getFloat())
			cout << "Float Postfix Decrementation Test 1: Success" << endl;
		else
			cout << "Float Postfix Decrementation Test 1: Failed Late" << endl;
	} else
		cout << "Float Postfix Decrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getFloat();

	if (tmp - 1 == (--(*primitive)).getFloat()) {

		cout << "Float Prefix Decrementation Test 1: Success" << endl;
	} else
		cout << "Float Prefix Decrementation Test 1: Failed" << endl;

	/******************************************************************************
		Equal To Tests
	******************************************************************************/

	if ((*primitive == *primChar)->getBool() == (primitive->getFloat() == primChar->getChar()))
		cout << "Float Equal To Test 1: Success" << endl;
	else
		cout << "Float Equal To Test 1: Failed" << endl;

	if ((*primitive == *primDouble)->getBool() == (primitive->getFloat() == primDouble->getDouble()))
		cout << "Float Equal to Test 2: Success" << endl;
	else
		cout << "Float Equal To Test 2: Failed" << endl;

	if ((*primitive == *primFloat)->getBool() == (primitive->getFloat() == primFloat->getFloat()))
		cout << "Float Equal To Test 3: Success" << endl;
	else
		cout << "Float Equal To Test 3: Failed" << endl;

	if ((*primitive == *primInt)->getBool() == (primitive->getFloat() == primInt->getInt()))
		cout << "Float Equal To Test 4: Success" << endl;
	else
		cout << "Float Equal To Test 4: Failed" << endl;

	if ((*primitive == *primLong)->getBool() == (primitive->getFloat() == primLong->getLong()))
		cout << "Float Equal To Test 5: Success" << endl;
	else
		cout << "Float Equal To Test 5: Failed" << endl;

	if ((*primitive == *primShort)->getBool() == (primitive->getFloat() == primShort->getShort()))
		cout << "Float Equal To Test 6: Success" << endl;
	else
		cout << "Float Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Not Equal To Tests
	******************************************************************************/

	if ((*primitive != *primChar)->getBool() == (primitive->getFloat() != primChar->getChar()))
		cout << "Float Not Equal To Test 1: Success" << endl;
	else
		cout << "Float Not Equal To Test 1: Failed" << endl;

	if ((*primitive != *primDouble)->getBool() == (primitive->getFloat() != primDouble->getDouble()))
		cout << "Float Not Equal to Test 2: Success" << endl;
	else
		cout << "Float Not Equal To Test 2: Failed" << endl;

	if ((*primitive != *primFloat)->getBool() == (primitive->getFloat() != primFloat->getFloat()))
		cout << "Float Not Equal To Test 3: Success" << endl;
	else
		cout << "Float Not Equal To Test 3: Failed" << endl;

	if ((*primitive != *primInt)->getBool() == (primitive->getFloat() != primInt->getInt()))
		cout << "Float Not Equal To Test 4: Success" << endl;
	else
		cout << "Float Not Equal To Test 4: Failed" << endl;

	if ((*primitive != *primLong)->getBool() == (primitive->getFloat() != primLong->getLong()))
		cout << "Float Not Equal To Test 5: Success" << endl;
	else
		cout << "Float Not Equal To Test 5: Failed" << endl;

	if ((*primitive != *primShort)->getBool() == (primitive->getFloat() != primShort->getShort()))
		cout << "Float Not Equal To Test 6: Success" << endl;
	else
		cout << "Float Not Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Tests
	******************************************************************************/

	if ((*primitive > *primChar)->getBool() == (primitive->getFloat() > primChar->getChar()))
		cout << "Float Greater Than Test 1: Success" << endl;
	else
		cout << "Float Greater Than Test 1: Failed" << endl;

	if ((*primitive > *primDouble)->getBool() == (primitive->getFloat() > primDouble->getDouble()))
		cout << "Float Greater Than Test 2: Success" << endl;
	else
		cout << "Float Greater Than Test 2: Failed" << endl;

	if ((*primitive > *primFloat)->getBool() == (primitive->getFloat() > primFloat->getFloat()))
		cout << "Float Greater Than Test 3: Success" << endl;
	else
		cout << "Float Greater Than Test 3: Failed" << endl;

	if ((*primitive > *primInt)->getBool() == (primitive->getFloat() > primInt->getInt()))
		cout << "Float Greater Than Test 4: Success" << endl;
	else
		cout << "Float Greater Than Test 4: Failed" << endl;

	if ((*primitive > *primLong)->getBool() == (primitive->getFloat() > primLong->getLong()))
		cout << "Float Greater Than Test 5: Success" << endl;
	else
		cout << "Float Greater Than Test 5: Failed" << endl;

	if ((*primitive > *primShort)->getBool() == (primitive->getFloat() > primShort->getShort()))
		cout << "Float Greater Than Test 6: Success" << endl;
	else
		cout << "Float Greater Than Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Tests
	******************************************************************************/

	if ((*primitive < *primChar)->getBool() == (primitive->getFloat() < primChar->getChar()))
		cout << "Float Less Than Test 1: Success" << endl;
	else
		cout << "Float Less Than Test 1: Failed" << endl;

	if ((*primitive < *primDouble)->getBool() == (primitive->getFloat() < primDouble->getDouble()))
		cout << "Float Less Than Test 2: Success" << endl;
	else
		cout << "Float Less Than Test 2: Failed" << endl;

	if ((*primitive < *primFloat)->getBool() == (primitive->getFloat() < primFloat->getFloat()))
		cout << "Float Less Than Test 3: Success" << endl;
	else
		cout << "Float Less Than Test 3: Failed" << endl;

	if ((*primitive < *primInt)->getBool() == (primitive->getFloat() < primInt->getInt()))
		cout << "Float Less Than Test 4: Success" << endl;
	else
		cout << "Float Less Than Test 4: Failed" << endl;

	if ((*primitive < *primLong)->getBool() == (primitive->getFloat() < primLong->getLong()))
		cout << "Float Less Than Test 5: Success" << endl;
	else
		cout << "Float Less Than Test 5: Failed" << endl;

	if ((*primitive < *primShort)->getBool() == (primitive->getFloat() < primShort->getShort()))
		cout << "Float Less Than Test 6: Success" << endl;
	else
		cout << "Float Less Than Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive >= *primChar)->getBool() == (primitive->getFloat() >= primChar->getChar()))
		cout << "Float Greater Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Float Greater Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive >= *primDouble)->getBool() == (primitive->getFloat() >= primDouble->getDouble()))
		cout << "Float Greater Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Float Greater Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive >= *primFloat)->getBool() == (primitive->getFloat() >= primFloat->getFloat()))
		cout << "Float Greater Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Float Greater Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive >= *primInt)->getBool() == (primitive->getFloat() >= primInt->getInt()))
		cout << "Float Greater Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Float Greater Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive >= *primLong)->getBool() == (primitive->getFloat() >= primLong->getLong()))
		cout << "Float Greater Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Float Greater Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive >= *primShort)->getBool() == (primitive->getFloat() >= primShort->getShort()))
		cout << "Float Greater Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Float Greater Than Or Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive <= *primChar)->getBool() == (primitive->getFloat() <= primChar->getChar()))
		cout << "Float Less Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Float Less Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive <= *primDouble)->getBool() == (primitive->getFloat() <= primDouble->getDouble()))
		cout << "Float Less Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Float Less Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive <= *primFloat)->getBool() == (primitive->getFloat() <= primFloat->getFloat()))
		cout << "Float Less Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Float Less Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive <= *primInt)->getBool() == (primitive->getFloat() <= primInt->getInt()))
		cout << "Float Less Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Float Less Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive <= *primLong)->getBool() == (primitive->getFloat() <= primLong->getLong()))
		cout << "Float Less Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Float Less Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive <= *primShort)->getBool() == (primitive->getFloat() <= primShort->getShort()))
		cout << "Float Less Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Float Less Than Or Equal To Test 6: Failed" << endl;
}