#pragma once
#include <string>
#include "pch.h"
#include "glm/glm.hpp"

namespace nc {
	class Resource {
	public: 
		virtual bool Create(const std::string& name, void* data = nullptr) = 0;
		virtual void Destroy() = 0;
	};
}