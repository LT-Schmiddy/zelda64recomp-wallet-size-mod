#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "z64inventory.h"
#include "z64item.h"

RECOMP_CALLBACK("*", recomp_after_play_init) void modify_upgrade_table(PlayState* this) {

    gUpgradeCapacities[UPG_WALLET][0] = 200;
    gUpgradeCapacities[UPG_WALLET][1] = 500;
    gUpgradeCapacities[UPG_WALLET][2] = 999;
    gUpgradeCapacities[UPG_WALLET][3] = 999;

}