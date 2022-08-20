namespace ABC
{
    int a, b, c;
}

namespace XYZ
{
    int x, y, z;
}

namespace ABC_XYZ
{
    // namespace of namespaces
    using namespace ABC;
    using namespace XYZ;
}

int main()
{
    ABC::a = 1;
    XYZ::y = 2;
    ABC_XYZ::z = 3;

    return 0;
}