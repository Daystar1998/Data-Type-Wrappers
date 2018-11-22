#pragma once

#include "intTests.h"

void runIntTests() {

	shared_ptr<Primitive> primitive;
	primitive = make_shared<Integer>(5);

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

	if ((*(*primitive + *primChar)).getInt() == primitive->getInt() + primChar->getChar())
		cout << "Int Addition Test 1: Success" << endl;
	else
		cout << "Int Addition Test 1: Failed" << endl;

	if ((*(*primitive + *primDouble)).getDouble() == primitive->getInt() + primDouble->getDouble())
		cout << "Int Addition Test 2: Success" << endl;
	else
		cout << "Int Addition Test 2: Failed" << endl;

	if ((*(*primitive + *primFloat)).getFloat() == primitive->getInt() + primFloat->getFloat())
		cout << "Int Addition Test 3: Success" << endl;
	else
		cout << "Int Addition Test 3: Failed" << endl;

	if ((*(*primitive + *primInt)).getInt() == primitive->getInt() + primInt->getInt())
		cout << "Int Addition Test 4: Success" << endl;
	else
		cout << "Int Addition Test 4: Failed" << endl;

	if ((*(*primitive + *primLong)).getLong() == primitive->getInt() + primLong->getLong())
		cout << "Int Addition Test 5: Success" << endl;
	else
		cout << "Int Addition Test 5: Failed" << endl;

	if ((*(*primitive + *primShort)).getInt() == primitive->getInt() + primShort->getShort())
		cout << "Int Addition Test 6: Success" << endl;
	else
		cout << "Int Addition Test 6: Failed" << endl;

	/******************************************************************************
		Subtraction Tests
	******************************************************************************/

	if ((*(*primitive - *primChar)).getInt() == primitive->getInt() - primChar->getChar())
		cout << "Int Subtraction Test 1: Success" << endl;
	else
		cout << "Int Subtraction Test 1: Failed" << endl;

	if ((*(*primitive - *primDouble)).getDouble() == primitive->getInt() - primDouble->getDouble())
		cout << "Int Subtraction Test 2: Success" << endl;
	else
		cout << "Int Subtraction Test 2: Failed" << endl;

	if ((*(*primitive - *primFloat)).getFloat() == primitive->getInt() - primFloat->getFloat())
		cout << "Int Subtraction Test 3: Success" << endl;
	else
		cout << "Int Subtraction Test 3: Failed" << endl;

	if ((*(*primitive - *primInt)).getInt() == primitive->getInt() - primInt->getInt())
		cout << "Int Subtraction Test 4: Success" << endl;
	else
		cout << "Int Subtraction Test 4: Failed" << endl;

	if ((*(*primitive - *primLong)).getLong() == primitive->getInt() - primLong->getLong())
		cout << "Int Subtraction Test 5: Success" << endl;
	else
		cout << "Int Subtraction Test 5: Failed" << endl;

	if ((*(*primitive - *primShort)).getInt() == primitive->getInt() - primShort->getShort())
		cout << "Int Subtraction Test 6: Success" << endl;
	else
		cout << "Int Subtraction Test 6: Failed" << endl;

	/******************************************************************************
		Unary Minus Tests
	******************************************************************************/

	if ((-(*primitive))->getInt() == -primitive->getInt())
		cout << "Int Unary Minus Test 1: Success" << endl;
	else
		cout << "Int Unary Minus Test 1: Failed" << endl;

	/******************************************************************************
		Multiplication Tests
	******************************************************************************/

	if ((*(*primitive * *primChar)).getInt() == primitive->getInt() * primChar->getChar())
		cout << "Int Multiplication Test 1: Success" << endl;
	else
		cout << "Int Multiplication Test 1: Failed" << endl;

	if ((*(*primitive * *primDouble)).getDouble() == primitive->getInt() * primDouble->getDouble())
		cout << "Int Multiplication Test 2: Success" << endl;
	else
		cout << "Int Multiplication Test 2: Failed" << endl;

	if ((*(*primitive * *primFloat)).getFloat() == primitive->getInt() * primFloat->getFloat())
		cout << "Int Multiplication Test 3: Success" << endl;
	else
		cout << "Int Multiplication Test 3: Failed" << endl;

	if ((*(*primitive * *primInt)).getInt() == primitive->getInt() * primInt->getInt())
		cout << "Int Multiplication Test 4: Success" << endl;
	else
		cout << "Int Multiplication Test 4: Failed" << endl;

	if ((*(*primitive * *primLong)).getLong() == primitive->getInt() * primLong->getLong())
		cout << "Int Multiplication Test 5: Success" << endl;
	else
		cout << "Int Multiplication Test 5: Failed" << endl;

	if ((*(*primitive * *primShort)).getInt() == primitive->getInt() * primShort->getShort())
		cout << "Int Multiplication Test 6: Success" << endl;
	else
		cout << "Int Multiplication Test 6: Failed" << endl;

	/******************************************************************************
		Division Tests
	******************************************************************************/

	if ((*(*primitive / *primChar)).getInt() == primitive->getInt() / primChar->getChar())
		cout << "Int Division Test 1: Success" << endl;
	else
		cout << "Int Division Test 1: Failed" << endl;

	if ((*(*primitive / *primDouble)).getDouble() == primitive->getInt() / primDouble->getDouble())
		cout << "Int Division Test 2: Success" << endl;
	else
		cout << "Int Division Test 2: Failed" << endl;

	if ((*(*primitive / *primFloat)).getFloat() == primitive->getInt() / primFloat->getFloat())
		cout << "Int Division Test 3: Success" << endl;
	else
		cout << "Int Division Test 3: Failed" << endl;

	if ((*(*primitive / *primInt)).getInt() == primitive->getInt() / primInt->getInt())
		cout << "Int Division Test 4: Success" << endl;
	else
		cout << "Int Division Test 4: Failed" << endl;

	if ((*(*primitive / *primLong)).getLong() == primitive->getInt() / primLong->getLong())
		cout << "Int Division Test 5: Success" << endl;
	else
		cout << "Int Division Test 5: Failed" << endl;

	if ((*(*primitive / *primShort)).getInt() == primitive->getInt() / primShort->getShort())
		cout << "Int Division Test 6: Success" << endl;
	else
		cout << "Int Division Test 6: Failed" << endl;

	/******************************************************************************
		Modulation Tests
	******************************************************************************/

	if ((*(*primitive % *primChar)).getInt() == primitive->getInt() % primChar->getChar())
		cout << "Int Modulation Test 1: Success" << endl;
	else
		cout << "Int Modulation Test 1: Failed" << endl;

	if ((*(*primitive % *primInt)).getInt() == primitive->getInt() % primInt->getInt())
		cout << "Int Modulation Test 2: Success" << endl;
	else
		cout << "Int Modulation Test 2: Failed" << endl;

	if ((*(*primitive % *primLong)).getLong() == primitive->getInt() % primLong->getLong())
		cout << "Int Modulation Test 3: Success" << endl;
	else
		cout << "Int Modulation Test 3: Failed" << endl;

	if ((*(*primitive % *primShort)).getInt() == primitive->getInt() % primShort->getShort())
		cout << "Int Modulation Test 4: Success" << endl;
	else
		cout << "Int Modulation Test 4: Failed" << endl;

	/******************************************************************************
		Postfix Incrementation Tests
	******************************************************************************/

	char tmp = primitive->getInt();

	if (tmp == ((*primitive)++)->getInt()) {

		if (tmp + 1 == primitive->getInt())
			cout << "Int Postfix Incrementation Test 1: Success" << endl;
		else
			cout << "Int Postfix Incrementation Test 1: Failed Late" << endl;
	} else
		cout << "Int Postfix Incrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Incrementation Tests
	******************************************************************************/

	tmp = primitive->getInt();

	if (tmp + 1 == (++(*primitive)).getInt()) {

		cout << "Int Prefix Incrementation Test 1: Success" << endl;
	} else
		cout << "Int Prefix Incrementation Test 1: Failed" << endl;

	/******************************************************************************
		Postfix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getInt();

	if (tmp == ((*primitive)--)->getInt()) {

		if (tmp - 1 == primitive->getInt())
			cout << "Int Postfix Decrementation Test 1: Success" << endl;
		else
			cout << "Int Postfix Decrementation Test 1: Failed Late" << endl;
	} else
		cout << "Int Postfix Decrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getInt();

	if (tmp - 1 == (--(*primitive)).getInt()) {

		cout << "Int Prefix Decrementation Test 1: Success" << endl;
	} else
		cout << "Int Prefix Decrementation Test 1: Failed" << endl;

	/******************************************************************************
		Bitwise OR Tests
	******************************************************************************/

	if (((*(*primitive | *primChar)).getInt()) == (primitive->getInt() | primChar->getChar()))
		cout << "Int Bitwise OR Test 1: Success" << endl;
	else
		cout << "Int Bitwise OR Test 1: Failed" << endl;

	if (((*(*primitive | *primInt)).getInt()) == (primitive->getInt() | primInt->getInt()))
		cout << "Int Bitwise OR Test 2: Success" << endl;
	else
		cout << "Int Bitwise OR Test 2: Failed" << endl;

	if (((*(*primitive | *primLong)).getLong()) == (primitive->getInt() | primLong->getLong()))
		cout << "Int Bitwise OR Test 3: Success" << endl;
	else
		cout << "Int Bitwise OR Test 3: Failed" << endl;

	if (((*(*primitive | *primShort)).getInt()) == (primitive->getInt() | primShort->getShort()))
		cout << "Int Bitwise OR Test 4: Success" << endl;
	else
		cout << "Int Bitwise OR Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise AND Tests
	******************************************************************************/

	if (((*(*primitive & *primChar)).getInt()) == (primitive->getInt() & primChar->getChar()))
		cout << "Int Bitwise AND Test 1: Success" << endl;
	else
		cout << "Int Bitwise AND Test 1: Failed" << endl;

	if (((*(*primitive & *primInt)).getInt()) == (primitive->getInt() & primInt->getInt()))
		cout << "Int Bitwise AND Test 2: Success" << endl;
	else
		cout << "Int Bitwise AND Test 2: Failed" << endl;

	if (((*(*primitive & *primLong)).getLong()) == (primitive->getInt() & primLong->getLong()))
		cout << "Int Bitwise AND Test 3: Success" << endl;
	else
		cout << "Int Bitwise AND Test 3: Failed" << endl;

	if (((*(*primitive & *primShort)).getInt()) == (primitive->getInt() & primShort->getShort()))
		cout << "Int Bitwise AND Test 4: Success" << endl;
	else
		cout << "Int Bitwise AND Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise NOT Tests
	******************************************************************************/

	if ((~(*primitive))->getInt() == ~primitive->getInt())
		cout << "Int Bitwise NOT Test 1: Success" << endl;
	else
		cout << "Int Bitwise NOT Test 1: Failed" << endl;

	/******************************************************************************
		Bitwise XOR Tests
	******************************************************************************/

	if (((*(*primitive ^ *primChar)).getInt()) == (primitive->getInt() ^ primChar->getChar()))
		cout << "Int Bitwise XOR Test 1: Success" << endl;
	else
		cout << "Int Bitwise XOR Test 1: Failed" << endl;

	if (((*(*primitive ^ *primInt)).getInt()) == (primitive->getInt() ^ primInt->getInt()))
		cout << "Int Bitwise XOR Test 2: Success" << endl;
	else
		cout << "Int Bitwise XOR Test 2: Failed" << endl;

	if (((*(*primitive ^ *primLong)).getLong()) == (primitive->getInt() ^ primLong->getLong()))
		cout << "Int Bitwise XOR Test 3: Success" << endl;
	else
		cout << "Int Bitwise XOR Test 3: Failed" << endl;

	if (((*(*primitive ^ *primShort)).getInt()) == (primitive->getInt() ^ primShort->getShort()))
		cout << "Int Bitwise XOR Test 4: Success" << endl;
	else
		cout << "Int Bitwise XOR Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise Shift Left Tests
	******************************************************************************/

	if ((*(*primitive << *primChar)).getInt() == primitive->getInt() << primChar->getChar())
		cout << "Int Bitwise Shift Left Test 1: Success" << endl;
	else
		cout << "Int Bitwise Shift Left Test 1: Failed" << endl;

	if ((*(*primitive << *primInt)).getInt() == primitive->getInt() << primInt->getInt())
		cout << "Int Bitwise Shift Left Test 2: Success" << endl;
	else
		cout << "Int Bitwise Shift Left Test 2: Failed" << endl;

	if ((*(*primitive << *primLong)).getLong() == primitive->getInt() << primLong->getLong())
		cout << "Int Bitwise Shift Left Test 3: Success" << endl;
	else
		cout << "Int Bitwise Shift Left Test 3: Failed" << endl;

	if ((*(*primitive << *primShort)).getInt() == primitive->getInt() << primShort->getShort())
		cout << "Int Bitwise Shift Left Test 4: Success" << endl;
	else
		cout << "Int Bitwise Shift Left Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise Shift Right Tests
	******************************************************************************/

	if ((*(*primitive >> *primChar)).getInt() == primitive->getInt() >> primChar->getChar())
		cout << "Int Bitwise Shift Right Test 1: Success" << endl;
	else
		cout << "Int Bitwise Shift Right Test 1: Failed" << endl;

	if ((*(*primitive >> *primInt)).getInt() == primitive->getInt() >> primInt->getInt())
		cout << "Int Bitwise Shift Right Test 2: Success" << endl;
	else
		cout << "Int Bitwise Shift Right Test 2: Failed" << endl;

	if ((*(*primitive >> *primLong)).getLong() == primitive->getInt() >> primLong->getLong())
		cout << "Int Bitwise Shift Right Test 3: Success" << endl;
	else
		cout << "Int Bitwise Shift Right Test 3: Failed" << endl;

	if ((*(*primitive >> *primShort)).getInt() == primitive->getInt() >> primShort->getShort())
		cout << "Int Bitwise Shift Right Test 4: Success" << endl;
	else
		cout << "Int Bitwise Shift Right Test 4: Failed" << endl;

	/******************************************************************************
		Equal To Tests
	******************************************************************************/

	if ((*primitive == *primChar)->getBool() == (primitive->getInt() == primChar->getChar()))
		cout << "Int Equal To Test 1: Success" << endl;
	else
		cout << "Int Equal To Test 1: Failed" << endl;

	if ((*primitive == *primDouble)->getBool() == (primitive->getInt() == primDouble->getDouble()))
		cout << "Int Equal to Test 2: Success" << endl;
	else
		cout << "Int Equal To Test 2: Failed" << endl;

	if ((*primitive == *primFloat)->getBool() == (primitive->getInt() == primFloat->getFloat()))
		cout << "Int Equal To Test 3: Success" << endl;
	else
		cout << "Int Equal To Test 3: Failed" << endl;

	if ((*primitive == *primInt)->getBool() == (primitive->getInt() == primInt->getInt()))
		cout << "Int Equal To Test 4: Success" << endl;
	else
		cout << "Int Equal To Test 4: Failed" << endl;

	if ((*primitive == *primLong)->getBool() == (primitive->getInt() == primLong->getLong()))
		cout << "Int Equal To Test 5: Success" << endl;
	else
		cout << "Int Equal To Test 5: Failed" << endl;

	if ((*primitive == *primShort)->getBool() == (primitive->getInt() == primShort->getShort()))
		cout << "Int Equal To Test 6: Success" << endl;
	else
		cout << "Int Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Not Equal To Tests
	******************************************************************************/

	if ((*primitive != *primChar)->getBool() == (primitive->getInt() != primChar->getChar()))
		cout << "Int Not Equal To Test 1: Success" << endl;
	else
		cout << "Int Not Equal To Test 1: Failed" << endl;

	if ((*primitive != *primDouble)->getBool() == (primitive->getInt() != primDouble->getDouble()))
		cout << "Int Not Equal to Test 2: Success" << endl;
	else
		cout << "Int Not Equal To Test 2: Failed" << endl;

	if ((*primitive != *primFloat)->getBool() == (primitive->getInt() != primFloat->getFloat()))
		cout << "Int Not Equal To Test 3: Success" << endl;
	else
		cout << "Int Not Equal To Test 3: Failed" << endl;

	if ((*primitive != *primInt)->getBool() == (primitive->getInt() != primInt->getInt()))
		cout << "Int Not Equal To Test 4: Success" << endl;
	else
		cout << "Int Not Equal To Test 4: Failed" << endl;

	if ((*primitive != *primLong)->getBool() == (primitive->getInt() != primLong->getLong()))
		cout << "Int Not Equal To Test 5: Success" << endl;
	else
		cout << "Int Not Equal To Test 5: Failed" << endl;

	if ((*primitive != *primShort)->getBool() == (primitive->getInt() != primShort->getShort()))
		cout << "Int Not Equal To Test 6: Success" << endl;
	else
		cout << "Int Not Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Tests
	******************************************************************************/

	if ((*primitive > *primChar)->getBool() == (primitive->getInt() > primChar->getChar()))
		cout << "Int Greater Than Test 1: Success" << endl;
	else
		cout << "Int Greater Than Test 1: Failed" << endl;

	if ((*primitive > *primDouble)->getBool() == (primitive->getInt() > primDouble->getDouble()))
		cout << "Int Greater Than Test 2: Success" << endl;
	else
		cout << "Int Greater Than Test 2: Failed" << endl;

	if ((*primitive > *primFloat)->getBool() == (primitive->getInt() > primFloat->getFloat()))
		cout << "Int Greater Than Test 3: Success" << endl;
	else
		cout << "Int Greater Than Test 3: Failed" << endl;

	if ((*primitive > *primInt)->getBool() == (primitive->getInt() > primInt->getInt()))
		cout << "Int Greater Than Test 4: Success" << endl;
	else
		cout << "Int Greater Than Test 4: Failed" << endl;

	if ((*primitive > *primLong)->getBool() == (primitive->getInt() > primLong->getLong()))
		cout << "Int Greater Than Test 5: Success" << endl;
	else
		cout << "Int Greater Than Test 5: Failed" << endl;

	if ((*primitive > *primShort)->getBool() == (primitive->getInt() > primShort->getShort()))
		cout << "Int Greater Than Test 6: Success" << endl;
	else
		cout << "Int Greater Than Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Tests
	******************************************************************************/

	if ((*primitive < *primChar)->getBool() == (primitive->getInt() < primChar->getChar()))
		cout << "Int Less Than Test 1: Success" << endl;
	else
		cout << "Int Less Than Test 1: Failed" << endl;

	if ((*primitive < *primDouble)->getBool() == (primitive->getInt() < primDouble->getDouble()))
		cout << "Int Less Than Test 2: Success" << endl;
	else
		cout << "Int Less Than Test 2: Failed" << endl;

	if ((*primitive < *primFloat)->getBool() == (primitive->getInt() < primFloat->getFloat()))
		cout << "Int Less Than Test 3: Success" << endl;
	else
		cout << "Int Less Than Test 3: Failed" << endl;

	if ((*primitive < *primInt)->getBool() == (primitive->getInt() < primInt->getInt()))
		cout << "Int Less Than Test 4: Success" << endl;
	else
		cout << "Int Less Than Test 4: Failed" << endl;

	if ((*primitive < *primLong)->getBool() == (primitive->getInt() < primLong->getLong()))
		cout << "Int Less Than Test 5: Success" << endl;
	else
		cout << "Int Less Than Test 5: Failed" << endl;

	if ((*primitive < *primShort)->getBool() == (primitive->getInt() < primShort->getShort()))
		cout << "Int Less Than Test 6: Success" << endl;
	else
		cout << "Int Less Than Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive >= *primChar)->getBool() == (primitive->getInt() >= primChar->getChar()))
		cout << "Int Greater Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Int Greater Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive >= *primDouble)->getBool() == (primitive->getInt() >= primDouble->getDouble()))
		cout << "Int Greater Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Int Greater Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive >= *primFloat)->getBool() == (primitive->getInt() >= primFloat->getFloat()))
		cout << "Int Greater Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Int Greater Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive >= *primInt)->getBool() == (primitive->getInt() >= primInt->getInt()))
		cout << "Int Greater Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Int Greater Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive >= *primLong)->getBool() == (primitive->getInt() >= primLong->getLong()))
		cout << "Int Greater Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Int Greater Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive >= *primShort)->getBool() == (primitive->getInt() >= primShort->getShort()))
		cout << "Int Greater Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Int Greater Than Or Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive <= *primChar)->getBool() == (primitive->getInt() <= primChar->getChar()))
		cout << "Int Less Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Int Less Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive <= *primDouble)->getBool() == (primitive->getInt() <= primDouble->getDouble()))
		cout << "Int Less Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Int Less Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive <= *primFloat)->getBool() == (primitive->getInt() <= primFloat->getFloat()))
		cout << "Int Less Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Int Less Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive <= *primInt)->getBool() == (primitive->getInt() <= primInt->getInt()))
		cout << "Int Less Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Int Less Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive <= *primLong)->getBool() == (primitive->getInt() <= primLong->getLong()))
		cout << "Int Less Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Int Less Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive <= *primShort)->getBool() == (primitive->getInt() <= primShort->getShort()))
		cout << "Int Less Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Int Less Than Or Equal To Test 6: Failed" << endl;
}