#include <string>
#include "proficiencies.h"

class dRace
{
public:
	dRace();
	~dRace();

private:
	Proficiencies proficiencies;
	std::unordered_set<std::string> languages;
	std::unordered_map<std::string, int> abilityScores;
	std::string type;
	
};

dRace::dRace()
{
}

dRace::~dRace()
{
}