#ifndef DOCTORTYPE_H
#define DOCTORTYPE_H
#include <string>
#include "personType.h"
class doctorType : public personType
{
public:
    void setSpecialty(std::string spec);
    std::string getSpecialty() const;
    std::string getDoctorName()const;
    doctorType(std::string first = "", std::string last = "", std::string spec = "");

private:
    std::string specialty;
};
#endif // DOCTORTYPE_H