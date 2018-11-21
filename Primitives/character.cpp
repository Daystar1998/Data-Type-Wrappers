/******************************************************************************
	Copyright 2018 Matthew Day

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

	https://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
******************************************************************************/

/******************************************************************************
	File Name: character.cpp

	Author: Matthew Day

	Description:
		Implementation file for character.h
******************************************************************************/

#include "character.h"

namespace day {

	string Character::toString() {

		return to_string(getChar());
	}

	// Assignment
	Character& Character::operator=(Primitive &primitive) {

		this->assignment(primitive);

		return *this;
	}

	// Assignment
	Character& Character::assignment(Primitive &primitive) {

		this->setChar(primitive.getChar());

		return *this;
	}

	// Addition
	shared_ptr<Primitive> Character::operator+(Primitive &primitive) {

		shared_ptr<Primitive> result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result = make_shared<Character>(this->getChar() + primitive.getChar());
				break;
			case Type::SHORT:

				result = make_shared<Short>(this->getChar() + primitive.getShort());
				break;
			case Type::INTEGER:

				result = make_shared<Integer>(this->getChar() + primitive.getInt());
				break;
			case Type::LONG:

				result = make_shared<Long>(this->getChar() + primitive.getLong());
				break;
			case Type::FLOAT:

				result = make_shared<Float>(this->getChar() + primitive.getFloat());
				break;
			case Type::DOUBLE:

				result = make_shared<Double>(this->getChar() + primitive.getDouble());
				break;
			default:

				result = Primitive::operator+(primitive);
		};

		return result;
	}

	// Subtraction
	shared_ptr<Primitive> Character::operator-(Primitive &primitive) {

		shared_ptr<Primitive> result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result = make_shared<Character>(this->getChar() - primitive.getChar());
				break;
			case Type::SHORT:

				result = make_shared<Short>(this->getChar() - primitive.getShort());
				break;
			case Type::INTEGER:

				result = make_shared<Integer>(this->getChar() - primitive.getInt());
				break;
			case Type::LONG:

				result = make_shared<Long>(this->getChar() - primitive.getLong());
				break;
			case Type::FLOAT:

				result = make_shared<Float>(this->getChar() - primitive.getFloat());
				break;
			case Type::DOUBLE:

				result = make_shared<Double>(this->getChar() - primitive.getDouble());
				break;
			default:

				result = Primitive::operator-(primitive);
		};

		return result;
	}

	// Unary minus
	Primitive Character::operator-() {

		return Character(-getChar());
	}

		// Multiplication
	shared_ptr<Primitive> Character::operator*(Primitive &primitive) {

		shared_ptr<Primitive> result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result = make_shared<Character>(this->getChar() * primitive.getChar());
				break;
			case Type::SHORT:

				result = make_shared<Short>(this->getChar() * primitive.getShort());
				break;
			case Type::INTEGER:

				result = make_shared<Integer>(this->getChar() * primitive.getInt());
				break;
			case Type::LONG:

				result = make_shared<Long>(this->getChar() * primitive.getLong());
				break;
			case Type::FLOAT:

				result = make_shared<Float>(this->getChar() * primitive.getFloat());
				break;
			case Type::DOUBLE:

				result = make_shared<Double>(this->getChar() * primitive.getDouble());
				break;
			default:

				result = Primitive::operator*(primitive);
		};

		return result;
	}

	// Division
	shared_ptr<Primitive> Character::operator/(Primitive &primitive) {

		shared_ptr<Primitive> result;

		switch (primitive.getType()) {

			case Type::CHAR:

				if (primitive.getChar() == 0)
					throw new DivideByZeroException();

				result = make_shared<Character>(this->getChar() / primitive.getChar());
				break;
			case Type::SHORT:

				if (primitive.getShort() == 0)
					throw new DivideByZeroException();

				result = make_shared<Short>(this->getChar() / primitive.getShort());
				break;
			case Type::INTEGER:

				if (primitive.getInt() == 0)
					throw new DivideByZeroException();

				result = make_shared<Integer>(this->getChar() / primitive.getInt());
				break;
			case Type::LONG:

				if (primitive.getLong() == 0)
					throw new DivideByZeroException();

				result = make_shared<Long>(this->getChar() / primitive.getLong());
				break;
			case Type::FLOAT:

				if (primitive.getFloat() == 0)
					throw new DivideByZeroException();

				result = make_shared<Float>(this->getChar() / primitive.getFloat());
				break;
			case Type::DOUBLE:

				if (primitive.getDouble() == 0)
					throw new DivideByZeroException();

				result = make_shared<Double>(this->getChar() / primitive.getDouble());
				break;
			default:

				result = Primitive::operator/(primitive);
		};

		return result;
	}

	// Modulation
	shared_ptr<Primitive> Character::operator%(Primitive &primitive) {

		shared_ptr<Primitive> result;

		switch (primitive.getType()) {

			case Type::CHAR:

				if (primitive.getChar() == 0)
					throw new DivideByZeroException();

				result = make_shared<Character>(this->getChar() % primitive.getChar());
				break;
			case Type::SHORT:

				if (primitive.getShort() == 0)
					throw new DivideByZeroException();

				result = make_shared<Short>(this->getChar() % primitive.getShort());
				break;
			case Type::INTEGER:

				if (primitive.getInt() == 0)
					throw new DivideByZeroException();

				result = make_shared<Integer>(this->getChar() % primitive.getInt());
				break;
			case Type::LONG:

				if (primitive.getLong() == 0)
					throw new DivideByZeroException();

				result = make_shared<Long>(this->getChar() % primitive.getLong());
				break;
			default:

				result = Primitive::operator%(primitive);
		};

		return result;
	}

	// Prefix incrementation
	Character& Character::operator++() {

		setChar(getChar() + 1);

		return *this;
	}

	// Postfix incrementation
	Primitive Character::operator++(int) {

		Character result(this->getChar());
		++*this;

		return result;
	}

	// Prefix decrementation
	Character& Character::operator--() {

		setChar(getChar() - 1);

		return *this;
	}

	// Postfix decrementation
	Primitive Character::operator--(int) {

		Character result(this->getChar());
		--*this;

		return result;
	}

	// Bitwise OR
	shared_ptr<Primitive> Character::operator|(Primitive &primitive) {

		shared_ptr<Primitive> result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result = make_shared<Character>(this->getChar() | primitive.getChar());
				break;
			case Type::SHORT:

				result = make_shared<Short>(this->getChar() | primitive.getShort());
				break;
			case Type::INTEGER:

				result = make_shared<Integer>(this->getChar() | primitive.getInt());
				break;
			case Type::LONG:

				result = make_shared<Long>(this->getChar() | primitive.getLong());
				break;
			default:

				result = Primitive::operator|(primitive);
		};

		return result;
	}

	// Bitwise AND
	shared_ptr<Primitive> Character::operator&(Primitive &primitive) {

		shared_ptr<Primitive> result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result = make_shared<Character>(this->getChar() & primitive.getChar());
				break;
			case Type::SHORT:

				result = make_shared<Character>(this->getChar() & primitive.getShort());
				break;
			case Type::INTEGER:

				result = make_shared<Integer>(this->getChar() & primitive.getInt());
				break;
			case Type::LONG:

				result = make_shared<Long>(this->getChar() & primitive.getLong());
				break;
			default:

				result = Primitive::operator&(primitive);
		};

		return result;
	}

	// Bitwise NOT
	Primitive Character::operator~() {

		Character result;

		result.setChar(~this->getChar());

		return result;
	}

	// Bitwise XOR
	shared_ptr<Primitive> Character::operator^(Primitive &primitive) {

		shared_ptr<Primitive> result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result = make_shared<Character>(this->getChar() ^ primitive.getChar());
				break;
			case Type::SHORT:

				result = make_shared<Short>(this->getChar() ^ primitive.getShort());
				break;
			case Type::INTEGER:

				result = make_shared<Integer>(this->getChar() ^ primitive.getInt());
				break;
			case Type::LONG:

				result = make_shared<Long>(this->getChar() ^ primitive.getLong());
				break;
			default:

				result = Primitive::operator^(primitive);
		};

		return result;
	}

	// Bitwise left shift
	shared_ptr<Primitive> Character::operator<<(Primitive &primitive) {

		shared_ptr<Primitive> result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result = make_shared<Character>(this->getChar() << primitive.getChar());
				break;
			case Type::SHORT:

				result = make_shared<Short>(this->getChar() << primitive.getShort());
				break;
			case Type::INTEGER:

				result = make_shared<Integer>(this->getChar() << primitive.getInt());
				break;
			case Type::LONG:

				result = make_shared<Long>(this->getChar() << primitive.getLong());
				break;
			default:

				result = Primitive::operator<<(primitive);
		};

		return result;
	}

	// Bitwise right shift
	shared_ptr<Primitive> Character::operator>>(Primitive &primitive) {

		shared_ptr<Primitive> result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result = make_shared<Character>(this->getChar() >> primitive.getChar());
				break;
			case Type::SHORT:

				result = make_shared<Short>(this->getChar() >> primitive.getShort());
				break;
			case Type::INTEGER:

				result = make_shared<Integer>(this->getChar() >> primitive.getInt());
				break;
			case Type::LONG:

				result = make_shared<Long>(this->getChar() >> primitive.getLong());
				break;
			default:

				result = Primitive::operator>>(primitive);
		};

		return result;
	}

	// Equal to
	Primitive Character::operator==(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getChar() == primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getChar() == primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getChar() == primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getChar() == primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() == primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() == primitive.getDouble());
				break;
			default:

				Primitive::operator==(primitive);
		};

		return result;
	}

	// Not equal to
	Primitive Character::operator!=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getChar() != primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getChar() != primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getChar() != primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getChar() != primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() != primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() != primitive.getDouble());
				break;
			default:

				Primitive::operator!=(primitive);
		};

		return result;
	}

	// Greater than
	Primitive Character::operator>(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getChar() > primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getChar() > primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getChar() > primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getChar() > primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() > primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() > primitive.getDouble());
				break;
			default:

				Primitive::operator>(primitive);
		};

		return result;
	}

	// Less than
	Primitive Character::operator<(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getChar() < primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getChar() < primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getChar() < primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getChar() < primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() < primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() < primitive.getDouble());
				break;
			default:

				Primitive::operator<(primitive);
		};

		return result;
	}

	// Greater than or equal to
	Primitive Character::operator>=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getChar() >= primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getChar() >= primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getChar() >= primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getChar() >= primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() >= primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() >= primitive.getDouble());
				break;
			default:

				Primitive::operator>=(primitive);
		};

		return result;
	}

	// Less than or equal to
	Primitive Character::operator<=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getChar() <= primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getChar() <= primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getChar() <= primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getChar() <= primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() <= primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getChar() <= primitive.getDouble());
				break;
			default:

				Primitive::operator<=(primitive);
		};

		return result;
	}
}