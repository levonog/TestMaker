#include "Delimiter.h"
Delimiter::Delimiter(char _delimiter)
	: delimiter_(1, _delimiter)
{
}
Delimiter::Delimiter(std::string _delimiter)
	: delimiter_(_delimiter)
{
}
std::string Delimiter::Get()
{
	return delimiter_;
}
Delimiter* Delimiter::Generate()
{
	return this;
}
void Delimiter::Print(std::ostream& _out) const
{
	_out << delimiter_;
}
Delimiter* Delimiter::Clone() const
{
	return new Delimiter(delimiter_);
}
Delimiter::~Delimiter() 
{

}