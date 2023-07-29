#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "Bear_MulticamTropic_Crye_Uniform",
            "Bear_MulticamTropic_Crye_SS_Uniform",
            "Bear_Arid_Crye_Uniform",
            "Bear_Arid_Crye_SS_Uniform",
            "Bear_AOR1_Crye_Uniform",
            "Bear_AOR1_Crye_SS_Uniform",
            "Bear_black_Crye_Uniform",
            "Bear_Black_Crye_SS_Uniform",
            "Bear_OGA_Crye_grey_Uniform",
            "Bear_OGA_Crye_SS_Uniform",
            "Bear_AOR_2_Crye_Uniform",
            "Bear_AOR_2_CryeSS_Uniform",
            "Bear_Alpine_Crye_Uniform",
            "Bear_Alpine_Crye_SS_Uniform"
        };
        weapons[] = {
            "Bear_MulticamTropic_Crye_Camo",
            "Bear_MulticamTropic_Crye_SS_Camo",
            "Bear_Arid_Crye_Camo",
            "Bear_Arid_Crye_Camo",
            "Bear_AOR1_Crye_Camo",
            "Bear_AOR1_Crye_SS_Camo",
            "Bear_black_Crye_Camo",
            "Bear_Black_Crye_SS_Camo",
            "Bear_OGA_Crye_grey_Camo",
            "Bear_OGA_Crye_SS_Camo",
            "Bear_AOR_2_Crye_Camo",
            "DiGiiAOR_2_CryeSS_Camo",
            "Bear_Alpine_Crye_Camo",
            "Bear_Alpine_Crye_SS_Camo"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Tank_Loadorder",
            "cba_main"
        };
        author = "Bear, DiGii";
        url = "";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@BearVSM";
        name = "6th AB USP Retexture";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = "";
        description = "";
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

