//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include "user.h"

namespace cfg
{
	struct Users : public Item
	{
		CFG_DECLARE_REF_GETTER_OF(GetUserList, _user_list)

	protected:
		void MakeParseList() override
		{
			RegisterValue("User", &_user_list);
		}

		std::vector<User> _user_list;
	};
}  // namespace cfg
