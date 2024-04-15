#include <iostream>

using namespace std;

class Gcd 
{
private:
    int num1;
    int num2;
public:
    Gcd(int a, int b) 
    {
        num1 = a;
        num2 = b;
    }
    int findGcd() 
    {
        while (num2 != 0) 
        {
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        return num1;
    }
};

int main() 
{
    int num1, num2;
    cin >> num1 >> num2;
    Gcd gcd(num1, num2);
    int result = gcd.findGcd();
    cout << result;
}