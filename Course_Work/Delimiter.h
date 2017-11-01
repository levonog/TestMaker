#ifndef DELIMITER___
#define DELIMITER___

#include"Test.h"
#include"Range.h"

/// Class Delimiter
class Delimiter : public Test
{
protected:
	std::string delimiter_;
public:
	Delimiter(char);
	Delimiter(std::string);
	std::string Get();
	virtual Delimiter* Generate();
	virtual void Print(std::ostream& = std::cout) const;
	virtual Delimiter* Clone() const;
	///// Postprocessing function\n
	///// If you want to postprocess some generated by this class data, then you can overload this method\n
	///// In this class you can change the following parameters\n
	///// \param delimiter_ - string, which describes your delimiter.\n
	//virtual void Postprocessing();
	virtual ~Delimiter();
};

#endif