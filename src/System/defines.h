#pragma once

#ifndef DRAGON_SYSTEM_TYPES
#define DRAGON_SYSTEM_TYPES

namespace dragon {
	#define Float double
	typedef unsigned int uint32;
	typedef unsigned char uint8;
	typedef unsigned short int uint16;
	typedef unsigned long int uint64;
	static constexpr Float Pi = 3.14159265358979323846;
	static constexpr Float InvPi = 0.31830988618379067154;
	static constexpr Float Inv2Pi = 0.15915494309189533577;
	static constexpr Float Inv4Pi = 0.07957747154594766788;
	static constexpr Float PiOver2 = 1.57079632679489661923;
	static constexpr Float PiOver4 = 0.78539816339744830961;
	static constexpr Float Sqrt2 = 1.41421356237309504880;
}

#endif