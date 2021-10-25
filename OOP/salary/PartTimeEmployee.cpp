#include "Employee.cpp"

using namespace std;
class PartTimeEmployee : public Employee{
    private:
        int workingHour;
    public:
        PartTimeEmployee(string name, int paymentPerHOur, int workingHour) : Employee(name, paymentPerHOur){
            this->workingHour = workingHour;
        }

        int calculateSalary(){
            return this->getPaymentPerHour() * workingHour;
        }
};
