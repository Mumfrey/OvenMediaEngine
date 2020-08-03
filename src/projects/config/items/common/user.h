//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Jaejong Bong
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include "textnode.h"

namespace cfg
{
	struct User : public Item
	{
		CFG_DECLARE_REF_GETTER_OF(GetStreamKey, _streamKey)
		CFG_DECLARE_REF_GETTER_OF(GetStreamName, _streamName)

	protected:
		void MakeParseList() override
		{
			RegisterValue("Key", &_streamKey);
			RegisterValue("Name", &_streamName);
		}

		TextNode _streamKey;
		TextNode _streamName;
	};
}  // namespace cfg