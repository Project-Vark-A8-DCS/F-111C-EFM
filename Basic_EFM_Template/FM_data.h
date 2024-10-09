#pragma once
#include "stdafx.h"

namespace FM_DATA
{
	// Default data here is from the Su-25T with some slight modifications

	// Basic stats
	double wing_area = 61.07; // Wing area (sq. m)
	double wingspan = 21.33;// Wing span (m)
	double length = 22.4;// Length (m)
	double height = 5.22;// Height (m)
	double mach_max = 2.55; // Max airspeed (mach)

	// Mass, weight, inertia, and moment of inertia are all calculated automatically from the aircraft definition file.

	double Cy0 = 0.0186; // Zero AoA lift coefficient
	double Czbe = -0.016; // Yaw/side force coefficient

	double cx_gear = 0.012; // Gear drag

	double cx_brk = 0.06; // Air brake drag

	double cx_flap = 0.05; // Flap drag
	double cy_flap = 0.3; // Flap lift

	// Important: Make sure the first value is 0.
	// Make sure the number of entries (size) of all other tables are exactly the same.
	double mach_table[] =
	{
		0,
		0.4,
		0.6,
		0.8,
		0.9,
		1.5,
		1.9,
		2.5,
	};

	double cx0[] = // Drag coefficient
	{
		0.025, // m = 0
		0.025, // m = 0.4
		0.0272, // m = 0.6
		0.048, // m = 0.8
		0.0741, // m = 0.9
		0.0741, // m = 1.5
	};

	double Cya[] = // Lift coefficient
	{
		0.1857,
		0.1869,
		0.1878,
		0.1887,
		0.19,
		0.19,
	};
	
	/* 
	In the SFM and the template, there are tables for "B" and "B4", 
	those being drag polar and drag polar quad coefficients.

	Implementing these into the drag force leads to far worse performance 
	(greater deceleration) compared to official DCS modules, so they are excluded here.
	*/

	double OmxMax[] = // Max roll rate, radians per second
	{
		0.5,
		0.8,
		1.1,
		1.5,
		1.7,
		2.0,
	};

	double Aldop[] = // Max Alpha, degrees
	{
		70,
		60,
		50,
		40,
		30,
		20,
		10,
	};

	double CyMax[] =  // Max lift coefficient
	{
		1.81,
		1.81,
		1.86,
		1.355,
		1.2,
		1.2,
	};


	// Engine(s)
	double idle_rpm = 0.0; // RPM % at idle
	double fuel_consumption = 0.37; // Fuel consumption at full throttle (Kg/s)
	double engine_start_time = 60; // Engine startup time (s)

	// Important: Make sure the first value is 0.
	// Make sure the number of entries (size) of all other tables are exactly the same.
	double engine_mach_table[] =
	{
		0,
		0.1,
		0.2,
		0.3,
		0.4,
		0.5,
		0.6,
		0.7,
		0.8,
		0.9,
		1.0,
	};

	// Max total thrust, Newtons.
	double max_thrust[] = 
	{
		0,
		20000,
		40000,
		60000,
		80000.8,
		100000.4,
		120000.8,
		140000,
		160000.4,
	};
	// This is total thrust, not thrust per engine if there's more than one.

	// Throttle to thrust response curves

	// Throttle level
	double throttle_input_table[] =
	{
		0,
		0.1,
		0.2,
		0.3,
		0.4,
		0.5,
		0.6,
		0.7,
		0.8,
		0.9,
		1.0,
	};

	// Throttle output
	double engine_power_table[] =
	{
		0,		// 0
		0.01,	// 0.1
		0.02,	// 0.2
		0.06,	// 0.3
		0.08,	// 0.4
		0.1,	// 0.5
		0.3,	// 0.6
		0.5,	// 0.7
		0.7,	// 0.8
		0.9,	// 0.9
		1.0,	// 1.0
	};

	// RPM or engine power readout
	double engine_power_readout_table[] =
	{
		0.5,	// 0
		0.55,	// 0.1
		0.6,	// 0.2
		0.65,	// 0.3
		0.7,	// 0.4
		0.75,	// 0.5
		0.85,	// 0.6
		0.85,	// 0.7
		0.90,	// 0.8
		0.95,	// 0.9
		1.0,	// 1.0
	}

	;}
