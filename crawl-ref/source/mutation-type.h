#pragma once

enum mutation_type
{
    // body slot facets
    MUT_ANTENNAE,       // head
    MUT_BIG_WINGS,
    MUT_BEAK,           // head
    MUT_CLAWS,          // hands
    MUT_FANGS,
    MUT_HOOVES,         // feet
    MUT_HORNS,          // head
    MUT_STINGER,
    MUT_TALONS,         // feet
    MUT_TENTACLE_SPIKE, // Octopode only.

    // scales
    MUT_DISTORTION_FIELD,
    MUT_ICY_BLUE_SCALES,
    MUT_IRIDESCENT_SCALES,
    MUT_LARGE_BONE_PLATES,
    MUT_MOLTEN_SCALES,
#if TAG_MAJOR_VERSION == 34
    MUT_ROUGH_BLACK_SCALES,
#endif
    MUT_RUGGED_BROWN_SCALES,
    MUT_SLIMY_GREEN_SCALES,
    MUT_THIN_METALLIC_SCALES,
    MUT_THIN_SKELETAL_STRUCTURE,
    MUT_YELLOW_SCALES,
#if TAG_MAJOR_VERSION > 34
    MUT_STURDY_FRAME,
    MUT_SANGUINE_ARMOUR,
#endif
    MUT_CAMOUFLAGE,

    MUT_ACUTE_VISION,
    MUT_AGILE,
    MUT_BERSERK,
    MUT_BLINK,
    MUT_BLURRY_VISION,
#if TAG_MAJOR_VERSION == 34
    MUT_BREATHE_FLAMES,
    MUT_BREATHE_POISON,
#endif
    MUT_CARNIVOROUS,
    MUT_CLARITY,
    MUT_CLEVER,
    MUT_CLUMSY,
#if TAG_MAJOR_VERSION > 34
    MUT_COLD_BLOODED,
#endif
    MUT_COLD_RESISTANCE,
#if TAG_MAJOR_VERSION > 34
    MUT_COLD_VULNERABILITY,
#endif
#if TAG_MAJOR_VERSION == 34
    MUT_CONSERVE_POTIONS,
    MUT_CONSERVE_SCROLLS,
#endif
    MUT_DEFORMED,
    MUT_DEMONIC_GUARDIAN,
    MUT_DETERIORATION,
    MUT_DOPEY,
    MUT_HEAT_RESISTANCE,
#if TAG_MAJOR_VERSION > 34
    MUT_HEAT_VULNERABILITY,
    MUT_FLAME_CLOUD_IMMUNITY,
#endif
    MUT_HERBIVOROUS,
    MUT_HURL_DAMNATION,

    MUT_FAST,
    MUT_FAST_METABOLISM,
#if TAG_MAJOR_VERSION == 34
    MUT_FLEXIBLE_WEAK,
#endif
    MUT_FRAIL,
    MUT_FOUL_STENCH,
    MUT_GOURMAND,
    MUT_HIGH_MAGIC,
#if TAG_MAJOR_VERSION > 34
    MUT_FREEZING_CLOUD_IMMUNITY,
#endif
    MUT_ICEMAIL,
    MUT_IGNITE_BLOOD,
    MUT_LOW_MAGIC,
    MUT_MAGIC_RESISTANCE,
    MUT_MUTATION_RESISTANCE,
    MUT_NEGATIVE_ENERGY_RESISTANCE,
    MUT_NIGHTSTALKER,
    MUT_PASSIVE_FREEZE,
    MUT_PASSIVE_MAPPING,
    MUT_POISON_RESISTANCE,
    MUT_POWERED_BY_DEATH,
    MUT_POWERED_BY_PAIN,
    MUT_REGENERATION,
    MUT_ROBUST,
#if TAG_MAJOR_VERSION == 34
    MUT_SAPROVOROUS,
#endif
    MUT_SCREAM,
    MUT_SHAGGY_FUR,
    MUT_SHOCK_RESISTANCE,
#if TAG_MAJOR_VERSION > 34
    MUT_SHOCK_VULNERABILITY,
#endif
    MUT_SLOW,
    MUT_INHIBITED_REGENERATION,
    MUT_SLOW_METABOLISM,
    MUT_SPINY,
    MUT_SPIT_POISON,
    MUT_STOCHASTIC_TORMENT_RESISTANCE,
    MUT_STRONG,
#if TAG_MAJOR_VERSION == 34
    MUT_STRONG_STIFF,
#endif
    MUT_TELEPORT,
    MUT_TELEPORT_CONTROL,
    MUT_TORMENT_RESISTANCE,
    MUT_TOUGH_SKIN,
    MUT_WEAK,
    MUT_WILD_MAGIC,
    MUT_UNBREATHING,
    MUT_ACIDIC_BITE,
    MUT_EYEBALLS,
#if TAG_MAJOR_VERSION == 34
    MUT_FOOD_JELLY,
#endif
    MUT_GELATINOUS_BODY,
    MUT_PSEUDOPODS,
    MUT_TRANSLUCENT_SKIN,
    MUT_EVOLUTION,
    MUT_AUGMENTATION,
    MUT_TENDRILS,
    MUT_JELLY_GROWTH,
    MUT_JELLY_MISSILE,
    MUT_MANA_SHIELD,
    MUT_MANA_REGENERATION,
    MUT_MANA_LINK,
    MUT_PETRIFICATION_RESISTANCE,
    MUT_TRAMPLE_RESISTANCE,
#if TAG_MAJOR_VERSION == 34
    MUT_CLING,
    MUT_FUMES,
    MUT_JUMP,
    MUT_EXOSKELETON,
#endif
    MUT_ANTIMAGIC_BITE,
    MUT_NO_POTION_HEAL,
#if TAG_MAJOR_VERSION == 34
    MUT_COLD_VULNERABILITY,
    MUT_HEAT_VULNERABILITY,
#endif
    MUT_BLACK_MARK,
#if TAG_MAJOR_VERSION == 34
    MUT_SHOCK_VULNERABILITY,
    MUT_COLD_BLOODED,
#endif
    MUT_ROT_IMMUNITY,
#if TAG_MAJOR_VERSION == 34
    MUT_FREEZING_CLOUD_IMMUNITY,
    MUT_FLAME_CLOUD_IMMUNITY,
    MUT_FORLORN,
#endif
    MUT_SUBDUED_MAGIC,
    MUT_NO_DRINK,
    MUT_NO_READ,
    MUT_MISSING_HAND,
    MUT_NO_STEALTH,
    MUT_NO_ARTIFICE,
    MUT_NO_LOVE,
    MUT_COWARDICE,
    MUT_NO_DODGING,
    MUT_NO_ARMOUR,
    MUT_NO_AIR_MAGIC,
    MUT_NO_CHARM_MAGIC,
    MUT_NO_CONJURATION_MAGIC,
    MUT_NO_EARTH_MAGIC,
    MUT_NO_FIRE_MAGIC,
    MUT_NO_HEXES_MAGIC,
    MUT_NO_ICE_MAGIC,
    MUT_NO_NECROMANCY_MAGIC,
    MUT_NO_POISON_MAGIC,
    MUT_NO_SUMMONING_MAGIC,
    MUT_NO_TRANSLOCATION_MAGIC,
    MUT_NO_TRANSMUTATION_MAGIC,
    MUT_PHYSICAL_VULNERABILITY,
    MUT_SLOW_REFLEXES,
    MUT_MAGICAL_VULNERABILITY,
    MUT_ANTI_WIZARDRY,

#if TAG_MAJOR_VERSION == 34
    MUT_SUSTAIN_ATTRIBUTES,
#endif
    MUT_MP_WANDS,
    MUT_UNSKILLED,
    MUT_INEXPERIENCED,
    MUT_PAWS,
    MUT_NECRO_ENHANCER,
#if TAG_MAJOR_VERSION == 34
    MUT_MUMMY_RESTORATION,
#endif
    MUT_CONSTRICTING_TAIL,
    MUT_TENGU_FLIGHT,
    MUT_MISSING_EYE,
    MUT_TEMPERATURE_SENSITIVITY,
#if TAG_MAJOR_VERSION == 34
    MUT_STURDY_FRAME,
    MUT_SANGUINE_ARMOUR,
#endif
    MUT_HOP,
    MUT_NO_REGENERATION,
    MUT_STRONG_NOSE,
    NUM_MUTATIONS,

    RANDOM_MUTATION,
    RANDOM_XOM_MUTATION,
    RANDOM_GOOD_MUTATION,
    RANDOM_BAD_MUTATION,
    RANDOM_SLIME_MUTATION,
    RANDOM_NON_SLIME_MUTATION,
    RANDOM_CORRUPT_MUTATION,
    RANDOM_QAZLAL_MUTATION,
    MUT_NON_MUTATION,
};