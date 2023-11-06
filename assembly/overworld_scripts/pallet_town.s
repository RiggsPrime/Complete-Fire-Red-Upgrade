.thumb
.align 2

.include "../xse_commands.s"
.include "../xse_defines.s"
.include "../asm_defines.s"

.global EventScript_PalletTown_FatGuy
EventScript_PalletTown_FatGuy:
    msgbox gText_PalletTown_FatGuy MSG_FACE
    givepokemon SPECIES_MAGNEZONE 50 ITEM_RARE_CANDY 0 0 0
    setflag 0x0828
    end

.global EventScript_PalletTown_Guy
EventScript_PalletTown_Guy:
    trainerbattle0 0x0 178 0x0 gText_PalletTown_Guy1 gText_PalletTown_Guy2
    msgbox gText_PalletTown_Guy_Postbattle MSG_FACE
    release
    end