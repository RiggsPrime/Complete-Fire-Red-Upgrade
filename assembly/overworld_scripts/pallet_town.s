.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScript_PalletTown_FatGuy
EventScript_PalletTown_FatGuy:
    msgbox gText_PalletTown_FatGuy MSG_FACE
    givepokemon SPECIES_SALAMENCE 50 ITEM_LIFE_ORB 0 0 0
    setflag 0x0828
    end