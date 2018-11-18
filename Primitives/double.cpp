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
	File Name: double.cpp

	Author: Matthew Day

	Description:
		Implementation file for double.h
******************************************************************************/

#include "double.h"

namespace day {

	string Double::toString() {

		return to_string(data);
	}

	// Assignment
	Double& Double::operator=(Primitive &primitive) {

		switch (primitive.getType()) {

			case Type::CHAR:

				this->setDouble(primitive.getChar());
				break;
			case Type::SHORT:

				this->setDouble(primitive.getShort());
				break;
			case Type::INTEGER:

				this->setDouble(primitive.getInt());
				break;
			case Type::LONG:

				this->setDouble(primitive.getLong());
				break;
			case Type::FLOAT:

				this->setDouble(primitive.getFloat());
				break;
			case Type::DOUBLE:

				this->setDouble(primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return *this;
	}

	// Addition
	Primitive Double::operator+(Primitive &primitive) {

		Double result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setDouble(this->getDouble() + primitive.getChar());
				break;
			case Type::SHORT:

				result.setDouble(this->getDouble() + primitive.getShort());
				break;
			case Type::INTEGER:

				result.setDouble(this->getDouble() + primitive.getInt());
				break;
			case Type::LONG:

				result.setDouble(this->getDouble() + primitive.getLong());
				break;
			case Type::FLOAT:

				result.setDouble(this->getDouble() + primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setDouble(this->getDouble() + primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Subtraction
	Primitive Double::operator-(Primitive &primitive) {

		Double result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setDouble(this->getDouble() - primitive.getChar());
				break;
			case Type::SHORT:

				result.setDouble(this->getDouble() - primitive.getShort());
				break;
			case Type::INTEGER:

				result.setDouble(this->getDouble() - primitive.getInt());
				break;
			case Type::LONG:

				result.setDouble(this->getDouble() - primitive.getLong());
				break;
			case Type::FLOAT:

				result.setDouble(this->getDouble() - primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setDouble(this->getDouble() - primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Multiplication
	Primitive Double::operator*(Primitive &primitive) {

		Double result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setDouble(this->getDouble() * primitive.getChar());
				break;
			case Type::SHORT:

				result.setDouble(this->getDouble() * primitive.getShort());
				break;
			case Type::INTEGER:

				result.setDouble(this->getDouble() * primitive.getInt());
				break;
			case Type::LONG:

				result.setDouble(this->getDouble() * primitive.getLong());
				break;
			case Type::FLOAT:

				result.setDouble(this->getDouble() * primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setDouble(this->getDouble() * primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Division
	Primitive Double::operator/(Primitive &primitive) {

		Double result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setDouble(this->getDouble() / primitive.getChar());
				break;
			case Type::SHORT:

				result.setDouble(this->getDouble() / primitive.getShort());
				break;
			case Type::INTEGER:

				result.setDouble(this->getDouble() / primitive.getInt());
				break;
			case Type::LONG:

				result.setDouble(this->getDouble() / primitive.getLong());
				break;
			case Type::FLOAT:

				result.setDouble(this->getDouble() / primitive.getFloat());
				break;
			case Type::DOUBLE:

				result.setDouble(this->getDouble() / primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Prefix incrementation
	Double& Double::operator++() {

		this->data++;

		return *this;
	}

	// Postfix incrementation
	Primitive Double::operator++(int) {

		Double result(this->getDouble());
		++*this;

		return result;
	}

	// Prefix decrementation
	Double& Double::operator--() {

		this->data--;

		return *this;
	}

	// Postfix decrementation
	Primitive Double::operator--(int) {

		Double result(this->getDouble());
		--*this;

		return result;
	}

	// Equals
	Boolean Double::operator==(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getDouble() == primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getDouble() == primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getDouble() == primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getDouble() == primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() == primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() == primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Not equal
	Boolean Double::operator!=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getDouble() != primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getDouble() != primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getDouble() != primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getDouble() != primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() != primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() != primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Greater than
	Boolean Double::operator>(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getDouble() > primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getDouble() > primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getDouble() > primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getDouble() > primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() > primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() > primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Less than
	Boolean Double::operator<(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getDouble() < primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getDouble() < primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getDouble() < primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getDouble() < primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() < primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() < primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Greater than or equal to
	Boolean Double::operator>=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getDouble() >= primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getDouble() >= primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getDouble() >= primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getDouble() >= primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() >= primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() >= primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}

	// Less than or equal to
	Boolean Double::operator<=(Primitive &primitive) {

		Boolean result;

		switch (primitive.getType()) {

			case Type::CHAR:

				result.setBool(this->getDouble() <= primitive.getChar());
				break;
			case Type::SHORT:

				result.setBool(this->getDouble() <= primitive.getShort());
				break;
			case Type::INTEGER:

				result.setBool(this->getDouble() <= primitive.getInt());
				break;
			case Type::LONG:

				result.setBool(this->getDouble() <= primitive.getLong());
				break;
			case Type::FLOAT:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() <= primitive.getFloat());
				break;
			case Type::DOUBLE:

				// TODO: Test if this is possible with the issues caused by it's precision
				result.setBool(this->getDouble() <= primitive.getDouble());
				break;
			default:

				throw new exception("Unsupported operation");
		};

		return result;
	}
}