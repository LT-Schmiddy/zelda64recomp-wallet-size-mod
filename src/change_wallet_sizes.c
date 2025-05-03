#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "z64inventory.h"
#include "z64item.h"
#include "eztr_api.h"
#include "x_eztr_msg_macros.h"


RECOMP_CALLBACK("*", recomp_after_play_init) void modify_upgrade_table(PlayState* this) {

    gUpgradeCapacities[UPG_WALLET][0] = 200;
    gUpgradeCapacities[UPG_WALLET][1] = 500;
    gUpgradeCapacities[UPG_WALLET][2] = 999;
    gUpgradeCapacities[UPG_WALLET][3] = 999;

}

EZTR_ON_INIT void set_wallet_messages() {
    EZTR_Basic_ReplaceText(
        0x0008,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_ADULT_WALLET,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "|17You got an |01Adult Wallet|00!|18|11|1F|00|0AThis is for adults, so it holds a|11lot of Rupees. Now you can carry|11up to |06500 |00of them.|BF",
        NULL
    );

    EZTR_Basic_ReplaceText(
        0x0009,
        EZTR_TRANSLUSCENT_BLUE_TEXT_BOX,
        1,
        EZTR_ICON_ADULT_WALLET,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        EZTR_NO_VALUE,
        true,
        "|17You got a |01Giant Wallet|00!|18|11|1F|00|0AThis thing is huge!|11It can hold up to |01999 Rupees|00.|BF",
        NULL
    );
}