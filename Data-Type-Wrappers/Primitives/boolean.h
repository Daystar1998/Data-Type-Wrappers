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
	File Name: boolean.h

	Author: Matthew Day

	Class Name: Boolean

	Description:
		Wrapper class for boolean
******************************************************************************/

#pragma once

#include "primitives.h"

namespace day {

	class Boolean : public Primitive {

	private:

		bool data;
	public:

		/******************************************************************************
			Constructor
		******************************************************************************/
		Boolean(bool data = false) : Primitive(Type::BOOLEAN), data(data) {}

		/******************************************************************************
			Function Name: toString

			Des:
				Get the data as a string

			Returns:
				type string, data as a string
		******************************************************************************/
		string toString() override;

		/******************************************************************************
			Function Name: getBool

			Des:
				Get the data as a bool

			Returns:
				type bool, the data as a bool
		******************************************************************************/
		inline bool getBool() override {

			return data;
		}

		/******************************************************************************
			Function Name: setBool

			Des:
				Setter for data

			Param:
				data - type bool, the new value for the data
		******************************************************************************/
		inline void setBool(bool data) override {

			this->data = data;
		}

		/******************************************************************************
			Arithmetic operators
		******************************************************************************/

		/******************************************************************************
			Function Name: operator=

			Des:
				Override assignment operator

			Params:
				primitive - type Primitive &, the primitive type this is to be
					assigned to

			Returns:
				type Boolean &, the resulting value
		******************************************************************************/
		Boolean& operator=(Primitive &primitive);

		/******************************************************************************
			Bitwise Operators
		******************************************************************************/

		/******************************************************************************
			Function Name: operator~

			Des:
				Override bitwise NOT operator

			Returns:
				type shared_ptr<Primitive>, the resulting value
		******************************************************************************/
		shared_ptr<Primitive> operator~() override;

		/******************************************************************************
			Function Name: operator&

			Des:
				Override bitwise AND operator

			Params:
				primitive - type Primitive &, the value to be compared to

			Returns:
				type shared_ptr<Primitive>, the resulting value
		******************************************************************************/
		shared_ptr<Primitive> operator&(Primitive &primitive) override;

		/******************************************************************************
			Function Name: operator|

			Des:
				Override bitwise OR operator

			Params:
				primitive - type Primitive &, the value to be compared to

			Returns:
				type shared_ptr<Primitive>, the resulting value
		******************************************************************************/
		shared_ptr<Primitive> operator|(Primitive &primitive) override;

		/******************************************************************************
			Function Name: operator^

			Des:
				Override bitwise XOR operator

			Params:
				primitive - type Primitive &, the value to be compared to

			Returns:
				type shared_ptr<Primitive>, the resulting value
		******************************************************************************/
		shared_ptr<Primitive> operator^(Primitive &primitive) override;

		/******************************************************************************
			Comparison operators
		******************************************************************************/

		/******************************************************************************
			Function Name: operator==

			Des:
				Override equal to operator

			Params:
				primitive - type Primitive &, the primitive type to be compared to

			Returns:
				type shared_ptr<Primitive>, the resulting value
		******************************************************************************/
		shared_ptr<Primitive> operator==(Primitive &primitive) override;

		/******************************************************************************
			Function Name: operator!=

			Des:
				Override not equal to operator

			Params:
				primitive - type Primitive &, the primitive type to be compared to

			Returns:
				type shared_ptr<Primitive>, the resulting value
		******************************************************************************/
		shared_ptr<Primitive> operator!=(Primitive &primitive) override;

		/******************************************************************************
			Logic Operators
		******************************************************************************/

		/******************************************************************************
			Function Name: operator!

			Des:
				Override logical NOT operator

			Returns:
				type shared_ptr<Primitive>, the resulting value
		******************************************************************************/
		shared_ptr<Primitive> operator!() override;

		/******************************************************************************
			Function Name: operator&&

			Des:
				Override logical AND operator

			Params:
				primitive - type Primitive &, the value to be compared to

			Returns:
				type shared_ptr<Primitive>, the resulting value
		******************************************************************************/
		shared_ptr<Primitive> operator&&(Primitive &primitive) override;

		/******************************************************************************
			Function Name: operator||

			Des:
				Override logical OR operator

			Params:
				primitive - type Primitive &, the value to be compared to

			Returns:
				type shared_ptr<Primitive>, the resulting value
		******************************************************************************/
		shared_ptr<Primitive> operator||(Primitive &primitive) override;
	};
}