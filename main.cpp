#include "RoutingA.hpp"
#include "example.hpp"

int main(int, char *[])
{
    QString ra = example_data;
    const auto &[defines, routings] = RoutingA::ParseRoutingA(ra);
    return 0;
}
