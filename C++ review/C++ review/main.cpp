#include<stdio.h>
#include "vec3.h"

void main()
{
	//Test vectors (int-float-char)
	vec3<float> vector_0 = new vec3<float>;
	vec3<float> vector_a = new vec3<float>(3.56f, -5.55f, 5.23f);
	vec3<float> vector_b = new vec3<float>(6.66f, 7.777f, -9.8f);
	vec3<float> vector_cpy_a = new vec3<float>(vector_a);
	vec3<float> vector_cpy_b = new vec3<float>(vector_b);
	vec3<float> vector_c = new vec3<float>(3.5f, 2.0f, 0.0f);

	vec3<float> vector_add = vector_a + vector_b;

	vec3<float> vector_subst = vector_a - vector_b;

	vector_cpy_a += vector_a;

	vector_cpy_b -= vector_b;

	vector_0 = vector_a;

	bool equal = vector_0 == vector_a;

	vec3<float> normalize_a = vector_a.normalize();

	float distance_a_b = vector_a.distance_to(vector_b);

	vector_c.zero();

	bool is_zero = vector_c.is_zero();







	

	getchar();
}