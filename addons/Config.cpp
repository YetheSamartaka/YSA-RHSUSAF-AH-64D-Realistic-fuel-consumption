class CfgPatches {
	class ysa_rhs_ah64_realistic_fuel {
		author="YetheSamartaka";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"rhsusf_c_ah64"};
	};
};

class CfgVehicles {
	class Heli_Attack_01_base_F;
	class RHS_AH64_base : Heli_Attack_01_base_F	{		
		fuelConsumptionRate	= 0.2;
	};
	class RHS_AH64D: RHS_AH64_base {};
};