#include<stdio.h>
#include "vec3.h"

void main()
{
	//Test vectors (int-float-char)
	vec3<char> vector_null = new vec3<char>;
	vec3<int> int_vector_a = new vec3<int>(3, 5, 6);
	vec3<int> int_vector_b = new vec3<int>(int_vector_a);
	vec3<char> char_vector_a = new vec3<char>('b','C','d');
	vec3<char> char_vector_b = new vec3<char>('p', 'T', 'm');
	vec3<float> float_vector_a = new vec3<float>(3.56, -5.55, 5.23);
	vec3<float> float_vector_b = new vec3<float>(6.66, 7.777, -9.8);

	vec3<int> int_add = int_vector_a + int_vector_b;

	vec3<float> float_add = float_vector_a + float_vector_b;

	vec3<char> char_add = char_vector_a + char_vector_b;

	vec3<int> int_subst = int_vector_a - int_vector_b;

	vec3<float> float_subst = float_vector_a - float_vector_b;

	vec3<char> char_subst = char_vector_a - char_vector_b;

	int_subst += int_vector_a;

	int_subst -= int_vector_a;

	int_subst = int_vector_a;

	bool test = int_subst == int_vector_a;
	
	

	getchar();
}