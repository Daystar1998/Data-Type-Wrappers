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

	string Boolean::toString() {

		return to_string(data);
	}

	// Assignment
	Integer& Integer::operator=(Primitive &primitive) {

		switch (primitive.getType()) {

			case CHAR:

				this->setInt(primitive.getChar());
				break;
			case SHORT:

				this->setInt(primitive.getShort());
				break;
			case INTEGER:

				this->setInt(primitive.getInt());
				break;
			case LONG:

				this->setInt(primitive.getLong());
				break;
			case FLOAT:

				this->setInt(primitive.getFloat());
				break;
			case DOUBLE:

				this->setInt(primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return *this;
	}

	// Addition
	Integer Integer::operator+(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case CHAR:

				result.setInt(this->getInt() + primitive.getChar());
				break;
			case SHORT:

				result.setInt(this->getInt() + primitive.getShort());
				break;
			case INTEGER:

				result.setInt(this->getInt() + primitive.getInt());
				break;
			case LONG:

				result.setInt(this->getInt() + primitive.getLong());
				break;
			case FLOAT:

				result.setInt(this->getInt() + primitive.getFloat());
				break;
			case DOUBLE:

				result.setInt(this->getInt() + primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Subtraction
	Integer Integer::operator-(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case CHAR:

				result.setInt(this->getInt() - primitive.getChar());
				break;
			case SHORT:

				result.setInt(this->getInt() - primitive.getShort());
				break;
			case INTEGER:

				result.setInt(this->getInt() - primitive.getInt());
				break;
			case LONG:

				result.setInt(this->getInt() - primitive.getLong());
				break;
			case FLOAT:

				result.setInt(this->getInt() - primitive.getFloat());
				break;
			case DOUBLE:

				result.setInt(this->getInt() - primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Multiplication
	Integer Integer::operator*(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case CHAR:

				result.setInt(this->getInt() * primitive.getChar());
				break;
			case SHORT:

				result.setInt(this->getInt() * primitive.getShort());
				break;
			case INTEGER:

				result.setInt(this->getInt() * primitive.getInt());
				break;
			case LONG:

				result.setInt(this->getInt() * primitive.getLong());
				break;
			case FLOAT:

				result.setInt(this->getInt() * primitive.getFloat());
				break;
			case DOUBLE:

				result.setInt(this->getInt() * primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Division
	Integer Integer::operator/(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case CHAR:

				result.setInt(this->getInt() / primitive.getChar());
				break;
			case SHORT:

				result.setInt(this->getInt() / primitive.getShort());
				break;
			case INTEGER:

				result.setInt(this->getInt() / primitive.getInt());
				break;
			case LONG:

				result.setInt(this->getInt() / primitive.getLong());
				break;
			case FLOAT:

				result.setInt(this->getInt() / primitive.getFloat());
				break;
			case DOUBLE:

				result.setInt(this->getInt() / primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Modulation
	Integer Integer::operator%(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case CHAR:

				result.setInt(this->getInt() % primitive.getChar());
				break;
			case SHORT:

				result.setInt(this->getInt() % primitive.getShort());
				break;
			case INTEGER:

				result.setInt(this->getInt() % primitive.getInt());
				break;
			case LONG:

				result.setInt(this->getInt() % primitive.getLong());
				break;
			case FLOAT:
				// TODO: Decide whether on not to remove this
				result.setInt(this->getInt() % (int)primitive.getFloat());
				break;
			case DOUBLE:

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
	Integer Integer::operator++(int) {

		Integer result = *this;
		++*this;

		return result;
	}

	// Prefix decrementation
	Integer& Integer::operator--() {

		this->data--;

		return *this;
	}

	// Postfix decrementation
	Integer Integer::operator--(int) {

		Integer result = *this;
		--*this;

		return result;
	}

	// Bitwise OR
	Integer Integer::operator|(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case CHAR:

				result.setInt(this->getInt() | primitive.getChar());
				break;
			case SHORT:

				result.setInt(this->getInt() | primitive.getShort());
				break;
			case INTEGER:

				result.setInt(this->getInt() | primitive.getInt());
				break;
			case LONG:

				result.setInt(this->getInt() | primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Bitwise AND
	Integer Integer::operator&(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case CHAR:

				result.setInt(this->getInt() & primitive.getChar());
				break;
			case SHORT:

				result.setInt(this->getInt() & primitive.getShort());
				break;
			case INTEGER:

				result.setInt(this->getInt() & primitive.getInt());
				break;
			case LONG:

				result.setInt(this->getInt() & primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Bitwise NOT
	Integer Integer::operator~() {

		Integer result;

		result.setInt(~this->getInt());

		return result;
	}

	// Bitwise XOR
	Integer Integer::operator^(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case CHAR:

				result.setInt(this->getInt() ^ primitive.getChar());
				break;
			case SHORT:

				result.setInt(this->getInt() ^ primitive.getShort());
				break;
			case INTEGER:

				result.setInt(this->getInt() ^ primitive.getInt());
				break;
			case LONG:

				result.setInt(this->getInt() ^ primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Left shift
	Integer Integer::operator<<(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case CHAR:

				result.setInt(this->getInt() << primitive.getChar());
				break;
			case SHORT:

				result.setInt(this->getInt() << primitive.getShort());
				break;
			case INTEGER:

				result.setInt(this->getInt() << primitive.getInt());
				break;
			case LONG:

				result.setInt(this->getInt() << primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Right shift
	Integer Integer::operator>>(Primitive &primitive) {

		Integer result;

		switch (primitive.getType()) {

			case CHAR:

				result.setInt(this->getInt() >> primitive.getChar());
				break;
			case SHORT:

				result.setInt(this->getInt() >> primitive.getShort());
				break;
			case INTEGER:

				result.setInt(this->getInt() >> primitive.getInt());
				break;
			case LONG:

				result.setInt(this->getInt() >> primitive.getLong());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Equals
	bool Integer::operator==(Primitive &primitive) {

		bool result;

		switch (primitive.getType()) {

			case CHAR:

				result = this->getInt() == primitive.getChar();
				break;
			case SHORT:

				result = this->getInt() == primitive.getShort();
				break;
			case INTEGER:

				result = this->getInt() == primitive.getInt();
				break;
			case LONG:

				result = this->getInt() == primitive.getLong();
				break;
			case FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() == primitive.getFloat();
				break;
			case DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() == primitive.getDouble();
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Not equal
	bool Integer::operator!=(Primitive &primitive) {

		bool result;

		switch (primitive.getType()) {

			case CHAR:

				result = this->getInt() != primitive.getChar();
				break;
			case SHORT:

				result = this->getInt() != primitive.getShort();
				break;
			case INTEGER:

				result = this->getInt() != primitive.getInt();
				break;
			case LONG:

				result = this->getInt() != primitive.getLong();
				break;
			case FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() != primitive.getFloat();
				break;
			case DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() != primitive.getDouble();
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Greater than
	bool Integer::operator>(Primitive &primitive) {

		bool result;

		switch (primitive.getType()) {

			case CHAR:

				result = this->getInt() > primitive.getChar();
				break;
			case SHORT:

				result = this->getInt() > primitive.getShort();
				break;
			case INTEGER:

				result = this->getInt() > primitive.getInt();
				break;
			case LONG:

				result = this->getInt() > primitive.getLong();
				break;
			case FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() > primitive.getFloat();
				break;
			case DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() > primitive.getDouble();
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Less than
	bool Integer::operator<(Primitive &primitive) {

		bool result;

		switch (primitive.getType()) {

			case CHAR:

				result = this->getInt() < primitive.getChar();
				break;
			case SHORT:

				result = this->getInt() < primitive.getShort();
				break;
			case INTEGER:

				result = this->getInt() < primitive.getInt();
				break;
			case LONG:

				result = this->getInt() < primitive.getLong();
				break;
			case FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() < primitive.getFloat();
				break;
			case DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() < primitive.getDouble();
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Greater than or equal to
	bool Integer::operator>=(Primitive &primitive) {

		bool result;

		switch (primitive.getType()) {

			case CHAR:

				result = this->getInt() >= primitive.getChar();
				break;
			case SHORT:

				result = this->getInt() >= primitive.getShort();
				break;
			case INTEGER:

				result = this->getInt() >= primitive.getInt();
				break;
			case LONG:

				result = this->getInt() >= primitive.getLong();
				break;
			case FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() >= primitive.getFloat();
				break;
			case DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() >= primitive.getDouble();
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Less than or equal to
	bool Integer::operator<=(Primitive &primitive) {

		bool result;

		switch (primitive.getType()) {

			case CHAR:

				result = this->getInt() <= primitive.getChar();
				break;
			case SHORT:

				result = this->getInt() <= primitive.getShort();
				break;
			case INTEGER:

				result = this->getInt() <= primitive.getInt();
				break;
			case LONG:

				result = this->getInt() <= primitive.getLong();
				break;
			case FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() <= primitive.getFloat();
				break;
			case DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result = this->getInt() <= primitive.getDouble();
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Addition assignment
	Integer& Integer::operator+=(Primitive &primitive) {

		*this = (Primitive&)(*this + primitive);

		return *this;
	}

	// Subtraction assignment
	Integer& Integer::operator-=(Primitive &primitive) {

		*this = (Primitive&)(*this - primitive);

		return *this;
	}

	// Multiplication assignment
	Integer& Integer::operator*=(Primitive &primitive) {

		*this = (Primitive&)(*this * primitive);

		return *this;
	}

	// Division assignment
	Integer& Integer::operator/=(Primitive &primitive) {

		*this = (Primitive&)(*this / primitive);

		return *this;
	}

	// Modulation assignment
	Integer& Integer::operator%=(Primitive &primitive) {

		*this = (Primitive&)(*this % primitive);

		return *this;
	}

	// Addition assignment
	Integer& Integer::operator+=(Primitive &primitive) {

		*this = (Primitive&)(*this + primitive);

		return *this;
	}

	// Bitwise AND assignment
	Integer& Integer::operator&=(Primitive &primitive) {

		*this = (Primitive&)(*this & primitive);

		return *this;
	}

	// Bitwise OR assignment
	Integer& Integer::operator|=(Primitive &primitive) {

		*this = (Primitive&)(*this | primitive);

		return *this;
	}

	// Bitwise XOR assignment
	Integer& Integer::operator^=(Primitive &primitive) {

		*this = (Primitive&)(*this ^ primitive);

		return *this;
	}

	// Shift left assignment
	Integer& Integer::operator<<=(Primitive &primitive) {

		*this = (Primitive&)(*this << primitive);

		return *this;
	}

	// Shift right assignment
	Integer& Integer::operator>>=(Primitive &primitive) {

		*this = (Primitive&)(*this >> primitive);

		return *this;
	}
}