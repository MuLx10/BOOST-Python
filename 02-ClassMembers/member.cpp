#include <string>
#include <sstream>
#include <vector>
class SomeClass
{
public:
    std::vector<int> v;
    SomeClass(std::string n) : name(n), mNumber(5.0) {
        v.clear();
        for(int i=0;i<15;i++)
            v.push_back(i);
        mNumber = v.size();

    }

    std::string name;
    

    double getNumber() const { return mNumber; }
    void setNumber(double n)
    {
        if (n>3.141592654)
            n = -1;
        mNumber = n;
    }

private:
    double mNumber;
};


#include <boost/python.hpp>
using namespace boost::python;

BOOST_PYTHON_MODULE(member)
{
    class_<SomeClass>("SomeClass", init<std::string>())
        .def_readwrite("name", & SomeClass::name)
        .def_readwrite("vector", & SomeClass::v)
        .add_property("number", &SomeClass::getNumber, &SomeClass::setNumber)
    ;

}


