#ifndef __VEC3_H__
#define __VEC3_H__

#include <math.h>

template<class TYPE>

class vec3
{
public:
	TYPE x;
	TYPE y;
	TYPE z;

public:
	vec3() : x(NULL), y(NULL), z(NULL)
	{};

	vec3(const TYPE x, const TYPE y, const TYPE z) : x(x), y(y), z(z)
	{};

	vec3(const vec3 *vector3)
	{
		this->x = vector3->x;
		this->y = vector3->y;
		this->z = vector3->z;
	};

	~vec3()
	{};

	vec3 operator+ (const vec3 &vector3)
	{
		vec3 result;
		result.x = this->x + vector3.x;
		result.y = this->y + vector3.y;
		result.z = this->z + vector3.z;

		return result;
	};

	vec3 operator- (const vec3 &vector3)
	{
		vec3 result;
		result.x = this->x - vector3.x;
		result.y = this->y - vector3.y;
		result.z = this->z - vector3.z;

		return result;
	}

	void operator+= (const vec3 &vector3)
	{
		this->x += vector3.x;
		this->y += vector3.y;
		this->z += vector3.z;
	}

	void operator-= (const vec3 &vector3)
	{
		this->x -= vector3.x;
		this->y -= vector3.y;
		this->z -= vector3.z;
	}

	void operator= (const vec3 &vector3)
	{
		this->x = vector3.x;
		this->y = vector3.y;
		this->z = vector3.z;
	}

	bool operator== (const vec3 &vector3)
	{
		return (this->x == vector3.x && this->y == vector3.y && this->z == vector3.z);
	}

	vec3<float> normalize(const vec3 &vector3)
	{
		vec3<float> result = new vec3<float>;

			if (!vector3 == result)
			{
				float module = sqrt(vector3.x ^ 2 + vector3.y ^ 2 + vector3.z ^ 2);
				result.x = vector3.x / module;
				result.y = vector3.y / module;
				result.z = vector3.z / module;
			}

			else
			{
				printf("Couldn't normalize because vector has module 0");
			}

			return result;
	}


};

#endif

