char const* greet()
{
   return "hello, world";
}
char const* gree()
{
   return "hello, world";
}

#include <boost/python.hpp>

BOOST_PYTHON_MODULE(hello)
{
    using namespace boost::python;
    def("greet", greet);
}

BOOST_PYTHON_MODULE(hell)
{
    using namespace boost::python;
    def("gree", gree);
}
