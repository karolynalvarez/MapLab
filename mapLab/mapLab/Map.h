#pragma once
#include "Location.h"

class Map
{

public:
	Map(std::string startingLocationName);
	~Map();
	Location *_currentLocation = nullptr;
	
		
};

