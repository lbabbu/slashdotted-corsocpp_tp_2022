#ifndef RESEARCHER
#define RESEARCHER

#include "employee.h"
#include <string>

// TODO: Make Researcher an employee
class Researcher : public virtual Employee {
public:
    Researcher(const std::string &name, const std::string &institute, int nr,
               const std::string &researcharea);
    ~Researcher();
    const std::string &researcharea() const;
    
    std::string classname() const override;

protected:
    std::string m_researcharea;
};
#endif // RESEARCHER