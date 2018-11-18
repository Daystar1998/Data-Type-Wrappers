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
	File Name: long.cpp

	Author: Matthew Day

	Description:
		Implementation file for long.h
******************************************************************************/

#include "long.h"

namespace day {

	string Long::toString() {

		return to_string(data);
	}

	// Assignment
	Long& Long::operator=(Primitive &primitive) {

		switch (primitive.getType()) {

			case Type::CHAR:

				this->setLong(primitive.getChar());
				break;
			case Type::SHORT:

				this->setLong(primitive.getShort());
				break;
			case Type::INTEGER:

				this->setLong(primitive.getInt());
				break;
			case Type::LONG:

				this->setLong(primitive.getLong());
				break;
			case Type::FLOAT:

				this->setLong(primitive.getFloat());
				break;
			case Type::DOUBLE:

				this->setLong(primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return *this;
	}

	// Addition
	Primitive Long::operator+(Primitive &primitive) {

		Long result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setLong(this->getLong() + primitive.getChar());
				break;
			case Type::SHORT:

				result.setLong(this->getLong() + primitive.getShort());
				break;
			case Type::INTEGER:

				result.setLong(this->getLong() + primitive.getInt());
				break;
			case Type::LONG:

				result.setLong(this->getLong() + primitive.getLong());
				break;
			case Type::FLOAT:

				result.setLong(this->getLong() + primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setLong(this->getLong() + primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Subtraction
	Primitive Long::operator-(Primitive &primitive) {

		Long result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setLong(this->getLong() - primitive.getChar());
				break;
			case Type::SHORT:

				result.setLong(this->getLong() - primitive.getShort());
				break;
			case Type::INTEGER:

				result.setLong(this->getLong() - primitive.getInt());
				break;
			case Type::LONG:

				result.setLong(this->getLong() - primitive.getLong());
				break;
			case Type::FLOAT:

				result.setLong(this->getLong() - primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setLong(this->getLong() - primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Multiplication
	Primitive Long::operator*(Primitive &primitive) {

		Long result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setLong(this->getLong() * primitive.getChar());
				break;
			case Type::SHORT:

				result.setLong(this->getLong() * primitive.getShort());
				break;
			case Type::INTEGER:

				result.setLong(this->getLong() * primitive.getInt());
				break;
			case Type::LONG:

				result.setLong(this->getLong() * primitive.getLong());
				break;
			case Type::FLOAT:

				result.setLong(this->getLong() * primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setLong(this->getLong() * primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Division
	Primitive Long::operator/(Primitive &primitive) {

		Long result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setLong(this->getLong() / primitive.getChar());
				break;
			case Type::SHORT:

				result.setLong(this->getLong() / primitive.getShort());
				break;
			case Type::INTEGER:

				result.setLong(this->getLong() / primitive.getInt());
				break;
			case Type::LONG:

				result.setLong(this->getLong() / primitive.getLong());
				break;
			case Type::FLOAT:

				result.setLong(this->getLong() / primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setLong(this->getLong() / primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Modulation
	Primitive Long::operator%(Primitive &primitive) {

		Long result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setLong(this->getLong() % primitive.getChar());
				break;
			case Type::SHORT:

				result.setLong(this->getLong() % primitive.getShort());
				break;
			case Type::INTEGER:

				result.setLong(this->getLong() % primitive.getInt());
				break;
			case Type::LONG:

				result.setLong(this->getLong() % primitive.getLong());
				break;
			case Type::FLOAT:
				// TODO: Decide whether on not to remove this
				result.setLong(this->getLong() % (int)primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setLong(this->getLong() % (int)primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Prefix incrementation
	Long& Long::operator++() {

		this->data++;

		return *this;
	}

	// Postfix incrementation
	Primitive Long::operator++(int) {

		Long result(this->getLong());
		++*this;

		return result;
	}

	// Prefix decrementation
	Long& Long::operator--() {

		this->data--;

		return *this;
	}

	// Postfix decrementation
	Primitive Long::operator--(int) {

		Long result(this->getLong());
		--*this;

		return result;
	}

	// Bitwise OR
	Primitive Long::operator|(Primitive &primitive) {

		Long result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setLong(this->getLong() | primitive.getChar());
				break;
			case Type::SHORT:

				result.setLong(this->getLong() | primitive.getShort());
				break;
			case Type::INTEGER:

				result.setLong(this->getLong() | primitive.getInt());
				break;
			case Type::LONG:

				result.setLong(this->getLong() | primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Bitwise AND
	Primitive Long::operator&(Primitive &primitive) {

		Long result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setLong(this->getLong() & primitive.getChar());
				break;
			case Type::SHORT:

				result.setLong(this->getLong() & primitive.getShort());
				break;
			case Type::INTEGER:

				result.setLong(this->getLong() & primitive.getInt());
				break;
			case Type::LONG:

				result.setLong(this->getLong() & primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Bitwise NOT
	Primitive Long::operator~() {

		Long result;

		result.setLong(~this->getLong());

		return result;
	}

	// Bitwise XOR
	Primitive Long::operator^(Primitive &primitive) {

		Long result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setLong(this->getLong() ^ primitive.getChar());
				break;
			case Type::SHORT:

				result.setLong(this->getLong() ^ primitive.getShort());
				break;
			case Type::INTEGER:

				result.setLong(this->getLong() ^ primitive.getInt());
				break;
			case Type::LONG:

				result.setLong(this->getLong() ^ primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Left shift
	Primitive Long::operator<<(Primitive &primitive) {

		Long result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setLong(this->getLong() << primitive.getChar());
				break;
			case Type::SHORT:

				result.setLong(this->getLong() << primitive.getShort());
				break;
			case Type::INTEGER:

				result.setLong(this->getLong() << primitive.getInt());
				break;
			case Type::LONG:

				result.setLong(this->getLong() << primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Right shift
	Primitive Long::operator>>(Primitive &primitive) {

		Long result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setLong(this->getLong() >> primitive.getChar());
				break;
			case Type::SHORT:

				result.setLong(this->getLong() >> primitive.getShort());
				break;
			case Type::INTEGER:

				result.setLong(this->getLong() >> primitive.getInt());
				break;
			case Type::LONG:

				result.setLong(this->getLong() >> primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Equals
	Boolean Long::operator==(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getLong() == primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getLong() == primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getLong() == primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getLong() == primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() == primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() == primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Not equal
	Boolean Long::operator!=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getLong() != primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getLong() != primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getLong() != primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getLong() != primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() != primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() != primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Greater than
	Boolean Long::operator>(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getLong() > primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getLong() > primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getLong() > primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getLong() > primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() > primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() > primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Less than
	Boolean Long::operator<(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getLong() < primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getLong() < primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getLong() < primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getLong() < primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() < primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() < primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Greater than or equal to
	Boolean Long::operator>=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getLong() >= primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getLong() >= primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getLong() >= primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getLong() >= primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() >= primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() >= primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Less than or equal to
	Boolean Long::operator<=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getLong() <= primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getLong() <= primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getLong() <= primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getLong() <= primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() <= primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getLong() <= primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}
}