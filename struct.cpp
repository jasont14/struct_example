#include <iostream>

struct Vector
{
    int sz;
    double* elem;
};

void vector_init(Vector& v, int s)
{
    v.elem = new double[s];
    v.sz = s;
}

double read_and_sum(int s)
{
    Vector v;
    vector_init(v,s);
    for (int i=0; i<s; i++){
        std::cout<<"Enter Value: "<<i<< " : ";
        std::cin>>v.elem[i];
    }

    double sum = 0;
    for (int i = 0; i<s; i++)
    {
        sum += v.elem[i];
    }
    return sum;
}

int main()
{
    int s = 0;
    std::cout<<"Enter size: ";
    std::cin>>s;
    double d = read_and_sum(s);
    std::cout<<"Sum of Values: "<<d<<"\n";
    return 0;
}