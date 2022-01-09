class CfgPatches
{
    class Anrop_CWR3_ACRE2_Compat
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"acre_sys_prc77", "cwr3_soldiers_ru", "cwr3_soldiers_us"};
        author = "Anrop";
    };
};

class CfgVehicles
{
    class cwr3_b_backpack_alice_base;
    class cwr3_b_backpack_radio: cwr3_b_backpack_alice_base
    {
        class TransportItems
        {
            class ACRE_PRC77
            {
                count = 1;
                name = "ACRE_PRC77";
            };
        };
    };

    class cwr3_o_backpack_rd54_base;
    class cwr3_o_backpack_rd54_r148: cwr3_o_backpack_rd54_base
    {
        class TransportItems
        {
            class ACRE_PRC77
            {
                count = 1;
                name = "ACRE_PRC77";
            };
        };
    };
};
