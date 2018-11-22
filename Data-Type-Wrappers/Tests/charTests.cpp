#pragma once

#include "charTests.h"

void runCharTests() {

	shared_ptr<Primitive> primitive;
	primitive = make_shared<Character>(5);

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

	if ((*(*primitive + *primChar)).getChar() == primitive->getChar() + primChar->getChar())
		cout << "Char Addition Test 1: Success" << endl;
	else
		cout << "Char Addition Test 1: Failed" << endl;

	if ((*(*primitive + *primDouble)).getDouble() == primitive->getChar() + primDouble->getDouble())
		cout << "Char Addition Test 2: Success" << endl;
	else
		cout << "Char Addition Test 2: Failed" << endl;

	if ((*(*primitive + *primFloat)).getFloat() == primitive->getChar() + primFloat->getFloat())
		cout << "Char Addition Test 3: Success" << endl;
	else
		cout << "Char Addition Test 3: Failed" << endl;

	if ((*(*primitive + *primInt)).getInt() == primitive->getChar() + primInt->getInt())
		cout << "Char Addition Test 4: Success" << endl;
	else
		cout << "Char Addition Test 4: Failed" << endl;

	if ((*(*primitive + *primLong)).getLong() == primitive->getChar() + primLong->getLong())
		cout << "Char Addition Test 5: Success" << endl;
	else
		cout << "Char Addition Test 5: Failed" << endl;

	if ((*(*primitive + *primShort)).getShort() == primitive->getChar() + primShort->getShort())
		cout << "Char Addition Test 6: Success" << endl;
	else
		cout << "Char Addition Test 6: Failed" << endl;

	/******************************************************************************
		Subtraction Tests
	******************************************************************************/

	if ((*(*primitive - *primChar)).getChar() == primitive->getChar() - primChar->getChar())
		cout << "Char Subtraction Test 1: Success" << endl;
	else
		cout << "Char Subtraction Test 1: Failed" << endl;

	if ((*(*primitive - *primDouble)).getDouble() == primitive->getChar() - primDouble->getDouble())
		cout << "Char Subtraction Test 2: Success" << endl;
	else
		cout << "Char Subtraction Test 2: Failed" << endl;

	if ((*(*primitive - *primFloat)).getFloat() == primitive->getChar() - primFloat->getFloat())
		cout << "Char Subtraction Test 3: Success" << endl;
	else
		cout << "Char Subtraction Test 3: Failed" << endl;

	if ((*(*primitive - *primInt)).getInt() == primitive->getChar() - primInt->getInt())
		cout << "Char Subtraction Test 4: Success" << endl;
	else
		cout << "Char Subtraction Test 4: Failed" << endl;

	if ((*(*primitive - *primLong)).getLong() == primitive->getChar() - primLong->getLong())
		cout << "Char Subtraction Test 5: Success" << endl;
	else
		cout << "Char Subtraction Test 5: Failed" << endl;

	if ((*(*primitive - *primShort)).getShort() == primitive->getChar() - primShort->getShort())
		cout << "Char Subtraction Test 6: Success" << endl;
	else
		cout << "Char Subtraction Test 6: Failed" << endl;

	/******************************************************************************
		Unary Minus Tests
	******************************************************************************/

	if ((-(*primitive))->getChar() == -primitive->getChar())
		cout << "Char Unary Minus Test 1: Success" << endl;
	else
		cout << "Char Unary Minus Test 1: Failed" << endl;

	/******************************************************************************
		Multiplication Tests
	******************************************************************************/

	if ((*(*primitive * *primChar)).getChar() == primitive->getChar() * primChar->getChar())
		cout << "Char Multiplication Test 1: Success" << endl;
	else
		cout << "Char Multiplication Test 1: Failed" << endl;

	if ((*(*primitive * *primDouble)).getDouble() == primitive->getChar() * primDouble->getDouble())
		cout << "Char Multiplication Test 2: Success" << endl;
	else
		cout << "Char Multiplication Test 2: Failed" << endl;

	if ((*(*primitive * *primFloat)).getFloat() == primitive->getChar() * primFloat->getFloat())
		cout << "Char Multiplication Test 3: Success" << endl;
	else
		cout << "Char Multiplication Test 3: Failed" << endl;

	if ((*(*primitive * *primInt)).getInt() == primitive->getChar() * primInt->getInt())
		cout << "Char Multiplication Test 4: Success" << endl;
	else
		cout << "Char Multiplication Test 4: Failed" << endl;

	if ((*(*primitive * *primLong)).getLong() == primitive->getChar() * primLong->getLong())
		cout << "Char Multiplication Test 5: Success" << endl;
	else
		cout << "Char Multiplication Test 5: Failed" << endl;

	if ((*(*primitive * *primShort)).getShort() == primitive->getChar() * primShort->getShort())
		cout << "Char Multiplication Test 6: Success" << endl;
	else
		cout << "Char Multiplication Test 6: Failed" << endl;

	/******************************************************************************
		Division Tests
	******************************************************************************/

	if ((*(*primitive / *primChar)).getChar() == primitive->getChar() / primChar->getChar())
		cout << "Char Division Test 1: Success" << endl;
	else
		cout << "Char Division Test 1: Failed" << endl;

	if ((*(*primitive / *primDouble)).getDouble() == primitive->getChar() / primDouble->getDouble())
		cout << "Char Division Test 2: Success" << endl;
	else
		cout << "Char Division Test 2: Failed" << endl;

	if ((*(*primitive / *primFloat)).getFloat() == primitive->getChar() / primFloat->getFloat())
		cout << "Char Division Test 3: Success" << endl;
	else
		cout << "Char Division Test 3: Failed" << endl;

	if ((*(*primitive / *primInt)).getInt() == primitive->getChar() / primInt->getInt())
		cout << "Char Division Test 4: Success" << endl;
	else
		cout << "Char Division Test 4: Failed" << endl;

	if ((*(*primitive / *primLong)).getLong() == primitive->getChar() / primLong->getLong())
		cout << "Char Division Test 5: Success" << endl;
	else
		cout << "Char Division Test 5: Failed" << endl;

	if ((*(*primitive / *primShort)).getShort() == primitive->getChar() / primShort->getShort())
		cout << "Char Division Test 6: Success" << endl;
	else
		cout << "Char Division Test 6: Failed" << endl;

	/******************************************************************************
		Modulation Tests
	******************************************************************************/

	if ((*(*primitive % *primChar)).getChar() == primitive->getChar() % primChar->getChar())
		cout << "Char Modulation Test 1: Success" << endl;
	else
		cout << "Char Modulation Test 1: Failed" << endl;

	if ((*(*primitive % *primInt)).getInt() == primitive->getChar() % primInt->getInt())
		cout << "Char Modulation Test 2: Success" << endl;
	else
		cout << "Char Modulation Test 2: Failed" << endl;

	if ((*(*primitive % *primLong)).getLong() == primitive->getChar() % primLong->getLong())
		cout << "Char Modulation Test 3: Success" << endl;
	else
		cout << "Char Modulation Test 3: Failed" << endl;

	if ((*(*primitive % *primShort)).getShort() == primitive->getChar() % primShort->getShort())
		cout << "Char Modulation Test 4: Success" << endl;
	else
		cout << "Char Modulation Test 4: Failed" << endl;

	/******************************************************************************
		Postfix Incrementation Tests
	******************************************************************************/

	char tmp = primitive->getChar();

	if (tmp == ((*primitive)++)->getChar()) {

		if (tmp + 1 == primitive->getChar())
			cout << "Char Postfix Incrementation Test 1: Success" << endl;
		else
			cout << "Char Postfix Incrementation Test 1: Failed Late" << endl;
	} else
		cout << "Char Postfix Incrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Incrementation Tests
	******************************************************************************/

	tmp = primitive->getChar();

	if (tmp + 1 == (++(*primitive)).getChar()) {

		cout << "Char Prefix Incrementation Test 1: Success" << endl;
	} else
		cout << "Char Prefix Incrementation Test 1: Failed" << endl;

	/******************************************************************************
		Postfix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getChar();

	if (tmp == ((*primitive)--)->getChar()) {

		if (tmp - 1 == primitive->getChar())
			cout << "Char Postfix Decrementation Test 1: Success" << endl;
		else
			cout << "Char Postfix Decrementation Test 1: Failed Late" << endl;
	} else
		cout << "Char Postfix Decrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getChar();

	if (tmp - 1 == (--(*primitive)).getChar()) {

		cout << "Char Prefix Decrementation Test 1: Success" << endl;
	} else
		cout << "Char Prefix Decrementation Test 1: Failed" << endl;

	/******************************************************************************
		Bitwise OR Tests
	******************************************************************************/

	if (((*(*primitive | *primChar)).getChar()) == (primitive->getChar() | primChar->getChar()))
		cout << "Char Bitwise OR Test 1: Success" << endl;
	else
		cout << "Char Bitwise OR Test 1: Failed" << endl;

	if (((*(*primitive | *primInt)).getInt()) == (primitive->getChar() | primInt->getInt()))
		cout << "Char Bitwise OR Test 2: Success" << endl;
	else
		cout << "Char Bitwise OR Test 2: Failed" << endl;

	if (((*(*primitive | *primLong)).getLong()) == (primitive->getChar() | primLong->getLong()))
		cout << "Char Bitwise OR Test 3: Success" << endl;
	else
		cout << "Char Bitwise OR Test 3: Failed" << endl;

	if (((*(*primitive | *primShort)).getShort()) == (primitive->getChar() | primShort->getShort()))
		cout << "Char Bitwise OR Test 4: Success" << endl;
	else
		cout << "Char Bitwise OR Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise AND Tests
	******************************************************************************/

	if (((*(*primitive & *primChar)).getChar()) == (primitive->getChar() & primChar->getChar()))
		cout << "Char Bitwise AND Test 1: Success" << endl;
	else
		cout << "Char Bitwise AND Test 1: Failed" << endl;

	if (((*(*primitive & *primInt)).getInt()) == (primitive->getChar() & primInt->getInt()))
		cout << "Char Bitwise AND Test 2: Success" << endl;
	else
		cout << "Char Bitwise AND Test 2: Failed" << endl;

	if (((*(*primitive & *primLong)).getLong()) == (primitive->getChar() & primLong->getLong()))
		cout << "Char Bitwise AND Test 3: Success" << endl;
	else
		cout << "Char Bitwise AND Test 3: Failed" << endl;

	if (((*(*primitive & *primShort)).getShort()) == (primitive->getChar() & primShort->getShort()))
		cout << "Char Bitwise AND Test 4: Success" << endl;
	else
		cout << "Char Bitwise AND Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise NOT Tests
	******************************************************************************/

	if ((~(*primitive))->getChar() == ~primitive->getChar())
		cout << "Char Bitwise NOT Test 1: Success" << endl;
	else
		cout << "Char Bitwise NOT Test 1: Failed" << endl;

	/******************************************************************************
		Bitwise XOR Tests
	******************************************************************************/

	if (((*(*primitive ^ *primChar)).getChar()) == (primitive->getChar() ^ primChar->getChar()))
		cout << "Char Bitwise XOR Test 1: Success" << endl;
	else
		cout << "Char Bitwise XOR Test 1: Failed" << endl;

	if (((*(*primitive ^ *primInt)).getInt()) == (primitive->getChar() ^ primInt->getInt()))
		cout << "Char Bitwise XOR Test 2: Success" << endl;
	else
		cout << "Char Bitwise XOR Test 2: Failed" << endl;

	if (((*(*primitive ^ *primLong)).getLong()) == (primitive->getChar() ^ primLong->getLong()))
		cout << "Char Bitwise XOR Test 3: Success" << endl;
	else
		cout << "Char Bitwise XOR Test 3: Failed" << endl;

	if (((*(*primitive ^ *primShort)).getShort()) == (primitive->getChar() ^ primShort->getShort()))
		cout << "Char Bitwise XOR Test 4: Success" << endl;
	else
		cout << "Char Bitwise XOR Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise Shift Left Tests
	******************************************************************************/

	if ((*(*primitive << *primChar)).getChar() == primitive->getChar() << primChar->getChar())
		cout << "Char Bitwise Shift Left Test 1: Success" << endl;
	else
		cout << "Char Bitwise Shift Left Test 1: Failed" << endl;

	if ((*(*primitive << *primInt)).getInt() == primitive->getChar() << primInt->getInt())
		cout << "Char Bitwise Shift Left Test 2: Success" << endl;
	else
		cout << "Char Bitwise Shift Left Test 2: Failed" << endl;

	if ((*(*primitive << *primLong)).getLong() == primitive->getChar() << primLong->getLong())
		cout << "Char Bitwise Shift Left Test 3: Success" << endl;
	else
		cout << "Char Bitwise Shift Left Test 3: Failed" << endl;

	if ((*(*primitive << *primShort)).getShort() == primitive->getChar() << primShort->getShort())
		cout << "Char Bitwise Shift Left Test 4: Success" << endl;
	else
		cout << "Char Bitwise Shift Left Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise Shift Right Tests
	******************************************************************************/

	if ((*(*primitive >> *primChar)).getChar() == primitive->getChar() >> primChar->getChar())
		cout << "Char Bitwise Shift Right Test 1: Success" << endl;
	else
		cout << "Char Bitwise Shift Right Test 1: Failed" << endl;

	if ((*(*primitive >> *primInt)).getInt() == primitive->getChar() >> primInt->getInt())
		cout << "Char Bitwise Shift Right Test 2: Success" << endl;
	else
		cout << "Char Bitwise Shift Right Test 2: Failed" << endl;

	if ((*(*primitive >> *primLong)).getLong() == primitive->getChar() >> primLong->getLong())
		cout << "Char Bitwise Shift Right Test 3: Success" << endl;
	else
		cout << "Char Bitwise Shift Right Test 3: Failed" << endl;

	if ((*(*primitive >> *primShort)).getShort() == primitive->getChar() >> primShort->getShort())
		cout << "Char Bitwise Shift Right Test 4: Success" << endl;
	else
		cout << "Char Bitwise Shift Right Test 4: Failed" << endl;

	/******************************************************************************
		Equal To Tests
	******************************************************************************/

	if ((*primitive == *primChar)->getBool() == (primitive->getChar() == primChar->getChar()))
		cout << "Char Equal To Test 1: Success" << endl;
	else
		cout << "Char Equal To Test 1: Failed" << endl;

	if ((*primitive == *primDouble)->getBool() == (primitive->getChar() == primDouble->getDouble()))
		cout << "Char Equal to Test 2: Success" << endl;
	else
		cout << "Char Equal To Test 2: Failed" << endl;

	if ((*primitive == *primFloat)->getBool() == (primitive->getChar() == primFloat->getFloat()))
		cout << "Char Equal To Test 3: Success" << endl;
	else
		cout << "Char Equal To Test 3: Failed" << endl;

	if ((*primitive == *primInt)->getBool() == (primitive->getChar() == primInt->getInt()))
		cout << "Char Equal To Test 4: Success" << endl;
	else
		cout << "Char Equal To Test 4: Failed" << endl;

	if ((*primitive == *primLong)->getBool() == (primitive->getChar() == primLong->getLong()))
		cout << "Char Equal To Test 5: Success" << endl;
	else
		cout << "Char Equal To Test 5: Failed" << endl;

	if ((*primitive == *primShort)->getBool() == (primitive->getChar() == primShort->getShort()))
		cout << "Char Equal To Test 6: Success" << endl;
	else
		cout << "Char Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Not Equal To Tests
	******************************************************************************/

	if ((*primitive != *primChar)->getBool() == (primitive->getChar() != primChar->getChar()))
		cout << "Char Not Equal To Test 1: Success" << endl;
	else
		cout << "Char Not Equal To Test 1: Failed" << endl;

	if ((*primitive != *primDouble)->getBool() == (primitive->getChar() != primDouble->getDouble()))
		cout << "Char Not Equal to Test 2: Success" << endl;
	else
		cout << "Char Not Equal To Test 2: Failed" << endl;

	if ((*primitive != *primFloat)->getBool() == (primitive->getChar() != primFloat->getFloat()))
		cout << "Char Not Equal To Test 3: Success" << endl;
	else
		cout << "Char Not Equal To Test 3: Failed" << endl;

	if ((*primitive != *primInt)->getBool() == (primitive->getChar() != primInt->getInt()))
		cout << "Char Not Equal To Test 4: Success" << endl;
	else
		cout << "Char Not Equal To Test 4: Failed" << endl;

	if ((*primitive != *primLong)->getBool() == (primitive->getChar() != primLong->getLong()))
		cout << "Char Not Equal To Test 5: Success" << endl;
	else
		cout << "Char Not Equal To Test 5: Failed" << endl;

	if ((*primitive != *primShort)->getBool() == (primitive->getChar() != primShort->getShort()))
		cout << "Char Not Equal To Test 6: Success" << endl;
	else
		cout << "Char Not Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Tests
	******************************************************************************/

	if ((*primitive > *primChar)->getBool() == (primitive->getChar() > primChar->getChar()))
		cout << "Char Greater Than Test 1: Success" << endl;
	else
		cout << "Char Greater Than Test 1: Failed" << endl;

	if ((*primitive > *primDouble)->getBool() == (primitive->getChar() > primDouble->getDouble()))
		cout << "Char Greater Than Test 2: Success" << endl;
	else
		cout << "Char Greater Than Test 2: Failed" << endl;

	if ((*primitive > *primFloat)->getBool() == (primitive->getChar() > primFloat->getFloat()))
		cout << "Char Greater Than Test 3: Success" << endl;
	else
		cout << "Char Greater Than Test 3: Failed" << endl;

	if ((*primitive > *primInt)->getBool() == (primitive->getChar() > primInt->getInt()))
		cout << "Char Greater Than Test 4: Success" << endl;
	else
		cout << "Char Greater Than Test 4: Failed" << endl;

	if ((*primitive > *primLong)->getBool() == (primitive->getChar() > primLong->getLong()))
		cout << "Char Greater Than Test 5: Success" << endl;
	else
		cout << "Char Greater Than Test 5: Failed" << endl;

	if ((*primitive > *primShort)->getBool() == (primitive->getChar() > primShort->getShort()))
		cout << "Char Greater Than Test 6: Success" << endl;
	else
		cout << "Char Greater Than Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Tests
	******************************************************************************/

	if ((*primitive < *primChar)->getBool() == (primitive->getChar() < primChar->getChar()))
		cout << "Char Less Than Test 1: Success" << endl;
	else
		cout << "Char Less Than Test 1: Failed" << endl;

	if ((*primitive < *primDouble)->getBool() == (primitive->getChar() < primDouble->getDouble()))
		cout << "Char Less Than Test 2: Success" << endl;
	else
		cout << "Char Less Than Test 2: Failed" << endl;

	if ((*primitive < *primFloat)->getBool() == (primitive->getChar() < primFloat->getFloat()))
		cout << "Char Less Than Test 3: Success" << endl;
	else
		cout << "Char Less Than Test 3: Failed" << endl;

	if ((*primitive < *primInt)->getBool() == (primitive->getChar() < primInt->getInt()))
		cout << "Char Less Than Test 4: Success" << endl;
	else
		cout << "Char Less Than Test 4: Failed" << endl;

	if ((*primitive < *primLong)->getBool() == (primitive->getChar() < primLong->getLong()))
		cout << "Char Less Than Test 5: Success" << endl;
	else
		cout << "Char Less Than Test 5: Failed" << endl;

	if ((*primitive < *primShort)->getBool() == (primitive->getChar() < primShort->getShort()))
		cout << "Char Less Than Test 6: Success" << endl;
	else
		cout << "Char Less Than Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive >= *primChar)->getBool() == (primitive->getChar() >= primChar->getChar()))
		cout << "Char Greater Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Char Greater Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive >= *primDouble)->getBool() == (primitive->getChar() >= primDouble->getDouble()))
		cout << "Char Greater Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Char Greater Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive >= *primFloat)->getBool() == (primitive->getChar() >= primFloat->getFloat()))
		cout << "Char Greater Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Char Greater Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive >= *primInt)->getBool() == (primitive->getChar() >= primInt->getInt()))
		cout << "Char Greater Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Char Greater Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive >= *primLong)->getBool() == (primitive->getChar() >= primLong->getLong()))
		cout << "Char Greater Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Char Greater Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive >= *primShort)->getBool() == (primitive->getChar() >= primShort->getShort()))
		cout << "Char Greater Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Char Greater Than Or Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive <= *primChar)->getBool() == (primitive->getChar() <= primChar->getChar()))
		cout << "Char Less Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Char Less Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive <= *primDouble)->getBool() == (primitive->getChar() <= primDouble->getDouble()))
		cout << "Char Less Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Char Less Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive <= *primFloat)->getBool() == (primitive->getChar() <= primFloat->getFloat()))
		cout << "Char Less Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Char Less Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive <= *primInt)->getBool() == (primitive->getChar() <= primInt->getInt()))
		cout << "Char Less Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Char Less Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive <= *primLong)->getBool() == (primitive->getChar() <= primLong->getLong()))
		cout << "Char Less Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Char Less Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive <= *primShort)->getBool() == (primitive->getChar() <= primShort->getShort()))
		cout << "Char Less Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Char Less Than Or Equal To Test 6: Failed" << endl;
}