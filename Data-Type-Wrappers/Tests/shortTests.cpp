#pragma once

#include "shortTests.h"

void runShortTests() {

	shared_ptr<Primitive> primitive;
	primitive = make_shared<Short>(5);

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

	if ((*(*primitive + *primChar)).getShort() == primitive->getShort() + primChar->getChar())
		cout << "Short Addition Test 1: Success" << endl;
	else
		cout << "Short Addition Test 1: Failed" << endl;

	if ((*(*primitive + *primDouble)).getDouble() == primitive->getShort() + primDouble->getDouble())
		cout << "Short Addition Test 2: Success" << endl;
	else
		cout << "Short Addition Test 2: Failed" << endl;

	if ((*(*primitive + *primFloat)).getFloat() == primitive->getShort() + primFloat->getFloat())
		cout << "Short Addition Test 3: Success" << endl;
	else
		cout << "Short Addition Test 3: Failed" << endl;

	if ((*(*primitive + *primInt)).getInt() == primitive->getShort() + primInt->getInt())
		cout << "Short Addition Test 4: Success" << endl;
	else
		cout << "Short Addition Test 4: Failed" << endl;

	if ((*(*primitive + *primLong)).getLong() == primitive->getShort() + primLong->getLong())
		cout << "Short Addition Test 5: Success" << endl;
	else
		cout << "Short Addition Test 5: Failed" << endl;

	if ((*(*primitive + *primShort)).getShort() == primitive->getShort() + primShort->getShort())
		cout << "Short Addition Test 6: Success" << endl;
	else
		cout << "Short Addition Test 6: Failed" << endl;

	/******************************************************************************
		Subtraction Tests
	******************************************************************************/

	if ((*(*primitive - *primChar)).getShort() == primitive->getShort() - primChar->getChar())
		cout << "Short Subtraction Test 1: Success" << endl;
	else
		cout << "Short Subtraction Test 1: Failed" << endl;

	if ((*(*primitive - *primDouble)).getDouble() == primitive->getShort() - primDouble->getDouble())
		cout << "Short Subtraction Test 2: Success" << endl;
	else
		cout << "Short Subtraction Test 2: Failed" << endl;

	if ((*(*primitive - *primFloat)).getFloat() == primitive->getShort() - primFloat->getFloat())
		cout << "Short Subtraction Test 3: Success" << endl;
	else
		cout << "Short Subtraction Test 3: Failed" << endl;

	if ((*(*primitive - *primInt)).getInt() == primitive->getShort() - primInt->getInt())
		cout << "Short Subtraction Test 4: Success" << endl;
	else
		cout << "Short Subtraction Test 4: Failed" << endl;

	if ((*(*primitive - *primLong)).getLong() == primitive->getShort() - primLong->getLong())
		cout << "Short Subtraction Test 5: Success" << endl;
	else
		cout << "Short Subtraction Test 5: Failed" << endl;

	if ((*(*primitive - *primShort)).getShort() == primitive->getShort() - primShort->getShort())
		cout << "Short Subtraction Test 6: Success" << endl;
	else
		cout << "Short Subtraction Test 6: Failed" << endl;

	/******************************************************************************
		Unary Minus Tests
	******************************************************************************/

	if ((-(*primitive))->getShort() == -primitive->getShort())
		cout << "Short Unary Minus Test 1: Success" << endl;
	else
		cout << "Short Unary Minus Test 1: Failed" << endl;

	/******************************************************************************
		Multiplication Tests
	******************************************************************************/

	if ((*(*primitive * *primChar)).getShort() == primitive->getShort() * primChar->getChar())
		cout << "Short Multiplication Test 1: Success" << endl;
	else
		cout << "Short Multiplication Test 1: Failed" << endl;

	if ((*(*primitive * *primDouble)).getDouble() == primitive->getShort() * primDouble->getDouble())
		cout << "Short Multiplication Test 2: Success" << endl;
	else
		cout << "Short Multiplication Test 2: Failed" << endl;

	if ((*(*primitive * *primFloat)).getFloat() == primitive->getShort() * primFloat->getFloat())
		cout << "Short Multiplication Test 3: Success" << endl;
	else
		cout << "Short Multiplication Test 3: Failed" << endl;

	if ((*(*primitive * *primInt)).getInt() == primitive->getShort() * primInt->getInt())
		cout << "Short Multiplication Test 4: Success" << endl;
	else
		cout << "Short Multiplication Test 4: Failed" << endl;

	if ((*(*primitive * *primLong)).getLong() == primitive->getShort() * primLong->getLong())
		cout << "Short Multiplication Test 5: Success" << endl;
	else
		cout << "Short Multiplication Test 5: Failed" << endl;

	if ((*(*primitive * *primShort)).getShort() == primitive->getShort() * primShort->getShort())
		cout << "Short Multiplication Test 6: Success" << endl;
	else
		cout << "Short Multiplication Test 6: Failed" << endl;

	/******************************************************************************
		Division Tests
	******************************************************************************/

	if ((*(*primitive / *primChar)).getShort() == primitive->getShort() / primChar->getChar())
		cout << "Short Division Test 1: Success" << endl;
	else
		cout << "Short Division Test 1: Failed" << endl;

	if ((*(*primitive / *primDouble)).getDouble() == primitive->getShort() / primDouble->getDouble())
		cout << "Short Division Test 2: Success" << endl;
	else
		cout << "Short Division Test 2: Failed" << endl;

	if ((*(*primitive / *primFloat)).getFloat() == primitive->getShort() / primFloat->getFloat())
		cout << "Short Division Test 3: Success" << endl;
	else
		cout << "Short Division Test 3: Failed" << endl;

	if ((*(*primitive / *primInt)).getInt() == primitive->getShort() / primInt->getInt())
		cout << "Short Division Test 4: Success" << endl;
	else
		cout << "Short Division Test 4: Failed" << endl;

	if ((*(*primitive / *primLong)).getLong() == primitive->getShort() / primLong->getLong())
		cout << "Short Division Test 5: Success" << endl;
	else
		cout << "Short Division Test 5: Failed" << endl;

	if ((*(*primitive / *primShort)).getShort() == primitive->getShort() / primShort->getShort())
		cout << "Short Division Test 6: Success" << endl;
	else
		cout << "Short Division Test 6: Failed" << endl;

	/******************************************************************************
		Modulation Tests
	******************************************************************************/

	if ((*(*primitive % *primChar)).getShort() == primitive->getShort() % primChar->getChar())
		cout << "Short Modulation Test 1: Success" << endl;
	else
		cout << "Short Modulation Test 1: Failed" << endl;

	if ((*(*primitive % *primInt)).getInt() == primitive->getShort() % primInt->getInt())
		cout << "Short Modulation Test 2: Success" << endl;
	else
		cout << "Short Modulation Test 2: Failed" << endl;

	if ((*(*primitive % *primLong)).getLong() == primitive->getShort() % primLong->getLong())
		cout << "Short Modulation Test 3: Success" << endl;
	else
		cout << "Short Modulation Test 3: Failed" << endl;

	if ((*(*primitive % *primShort)).getShort() == primitive->getShort() % primShort->getShort())
		cout << "Short Modulation Test 4: Success" << endl;
	else
		cout << "Short Modulation Test 4: Failed" << endl;

	/******************************************************************************
		Postfix Incrementation Tests
	******************************************************************************/

	short tmp = primitive->getShort();

	if (tmp == ((*primitive)++)->getShort()) {

		if (tmp + 1 == primitive->getShort())
			cout << "Short Postfix Incrementation Test 1: Success" << endl;
		else
			cout << "Short Postfix Incrementation Test 1: Failed Late" << endl;
	} else
		cout << "Short Postfix Incrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Incrementation Tests
	******************************************************************************/

	tmp = primitive->getShort();

	if (tmp + 1 == (++(*primitive)).getShort()) {

		cout << "Short Prefix Incrementation Test 1: Success" << endl;
	} else
		cout << "Short Prefix Incrementation Test 1: Failed" << endl;

	/******************************************************************************
		Postfix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getShort();

	if (tmp == ((*primitive)--)->getShort()) {

		if (tmp - 1 == primitive->getShort())
			cout << "Short Postfix Decrementation Test 1: Success" << endl;
		else
			cout << "Short Postfix Decrementation Test 1: Failed Late" << endl;
	} else
		cout << "Short Postfix Decrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getShort();

	if (tmp - 1 == (--(*primitive)).getShort()) {

		cout << "Short Prefix Decrementation Test 1: Success" << endl;
	} else
		cout << "Short Prefix Decrementation Test 1: Failed" << endl;

	/******************************************************************************
		Bitwise OR Tests
	******************************************************************************/

	if (((*(*primitive | *primChar)).getShort()) == (primitive->getShort() | primChar->getChar()))
		cout << "Short Bitwise OR Test 1: Success" << endl;
	else
		cout << "Short Bitwise OR Test 1: Failed" << endl;

	if (((*(*primitive | *primInt)).getInt()) == (primitive->getShort() | primInt->getInt()))
		cout << "Short Bitwise OR Test 2: Success" << endl;
	else
		cout << "Short Bitwise OR Test 2: Failed" << endl;

	if (((*(*primitive | *primLong)).getLong()) == (primitive->getShort() | primLong->getLong()))
		cout << "Short Bitwise OR Test 3: Success" << endl;
	else
		cout << "Short Bitwise OR Test 3: Failed" << endl;

	if (((*(*primitive | *primShort)).getShort()) == (primitive->getShort() | primShort->getShort()))
		cout << "Short Bitwise OR Test 4: Success" << endl;
	else
		cout << "Short Bitwise OR Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise AND Tests
	******************************************************************************/

	if (((*(*primitive & *primChar)).getShort()) == (primitive->getShort() & primChar->getChar()))
		cout << "Short Bitwise AND Test 1: Success" << endl;
	else
		cout << "Short Bitwise AND Test 1: Failed" << endl;

	if (((*(*primitive & *primInt)).getInt()) == (primitive->getShort() & primInt->getInt()))
		cout << "Short Bitwise AND Test 2: Success" << endl;
	else
		cout << "Short Bitwise AND Test 2: Failed" << endl;

	if (((*(*primitive & *primLong)).getLong()) == (primitive->getShort() & primLong->getLong()))
		cout << "Short Bitwise AND Test 3: Success" << endl;
	else
		cout << "Short Bitwise AND Test 3: Failed" << endl;

	if (((*(*primitive & *primShort)).getShort()) == (primitive->getShort() & primShort->getShort()))
		cout << "Short Bitwise AND Test 4: Success" << endl;
	else
		cout << "Short Bitwise AND Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise NOT Tests
	******************************************************************************/

	if ((~(*primitive))->getShort() == ~primitive->getShort())
		cout << "Short Bitwise NOT Test 1: Success" << endl;
	else
		cout << "Short Bitwise NOT Test 1: Failed" << endl;

	/******************************************************************************
		Bitwise XOR Tests
	******************************************************************************/

	if (((*(*primitive ^ *primChar)).getShort()) == (primitive->getShort() ^ primChar->getChar()))
		cout << "Short Bitwise XOR Test 1: Success" << endl;
	else
		cout << "Short Bitwise XOR Test 1: Failed" << endl;

	if (((*(*primitive ^ *primInt)).getInt()) == (primitive->getShort() ^ primInt->getInt()))
		cout << "Short Bitwise XOR Test 2: Success" << endl;
	else
		cout << "Short Bitwise XOR Test 2: Failed" << endl;

	if (((*(*primitive ^ *primLong)).getLong()) == (primitive->getShort() ^ primLong->getLong()))
		cout << "Short Bitwise XOR Test 3: Success" << endl;
	else
		cout << "Short Bitwise XOR Test 3: Failed" << endl;

	if (((*(*primitive ^ *primShort)).getShort()) == (primitive->getShort() ^ primShort->getShort()))
		cout << "Short Bitwise XOR Test 4: Success" << endl;
	else
		cout << "Short Bitwise XOR Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise Shift Left Tests
	******************************************************************************/

	if ((*(*primitive << *primChar)).getShort() == primitive->getShort() << primChar->getChar())
		cout << "Short Bitwise Shift Left Test 1: Success" << endl;
	else
		cout << "Short Bitwise Shift Left Test 1: Failed" << endl;

	if ((*(*primitive << *primInt)).getInt() == primitive->getShort() << primInt->getInt())
		cout << "Short Bitwise Shift Left Test 2: Success" << endl;
	else
		cout << "Short Bitwise Shift Left Test 2: Failed" << endl;

	if ((*(*primitive << *primLong)).getLong() == primitive->getShort() << primLong->getLong())
		cout << "Short Bitwise Shift Left Test 3: Success" << endl;
	else
		cout << "Short Bitwise Shift Left Test 3: Failed" << endl;

	if ((*(*primitive << *primShort)).getShort() == primitive->getShort() << primShort->getShort())
		cout << "Short Bitwise Shift Left Test 4: Success" << endl;
	else
		cout << "Short Bitwise Shift Left Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise Shift Right Tests
	******************************************************************************/

	if ((*(*primitive >> *primChar)).getShort() == primitive->getShort() >> primChar->getChar())
		cout << "Short Bitwise Shift Right Test 1: Success" << endl;
	else
		cout << "Short Bitwise Shift Right Test 1: Failed" << endl;

	if ((*(*primitive >> *primInt)).getInt() == primitive->getShort() >> primInt->getInt())
		cout << "Short Bitwise Shift Right Test 2: Success" << endl;
	else
		cout << "Short Bitwise Shift Right Test 2: Failed" << endl;

	if ((*(*primitive >> *primLong)).getLong() == primitive->getShort() >> primLong->getLong())
		cout << "Short Bitwise Shift Right Test 3: Success" << endl;
	else
		cout << "Short Bitwise Shift Right Test 3: Failed" << endl;

	if ((*(*primitive >> *primShort)).getShort() == primitive->getShort() >> primShort->getShort())
		cout << "Short Bitwise Shift Right Test 4: Success" << endl;
	else
		cout << "Short Bitwise Shift Right Test 4: Failed" << endl;

	/******************************************************************************
		Equal To Tests
	******************************************************************************/

	if ((*primitive == *primChar)->getBool() == (primitive->getShort() == primChar->getChar()))
		cout << "Short Equal To Test 1: Success" << endl;
	else
		cout << "Short Equal To Test 1: Failed" << endl;

	if ((*primitive == *primDouble)->getBool() == (primitive->getShort() == primDouble->getDouble()))
		cout << "Short Equal to Test 2: Success" << endl;
	else
		cout << "Short Equal To Test 2: Failed" << endl;

	if ((*primitive == *primFloat)->getBool() == (primitive->getShort() == primFloat->getFloat()))
		cout << "Short Equal To Test 3: Success" << endl;
	else
		cout << "Short Equal To Test 3: Failed" << endl;

	if ((*primitive == *primInt)->getBool() == (primitive->getShort() == primInt->getInt()))
		cout << "Short Equal To Test 4: Success" << endl;
	else
		cout << "Short Equal To Test 4: Failed" << endl;

	if ((*primitive == *primLong)->getBool() == (primitive->getShort() == primLong->getLong()))
		cout << "Short Equal To Test 5: Success" << endl;
	else
		cout << "Short Equal To Test 5: Failed" << endl;

	if ((*primitive == *primShort)->getBool() == (primitive->getShort() == primShort->getShort()))
		cout << "Short Equal To Test 6: Success" << endl;
	else
		cout << "Short Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Not Equal To Tests
	******************************************************************************/

	if ((*primitive != *primChar)->getBool() == (primitive->getShort() != primChar->getChar()))
		cout << "Short Not Equal To Test 1: Success" << endl;
	else
		cout << "Short Not Equal To Test 1: Failed" << endl;

	if ((*primitive != *primDouble)->getBool() == (primitive->getShort() != primDouble->getDouble()))
		cout << "Short Not Equal to Test 2: Success" << endl;
	else
		cout << "Short Not Equal To Test 2: Failed" << endl;

	if ((*primitive != *primFloat)->getBool() == (primitive->getShort() != primFloat->getFloat()))
		cout << "Short Not Equal To Test 3: Success" << endl;
	else
		cout << "Short Not Equal To Test 3: Failed" << endl;

	if ((*primitive != *primInt)->getBool() == (primitive->getShort() != primInt->getInt()))
		cout << "Short Not Equal To Test 4: Success" << endl;
	else
		cout << "Short Not Equal To Test 4: Failed" << endl;

	if ((*primitive != *primLong)->getBool() == (primitive->getShort() != primLong->getLong()))
		cout << "Short Not Equal To Test 5: Success" << endl;
	else
		cout << "Short Not Equal To Test 5: Failed" << endl;

	if ((*primitive != *primShort)->getBool() == (primitive->getShort() != primShort->getShort()))
		cout << "Short Not Equal To Test 6: Success" << endl;
	else
		cout << "Short Not Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Tests
	******************************************************************************/

	if ((*primitive > *primChar)->getBool() == (primitive->getShort() > primChar->getChar()))
		cout << "Short Greater Than Test 1: Success" << endl;
	else
		cout << "Short Greater Than Test 1: Failed" << endl;

	if ((*primitive > *primDouble)->getBool() == (primitive->getShort() > primDouble->getDouble()))
		cout << "Short Greater Than Test 2: Success" << endl;
	else
		cout << "Short Greater Than Test 2: Failed" << endl;

	if ((*primitive > *primFloat)->getBool() == (primitive->getShort() > primFloat->getFloat()))
		cout << "Short Greater Than Test 3: Success" << endl;
	else
		cout << "Short Greater Than Test 3: Failed" << endl;

	if ((*primitive > *primInt)->getBool() == (primitive->getShort() > primInt->getInt()))
		cout << "Short Greater Than Test 4: Success" << endl;
	else
		cout << "Short Greater Than Test 4: Failed" << endl;

	if ((*primitive > *primLong)->getBool() == (primitive->getShort() > primLong->getLong()))
		cout << "Short Greater Than Test 5: Success" << endl;
	else
		cout << "Short Greater Than Test 5: Failed" << endl;

	if ((*primitive > *primShort)->getBool() == (primitive->getShort() > primShort->getShort()))
		cout << "Short Greater Than Test 6: Success" << endl;
	else
		cout << "Short Greater Than Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Tests
	******************************************************************************/

	if ((*primitive < *primChar)->getBool() == (primitive->getShort() < primChar->getChar()))
		cout << "Short Less Than Test 1: Success" << endl;
	else
		cout << "Short Less Than Test 1: Failed" << endl;

	if ((*primitive < *primDouble)->getBool() == (primitive->getShort() < primDouble->getDouble()))
		cout << "Short Less Than Test 2: Success" << endl;
	else
		cout << "Short Less Than Test 2: Failed" << endl;

	if ((*primitive < *primFloat)->getBool() == (primitive->getShort() < primFloat->getFloat()))
		cout << "Short Less Than Test 3: Success" << endl;
	else
		cout << "Short Less Than Test 3: Failed" << endl;

	if ((*primitive < *primInt)->getBool() == (primitive->getShort() < primInt->getInt()))
		cout << "Short Less Than Test 4: Success" << endl;
	else
		cout << "Short Less Than Test 4: Failed" << endl;

	if ((*primitive < *primLong)->getBool() == (primitive->getShort() < primLong->getLong()))
		cout << "Short Less Than Test 5: Success" << endl;
	else
		cout << "Short Less Than Test 5: Failed" << endl;

	if ((*primitive < *primShort)->getBool() == (primitive->getShort() < primShort->getShort()))
		cout << "Short Less Than Test 6: Success" << endl;
	else
		cout << "Short Less Than Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive >= *primChar)->getBool() == (primitive->getShort() >= primChar->getChar()))
		cout << "Short Greater Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Short Greater Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive >= *primDouble)->getBool() == (primitive->getShort() >= primDouble->getDouble()))
		cout << "Short Greater Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Short Greater Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive >= *primFloat)->getBool() == (primitive->getShort() >= primFloat->getFloat()))
		cout << "Short Greater Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Short Greater Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive >= *primInt)->getBool() == (primitive->getShort() >= primInt->getInt()))
		cout << "Short Greater Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Short Greater Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive >= *primLong)->getBool() == (primitive->getShort() >= primLong->getLong()))
		cout << "Short Greater Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Short Greater Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive >= *primShort)->getBool() == (primitive->getShort() >= primShort->getShort()))
		cout << "Short Greater Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Short Greater Than Or Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive <= *primChar)->getBool() == (primitive->getShort() <= primChar->getChar()))
		cout << "Short Less Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Short Less Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive <= *primDouble)->getBool() == (primitive->getShort() <= primDouble->getDouble()))
		cout << "Short Less Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Short Less Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive <= *primFloat)->getBool() == (primitive->getShort() <= primFloat->getFloat()))
		cout << "Short Less Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Short Less Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive <= *primInt)->getBool() == (primitive->getShort() <= primInt->getInt()))
		cout << "Short Less Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Short Less Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive <= *primLong)->getBool() == (primitive->getShort() <= primLong->getLong()))
		cout << "Short Less Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Short Less Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive <= *primShort)->getBool() == (primitive->getShort() <= primShort->getShort()))
		cout << "Short Less Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Short Less Than Or Equal To Test 6: Failed" << endl;
}