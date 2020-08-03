//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#include "users.h"
#include <sys/stat.h>

namespace cfg
{
	bool Users::ParseFile(const ov::String &file_name)
	{
		this->_file_name = file_name;
		return this->Reload();
	}
	
	bool Users::Reload()
	{
		struct stat file_stat;
		if (::stat(this->_file_name, &file_stat) == 0)
		{
			if (file_stat.st_mtime == this->_file_mtime)
			{
				return true;
			}
			
			this->_file_mtime = file_stat.st_mtime;
		}
		
		return this->Parse(this->_file_name, "Users");
	}
}  // namespace cfg
