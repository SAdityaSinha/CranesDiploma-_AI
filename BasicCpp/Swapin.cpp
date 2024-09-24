#include <iostream>


void swap_pointer3(int* a,int* b,int* c);

void easy_input_int(std::string str, int* val);
void easy_output_int(std::string str, int* val);

int main()
{
    // std::string str = "Hey their";
    // std::cout<<"Hello"<<str;

    int x,y,z;
    x = 10;

    easy_output_int("val of x : ",&x);

    // std::cout<<"Enter the value";

}

void swap_pointer3(int* a, int* b, int* c)
{
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp; 
}

void easy_input_int(std::string str, int* val)
{
    std::cout<<str;
    std::cin>>*val;
}

void easy_output_int(std::string str, int* val)
{
    std::cout<<str<<*val;
}