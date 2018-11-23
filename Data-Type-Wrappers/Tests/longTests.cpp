#pragma once

#include "longTests.h"

void runLongTests() {

	shared_ptr<Primitive> primitive;
	primitive = make_shared<Long>(5);

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

	if ((*(*primitive + *primChar)).getLong() == primitive->getLong() + primChar->getChar())
		cout << "Long Addition Test 1: Success" << endl;
	else
		cout << "Long Addition Test 1: Failed" << endl;

	if ((*(*primitive + *primDouble)).getDouble() == primitive->getLong() + primDouble->getDouble())
		cout << "Long Addition Test 2: Success" << endl;
	else
		cout << "Long Addition Test 2: Failed" << endl;

	if ((*(*primitive + *primFloat)).getFloat() == primitive->getLong() + primFloat->getFloat())
		cout << "Long Addition Test 3: Success" << endl;
	else
		cout << "Long Addition Test 3: Failed" << endl;

	if ((*(*primitive + *primInt)).getLong() == primitive->getLong() + primInt->getInt())
		cout << "Long Addition Test 4: Success" << endl;
	else
		cout << "Long Addition Test 4: Failed" << endl;

	if ((*(*primitive + *primLong)).getLong() == primitive->getLong() + primLong->getLong())
		cout << "Long Addition Test 5: Success" << endl;
	else
		cout << "Long Addition Test 5: Failed" << endl;

	if ((*(*primitive + *primShort)).getLong() == primitive->getLong() + primShort->getShort())
		cout << "Long Addition Test 6: Success" << endl;
	else
		cout << "Long Addition Test 6: Failed" << endl;

	/******************************************************************************
		Subtraction Tests
	******************************************************************************/

	if ((*(*primitive - *primChar)).getLong() == primitive->getLong() - primChar->getChar())
		cout << "Long Subtraction Test 1: Success" << endl;
	else
		cout << "Long Subtraction Test 1: Failed" << endl;

	if ((*(*primitive - *primDouble)).getDouble() == primitive->getLong() - primDouble->getDouble())
		cout << "Long Subtraction Test 2: Success" << endl;
	else
		cout << "Long Subtraction Test 2: Failed" << endl;

	if ((*(*primitive - *primFloat)).getFloat() == primitive->getLong() - primFloat->getFloat())
		cout << "Long Subtraction Test 3: Success" << endl;
	else
		cout << "Long Subtraction Test 3: Failed" << endl;

	if ((*(*primitive - *primInt)).getLong() == primitive->getLong() - primInt->getInt())
		cout << "Long Subtraction Test 4: Success" << endl;
	else
		cout << "Long Subtraction Test 4: Failed" << endl;

	if ((*(*primitive - *primLong)).getLong() == primitive->getLong() - primLong->getLong())
		cout << "Long Subtraction Test 5: Success" << endl;
	else
		cout << "Long Subtraction Test 5: Failed" << endl;

	if ((*(*primitive - *primShort)).getLong() == primitive->getLong() - primShort->getShort())
		cout << "Long Subtraction Test 6: Success" << endl;
	else
		cout << "Long Subtraction Test 6: Failed" << endl;

	/******************************************************************************
		Unary Minus Tests
	******************************************************************************/

	if ((-(*primitive))->getLong() == -primitive->getLong())
		cout << "Long Unary Minus Test 1: Success" << endl;
	else
		cout << "Long Unary Minus Test 1: Failed" << endl;

	/******************************************************************************
		Multiplication Tests
	******************************************************************************/

	if ((*(*primitive * *primChar)).getLong() == primitive->getLong() * primChar->getChar())
		cout << "Long Multiplication Test 1: Success" << endl;
	else
		cout << "Long Multiplication Test 1: Failed" << endl;

	if ((*(*primitive * *primDouble)).getDouble() == primitive->getLong() * primDouble->getDouble())
		cout << "Long Multiplication Test 2: Success" << endl;
	else
		cout << "Long Multiplication Test 2: Failed" << endl;

	if ((*(*primitive * *primFloat)).getFloat() == primitive->getLong() * primFloat->getFloat())
		cout << "Long Multiplication Test 3: Success" << endl;
	else
		cout << "Long Multiplication Test 3: Failed" << endl;

	if ((*(*primitive * *primInt)).getLong() == primitive->getLong() * primInt->getInt())
		cout << "Long Multiplication Test 4: Success" << endl;
	else
		cout << "Long Multiplication Test 4: Failed" << endl;

	if ((*(*primitive * *primLong)).getLong() == primitive->getLong() * primLong->getLong())
		cout << "Long Multiplication Test 5: Success" << endl;
	else
		cout << "Long Multiplication Test 5: Failed" << endl;

	if ((*(*primitive * *primShort)).getLong() == primitive->getLong() * primShort->getShort())
		cout << "Long Multiplication Test 6: Success" << endl;
	else
		cout << "Long Multiplication Test 6: Failed" << endl;

	/******************************************************************************
		Division Tests
	******************************************************************************/

	if ((*(*primitive / *primChar)).getLong() == primitive->getLong() / primChar->getChar())
		cout << "Long Division Test 1: Success" << endl;
	else
		cout << "Long Division Test 1: Failed" << endl;

	if ((*(*primitive / *primDouble)).getDouble() == primitive->getLong() / primDouble->getDouble())
		cout << "Long Division Test 2: Success" << endl;
	else
		cout << "Long Division Test 2: Failed" << endl;

	if ((*(*primitive / *primFloat)).getFloat() == primitive->getLong() / primFloat->getFloat())
		cout << "Long Division Test 3: Success" << endl;
	else
		cout << "Long Division Test 3: Failed" << endl;

	if ((*(*primitive / *primInt)).getLong() == primitive->getLong() / primInt->getInt())
		cout << "Long Division Test 4: Success" << endl;
	else
		cout << "Long Division Test 4: Failed" << endl;

	if ((*(*primitive / *primLong)).getLong() == primitive->getLong() / primLong->getLong())
		cout << "Long Division Test 5: Success" << endl;
	else
		cout << "Long Division Test 5: Failed" << endl;

	if ((*(*primitive / *primShort)).getLong() == primitive->getLong() / primShort->getShort())
		cout << "Long Division Test 6: Success" << endl;
	else
		cout << "Long Division Test 6: Failed" << endl;

	/******************************************************************************
		Modulation Tests
	******************************************************************************/

	if ((*(*primitive % *primChar)).getLong() == primitive->getLong() % primChar->getChar())
		cout << "Long Modulation Test 1: Success" << endl;
	else
		cout << "Long Modulation Test 1: Failed" << endl;

	if ((*(*primitive % *primInt)).getLong() == primitive->getLong() % primInt->getInt())
		cout << "Long Modulation Test 2: Success" << endl;
	else
		cout << "Long Modulation Test 2: Failed" << endl;

	if ((*(*primitive % *primLong)).getLong() == primitive->getLong() % primLong->getLong())
		cout << "Long Modulation Test 3: Success" << endl;
	else
		cout << "Long Modulation Test 3: Failed" << endl;

	if ((*(*primitive % *primShort)).getLong() == primitive->getLong() % primShort->getShort())
		cout << "Long Modulation Test 4: Success" << endl;
	else
		cout << "Long Modulation Test 4: Failed" << endl;

	/******************************************************************************
		Postfix Incrementation Tests
	******************************************************************************/

	long tmp = primitive->getLong();

	if (tmp == ((*primitive)++)->getLong()) {

		if (tmp + 1 == primitive->getLong())
			cout << "Long Postfix Incrementation Test 1: Success" << endl;
		else
			cout << "Long Postfix Incrementation Test 1: Failed Late" << endl;
	} else
		cout << "Long Postfix Incrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Incrementation Tests
	******************************************************************************/

	tmp = primitive->getLong();

	if (tmp + 1 == (++(*primitive)).getLong()) {

		cout << "Long Prefix Incrementation Test 1: Success" << endl;
	} else
		cout << "Long Prefix Incrementation Test 1: Failed" << endl;

	/******************************************************************************
		Postfix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getLong();

	if (tmp == ((*primitive)--)->getLong()) {

		if (tmp - 1 == primitive->getLong())
			cout << "Long Postfix Decrementation Test 1: Success" << endl;
		else
			cout << "Long Postfix Decrementation Test 1: Failed Late" << endl;
	} else
		cout << "Long Postfix Decrementation Test 1: Failed Early" << endl;

	/******************************************************************************
		Prefix Decrementation Tests
	******************************************************************************/

	tmp = primitive->getLong();

	if (tmp - 1 == (--(*primitive)).getLong()) {

		cout << "Long Prefix Decrementation Test 1: Success" << endl;
	} else
		cout << "Long Prefix Decrementation Test 1: Failed" << endl;

	/******************************************************************************
		Bitwise OR Tests
	******************************************************************************/

	if (((*(*primitive | *primChar)).getLong()) == (primitive->getLong() | primChar->getChar()))
		cout << "Long Bitwise OR Test 1: Success" << endl;
	else
		cout << "Long Bitwise OR Test 1: Failed" << endl;

	if (((*(*primitive | *primInt)).getLong()) == (primitive->getLong() | primInt->getInt()))
		cout << "Long Bitwise OR Test 2: Success" << endl;
	else
		cout << "Long Bitwise OR Test 2: Failed" << endl;

	if (((*(*primitive | *primLong)).getLong()) == (primitive->getLong() | primLong->getLong()))
		cout << "Long Bitwise OR Test 3: Success" << endl;
	else
		cout << "Long Bitwise OR Test 3: Failed" << endl;

	if (((*(*primitive | *primShort)).getLong()) == (primitive->getLong() | primShort->getShort()))
		cout << "Long Bitwise OR Test 4: Success" << endl;
	else
		cout << "Long Bitwise OR Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise AND Tests
	******************************************************************************/

	if (((*(*primitive & *primChar)).getLong()) == (primitive->getLong() & primChar->getChar()))
		cout << "Long Bitwise AND Test 1: Success" << endl;
	else
		cout << "Long Bitwise AND Test 1: Failed" << endl;

	if (((*(*primitive & *primInt)).getLong()) == (primitive->getLong() & primInt->getInt()))
		cout << "Long Bitwise AND Test 2: Success" << endl;
	else
		cout << "Long Bitwise AND Test 2: Failed" << endl;

	if (((*(*primitive & *primLong)).getLong()) == (primitive->getLong() & primLong->getLong()))
		cout << "Long Bitwise AND Test 3: Success" << endl;
	else
		cout << "Long Bitwise AND Test 3: Failed" << endl;

	if (((*(*primitive & *primShort)).getLong()) == (primitive->getLong() & primShort->getShort()))
		cout << "Long Bitwise AND Test 4: Success" << endl;
	else
		cout << "Long Bitwise AND Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise NOT Tests
	******************************************************************************/

	if ((~(*primitive))->getLong() == ~primitive->getLong())
		cout << "Long Bitwise NOT Test 1: Success" << endl;
	else
		cout << "Long Bitwise NOT Test 1: Failed" << endl;

	/******************************************************************************
		Bitwise XOR Tests
	******************************************************************************/

	if (((*(*primitive ^ *primChar)).getLong()) == (primitive->getLong() ^ primChar->getChar()))
		cout << "Long Bitwise XOR Test 1: Success" << endl;
	else
		cout << "Long Bitwise XOR Test 1: Failed" << endl;

	if (((*(*primitive ^ *primInt)).getLong()) == (primitive->getLong() ^ primInt->getInt()))
		cout << "Long Bitwise XOR Test 2: Success" << endl;
	else
		cout << "Long Bitwise XOR Test 2: Failed" << endl;

	if (((*(*primitive ^ *primLong)).getLong()) == (primitive->getLong() ^ primLong->getLong()))
		cout << "Long Bitwise XOR Test 3: Success" << endl;
	else
		cout << "Long Bitwise XOR Test 3: Failed" << endl;

	if (((*(*primitive ^ *primShort)).getLong()) == (primitive->getLong() ^ primShort->getShort()))
		cout << "Long Bitwise XOR Test 4: Success" << endl;
	else
		cout << "Long Bitwise XOR Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise Shift Left Tests
	******************************************************************************/

	if ((*(*primitive << *primChar)).getLong() == primitive->getLong() << primChar->getChar())
		cout << "Long Bitwise Shift Left Test 1: Success" << endl;
	else
		cout << "Long Bitwise Shift Left Test 1: Failed" << endl;

	if ((*(*primitive << *primInt)).getLong() == primitive->getLong() << primInt->getInt())
		cout << "Long Bitwise Shift Left Test 2: Success" << endl;
	else
		cout << "Long Bitwise Shift Left Test 2: Failed" << endl;

	if ((*(*primitive << *primLong)).getLong() == primitive->getLong() << primLong->getLong())
		cout << "Long Bitwise Shift Left Test 3: Success" << endl;
	else
		cout << "Long Bitwise Shift Left Test 3: Failed" << endl;

	if ((*(*primitive << *primShort)).getLong() == primitive->getLong() << primShort->getShort())
		cout << "Long Bitwise Shift Left Test 4: Success" << endl;
	else
		cout << "Long Bitwise Shift Left Test 4: Failed" << endl;

	/******************************************************************************
		Bitwise Shift Right Tests
	******************************************************************************/

	if ((*(*primitive >> *primChar)).getLong() == primitive->getLong() >> primChar->getChar())
		cout << "Long Bitwise Shift Right Test 1: Success" << endl;
	else
		cout << "Long Bitwise Shift Right Test 1: Failed" << endl;

	if ((*(*primitive >> *primInt)).getLong() == primitive->getLong() >> primInt->getInt())
		cout << "Long Bitwise Shift Right Test 2: Success" << endl;
	else
		cout << "Long Bitwise Shift Right Test 2: Failed" << endl;

	if ((*(*primitive >> *primLong)).getLong() == primitive->getLong() >> primLong->getLong())
		cout << "Long Bitwise Shift Right Test 3: Success" << endl;
	else
		cout << "Long Bitwise Shift Right Test 3: Failed" << endl;

	if ((*(*primitive >> *primShort)).getLong() == primitive->getLong() >> primShort->getShort())
		cout << "Long Bitwise Shift Right Test 4: Success" << endl;
	else
		cout << "Long Bitwise Shift Right Test 4: Failed" << endl;

	/******************************************************************************
		Equal To Tests
	******************************************************************************/

	if ((*primitive == *primChar)->getBool() == (primitive->getLong() == primChar->getChar()))
		cout << "Long Equal To Test 1: Success" << endl;
	else
		cout << "Long Equal To Test 1: Failed" << endl;

	if ((*primitive == *primDouble)->getBool() == (primitive->getLong() == primDouble->getDouble()))
		cout << "Long Equal to Test 2: Success" << endl;
	else
		cout << "Long Equal To Test 2: Failed" << endl;

	if ((*primitive == *primFloat)->getBool() == (primitive->getLong() == primFloat->getFloat()))
		cout << "Long Equal To Test 3: Success" << endl;
	else
		cout << "Long Equal To Test 3: Failed" << endl;

	if ((*primitive == *primInt)->getBool() == (primitive->getLong() == primInt->getInt()))
		cout << "Long Equal To Test 4: Success" << endl;
	else
		cout << "Long Equal To Test 4: Failed" << endl;

	if ((*primitive == *primLong)->getBool() == (primitive->getLong() == primLong->getLong()))
		cout << "Long Equal To Test 5: Success" << endl;
	else
		cout << "Long Equal To Test 5: Failed" << endl;

	if ((*primitive == *primShort)->getBool() == (primitive->getLong() == primShort->getShort()))
		cout << "Long Equal To Test 6: Success" << endl;
	else
		cout << "Long Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Not Equal To Tests
	******************************************************************************/

	if ((*primitive != *primChar)->getBool() == (primitive->getLong() != primChar->getChar()))
		cout << "Long Not Equal To Test 1: Success" << endl;
	else
		cout << "Long Not Equal To Test 1: Failed" << endl;

	if ((*primitive != *primDouble)->getBool() == (primitive->getLong() != primDouble->getDouble()))
		cout << "Long Not Equal to Test 2: Success" << endl;
	else
		cout << "Long Not Equal To Test 2: Failed" << endl;

	if ((*primitive != *primFloat)->getBool() == (primitive->getLong() != primFloat->getFloat()))
		cout << "Long Not Equal To Test 3: Success" << endl;
	else
		cout << "Long Not Equal To Test 3: Failed" << endl;

	if ((*primitive != *primInt)->getBool() == (primitive->getLong() != primInt->getInt()))
		cout << "Long Not Equal To Test 4: Success" << endl;
	else
		cout << "Long Not Equal To Test 4: Failed" << endl;

	if ((*primitive != *primLong)->getBool() == (primitive->getLong() != primLong->getLong()))
		cout << "Long Not Equal To Test 5: Success" << endl;
	else
		cout << "Long Not Equal To Test 5: Failed" << endl;

	if ((*primitive != *primShort)->getBool() == (primitive->getLong() != primShort->getShort()))
		cout << "Long Not Equal To Test 6: Success" << endl;
	else
		cout << "Long Not Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Tests
	******************************************************************************/

	if ((*primitive > *primChar)->getBool() == (primitive->getLong() > primChar->getChar()))
		cout << "Long Greater Than Test 1: Success" << endl;
	else
		cout << "Long Greater Than Test 1: Failed" << endl;

	if ((*primitive > *primDouble)->getBool() == (primitive->getLong() > primDouble->getDouble()))
		cout << "Long Greater Than Test 2: Success" << endl;
	else
		cout << "Long Greater Than Test 2: Failed" << endl;

	if ((*primitive > *primFloat)->getBool() == (primitive->getLong() > primFloat->getFloat()))
		cout << "Long Greater Than Test 3: Success" << endl;
	else
		cout << "Long Greater Than Test 3: Failed" << endl;

	if ((*primitive > *primInt)->getBool() == (primitive->getLong() > primInt->getInt()))
		cout << "Long Greater Than Test 4: Success" << endl;
	else
		cout << "Long Greater Than Test 4: Failed" << endl;

	if ((*primitive > *primLong)->getBool() == (primitive->getLong() > primLong->getLong()))
		cout << "Long Greater Than Test 5: Success" << endl;
	else
		cout << "Long Greater Than Test 5: Failed" << endl;

	if ((*primitive > *primShort)->getBool() == (primitive->getLong() > primShort->getShort()))
		cout << "Long Greater Than Test 6: Success" << endl;
	else
		cout << "Long Greater Than Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Tests
	******************************************************************************/

	if ((*primitive < *primChar)->getBool() == (primitive->getLong() < primChar->getChar()))
		cout << "Long Less Than Test 1: Success" << endl;
	else
		cout << "Long Less Than Test 1: Failed" << endl;

	if ((*primitive < *primDouble)->getBool() == (primitive->getLong() < primDouble->getDouble()))
		cout << "Long Less Than Test 2: Success" << endl;
	else
		cout << "Long Less Than Test 2: Failed" << endl;

	if ((*primitive < *primFloat)->getBool() == (primitive->getLong() < primFloat->getFloat()))
		cout << "Long Less Than Test 3: Success" << endl;
	else
		cout << "Long Less Than Test 3: Failed" << endl;

	if ((*primitive < *primInt)->getBool() == (primitive->getLong() < primInt->getInt()))
		cout << "Long Less Than Test 4: Success" << endl;
	else
		cout << "Long Less Than Test 4: Failed" << endl;

	if ((*primitive < *primLong)->getBool() == (primitive->getLong() < primLong->getLong()))
		cout << "Long Less Than Test 5: Success" << endl;
	else
		cout << "Long Less Than Test 5: Failed" << endl;

	if ((*primitive < *primShort)->getBool() == (primitive->getLong() < primShort->getShort()))
		cout << "Long Less Than Test 6: Success" << endl;
	else
		cout << "Long Less Than Test 6: Failed" << endl;

	/******************************************************************************
		Greater Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive >= *primChar)->getBool() == (primitive->getLong() >= primChar->getChar()))
		cout << "Long Greater Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Long Greater Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive >= *primDouble)->getBool() == (primitive->getLong() >= primDouble->getDouble()))
		cout << "Long Greater Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Long Greater Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive >= *primFloat)->getBool() == (primitive->getLong() >= primFloat->getFloat()))
		cout << "Long Greater Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Long Greater Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive >= *primInt)->getBool() == (primitive->getLong() >= primInt->getInt()))
		cout << "Long Greater Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Long Greater Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive >= *primLong)->getBool() == (primitive->getLong() >= primLong->getLong()))
		cout << "Long Greater Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Long Greater Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive >= *primShort)->getBool() == (primitive->getLong() >= primShort->getShort()))
		cout << "Long Greater Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Long Greater Than Or Equal To Test 6: Failed" << endl;

	/******************************************************************************
		Less Than Or Equal To Tests
	******************************************************************************/

	if ((*primitive <= *primChar)->getBool() == (primitive->getLong() <= primChar->getChar()))
		cout << "Long Less Than Or Equal To Test 1: Success" << endl;
	else
		cout << "Long Less Than Or Equal To Test 1: Failed" << endl;

	if ((*primitive <= *primDouble)->getBool() == (primitive->getLong() <= primDouble->getDouble()))
		cout << "Long Less Than Or Equal To Test 2: Success" << endl;
	else
		cout << "Long Less Than Or Equal To Test 2: Failed" << endl;

	if ((*primitive <= *primFloat)->getBool() == (primitive->getLong() <= primFloat->getFloat()))
		cout << "Long Less Than Or Equal To Test 3: Success" << endl;
	else
		cout << "Long Less Than Or Equal To Test 3: Failed" << endl;

	if ((*primitive <= *primInt)->getBool() == (primitive->getLong() <= primInt->getInt()))
		cout << "Long Less Than Or Equal To Test 4: Success" << endl;
	else
		cout << "Long Less Than Or Equal To Test 4: Failed" << endl;

	if ((*primitive <= *primLong)->getBool() == (primitive->getLong() <= primLong->getLong()))
		cout << "Long Less Than Or Equal To Test 5: Success" << endl;
	else
		cout << "Long Less Than Or Equal To Test 5: Failed" << endl;

	if ((*primitive <= *primShort)->getBool() == (primitive->getLong() <= primShort->getShort()))
		cout << "Long Less Than Or Equal To Test 6: Success" << endl;
	else
		cout << "Long Less Than Or Equal To Test 6: Failed" << endl;
}