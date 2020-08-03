//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#include "common/user.h"

namespace cfg
{
	struct Users : public Item
	{
		CFG_DECLARE_REF_GETTER_OF(GetUserList, _user_list)
	private:
		ov::String _file_name;
		time_t _file_mtime = 0;
		
	public:
		bool ParseFile(const ov::String &file_name);
		bool Reload();
		
	protected:
		void MakeParseList() override
		{
			RegisterValue("User", &_user_list);
		}

		std::vector<User> _user_list;
	};
}  // namespace cfg
