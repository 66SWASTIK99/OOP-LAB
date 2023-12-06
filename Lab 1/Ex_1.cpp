#include<iostream>

void C2F()
{
    double temperature;
    std::cin>>temperature;
    std::cout<<temperature <<" degree centigrade is " <<(9/5*temperature)+32<<" degree fahreinheit";
}

void F2C()
{
    double temperature;
    std::cin>>temperature;
    std::cout<<temperature <<" degree fahreinheit is " <<((temperature-32)*5)/9<<" degree celcius";
}

int main(void)
{
    int flag ;
    
    std::cout<<"Enter a conversion type:\n";
    std::cout<<"1.Centigrade to Fahreinheit  [Enter 1] \n";
    std::cout<<"2.Fahreinheit to Centigrade  [Enter 2]\n";
    std::cin>>flag;
    flag--;

    std::cout<<"Enter a temperature: ";

    if(flag)
    F2C();
    else
    C2F();

    return 0;
}