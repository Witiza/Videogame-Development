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

	vec3<float> normalize()
	{
		vec3<float> result = new vec3<float>;

			if (!(this->x == result.x && this->y == result.y && this->z && result.z))
			{
				float module = sqrt(x * x + y * y+ z *z);
				result.x = x / module;
				result.y = y / module;
				result.z = z / module;
			}

			else
			{
				printf("Couldn't normalize because vector has module 0");
			}

			return result;
	}
	
	float distance_to(const vec3 &vector3)
	{
		vec3<TYPE> distance;
		distance.x = x - vector3.x;
		distance.x = y - vector3.y;
		distance.x = z - vector3.z;
		
		float module = sqrtf(distance.x * distance.x + distance.y *  distance.y + distance.z * distance.z);
		return module;
	}

	void zero()
	{
		x = NULL;
		y = NULL;
		z = NULL;
	}

	bool is_zero()
	{
		return(x == NULL && y == NULL && z == NULL);
	}
};

#endif

