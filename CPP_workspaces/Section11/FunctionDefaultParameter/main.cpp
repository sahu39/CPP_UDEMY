#include <iostream>
using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06);
double calc_shipping_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);
int main()
{
	double cost = calc_cost(100);
    cout << "cost:" << cost << endl;
    cost = calc_cost(100,0.08);
    cout << "cost:" << cost << endl;
    
    double shipping_cost = calc_shipping_cost(1000);
    cout << "shiping cost:" << shipping_cost << endl;
    shipping_cost = calc_shipping_cost(1000,0.05);
    cout << "shiping cost:" << shipping_cost << endl;
    shipping_cost = calc_shipping_cost(1000,0.05,2.4);
    cout << "shiping cost:" << shipping_cost << endl;
	return 0;
}
double calc_cost(double base_cost, double tax_rate){
    return base_cost += (base_cost * tax_rate);
}

double calc_shipping_cost(double base_cost, double tax_rate , double shipping){
    return base_cost += (base_cost * tax_rate) + shipping;
}