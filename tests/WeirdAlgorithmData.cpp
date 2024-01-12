#include "Data.hpp"

constinit std::initializer_list<int_least32_t>
    IntroductoryProblems::WeirdAlgorithmData::inputs{
        7, 15, 27, 255, 447, 138367, 159487,
    };
constinit std::initializer_list<std::initializer_list<int_least64_t>>
    IntroductoryProblems::WeirdAlgorithmData::expected_outputs{
        {7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1},
        {15, 46, 23, 70, 35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1},
        {27,   82,   41,   124,  62,   31,   94,   47,   142,  71,   214,  107,
         322,  161,  484,  242,  121,  364,  182,  91,   274,  137,  412,  206,
         103,  310,  155,  466,  233,  700,  350,  175,  526,  263,  790,  395,
         1186, 593,  1780, 890,  445,  1336, 668,  334,  167,  502,  251,  754,
         377,  1132, 566,  283,  850,  425,  1276, 638,  319,  958,  479,  1438,
         719,  2158, 1079, 3238, 1619, 4858, 2429, 7288, 3644, 1822, 911,  2734,
         1367, 4102, 2051, 6154, 3077, 9232, 4616, 2308, 1154, 577,  1732, 866,
         433,  1300, 650,  325,  976,  488,  244,  122,  61,   184,  92,   46,
         23,   70,   35,   106,  53,   160,  80,   40,   20,   10,   5,    16,
         8,    4,    2,    1},
        {255,  766,  383,  1150, 575,  1726,  863,  2590, 1295, 3886,
         1943, 5830, 2915, 8746, 4373, 13120, 6560, 3280, 1640, 820,
         410,  205,  616,  308,  154,  77,    232,  116,  58,   29,
         88,   44,   22,   11,   34,   17,    52,   26,   13,   40,
         20,   10,   5,    16,   8,    4,     2,    1},

        {447,   1342,  671,   2014,  1007,  3022, 1511,  4534,  2267,  6802,
         3401,  10204, 5102,  2551,  7654,  3827, 11482, 5741,  17224, 8612,
         4306,  2153,  6460,  3230,  1615,  4846, 2423,  7270,  3635,  10906,
         5453,  16360, 8180,  4090,  2045,  6136, 3068,  1534,  767,   2302,
         1151,  3454,  1727,  5182,  2591,  7774, 3887,  11662, 5831,  17494,
         8747,  26242, 13121, 39364, 19682, 9841, 29524, 14762, 7381,  22144,
         11072, 5536,  2768,  1384,  692,   346,  173,   520,   260,   130,
         65,    196,   98,    49,    148,   74,   37,    112,   56,    28,
         14,    7,     22,    11,    34,    17,   52,    26,    13,    40,
         20,    10,    5,     16,    8,     4,    2,     1},

        {138367,     415102,     207551,    622654,     311327,    933982,
         466991,     1400974,    700487,    2101462,    1050731,   3152194,
         1576097,    4728292,    2364146,   1182073,    3546220,   1773110,
         886555,     2659666,    1329833,   3989500,    1994750,   997375,
         2992126,    1496063,    4488190,   2244095,    6732286,   3366143,
         10098430,   5049215,    15147646,  7573823,    22721470,  11360735,
         34082206,   17041103,   51123310,  25561655,   76684966,  38342483,
         115027450,  57513725,   172541176, 86270588,   43135294,  21567647,
         64702942,   32351471,   97054414,  48527207,   145581622, 72790811,
         218372434,  109186217,  327558652, 163779326,  81889663,  245668990,
         122834495,  368503486,  184251743, 552755230,  276377615, 829132846,
         414566423,  1243699270, 621849635, 1865548906, 932774453, 2798323360,
         1399161680, 699580840,  349790420, 174895210,  87447605,  262342816,
         131171408,  65585704,   32792852,  16396426,   8198213,   24594640,
         12297320,   6148660,    3074330,   1537165,    4611496,   2305748,
         1152874,    576437,     1729312,   864656,     432328,    216164,
         108082,     54041,      162124,    81062,      40531,     121594,
         60797,      182392,     91196,     45598,      22799,     68398,
         34199,      102598,     51299,     153898,     76949,     230848,
         115424,     57712,      28856,     14428,      7214,      3607,
         10822,      5411,       16234,     8117,       24352,     12176,
         6088,       3044,       1522,      761,        2284,      1142,
         571,        1714,       857,       2572,       1286,      643,
         1930,       965,        2896,      1448,       724,       362,
         181,        544,        272,       136,        68,        34,
         17,         52,         26,        13,         40,        20,
         10,         5,          16,        8,          4,         2,
         1},
        {159487,     478462,      239231,     717694,     358847,
         1076542,    538271,      1614814,    807407,     2422222,
         1211111,    3633334,     1816667,    5450002,    2725001,
         8175004,    4087502,     2043751,    6131254,    3065627,
         9196882,    4598441,     13795324,   6897662,    3448831,
         10346494,   5173247,     15519742,   7759871,    23279614,
         11639807,   34919422,    17459711,   52379134,   26189567,
         78568702,   39284351,    117853054,  58926527,   176779582,
         88389791,   265169374,   132584687,  397754062,  198877031,
         596631094,  298315547,   894946642,  447473321,  1342419964,
         671209982,  335604991,   1006814974, 503407487,  1510222462,
         755111231,  2265333694,  1132666847, 3398000542, 1699000271,
         5097000814, 2548500407,  7645501222, 3822750611, 11468251834,
         5734125917, 17202377752, 8601188876, 4300594438, 2150297219,
         6450891658, 3225445829,  9676337488, 4838168744, 2419084372,
         1209542186, 604771093,   1814313280, 907156640,  453578320,
         226789160,  113394580,   56697290,   28348645,   85045936,
         42522968,   21261484,    10630742,   5315371,    15946114,
         7973057,    23919172,    11959586,   5979793,    17939380,
         8969690,    4484845,     13454536,   6727268,    3363634,
         1681817,    5045452,     2522726,    1261363,    3784090,
         1892045,    5676136,     2838068,    1419034,    709517,
         2128552,    1064276,     532138,     266069,     798208,
         399104,     199552,      99776,      49888,      24944,
         12472,      6236,        3118,       1559,       4678,
         2339,       7018,        3509,       10528,      5264,
         2632,       1316,        658,        329,        988,
         494,        247,         742,        371,        1114,
         557,        1672,        836,        418,        209,
         628,        314,         157,        472,        236,
         118,        59,          178,        89,         268,
         134,        67,          202,        101,        304,
         152,        76,          38,         19,         58,
         29,         88,          44,         22,         11,
         34,         17,          52,         26,         13,
         40,         20,          10,         5,          16,
         8,          4,           2,          1},
    };