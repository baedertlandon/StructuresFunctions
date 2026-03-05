#include <iostream>
using namespace std;

struct temperature_record
{
	float celsius;
};

void convert_to_fahrenheit(temperature_record& temp_ref)
{
	temp_ref.celsius = (temp_ref.celsius * (9.0f / 5.0f)) + 32.0f;
	cout << "Inside function (reference): " << temp_ref.celsius << endl;
}

int main()
{
	temperature_record temp;

	cin >> temp.celsius;

	cout << "Before call (main): " << temp.celsius << endl;

	convert_to_fahrenheit(temp);

	cout << "After call (main): " << temp.celsius << endl;

	return 0;
}