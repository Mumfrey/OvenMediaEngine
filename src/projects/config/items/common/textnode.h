//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Jaejong Bong
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include "../../item.h"

namespace cfg
{
	struct TextNode : public Item
	{
		CFG_DECLARE_REF_GETTER_OF(GetValue, _value)

	protected:
		void MakeParseList() override
		{
			RegisterValue<ValueType::Text>(nullptr, &_value);
		}

		ov::String _value;
	};
}  // namespace cfg