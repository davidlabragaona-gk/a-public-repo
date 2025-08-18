#include "vec3.h"

vec3 vec3_add(vec3 a, vec3 b) {
	return {(a.x + b.x), (a.y + b.y), (a.z + b.z)};
}

