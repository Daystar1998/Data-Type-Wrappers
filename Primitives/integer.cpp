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
	File Name: integer.cpp

	Author: Matthew Day

	Description:
		Implementation file for integer.h
******************************************************************************/

#include "integer.h"

namespace day {

	string Integer::toString() {

		return to_string(data);
	}

	// Assignment
	Integer& Integer::operator=(Primitive &primitive) {

		switch (primitive.getType()) {

			case Type::CHAR:

				this->setInt(primitive.getChar());
				break;
			case Type::SHORT:

				this->setInt(primitive.getShort());
				break;
			case Type::INTEGER:

				this->setInt(primitive.getInt());
				break;
			case Type::LONG:

				this->setInt(primitive.getLong());
				break;
			case Type::FLOAT:

				this->setInt(primitive.getFloat());
				break;
			case Type::DOUBLE:

				this->setInt(primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return *this;
	}

	// Addition
	Primitive Integer::operator+(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setInt(this->getInt() + primitive.getChar());
				break;
			case Type::SHORT:

				result.setInt(this->getInt() + primitive.getShort());
				break;
			case Type::INTEGER:

				result.setInt(this->getInt() + primitive.getInt());
				break;
			case Type::LONG:

				result.setInt(this->getInt() + primitive.getLong());
				break;
			case Type::FLOAT:

				result.setInt(this->getInt() + primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setInt(this->getInt() + primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Subtraction
	Primitive Integer::operator-(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setInt(this->getInt() - primitive.getChar());
				break;
			case Type::SHORT:

				result.setInt(this->getInt() - primitive.getShort());
				break;
			case Type::INTEGER:

				result.setInt(this->getInt() - primitive.getInt());
				break;
			case Type::LONG:

				result.setInt(this->getInt() - primitive.getLong());
				break;
			case Type::FLOAT:

				result.setInt(this->getInt() - primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setInt(this->getInt() - primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Multiplication
	Primitive Integer::operator*(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setInt(this->getInt() * primitive.getChar());
				break;
			case Type::SHORT:

				result.setInt(this->getInt() * primitive.getShort());
				break;
			case Type::INTEGER:

				result.setInt(this->getInt() * primitive.getInt());
				break;
			case Type::LONG:

				result.setInt(this->getInt() * primitive.getLong());
				break;
			case Type::FLOAT:

				result.setInt(this->getInt() * primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setInt(this->getInt() * primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Division
	Primitive Integer::operator/(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setInt(this->getInt() / primitive.getChar());
				break;
			case Type::SHORT:

				result.setInt(this->getInt() / primitive.getShort());
				break;
			case Type::INTEGER:

				result.setInt(this->getInt() / primitive.getInt());
				break;
			case Type::LONG:

				result.setInt(this->getInt() / primitive.getLong());
				break;
			case Type::FLOAT:

				result.setInt(this->getInt() / primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setInt(this->getInt() / primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Modulation
	Primitive Integer::operator%(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setInt(this->getInt() % primitive.getChar());
				break;
			case Type::SHORT:

				result.setInt(this->getInt() % primitive.getShort());
				break;
			case Type::INTEGER:

				result.setInt(this->getInt() % primitive.getInt());
				break;
			case Type::LONG:

				result.setInt(this->getInt() % primitive.getLong());
				break;
			case Type::FLOAT:
				// TODO: Decide whether on not to remove this
				result.setInt(this->getInt() % (int)primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setInt(this->getInt() % (int)primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Prefix incrementation
	Integer& Integer::operator++() {

		this->data++;

		return *this;
	}

	// Postfix incrementation
	Primitive Integer::operator++(int) {

		Integer result(this->getInt());
		++*this;

		return result;
	}

	// Prefix decrementation
	Integer& Integer::operator--() {

		this->data--;

		return *this;
	}

	// Postfix decrementation
	Primitive Integer::operator--(int) {

		Integer result(this->getInt());
		--*this;

		return result;
	}

	// Bitwise OR
	Primitive Integer::operator|(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setInt(this->getInt() | primitive.getChar());
				break;
			case Type::SHORT:

				result.setInt(this->getInt() | primitive.getShort());
				break;
			case Type::INTEGER:

				result.setInt(this->getInt() | primitive.getInt());
				break;
			case Type::LONG:

				result.setInt(this->getInt() | primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Bitwise AND
	Primitive Integer::operator&(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setInt(this->getInt() & primitive.getChar());
				break;
			case Type::SHORT:

				result.setInt(this->getInt() & primitive.getShort());
				break;
			case Type::INTEGER:

				result.setInt(this->getInt() & primitive.getInt());
				break;
			case Type::LONG:

				result.setInt(this->getInt() & primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Bitwise NOT
	Primitive Integer::operator~() {

		Integer result;

		result.setInt(~this->getInt());

		return result;
	}

	// Bitwise XOR
	Primitive Integer::operator^(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setInt(this->getInt() ^ primitive.getChar());
				break;
			case Type::SHORT:

				result.setInt(this->getInt() ^ primitive.getShort());
				break;
			case Type::INTEGER:

				result.setInt(this->getInt() ^ primitive.getInt());
				break;
			case Type::LONG:

				result.setInt(this->getInt() ^ primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Left shift
	Primitive Integer::operator<<(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setInt(this->getInt() << primitive.getChar());
				break;
			case Type::SHORT:

				result.setInt(this->getInt() << primitive.getShort());
				break;
			case Type::INTEGER:

				result.setInt(this->getInt() << primitive.getInt());
				break;
			case Type::LONG:

				result.setInt(this->getInt() << primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Right shift
	Primitive Integer::operator>>(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setInt(this->getInt() >> primitive.getChar());
				break;
			case Type::SHORT:

				result.setInt(this->getInt() >> primitive.getShort());
				break;
			case Type::INTEGER:

				result.setInt(this->getInt() >> primitive.getInt());
				break;
			case Type::LONG:

				result.setInt(this->getInt() >> primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Equals
	Boolean Integer::operator==(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getInt() == primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getInt() == primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getInt() == primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getInt() == primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() == primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() == primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Not equal
	Boolean Integer::operator!=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getInt() != primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getInt() != primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getInt() != primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getInt() != primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() != primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() != primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Greater than
	Boolean Integer::operator>(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getInt() > primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getInt() > primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getInt() > primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getInt() > primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() > primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() > primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Less than
	Boolean Integer::operator<(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getInt() < primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getInt() < primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getInt() < primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getInt() < primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() < primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() < primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Greater than or equal to
	Boolean Integer::operator>=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getInt() >= primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getInt() >= primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getInt() >= primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getInt() >= primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() >= primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() >= primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Less than or equal to
	Boolean Integer::operator<=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getInt() <= primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getInt() <= primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getInt() <= primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getInt() <= primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() <= primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getInt() <= primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}
}