#include "../config.h"


#ifdef UNBOUND

static const struct BattleTowerSpread sRaidPartnerSpread_Catherine_Rank12[] =
{
	{
		.species = SPECIES_SHELLOS_EAST,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_SCALD,
			MOVE_CLEARSMOG,
			MOVE_MUDBOMB,
			MOVE_RECOVER,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ALOMOMOLA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HEALER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AQUAJET,
			MOVE_MIRRORCOAT,
			MOVE_WISH,
			MOVE_HEALPULSE,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WARTORTLE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RAINDISH
		.item = ITEM_IAPAPA_BERRY,
		.moves =
		{
			MOVE_AQUATAIL,
			MOVE_ICEPUNCH,
			MOVE_POWERUPPUNCH,
			MOVE_RAINDANCE,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Catherine_Rank3[] =
{
	{
		.species = SPECIES_GASTRODON_EAST,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_MUDBOMB,
			MOVE_CLEARSMOG,
			MOVE_RECOVER,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ALOMOMOLA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HEALER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AQUAJET,
			MOVE_MIRRORCOAT,
			MOVE_WISH,
			MOVE_HEALPULSE,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RAINDISH
		.item = ITEM_DAMP_ROCK,
		.moves =
		{
			MOVE_AQUATAIL,
			MOVE_ICEPUNCH,
			MOVE_POWERUPPUNCH,
			MOVE_RAINDANCE,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Catherine_Rank456[] =
{
	{
		.species = SPECIES_GASTRODON_EAST,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STORMDRAIN
		.item = ITEM_WIKI_BERRY,
		.moves =
		{
			MOVE_SCALD,
			MOVE_EARTHPOWER,
			MOVE_CLEARSMOG,
			MOVE_RECOVER,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ALOMOMOLA,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HEALER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_AQUAJET,
			MOVE_MIRRORCOAT,
			MOVE_WISH,
			MOVE_HEALPULSE,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_BLASTOISE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_RAINDISH
		.item = ITEM_BLASTOISINITE,
		.moves =
		{
			MOVE_WATERPULSE,
			MOVE_AURASPHERE,
			MOVE_DARKPULSE,
			MOVE_FLASHCANNON,
		},
		.ball = BALL_TYPE_DIVE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Ginger_Rank123[] =
{
	{
		.species = SPECIES_VIVILLON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FRIENDGUARD
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_ELECTROWEB,
			MOVE_LIGHTSCREEN,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_NET_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFAIRY,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FRIENDGUARD
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_HELPINGHAND,
			MOVE_FOLLOWME,
			MOVE_LIFEDEW,
		},
		.ball = BALL_TYPE_MOON_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AUDINO,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HEALER
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_DAZZLINGGLEAM,
			MOVE_FLAMETHROWER,
			MOVE_HEALPULSE,
			MOVE_WISH,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Ginger_Rank456[] =
{
	{
		.species = SPECIES_VIVILLON,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_FRIENDGUARD
		.item = ITEM_BINDING_BAND,
		.moves =
		{
			MOVE_INFESTATION,
			MOVE_ELECTROWEB,
			MOVE_LIGHTSCREEN,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_NET_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_CLEFABLE,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MAGICGUARD
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_MOONBLAST,
			MOVE_FOLLOWME,
			MOVE_MAGICCOAT,
			MOVE_LIFEDEW,
		},
		.ball = BALL_TYPE_MOON_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AUDINO,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HEALER
		.item = ITEM_AUDINITE,
		.moves =
		{
			MOVE_DAZZLINGGLEAM,
			MOVE_HELPINGHAND,
			MOVE_HEALPULSE,
			MOVE_WISH,
		},
		.ball = BALL_TYPE_PREMIER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Abimbola_Rank23[] =
{
	{
		.species = SPECIES_FOONGUS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_VENOSHOCK,
			MOVE_CLEARSMOG,
			MOVE_TOXIC,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AXEW,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOLDBREAKER
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_DRAGONCLAW,
			MOVE_AQUATAIL,
			MOVE_POISONJAB,
			MOVE_XSCISSOR,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ONIX,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_EVIOLITE,
		.moves =
		{
			MOVE_ROCKSLIDE,
			MOVE_STOMPINGTANTRUM,
			MOVE_IRONHEAD,
			MOVE_BIND,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Abimbola_Rank456[] =
{
	{
		.species = SPECIES_AMOONGUSS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_GIGADRAIN,
			MOVE_SLUDGEBOMB,
			MOVE_RAGEPOWDER,
			MOVE_SYNTHESIS,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_HAXORUS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_MOLDBREAKER
		.item = ITEM_DRAGONIUM_Z,
		.moves =
		{
			MOVE_DRAGONCLAW,
			MOVE_AQUATAIL,
			MOVE_POISONJAB,
			MOVE_SWORDSDANCE,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_STEELIX,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_STEELIXITE,
		.moves =
		{
			MOVE_GYROBALL,
			MOVE_STOMPINGTANTRUM,
			MOVE_AQUATAIL,
			MOVE_FIREFANG,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Mahina_Rank456[] =
{
	{
		.species = SPECIES_GYARADOS,
		.nature = NATURE_CAREFUL,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_AQUATAIL,
			MOVE_CRUNCH,
			MOVE_IRONHEAD,
			MOVE_POWERWHIP,
		},
		.ball = BALL_TYPE_LURE_BALL,
		.shiny = TRUE,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VOLCARONA,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.defEv = 4,
		.spAtkEv = 252,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLAMEBODY
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_BUGBUZZ,
			MOVE_FIERYDANCE,
			MOVE_LIGHTSCREEN,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_LUXURY_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VENUSAUR,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spAtkEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_CHLOROPHYLL
		.item = ITEM_VENUSAURITE,
		.moves =
		{
			MOVE_GRASSPLEDGE,
			MOVE_SLUDGEBOMB,
			MOVE_WEATHERBALL,
			MOVE_LEECHSEED,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};


static const struct BattleTowerSpread sRaidPartnerSpread_Alford_Rank45[] =
{
	{
		.species = SPECIES_TYPHLOSION,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_ERUPTION,
			MOVE_FLAMETHROWER,
			MOVE_EXTRASENSORY,
			MOVE_ATTRACT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AEGISLASH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STANCECHANGE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_IRONHEAD,
			MOVE_SHADOWCLAW,
			MOVE_SACREDSWORD,
			MOVE_KINGSSHIELD,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.shiny = TRUE,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GALLADE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_JUSTIFIED
		.item = ITEM_GALLADITE,
		.moves =
		{
			MOVE_PSYCHOCUT,
			MOVE_DRAINPUNCH,
			MOVE_POISONJAB,
			MOVE_ENDURE,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Alford_Rank6[] =
{
	{
		.species = SPECIES_HEATRAN,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_FLASHFIRE
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_FLAMETHROWER,
			MOVE_FLASHCANNON,
			MOVE_EARTHPOWER,
			MOVE_ATTRACT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AEGISLASH,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STANCECHANGE
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_IRONHEAD,
			MOVE_SHADOWCLAW,
			MOVE_SACREDSWORD,
			MOVE_KINGSSHIELD,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.shiny = TRUE,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_GALLADE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_JUSTIFIED
		.item = ITEM_GALLADITE,
		.moves =
		{
			MOVE_PSYCHOCUT,
			MOVE_DRAINPUNCH,
			MOVE_POISONJAB,
			MOVE_ENDURE,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Rival_Rank56[] =
{
	{
		.species = SPECIES_GARCHOMP,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_ROUGHSKIN
		.item = ITEM_GARCHOMPITE,
		.moves =
		{
			MOVE_DRAGONCLAW,
			MOVE_STOMPINGTANTRUM,
			MOVE_POISONJAB,
			MOVE_CRUNCH,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAMOSWINE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 196,
		.atkEv = 252,
		.spdEv = 60,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_THICKFAT
		.item = ITEM_FOCUS_SASH,
		.moves =
		{
			MOVE_ICICLESPEAR,
			MOVE_STOMPINGTANTRUM,
			MOVE_STONEEDGE,
			MOVE_ICESHARD,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VOLCANION,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_WATERABSORB
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_STEAMERUPTION,
			MOVE_FLAMETHROWER,
			MOVE_FLASHCANNON,
			MOVE_BRICKBREAK,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_TYRANITAR,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_SANDSTREAM
		.item = ITEM_TYRANITARITE,
		.moves =
		{
			MOVE_STONEEDGE,
			MOVE_CRUNCH,
			MOVE_POWERUPPUNCH,
			MOVE_FIREPUNCH,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_METAGROSS,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CLEARBODY
		.item = ITEM_METAGROSSITE,
		.moves =
		{
			MOVE_IRONHEAD,
			MOVE_ZENHEADBUTT,
			MOVE_POWERUPPUNCH,
			MOVE_ICEPUNCH,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Marlon_Rank56[] =
{
	{
		.species = SPECIES_MACHAMP,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_GUTS
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_BRICKBREAK,
			MOVE_ICEPUNCH,
			MOVE_BULLETPUNCH,
			MOVE_WIDEGUARD,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.gigantamax = TRUE,
	},
	{
		.species = SPECIES_KROOKODILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_STOMPINGTANTRUM,
			MOVE_DARKESTLARIAT,
			MOVE_AQUATAIL,
			MOVE_THUNDERFANG,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ZAPDOS,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_STATIC
		.item = ITEM_ELECTRIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_HEATWAVE,
			MOVE_OMINOUSWIND,
			MOVE_ROOST,
		},
		.ball = BALL_TYPE_DUSK_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread sRaidPartnerSpread_Vega_Rank56[] =
{
	{
		.species = SPECIES_HONCHKROW,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SUPERLUCK
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_NIGHTSLASH,
			MOVE_DUALWINGBEAT,
			MOVE_HEATWAVE,
			MOVE_TAILWIND,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_WEAVILE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_DARKINIUM_Z,
		.moves =
		{
			MOVE_LASHOUT,
			MOVE_ICICLECRASH,
			MOVE_POISONJAB,
			MOVE_BRICKBREAK,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ABSOL,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_ABSOLITE,
		.moves =
		{
			MOVE_PUNISHMENT,
			MOVE_CLOSECOMBAT,
			MOVE_PLAYROUGH,
			MOVE_RETALIATE,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread sRaidPartnerSpread_Alice_Rank56[] =
{
	{
		.species = SPECIES_GLISCOR,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_POISONHEAL
		.item = ITEM_TOXIC_ORB,
		.moves =
		{
			MOVE_BRICKBREAK,
			MOVE_QUICKATTACK,
			MOVE_TAILWIND,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DODRIO,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_EARLYBIRD
		.item = ITEM_FLYINIUM_Z,
		.moves =
		{
			MOVE_DRILLPECK,
			MOVE_JUMPKICK,
			MOVE_STOMPINGTANTRUM,
			MOVE_REFLECT,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PINSIR,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_HYPERCUTTER
		.item = ITEM_PINSIRITE,
		.moves =
		{
			MOVE_XSCISSOR,
			MOVE_BODYSLAM,
			MOVE_BRICKBREAK,
			MOVE_DOUBLEHIT,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread sRaidPartnerSpread_Mel_Rank56[] =
{
	{
		.species = SPECIES_MILTANK,
		.nature = NATURE_IMPISH,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SCRAPPY
		.item = ITEM_SITRUS_BERRY,
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_BODYPRESS,
			MOVE_PLAYROUGH,
			MOVE_MILKDRINK,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_DIGGERSBY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.defEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_HUGEPOWER
		.item = ITEM_NORMALIUM_Z,
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_HIGHHORSEPOWER,
			MOVE_BRICKBREAK,
			MOVE_THUNDERPUNCH,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_LOPUNNY,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_CUTECHARM
		.item = ITEM_LOPUNNITE,
		.moves =
		{
			MOVE_QUICKATTACK,
			MOVE_CLOSECOMBAT,
			MOVE_PLAYROUGH,
			MOVE_TRIPLEAXEL,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

const struct BattleTowerSpread sRaidPartnerSpread_Galavan_Rank56[] =
{
	{
		.species = SPECIES_EELEKTROSS,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_EXPERT_BELT,
		.moves =
		{
			MOVE_THUNDERPUNCH,
			MOVE_CRUNCH,
			MOVE_BRICKBREAK,
			MOVE_ACIDSPRAY,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_VIKAVOLT,
		.nature = NATURE_BOLD,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_LEVITATE
		.item = ITEM_ELECTRIUM_Z,
		.moves =
		{
			MOVE_BUGBUZZ,
			MOVE_RISINGVOLTAGE,
			MOVE_FLASHCANNON,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_AMPHAROS,
		.nature = NATURE_CALM,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_STATIC
		.item = ITEM_AMPHAROSITE,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_DRAGONPULSE,
			MOVE_BRICKBREAK,
			MOVE_LIGHTSCREEN,
		},
		.ball = BALL_TYPE_RANDOM,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_BigMo_Rank56[] =
{
	{
		.species = SPECIES_CONKELDURR,
		.nature = NATURE_RELAXED,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.defEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SHEERFORCE
		.item = ITEM_ASSAULT_VEST,
		.moves =
		{
			MOVE_BRICKBREAK,
			MOVE_FIREPUNCH,
			MOVE_ICEPUNCH,
			MOVE_THUNDERPUNCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_PANGORO,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_FIGHTINIUM_Z,
		.moves =
		{
			MOVE_BRICKBREAK,
			MOVE_WICKEDBLOW,
			MOVE_IRONHEAD,
			MOVE_ENDURE,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MEDICHAM,
		.nature = NATURE_JOLLY,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_TELEPATHY
		.item = ITEM_MEDICHAMITE,
		.moves =
		{
			MOVE_BRICKBREAK,
			MOVE_PSYCHOCUT,
			MOVE_POISONJAB,
			MOVE_FIREPUNCH,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Tessy_Rank56[] =
{
	{
		.species = SPECIES_TOXAPEX,
		.nature = NATURE_SASSY,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.defEv = 4,
		.spDefEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_REGENERATOR
		.item = ITEM_LEFTOVERS,
		.moves =
		{
			MOVE_SCALD,
			MOVE_LIGHTSCREEN,
			MOVE_RECOVER,
			MOVE_BANEFULBUNKER,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_KINGDRA,
		.nature = NATURE_TIMID,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.defEv = 128,
		.spDefEv = 128,
		.ability = FRONTIER_ABILITY_2, //ABILITY_SNIPER
		.item = ITEM_SCOPE_LENS,
		.moves =
		{
			MOVE_SNIPESHOT,
			MOVE_BREAKINGSWIPE,
			MOVE_ICEBEAM,
			MOVE_PROTECT,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_ARMALDO,
		.nature = NATURE_BRAVE,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 0,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_BATTLEARMOR
		.item = ITEM_WATERIUM_Z,
		.moves =
		{
			MOVE_ROCKBLAST,
			MOVE_XSCISSOR,
			MOVE_AQUATAIL,
			MOVE_BRICKBREAK,
		},
		.ball = BALL_TYPE_GREAT_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Jax_Rank6[] =
{
	{
		.species = SPECIES_GOLURK,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_IRONFIST
		.item = ITEM_GROUNDIUM_Z,
		.moves =
		{
			MOVE_HIGHHORSEPOWER,
			MOVE_PHANTOMFORCE,
			MOVE_POWERUPPUNCH,
			MOVE_GRAVITY,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_MAGNEZONE,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.spAtkEv = 252,
		.ability = FRONTIER_ABILITY_2, //ABILITY_STURDY
		.item = ITEM_AIR_BALLOON,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_FLASHCANNON,
			MOVE_SIGNALBEAM,
			MOVE_MIRRORCOAT,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SALAMENCE,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.atkEv = 252,
		.defEv = 252,
		.spdEv = 4,
		.ability = FRONTIER_ABILITY_1, //ABILITY_INTIMIDATE
		.item = ITEM_SALAMENCITE,
		.moves =
		{
			MOVE_DRAGONCLAW,
			MOVE_DOUBLEEDGE,
			MOVE_AQUATAIL,
			MOVE_FIREFANG,
		},
		.ball = BALL_TYPE_CHERISH_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

static const struct BattleTowerSpread sRaidPartnerSpread_Red_Rank6[] =
{
	{
		.species = SPECIES_PIKACHU_CAP_ORIGINAL,
		.nature = NATURE_MODEST,
		.hpIv = 31,
		.atkIv = 0,
		.defIv = 31,
		.spAtkIv = 31,
		.spDefIv = 31,
		.spdIv = 31,
		.spAtkEv = 252,
		.spDefEv = 4,
		.spdEv = 252,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_LIGHTNINGROD
		.item = ITEM_PIKASHUNIUM_Z,
		.moves =
		{
			MOVE_THUNDERBOLT,
			MOVE_GRASSKNOT,
			MOVE_VOLTSWITCH,
			MOVE_REFLECT,
		},
		.ball = BALL_TYPE_POKE_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
	{
		.species = SPECIES_SNORLAX,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.spDefEv = 4,
		.ability = FRONTIER_ABILITY_HIDDEN, //ABILITY_GLUTTONY
		.item = ITEM_AGUAV_BERRY,
		.moves =
		{
			MOVE_BODYSLAM,
			MOVE_CRUNCH,
			MOVE_HIGHHORSEPOWER,
			MOVE_RECYCLE,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
		.gigantamax = TRUE,
	},
	{
		.species = SPECIES_MEWTWO,
		.nature = NATURE_ADAMANT,
		.hpIv = 31,
		.atkIv = 31,
		.defIv = 31,
		.spAtkIv = 0,
		.spDefIv = 31,
		.spdIv = 31,
		.hpEv = 252,
		.atkEv = 252,
		.ability = FRONTIER_ABILITY_1, //ABILITY_PRESSURE
		.item = ITEM_MEWTWONITE_X,
		.moves =
		{
			MOVE_ZENHEADBUTT,
			MOVE_POWERUPPUNCH,
			MOVE_POISONJAB,
			MOVE_RECOVER,
		},
		.ball = BALL_TYPE_MASTER_BALL,
		.forSingles = TRUE,
		.forDoubles = TRUE,
		.modifyMovesDoubles = FALSE,
	},
};

extern const u8 sTrainerName_Catherine[];
extern const u8 sTrainerName_Ginger[];
extern const u8 sTrainerName_Abimbola[];
extern const u8 sTrainerName_Mahina[];
extern const u8 sTrainerName_Alford[];
extern const u8 sTrainerName_Marlon[];
extern const u8 sTrainerName_Vega[];
extern const u8 sTrainerName_Alice[];
extern const u8 sTrainerName_Mel[];
extern const u8 sTrainerName_Galavan[];
extern const u8 sTrainerName_BigMo[];
extern const u8 sTrainerName_Tessy[];
extern const u8 sTrainerName_Jax[];
extern const u8 sTrainerName_Red[];

const struct MultiRaidTrainer gRaidPartners[] =
{
	{
		.owNum = EVENT_OBJ_GFX_CATHERINE,
		.trainerClass = CLASS_PKMN_TRAINER_2,
		.backSpriteId = TRAINER_BACK_PIC_CATHERINE,
		.gender = FEMALE,
		.otId = 0xCD2F27AB,
		.name = sTrainerName_Catherine,
		.spreads =
		{
			[ONE_STAR_RAID ... TWO_STAR_RAID] =	 sRaidPartnerSpread_Catherine_Rank12,
			[THREE_STAR_RAID] =				 	 sRaidPartnerSpread_Catherine_Rank3,
			[FOUR_STAR_RAID ... SIX_STAR_RAID] =	 sRaidPartnerSpread_Catherine_Rank456,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... TWO_STAR_RAID] =   NELEMS(sRaidPartnerSpread_Catherine_Rank12),
			[THREE_STAR_RAID] = 				 NELEMS(sRaidPartnerSpread_Catherine_Rank3),
			[FOUR_STAR_RAID ... SIX_STAR_RAID] =  NELEMS(sRaidPartnerSpread_Catherine_Rank456),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_GINGER,
		.trainerClass = CLASS_PKMN_TRAINER_2,
		.backSpriteId = TRAINER_BACK_PIC_GINGER,
		.gender = FEMALE,
		.otId = 0xAD5C417B,
		.name = sTrainerName_Ginger,
		.spreads =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Ginger_Rank123,
			[FOUR_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_Ginger_Rank456,
		},
		.spreadSizes =
		{
			[ONE_STAR_RAID ... THREE_STAR_RAID] =  NELEMS(sRaidPartnerSpread_Ginger_Rank123),
			[FOUR_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Ginger_Rank456),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_ABIMBOLA,
		.trainerClass = CLASS_PKMN_TRAINER_2,
		.backSpriteId = TRAINER_BACK_PIC_ABIMBOLA,
		.gender = MALE,
		.otId = 0x2EC3AEBC,
		.name = sTrainerName_Abimbola,
		.spreads =
		{
			[TWO_STAR_RAID ... THREE_STAR_RAID] = sRaidPartnerSpread_Abimbola_Rank23,
			[FOUR_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_Abimbola_Rank456,
		},
		.spreadSizes =
		{
			[TWO_STAR_RAID ... THREE_STAR_RAID] =  NELEMS(sRaidPartnerSpread_Abimbola_Rank23),
			[FOUR_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Abimbola_Rank456),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_MAHINA,
		.trainerClass = CLASS_PKMN_TRAINER_2,
		.backSpriteId = TRAINER_BACK_PIC_MAHINA,
		.gender = FEMALE,
		.otId = 0x87116209,
		.name = sTrainerName_Mahina,
		.spreads =
		{
			[FOUR_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_Mahina_Rank456,
		},
		.spreadSizes =
		{
			[FOUR_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Mahina_Rank456),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_ALFORD,
		.trainerClass = CLASS_PKMN_TRAINER_2,
		.backSpriteId = TRAINER_BACK_PIC_ALFORD,
		.gender = MALE,
		.otId = 0x61AC8B90,
		.name = sTrainerName_Alford,
		.spreads =
		{
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] =  sRaidPartnerSpread_Alford_Rank45,
			[SIX_STAR_RAID] =  sRaidPartnerSpread_Alford_Rank6,
		},
		.spreadSizes =
		{
			[FOUR_STAR_RAID ... FIVE_STAR_RAID] = NELEMS(sRaidPartnerSpread_Alford_Rank45),
			[SIX_STAR_RAID] =  NELEMS(sRaidPartnerSpread_Alford_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_RIVAL,
		.trainerClass = CLASS_RIVAL,
		.backSpriteId = TRAINER_BACK_PIC_RIVAL,
		.gender = MALE,
		.otId = 0xECBAA1AD,
		.name = NULL, //Predefined ingame
		.spreads =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_Rival_Rank56,
		},
		.spreadSizes =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Rival_Rank56),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_MARLON,
		.trainerClass = CLASS_SHADOW_ADMIN,
		.backSpriteId = TRAINER_BACK_PIC_MARLON,
		.gender = MALE,
		.otId = 0x4156010,
		.name = sTrainerName_Marlon,
		.spreads =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_Marlon_Rank56,
		},
		.spreadSizes =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Marlon_Rank56),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_VEGA,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_VEGA,
		.gender = MALE,
		.otId = 0x22222222,
		.name = sTrainerName_Vega,
		.spreads =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_Vega_Rank56,
		},
		.spreadSizes =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Vega_Rank56),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_ALICE,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_ALICE,
		.gender = FEMALE,
		.otId = 0x33333333,
		.name = sTrainerName_Alice,
		.spreads =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_Alice_Rank56,
		},
		.spreadSizes =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Alice_Rank56),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_MEL,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_MEL,
		.gender = MALE,
		.otId = 0x44444444,
		.name = sTrainerName_Mel,
		.spreads =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_Mel_Rank56,
		},
		.spreadSizes =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Mel_Rank56),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_GALAVAN,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_GALAVAN,
		.gender = MALE,
		.otId = 0x55555555,
		.name = sTrainerName_Galavan,
		.spreads =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_Galavan_Rank56,
		},
		.spreadSizes =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Galavan_Rank56),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_BIG_MO,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_BIG_MO,
		.gender = MALE,
		.otId = 0x66666666,
		.name = sTrainerName_BigMo,
		.spreads =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_BigMo_Rank56,
		},
		.spreadSizes =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_BigMo_Rank56),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_TESSY,
		.trainerClass = CLASS_LEADER,
		.backSpriteId = TRAINER_BACK_PIC_TESSY,
		.gender = FEMALE,
		.otId = 0x77777777,
		.name = sTrainerName_Tessy,
		.spreads =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] =  sRaidPartnerSpread_Tessy_Rank56,
		},
		.spreadSizes =
		{
			[FIVE_STAR_RAID ... SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Tessy_Rank56),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_JAX,
		.trainerClass = CLASS_PKMN_TRAINER_2,//CLASS_CHAMPION,
		.backSpriteId = TRAINER_BACK_PIC_JAX,
		.gender = MALE,
		.otId = 0x95746426,
		.name = sTrainerName_Jax,
		.spreads =
		{
			[SIX_STAR_RAID] =  sRaidPartnerSpread_Jax_Rank6,
		},
		.spreadSizes =
		{
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Jax_Rank6),
		},
	},
	{
		.owNum = EVENT_OBJ_GFX_RED,
		.trainerClass = CLASS_PKMN_TRAINER_2,
		.backSpriteId = TRAINER_BACK_PIC_RED_NEW,
		.gender = MALE,
		.otId = 0x1,
		.name = sTrainerName_Red,
		.spreads =
		{
			[SIX_STAR_RAID] =  sRaidPartnerSpread_Red_Rank6,
		},
		.spreadSizes =
		{
			[SIX_STAR_RAID] = NELEMS(sRaidPartnerSpread_Red_Rank6),
		},
	},
};

#else

const struct MultiRaidTrainer gRaidPartners[] =
{
	{
	},
};

#endif

const u8 gNumRaidPartners = NELEMS(gRaidPartners);
