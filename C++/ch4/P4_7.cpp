//Ask's user for radius and hieght, and computes volume and surface of sphere,
//cylinder, and cone

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

double sphere_volume(double r)
{
	double vol_sp = (4 * M_PI * pow(r, 3))/3;

	return vol_sp;
}

double sphere_surface(double r)
{
	double sur_sp = 4 * M_PI * pow(r, 2);

	return sur_sp;
}

double cylinder_volume(double r, double h)
{
	double vol_cy = M_PI * pow(r, 2) * h;

	return vol_cy;
}

double cylinder_surface(double r, double h)
{
	double sur_cy = 2 * M_PI * r * h + 2 * M_PI * pow(r, 2);

	return sur_cy;
}

double cone_volume(double r, double h)
{
	double vol_co = M_PI * pow(r, 2) * (h/3);

	return vol_co;
}

double cone_surface(double r, double h)
{
	double sur_co = M_PI * r * (r + sqrt(pow(h, 2) + pow(r,2)));

	return sur_co;
}

int main()
{
	cout << "Please enter the value for the radius and height." << endl;

	double r = 0;
	cout << "Radius = ";
	cin >> r;

	double h = 0;
	cout << "Height = ";
	cin >> h;

	double v_sphere = sphere_volume(r);
	double sa_sphere = sphere_surface(r);
	double v_cylinder = cylinder_volume(r, h);
	double sa_cylinder = cylinder_surface(r, h);
	double v_cone = cone_volume(r, h);
	double sa_cone = cone_surface(r, h);

	cout << "sphere V = " << v_sphere << endl;
	cout << "sphere A = " << sa_sphere << endl;
	cout << "cylinder V = " << v_cylinder << endl;
	cout << "cylinder A = " << sa_cylinder << endl;
	cout << "cone V = " << v_cone << endl;
	cout << "cone A = " << sa_cone << endl;

	return 0;

}
