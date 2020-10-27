
// Generated from src/antlr/RpgParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpprpg {


class  RpgParser : public antlr4::Parser {
public:
  enum {
    END_SOURCE = 1, LEAD_WS5 = 2, LEAD_WS5_Comments = 3, FREE_SPEC = 4, 
    COMMENT_SPEC_FIXED = 5, DS_FIXED = 6, FS_FIXED = 7, OS_FIXED = 8, CS_FIXED = 9, 
    CS_ExecSQL = 10, IS_FIXED = 11, PS_FIXED = 12, HS_FIXED = 13, BLANK_LINE = 14, 
    BLANK_SPEC_LINE1 = 15, BLANK_SPEC_LINE = 16, COMMENTS = 17, EMPTY_LINE = 18, 
    DIRECTIVE = 19, OPEN_PAREN = 20, CLOSE_PAREN = 21, NUMBER = 22, SEMI = 23, 
    COLON = 24, ID = 25, NEWLINE = 26, WS = 27, DIR_NOT = 28, DIR_DEFINED = 29, 
    DIR_FREE = 30, DIR_ENDFREE = 31, DIR_TITLE = 32, DIR_EJECT = 33, DIR_SPACE = 34, 
    DIR_SET = 35, DIR_RESTORE = 36, DIR_COPY = 37, DIR_INCLUDE = 38, DIR_EOF = 39, 
    DIR_DEFINE = 40, DIR_UNDEFINE = 41, DIR_IF = 42, DIR_ELSE = 43, DIR_ELSEIF = 44, 
    DIR_ENDIF = 45, DIR_WhiteSpace = 46, DIR_OtherText = 47, DIR_Comma = 48, 
    DIR_Slash = 49, DIR_FREE_OTHER_TEXT = 50, EOS_Text = 51, OP_WS = 52, 
    OP_ACQ = 53, OP_BEGSR = 54, OP_CALLP = 55, OP_CHAIN = 56, OP_CLEAR = 57, 
    OP_CLOSE = 58, OP_COMMIT = 59, OP_DEALLOC = 60, OP_DELETE = 61, OP_DOU = 62, 
    OP_DOW = 63, OP_DSPLY = 64, OP_DUMP = 65, OP_ELSE = 66, OP_ELSEIF = 67, 
    OP_ENDDO = 68, OP_ENDFOR = 69, OP_ENDIF = 70, OP_ENDMON = 71, OP_ENDSL = 72, 
    OP_ENDSR = 73, OP_EVAL = 74, OP_EVALR = 75, OP_EVAL_CORR = 76, OP_EXCEPT = 77, 
    OP_EXFMT = 78, OP_EXSR = 79, OP_FEOD = 80, OP_FOR = 81, OP_FORCE = 82, 
    OP_IF = 83, OP_IN = 84, OP_ITER = 85, OP_LEAVE = 86, OP_LEAVESR = 87, 
    OP_MONITOR = 88, OP_NEXT = 89, OP_ON_ERROR = 90, OP_OPEN = 91, OP_OTHER = 92, 
    OP_OUT = 93, OP_POST = 94, OP_READ = 95, OP_READC = 96, OP_READE = 97, 
    OP_READP = 98, OP_READPE = 99, OP_REL = 100, OP_RESET = 101, OP_RETURN = 102, 
    OP_ROLBK = 103, OP_SELECT = 104, OP_SETGT = 105, OP_SETLL = 106, OP_SORTA = 107, 
    OP_TEST = 108, OP_UNLOCK = 109, OP_UPDATE = 110, OP_WHEN = 111, OP_WRITE = 112, 
    OP_XML_INTO = 113, OP_XML_SAX = 114, OP_NoSpace = 115, DS_Standalone = 116, 
    DS_DataStructureStart = 117, DS_DataStructureEnd = 118, DS_PrototypeStart = 119, 
    DS_PrototypeEnd = 120, DS_Parm = 121, DS_SubField = 122, DS_ProcedureInterfaceStart = 123, 
    DS_ProcedureInterfaceEnd = 124, DS_ProcedureStart = 125, DS_ProcedureEnd = 126, 
    DS_Constant = 127, FS_FreeFile = 128, H_SPEC = 129, FREE_COMMENTS80 = 130, 
    EXEC_SQL = 131, BIF_ABS = 132, BIF_ADDR = 133, BIF_ALLOC = 134, BIF_BITAND = 135, 
    BIF_BITNOT = 136, BIF_BITOR = 137, BIF_BITXOR = 138, BIF_CHAR = 139, 
    BIF_CHECK = 140, BIF_CHECKR = 141, BIF_DATE = 142, BIF_DAYS = 143, BIF_DEC = 144, 
    BIF_DECH = 145, BIF_DECPOS = 146, BIF_DIFF = 147, BIF_DIV = 148, BIF_EDITC = 149, 
    BIF_EDITFLT = 150, BIF_EDITW = 151, BIF_ELEM = 152, BIF_EOF = 153, BIF_EQUAL = 154, 
    BIF_ERROR = 155, BIF_FIELDS = 156, BIF_FLOAT = 157, BIF_FOUND = 158, 
    BIF_GRAPH = 159, BIF_HANDLER = 160, BIF_HOURS = 161, BIF_INT = 162, 
    BIF_INTH = 163, BIF_KDS = 164, BIF_LEN = 165, BIF_LOOKUP = 166, BIF_LOOKUPLT = 167, 
    BIF_LOOKUPLE = 168, BIF_LOOKUPGT = 169, BIF_LOOKUPGE = 170, BIF_MINUTES = 171, 
    BIF_MONTHS = 172, BIF_MSECONDS = 173, BIF_NULLIND = 174, BIF_OCCUR = 175, 
    BIF_OPEN = 176, BIF_PADDR = 177, BIF_PARMS = 178, BIF_PARMNUM = 179, 
    BIF_REALLOC = 180, BIF_REM = 181, BIF_REPLACE = 182, BIF_SCAN = 183, 
    BIF_SCANRPL = 184, BIF_SECONDS = 185, BIF_SHTDN = 186, BIF_SIZE = 187, 
    BIF_SQRT = 188, BIF_STATUS = 189, BIF_STR = 190, BIF_SUBARR = 191, BIF_SUBDT = 192, 
    BIF_SUBST = 193, BIF_THIS = 194, BIF_TIME = 195, BIF_TIMESTAMP = 196, 
    BIF_TLOOKUP = 197, BIF_TLOOKUPLT = 198, BIF_TLOOKUPLE = 199, BIF_TLOOKUPGT = 200, 
    BIF_TLOOKUPGE = 201, BIF_TRIM = 202, BIF_TRIML = 203, BIF_TRIMR = 204, 
    BIF_UCS2 = 205, BIF_UNS = 206, BIF_UNSH = 207, BIF_XFOOT = 208, BIF_XLATE = 209, 
    BIF_XML = 210, BIF_YEARS = 211, SPLAT_ALL = 212, SPLAT_NONE = 213, SPLAT_YES = 214, 
    SPLAT_NO = 215, SPLAT_ILERPG = 216, SPLAT_COMPAT = 217, SPLAT_CRTBNDRPG = 218, 
    SPLAT_CRTRPGMOD = 219, SPLAT_VRM = 220, SPLAT_ALLG = 221, SPLAT_ALLU = 222, 
    SPLAT_ALLTHREAD = 223, SPLAT_ALLX = 224, SPLAT_BLANKS = 225, SPLAT_CANCL = 226, 
    SPLAT_CYMD = 227, SPLAT_CMDY = 228, SPLAT_CDMY = 229, SPLAT_MDY = 230, 
    SPLAT_DMY = 231, SPLAT_DFT = 232, SPLAT_YMD = 233, SPLAT_JUL = 234, 
    SPLAT_JAVA = 235, SPLAT_ISO = 236, SPLAT_USA = 237, SPLAT_EUR = 238, 
    SPLAT_JIS = 239, SPLAT_DATE = 240, SPLAT_DAY = 241, SPlAT_DETC = 242, 
    SPLAT_DETL = 243, SPLAT_DTAARA = 244, SPLAT_END = 245, SPLAT_ENTRY = 246, 
    SPLAT_EQUATE = 247, SPLAT_EXTDFT = 248, SPLAT_EXT = 249, SPLAT_FILE = 250, 
    SPLAT_GETIN = 251, SPLAT_HIVAL = 252, SPLAT_INIT = 253, SPLAT_INDICATOR = 254, 
    SPLAT_INZSR = 255, SPLAT_IN = 256, SPLAT_INPUT = 257, SPLAT_OUTPUT = 258, 
    SPLAT_JOBRUN = 259, SPLAT_JOB = 260, SPLAT_LDA = 261, SPLAT_LIKE = 262, 
    SPLAT_LONGJUL = 263, SPLAT_LOVAL = 264, SPLAT_KEY = 265, SPLAT_MONTH = 266, 
    SPLAT_NEXT = 267, SPLAT_NOIND = 268, SPLAT_NOKEY = 269, SPLAT_NULL = 270, 
    SPLAT_OFL = 271, SPLAT_ON = 272, SPLAT_ONLY = 273, SPLAT_OFF = 274, 
    SPLAT_PDA = 275, SPLAT_PLACE = 276, SPLAT_PSSR = 277, SPLAT_ROUTINE = 278, 
    SPLAT_START = 279, SPLAT_SYS = 280, SPLAT_TERM = 281, SPLAT_TOTC = 282, 
    SPLAT_TOTL = 283, SPLAT_USER = 284, SPLAT_VAR = 285, SPLAT_YEAR = 286, 
    SPLAT_ZEROS = 287, SPLAT_HMS = 288, SPLAT_INLR = 289, SPLAT_INOF = 290, 
    SPLAT_DATA = 291, SPLAT_ASTFILL = 292, SPLAT_CURSYM = 293, SPLAT_MAX = 294, 
    SPLAT_LOCK = 295, SPLAT_PROGRAM = 296, SPLAT_EXTDESC = 297, SPLAT_D = 298, 
    SPLAT_H = 299, SPLAT_HOURS = 300, SPLAT_DAYS = 301, SPLAT_M = 302, SPLAT_MINUTES = 303, 
    SPLAT_MONTHS = 304, SPLAT_MN = 305, SPLAT_MS = 306, SPLAT_MSECONDS = 307, 
    SPLAT_S = 308, SPLAT_SECONDS = 309, SPLAT_Y = 310, SPLAT_YEARS = 311, 
    UDATE = 312, DATE = 313, UMONTH = 314, MONTH = 315, UYEAR = 316, YEAR = 317, 
    UDAY = 318, DAY = 319, PAGE = 320, CHAR = 321, VARCHAR = 322, UCS2 = 323, 
    DATE_ = 324, VARUCS2 = 325, GRAPH = 326, VARGRAPH = 327, IND = 328, 
    PACKED = 329, ZONED = 330, BINDEC = 331, INT = 332, UNS = 333, FLOAT = 334, 
    TIME = 335, TIMESTAMP = 336, POINTER = 337, OBJECT = 338, KEYWORD_ALIAS = 339, 
    KEYWORD_ALIGN = 340, KEYWORD_ALT = 341, KEYWORD_ALTSEQ = 342, KEYWORD_ASCEND = 343, 
    KEYWORD_BASED = 344, KEYWORD_CCSID = 345, KEYWORD_CLASS = 346, KEYWORD_CONST = 347, 
    KEYWORD_CTDATA = 348, KEYWORD_DATFMT = 349, KEYWORD_DESCEND = 350, KEYWORD_DIM = 351, 
    KEYWORD_DTAARA = 352, KEYWORD_EXPORT = 353, KEYWORD_EXT = 354, KEYWORD_EXTFLD = 355, 
    KEYWORD_EXTFMT = 356, KEYWORD_EXTNAME = 357, KEYWORD_EXTPGM = 358, KEYWORD_EXTPROC = 359, 
    KEYWORD_FROMFILE = 360, KEYWORD_IMPORT = 361, KEYWORD_INZ = 362, KEYWORD_LEN = 363, 
    KEYWORD_LIKE = 364, KEYWORD_LIKEDS = 365, KEYWORD_LIKEFILE = 366, KEYWORD_LIKEREC = 367, 
    KEYWORD_NOOPT = 368, KEYWORD_OCCURS = 369, KEYWORD_OPDESC = 370, KEYWORD_OPTIONS = 371, 
    KEYWORD_OVERLAY = 372, KEYWORD_PACKEVEN = 373, KEYWORD_PERRCD = 374, 
    KEYWORD_PREFIX = 375, KEYWORD_POS = 376, KEYWORD_PROCPTR = 377, KEYWORD_QUALIFIED = 378, 
    KEYWORD_RTNPARM = 379, KEYWORD_STATIC = 380, KEYWORD_TEMPLATE = 381, 
    KEYWORD_TIMFMT = 382, KEYWORD_TOFILE = 383, KEYWORD_VALUE = 384, KEYWORD_VARYING = 385, 
    KEYWORD_BLOCK = 386, KEYWORD_COMMIT = 387, KEYWORD_DEVID = 388, KEYWORD_EXTDESC = 389, 
    KEYWORD_EXTFILE = 390, KEYWORD_EXTIND = 391, KEYWORD_EXTMBR = 392, KEYWORD_FORMLEN = 393, 
    KEYWORD_FORMOFL = 394, KEYWORD_IGNORE = 395, KEYWORD_INCLUDE = 396, 
    KEYWORD_INDDS = 397, KEYWORD_INFDS = 398, KEYWORD_INFSR = 399, KEYWORD_KEYLOC = 400, 
    KEYWORD_MAXDEV = 401, KEYWORD_OFLIND = 402, KEYWORD_PASS = 403, KEYWORD_PGMNAME = 404, 
    KEYWORD_PLIST = 405, KEYWORD_PRTCTL = 406, KEYWORD_RAFDATA = 407, KEYWORD_RECNO = 408, 
    KEYWORD_RENAME = 409, KEYWORD_SAVEDS = 410, KEYWORD_SAVEIND = 411, KEYWORD_SFILE = 412, 
    KEYWORD_SLN = 413, KEYWORD_SQLTYPE = 414, KEYWORD_USROPN = 415, KEYWORD_DISK = 416, 
    KEYWORD_WORKSTN = 417, KEYWORD_PRINTER = 418, KEYWORD_SPECIAL = 419, 
    KEYWORD_KEYED = 420, KEYWORD_USAGE = 421, KEYWORD_PSDS = 422, AMPERSAND = 423, 
    AND = 424, OR = 425, NOT = 426, PLUS = 427, MINUS = 428, EXP = 429, 
    ARRAY_REPEAT = 430, MULT_NOSPACE = 431, MULT = 432, DIV = 433, CPLUS = 434, 
    CMINUS = 435, CMULT = 436, CDIV = 437, CEXP = 438, GT = 439, LT = 440, 
    GE = 441, LE = 442, NE = 443, FREE_DOT = 444, EQUAL = 445, FREE_BY = 446, 
    FREE_TO = 447, FREE_DOWNTO = 448, HexLiteralStart = 449, DateLiteralStart = 450, 
    TimeLiteralStart = 451, TimeStampLiteralStart = 452, GraphicLiteralStart = 453, 
    UCS2LiteralStart = 454, StringLiteralStart = 455, FREE_COMMENTS = 456, 
    FREE_WS = 457, C_FREE_CONTINUATION = 458, D_FREE_CONTINUATION = 459, 
    F_FREE_CONTINUATION = 460, FREE_LEAD_WS5 = 461, FREE_LEAD_WS5_Comments = 462, 
    FREE_FREE_SPEC = 463, C_FREE_NEWLINE = 464, FREE_NEWLINE = 465, FREE_SEMI = 466, 
    NumberContinuation_CONTINUATION = 467, NumberPart = 468, NumberContinuation_ANY = 469, 
    OP_ADD = 470, OP_ADDDUR = 471, OP_ALLOC = 472, OP_ANDxx = 473, OP_ANDEQ = 474, 
    OP_ANDNE = 475, OP_ANDLE = 476, OP_ANDLT = 477, OP_ANDGE = 478, OP_ANDGT = 479, 
    OP_BITOFF = 480, OP_BITON = 481, OP_CABxx = 482, OP_CABEQ = 483, OP_CABNE = 484, 
    OP_CABLE = 485, OP_CABLT = 486, OP_CABGE = 487, OP_CABGT = 488, OP_CALL = 489, 
    OP_CALLB = 490, OP_CASEQ = 491, OP_CASNE = 492, OP_CASLE = 493, OP_CASLT = 494, 
    OP_CASGE = 495, OP_CASGT = 496, OP_CAS = 497, OP_CAT = 498, OP_CHECK = 499, 
    OP_CHECKR = 500, OP_COMP = 501, OP_DEFINE = 502, OP_DIV = 503, OP_DO = 504, 
    OP_DOUEQ = 505, OP_DOUNE = 506, OP_DOULE = 507, OP_DOULT = 508, OP_DOUGE = 509, 
    OP_DOUGT = 510, OP_DOWEQ = 511, OP_DOWNE = 512, OP_DOWLE = 513, OP_DOWLT = 514, 
    OP_DOWGE = 515, OP_DOWGT = 516, OP_END = 517, OP_ENDCS = 518, OP_EXTRCT = 519, 
    OP_GOTO = 520, OP_IFEQ = 521, OP_IFNE = 522, OP_IFLE = 523, OP_IFLT = 524, 
    OP_IFGE = 525, OP_IFGT = 526, OP_KFLD = 527, OP_KLIST = 528, OP_LOOKUP = 529, 
    OP_MHHZO = 530, OP_MHLZO = 531, OP_MLHZO = 532, OP_MLLZO = 533, OP_MOVE = 534, 
    OP_MOVEA = 535, OP_MOVEL = 536, OP_MULT = 537, OP_MVR = 538, OP_OCCUR = 539, 
    OP_OREQ = 540, OP_ORNE = 541, OP_ORLE = 542, OP_ORLT = 543, OP_ORGE = 544, 
    OP_ORGT = 545, OP_PARM = 546, OP_PLIST = 547, OP_REALLOC = 548, OP_SCAN = 549, 
    OP_SETOFF = 550, OP_SETON = 551, OP_SHTDN = 552, OP_SQRT = 553, OP_SUB = 554, 
    OP_SUBDUR = 555, OP_SUBST = 556, OP_TAG = 557, OP_TESTB = 558, OP_TESTN = 559, 
    OP_TESTZ = 560, OP_TIME = 561, OP_WHENEQ = 562, OP_WHENNE = 563, OP_WHENLE = 564, 
    OP_WHENLT = 565, OP_WHENGE = 566, OP_WHENGT = 567, OP_XFOOT = 568, OP_XLATE = 569, 
    OP_Z_ADD = 570, OP_Z_SUB = 571, FE_BLANKS = 572, FE_COMMENTS = 573, 
    FE_NEWLINE = 574, StringContent = 575, StringEscapedQuote = 576, StringLiteralEnd = 577, 
    FIXED_FREE_STRING_CONTINUATION = 578, FIXED_FREE_STRING_CONTINUATION_MINUS = 579, 
    FREE_STRING_CONTINUATION = 580, FREE_STRING_CONTINUATION_MINUS = 581, 
    PlusOrMinus = 582, EatCommentLinesPlus_Any = 583, EatCommentLines_WhiteSpace = 584, 
    EatCommentLines_StarComment = 585, FIXED_FREE_STRING_CONTINUATION_Part2 = 586, 
    EatCommentLines_NothingLeft = 587, InFactor_EndFactor = 588, BLANK_COMMENTS_TEXT = 589, 
    COMMENTS_TEXT = 590, COMMENTS_EOL = 591, COMMENTS_TEXT_SKIP = 592, COMMENTS_TEXT_HIDDEN = 593, 
    COMMENTS_EOL_HIDDEN = 594, SQL_WS = 595, WORDS = 596, PS_NAME = 597, 
    PS_CONTINUATION_NAME = 598, PS_CONTINUATION = 599, PS_RESERVED1 = 600, 
    PS_BEGIN = 601, PS_END = 602, PS_RESERVED2 = 603, PS_KEYWORDS = 604, 
    PS_WS80 = 605, PS_COMMENTS80 = 606, PS_Any = 607, BLANK_SPEC = 608, 
    CONTINUATION_NAME = 609, CONTINUATION = 610, NAME = 611, EXTERNAL_DESCRIPTION = 612, 
    DATA_STRUCTURE_TYPE = 613, DEF_TYPE_C = 614, DEF_TYPE_PI = 615, DEF_TYPE_PR = 616, 
    DEF_TYPE_DS = 617, DEF_TYPE_S = 618, DEF_TYPE_BLANK = 619, DEF_TYPE = 620, 
    FROM_POSITION = 621, TO_POSITION = 622, DATA_TYPE = 623, DECIMAL_POSITIONS = 624, 
    RESERVED = 625, D_WS = 626, D_COMMENTS80 = 627, EOL = 628, CE_WS = 629, 
    CE_COMMENTS80 = 630, CE_LEAD_WS5 = 631, CE_LEAD_WS5_Comments = 632, 
    CE_D_SPEC_FIXED = 633, CE_P_SPEC_FIXED = 634, CE_NEWLINE = 635, FS_RecordName = 636, 
    FS_Type = 637, FS_Designation = 638, FS_EndOfFile = 639, FS_Addution = 640, 
    FS_Sequence = 641, FS_Format = 642, FS_RecordLength = 643, FS_Limits = 644, 
    FS_LengthOfKey = 645, FS_RecordAddressType = 646, FS_Organization = 647, 
    FS_Device = 648, FS_Reserved = 649, FS_WhiteSpace = 650, OS_RecordName = 651, 
    OS_AndOr = 652, OS_FieldReserved = 653, OS_Type = 654, OS_AddDelete = 655, 
    OS_FetchOverflow = 656, OS_ExceptName = 657, OS_Space3 = 658, OS_RemainingSpace = 659, 
    OS_Comments = 660, OS_WS = 661, OS_FieldName = 662, OS_EditNames = 663, 
    OS_BlankAfter = 664, OS_Reserved1 = 665, OS_EndPosition = 666, OS_DataFormat = 667, 
    OS_Any = 668, CS_BlankFactor = 669, CS_FactorWs = 670, CS_FactorWs2 = 671, 
    CS_FactorContent = 672, CS_OperationAndExtender_Blank = 673, CS_OperationAndExtender_WS = 674, 
    CS_OperationAndExtender = 675, CS_FieldLength = 676, CS_DecimalPositions = 677, 
    CS_WhiteSpace = 678, CS_Comments = 679, CS_FixedComments = 680, CS_FixedOperationAndExtender_WS = 681, 
    CS_FixedOperationExtenderReturn = 682, CS_FixedOperationAndExtender2_WS = 683, 
    CS_FixedOperationExtender2Return = 684, FreeOpExtender_Any = 685, FreeOpExtender2_WS = 686, 
    BlankFlag = 687, NoFlag = 688, BlankIndicator = 689, GeneralIndicator = 690, 
    FunctionKeyIndicator = 691, ControlLevelIndicator = 692, ControlLevel0Indicator = 693, 
    LastRecordIndicator = 694, MatchingRecordIndicator = 695, HaltIndicator = 696, 
    ReturnIndicator = 697, ExternalIndicator = 698, OverflowIndicator = 699, 
    SubroutineIndicator = 700, AndIndicator = 701, OrIndicator = 702, DoubleSplatIndicator = 703, 
    FirstPageIndicator = 704, OtherTextIndicator = 705, NewLineIndicator = 706, 
    CSQL_EMPTY_TEXT = 707, CSQL_TEXT = 708, CSQL_LEADBLANK = 709, CSQL_LEADWS = 710, 
    CSQL_END = 711, CSQL_CONT = 712, CSQL_CSplat = 713, CSQL_EOL = 714, 
    CSQL_Any = 715, CSQLC_LEADWS = 716, CSQLC_CSplat = 717, CSQLC_WS = 718, 
    CSQLC_Comments = 719, CSQLC_Any = 720, C2_FACTOR2_CONT = 721, C2_FACTOR2 = 722, 
    C2_OTHER = 723, IS_FileName = 724, IS_FieldReserved = 725, IS_ExtFieldReserved = 726, 
    IS_LogicalRelationship = 727, IS_ExtRecordReserved = 728, IS_Sequence = 729, 
    IS_Number = 730, IS_Option = 731, IS_RecordIdCode = 732, IS_WS = 733, 
    IS_COMMENTS = 734, IF_Name = 735, IF_Reserved = 736, IF_FieldName = 737, 
    IF_Reserved2 = 738, IF_WS = 739, IR_WS = 740, IFD_DATA_ATTR = 741, IFD_DATETIME_SEP = 742, 
    IFD_DATA_FORMAT = 743, IFD_FIELD_LOCATION = 744, IFD_DECIMAL_POSITIONS = 745, 
    IFD_FIELD_NAME = 746, IFD_CONTROL_LEVEL = 747, IFD_MATCHING_FIELDS = 748, 
    IFD_BLANKS = 749, IFD_COMMENTS = 750, HS_DECEDIT = 751, HS_WhiteSpace = 752, 
    HS_CONTINUATION = 753, DOT = 754
  };

  enum {
    RuleR = 0, RuleStatement = 1, RuleEndSourceBlock = 2, RuleEndSource = 3, 
    RuleEndSourceHead = 4, RuleEndSourceLine = 5, RuleEndSourceLineText = 6, 
    RuleStar_comments = 7, RuleFree_comments = 8, RuleFree_linecomments = 9, 
    RuleComments = 10, RuleDspec = 11, RuleDspecConstant = 12, RuleDatatype = 13, 
    RuleKeyword = 14, RuleDspec_bif = 15, RuleKeyword_alias = 16, RuleKeyword_align = 17, 
    RuleKeyword_alt = 18, RuleKeyword_altseq = 19, RuleKeyword_ascend = 20, 
    RuleKeyword_based = 21, RuleKeyword_ccsid = 22, RuleKeyword_class = 23, 
    RuleKeyword_const = 24, RuleKeyword_ctdata = 25, RuleKeyword_datfmt = 26, 
    RuleDateSeparator = 27, RuleKeyword_descend = 28, RuleKeyword_dim = 29, 
    RuleKeyword_dtaara = 30, RuleKeyword_export = 31, RuleKeyword_ext = 32, 
    RuleKeyword_extfld = 33, RuleKeyword_extfmt = 34, RuleKeyword_extname = 35, 
    RuleKeyword_extpgm = 36, RuleKeyword_extproc = 37, RuleKeyword_fromfile = 38, 
    RuleKeyword_import = 39, RuleKeyword_inz = 40, RuleKeyword_len = 41, 
    RuleKeyword_like = 42, RuleKeyword_likeds = 43, RuleKeyword_likefile = 44, 
    RuleKeyword_likerec = 45, RuleKeyword_noopt = 46, RuleKeyword_occurs = 47, 
    RuleKeyword_opdesc = 48, RuleKeyword_options = 49, RuleKeyword_overlay = 50, 
    RuleKeyword_packeven = 51, RuleKeyword_perrcd = 52, RuleKeyword_prefix = 53, 
    RuleKeyword_pos = 54, RuleKeyword_procptr = 55, RuleKeyword_qualified = 56, 
    RuleKeyword_rtnparm = 57, RuleKeyword_static = 58, RuleKeyword_sqltype = 59, 
    RuleKeyword_template = 60, RuleKeyword_timfmt = 61, RuleKeyword_tofile = 62, 
    RuleKeyword_value = 63, RuleKeyword_varying = 64, RuleKeyword_psds = 65, 
    RuleKeyword_block = 66, RuleKeyword_commit = 67, RuleKeyword_devid = 68, 
    RuleKeyword_extdesc = 69, RuleKeyword_extfile = 70, RuleKeyword_extind = 71, 
    RuleKeyword_extmbr = 72, RuleKeyword_formlen = 73, RuleKeyword_formofl = 74, 
    RuleKeyword_ignore = 75, RuleKeyword_include = 76, RuleKeyword_indds = 77, 
    RuleKeyword_infds = 78, RuleKeyword_infsr = 79, RuleKeyword_keyloc = 80, 
    RuleKeyword_maxdev = 81, RuleKeyword_oflind = 82, RuleKeyword_pass = 83, 
    RuleKeyword_pgmname = 84, RuleKeyword_plist = 85, RuleKeyword_prtctl = 86, 
    RuleKeyword_rafdata = 87, RuleKeyword_recno = 88, RuleKeyword_rename = 89, 
    RuleKeyword_saveds = 90, RuleKeyword_saveind = 91, RuleKeyword_sfile = 92, 
    RuleKeyword_sln = 93, RuleKeyword_usropn = 94, RuleKeyword_disk = 95, 
    RuleKeyword_workstn = 96, RuleKeyword_printer = 97, RuleKeyword_special = 98, 
    RuleKeyword_keyed = 99, RuleKeyword_usage = 100, RuleLike_lengthAdjustment = 101, 
    RuleSign = 102, RuleDcl_ds = 103, RuleDcl_ds_field = 104, RuleEnd_dcl_ds = 105, 
    RuleDcl_pr = 106, RuleDcl_pr_field = 107, RuleEnd_dcl_pr = 108, RuleDcl_pi = 109, 
    RuleDcl_pi_field = 110, RuleEnd_dcl_pi = 111, RuleDcl_c = 112, RuleCtl_opt = 113, 
    RuleDatatypeName = 114, RuleBlock = 115, RuleIfstatement = 116, RuleElseIfClause = 117, 
    RuleElseClause = 118, RuleCasestatement = 119, RuleCasestatementend = 120, 
    RuleMonitorstatement = 121, RuleBeginmonitor = 122, RuleEndmonitor = 123, 
    RuleOnError = 124, RuleSelectstatement = 125, RuleOther = 126, RuleBeginselect = 127, 
    RuleWhenstatement = 128, RuleWhen = 129, RuleCsWHENxx = 130, RuleEndselect = 131, 
    RuleBeginif = 132, RuleBegindou = 133, RuleBegindow = 134, RuleBegindo = 135, 
    RuleElseifstmt = 136, RuleElsestmt = 137, RuleCsIFxx = 138, RuleCsDOUxx = 139, 
    RuleCsDOWxx = 140, RuleComplexCondxx = 141, RuleCsANDxx = 142, RuleCsORxx = 143, 
    RuleForstatement = 144, RuleBeginfor = 145, RuleEndif = 146, RuleEnddo = 147, 
    RuleEndfor = 148, RuleDspec_fixed = 149, RuleDs_name = 150, RuleOspec_fixed = 151, 
    RuleOs_fixed_pgmdesc1 = 152, RuleOutputConditioningOnOffIndicator = 153, 
    RuleOutputConditioningIndicator = 154, RuleOs_fixed_pgmdesc_compound = 155, 
    RuleOs_fixed_pgmdesc2 = 156, RuleOs_fixed_pgmfield = 157, RulePs_name = 158, 
    RuleFspec = 159, RuleFilename = 160, RuleFs_parm = 161, RuleFs_string = 162, 
    RuleFs_keyword = 163, RuleFspec_fixed = 164, RuleCspec_fixed = 165, 
    RuleCspec_continuedIndicators = 166, RuleCspec_blank = 167, RuleBlank_spec = 168, 
    RulePiBegin = 169, RuleParm_fixed = 170, RulePr_parm_fixed = 171, RulePi_parm_fixed = 172, 
    RuleProcedure = 173, RuleBeginProcedure = 174, RuleEndProcedure = 175, 
    RulePsBegin = 176, RuleFreeBeginProcedure = 177, RulePsEnd = 178, RuleFreeEndProcedure = 179, 
    RulePrBegin = 180, RuleSubroutine = 181, RuleSubprocedurestatement = 182, 
    RuleBegsr = 183, RuleEndsr = 184, RuleCsBEGSR = 185, RuleFreeBEGSR = 186, 
    RuleCsENDSR = 187, RuleFreeENDSR = 188, RuleOnOffIndicatorsFlag = 189, 
    RuleCs_controlLevel = 190, RuleCs_indicators = 191, RuleResultIndicator = 192, 
    RuleCspec_fixed_sql = 193, RuleCspec_fixed_standard = 194, RuleCspec_fixed_standard_parts = 195, 
    RuleCsACQ = 196, RuleCsADD = 197, RuleCsADDDUR = 198, RuleCsALLOC = 199, 
    RuleCsANDEQ = 200, RuleCsANDNE = 201, RuleCsANDLE = 202, RuleCsANDLT = 203, 
    RuleCsANDGE = 204, RuleCsANDGT = 205, RuleCsBITOFF = 206, RuleCsBITON = 207, 
    RuleCsCABxx = 208, RuleCsCABEQ = 209, RuleCsCABNE = 210, RuleCsCABLE = 211, 
    RuleCsCABLT = 212, RuleCsCABGE = 213, RuleCsCABGT = 214, RuleCsCALL = 215, 
    RuleCsCALLB = 216, RuleCsCALLP = 217, RuleCsCASEQ = 218, RuleCsCASNE = 219, 
    RuleCsCASLE = 220, RuleCsCASLT = 221, RuleCsCASGE = 222, RuleCsCASGT = 223, 
    RuleCsCAS = 224, RuleCsCAT = 225, RuleCsCHAIN = 226, RuleCsCHECK = 227, 
    RuleCsCHECKR = 228, RuleCsCLEAR = 229, RuleCsCLOSE = 230, RuleCsCOMMIT = 231, 
    RuleCsCOMP = 232, RuleCsDEALLOC = 233, RuleCsDEFINE = 234, RuleCsDELETE = 235, 
    RuleCsDIV = 236, RuleCsDO = 237, RuleCsDOU = 238, RuleCsDOUEQ = 239, 
    RuleCsDOUNE = 240, RuleCsDOULE = 241, RuleCsDOULT = 242, RuleCsDOUGE = 243, 
    RuleCsDOUGT = 244, RuleCsDOW = 245, RuleCsDOWEQ = 246, RuleCsDOWNE = 247, 
    RuleCsDOWLE = 248, RuleCsDOWLT = 249, RuleCsDOWGE = 250, RuleCsDOWGT = 251, 
    RuleCsDSPLY = 252, RuleCsDUMP = 253, RuleCsELSE = 254, RuleCsELSEIF = 255, 
    RuleCsEND = 256, RuleCsENDCS = 257, RuleCsENDDO = 258, RuleCsENDFOR = 259, 
    RuleCsENDIF = 260, RuleCsENDMON = 261, RuleCsENDSL = 262, RuleCsEVAL = 263, 
    RuleCsEVAL_CORR = 264, RuleCsEVALR = 265, RuleCsEXCEPT = 266, RuleCsEXFMT = 267, 
    RuleCsEXSR = 268, RuleCsEXTRCT = 269, RuleCsFEOD = 270, RuleCsFOR = 271, 
    RuleByExpression = 272, RuleStopExpression = 273, RuleCsFORCE = 274, 
    RuleCsGOTO = 275, RuleCsIF = 276, RuleCsIFEQ = 277, RuleCsIFNE = 278, 
    RuleCsIFLE = 279, RuleCsIFLT = 280, RuleCsIFGE = 281, RuleCsIFGT = 282, 
    RuleCsIN = 283, RuleCsITER = 284, RuleCsKLIST = 285, RuleCsKFLD = 286, 
    RuleCsLEAVE = 287, RuleCsLEAVESR = 288, RuleCsLOOKUP = 289, RuleCsMHHZO = 290, 
    RuleCsMHLZO = 291, RuleCsMLHZO = 292, RuleCsMLLZO = 293, RuleCsMONITOR = 294, 
    RuleCsMOVE = 295, RuleCsMOVEA = 296, RuleCsMOVEL = 297, RuleCsMULT = 298, 
    RuleCsMVR = 299, RuleCsNEXT = 300, RuleCsOCCUR = 301, RuleCsON_ERROR = 302, 
    RuleOnErrorCode = 303, RuleCsOPEN = 304, RuleCsOREQ = 305, RuleCsORNE = 306, 
    RuleCsORLE = 307, RuleCsORLT = 308, RuleCsORGE = 309, RuleCsORGT = 310, 
    RuleCsOTHER = 311, RuleCsOUT = 312, RuleCsPARM = 313, RuleCsPLIST = 314, 
    RuleCsPOST = 315, RuleCsREAD = 316, RuleCsREADC = 317, RuleCsREADE = 318, 
    RuleCsREADP = 319, RuleCsREADPE = 320, RuleCsREALLOC = 321, RuleCsREL = 322, 
    RuleCsRESET = 323, RuleCsRETURN = 324, RuleCsROLBK = 325, RuleCsSCAN = 326, 
    RuleCsSELECT = 327, RuleCsSETGT = 328, RuleCsSETLL = 329, RuleCsSETOFF = 330, 
    RuleCsSETON = 331, RuleCsSHTDN = 332, RuleCsSORTA = 333, RuleCsSQRT = 334, 
    RuleCsSUB = 335, RuleCsSUBDUR = 336, RuleCsSUBST = 337, RuleCsTAG = 338, 
    RuleCsTEST = 339, RuleCsTESTB = 340, RuleCsTESTN = 341, RuleCsTESTZ = 342, 
    RuleCsTIME = 343, RuleCsUNLOCK = 344, RuleCsUPDATE = 345, RuleCsWHEN = 346, 
    RuleCsWHENEQ = 347, RuleCsWHENNE = 348, RuleCsWHENLE = 349, RuleCsWHENLT = 350, 
    RuleCsWHENGE = 351, RuleCsWHENGT = 352, RuleCsWRITE = 353, RuleCsXFOOT = 354, 
    RuleCsXLATE = 355, RuleCsXML_INTO = 356, RuleCsXML_SAX = 357, RuleCsZ_ADD = 358, 
    RuleCsZ_SUB = 359, RuleCs_operationExtender = 360, RuleFactor = 361, 
    RuleFactorContent = 362, RuleResultType = 363, RuleCs_fixed_comments = 364, 
    RuleCspec_fixed_x2 = 365, RuleCsOperationAndExtendedFactor2 = 366, RuleIspec_fixed = 367, 
    RuleFieldRecordRelation = 368, RuleFieldIndicator = 369, RuleIs_external_rec = 370, 
    RuleIs_rec = 371, RuleRecordIdIndicator = 372, RuleIs_external_field = 373, 
    RuleControlLevelIndicator = 374, RuleMatchingFieldsIndicator = 375, 
    RuleHspec_fixed = 376, RuleHspec_content = 377, RuleHs_decedit_set = 378, 
    RuleHs_expression = 379, RuleHs_parm = 380, RuleHs_string = 381, RuleBlank_line = 382, 
    RuleDirective = 383, RuleSpace_directive = 384, RuleDir_copy = 385, 
    RuleDir_include = 386, RuleDir_if = 387, RuleDir_elseif = 388, RuleDir_else = 389, 
    RuleDir_endif = 390, RuleDir_define = 391, RuleDir_undefine = 392, RuleDir_eof = 393, 
    RuleBeginfree_directive = 394, RuleEndfree_directive = 395, RuleCopyText = 396, 
    RuleTrailing_ws = 397, RuleTitle_directive = 398, RuleTitle_text = 399, 
    RuleOp = 400, RuleOp_acq = 401, RuleOp_callp = 402, RuleOp_chain = 403, 
    RuleOp_clear = 404, RuleOp_close = 405, RuleOp_commit = 406, RuleOp_dealloc = 407, 
    RuleOp_delete = 408, RuleOp_dou = 409, RuleOp_dow = 410, RuleOp_dsply = 411, 
    RuleOp_dump = 412, RuleOp_else = 413, RuleOp_elseif = 414, RuleOp_enddo = 415, 
    RuleOp_endfor = 416, RuleOp_endif = 417, RuleOp_endmon = 418, RuleOp_endsl = 419, 
    RuleOp_eval = 420, RuleOp_evalr = 421, RuleOp_eval_corr = 422, RuleOp_except = 423, 
    RuleOp_exfmt = 424, RuleOp_exsr = 425, RuleOp_feod = 426, RuleOp_for = 427, 
    RuleOp_force = 428, RuleOp_if = 429, RuleOp_in = 430, RuleOp_iter = 431, 
    RuleOp_leave = 432, RuleOp_leavesr = 433, RuleOp_monitor = 434, RuleOp_next = 435, 
    RuleOp_on_error = 436, RuleOp_open = 437, RuleOp_other = 438, RuleOp_out = 439, 
    RuleOp_post = 440, RuleOp_read = 441, RuleOp_readc = 442, RuleOp_reade = 443, 
    RuleOp_readp = 444, RuleOp_readpe = 445, RuleOp_rel = 446, RuleOp_reset2 = 447, 
    RuleOp_reset = 448, RuleOp_return = 449, RuleOp_rolbk = 450, RuleOp_select = 451, 
    RuleOp_setgt = 452, RuleOp_setll = 453, RuleOp_sorta = 454, RuleOp_test = 455, 
    RuleOp_unlock = 456, RuleOp_update = 457, RuleOp_when = 458, RuleOp_write = 459, 
    RuleOp_xml_into = 460, RuleOp_xml_sax = 461, RuleSearch_arg = 462, RuleOp_code = 463, 
    RuleBif = 464, RuleOptargs = 465, RuleBif_charformat = 466, RuleBif_dateformat = 467, 
    RuleBif_timeformat = 468, RuleBif_editccurrency = 469, RuleBif_lookupargs = 470, 
    RuleDurationCode = 471, RuleBif_timestampargs = 472, RuleBif_tlookupargs = 473, 
    RuleBif_abs = 474, RuleBif_addr = 475, RuleBif_alloc = 476, RuleBif_bitand = 477, 
    RuleBif_bitnot = 478, RuleBif_bitor = 479, RuleBif_bitxor = 480, RuleBif_char = 481, 
    RuleBif_check = 482, RuleBif_checkr = 483, RuleBif_date = 484, RuleBif_days = 485, 
    RuleBif_dec = 486, RuleBif_dech = 487, RuleBif_decpos = 488, RuleBif_diff = 489, 
    RuleBif_div = 490, RuleBif_editc = 491, RuleBif_editflt = 492, RuleBif_editw = 493, 
    RuleBif_elem = 494, RuleBif_eof = 495, RuleBif_equal = 496, RuleBif_error = 497, 
    RuleBif_fields = 498, RuleBif_float = 499, RuleBif_found = 500, RuleBif_graph = 501, 
    RuleBif_handler = 502, RuleBif_hours = 503, RuleBif_int = 504, RuleBif_inth = 505, 
    RuleBif_kds = 506, RuleBif_len = 507, RuleBif_lookup = 508, RuleBif_lookuplt = 509, 
    RuleBif_lookuple = 510, RuleBif_lookupgt = 511, RuleBif_lookupge = 512, 
    RuleBif_minutes = 513, RuleBif_months = 514, RuleBif_mseconds = 515, 
    RuleBif_nullind = 516, RuleBif_occur = 517, RuleBif_open = 518, RuleBif_paddr = 519, 
    RuleBif_parms = 520, RuleBif_parmnum = 521, RuleBif_realloc = 522, RuleBif_rem = 523, 
    RuleBif_replace = 524, RuleBif_scan = 525, RuleBif_scanrpl = 526, RuleBif_seconds = 527, 
    RuleBif_shtdn = 528, RuleBif_size = 529, RuleBif_sqrt = 530, RuleBif_status = 531, 
    RuleBif_str = 532, RuleBif_subarr = 533, RuleBif_subdt = 534, RuleBif_subst = 535, 
    RuleBif_this = 536, RuleBif_time = 537, RuleBif_timestamp = 538, RuleBif_tlookup = 539, 
    RuleBif_tlookuplt = 540, RuleBif_tlookuple = 541, RuleBif_tlookupgt = 542, 
    RuleBif_tlookupge = 543, RuleBif_trim = 544, RuleBif_triml = 545, RuleBif_trimr = 546, 
    RuleBif_ucs2 = 547, RuleBif_uns = 548, RuleBif_unsh = 549, RuleBif_xfoot = 550, 
    RuleBif_xlate = 551, RuleBif_xml = 552, RuleBif_years = 553, RuleBif_code = 554, 
    RuleFree = 555, RuleC_free = 556, RuleControl = 557, RuleExec_sql = 558, 
    RuleBaseExpression = 559, RuleIndicator = 560, RuleAssignmentExpression = 561, 
    RuleAssignOperatorExpression = 562, RuleEvalExpression = 563, RuleSimpleExpression = 564, 
    RuleUnaryExpression = 565, RuleExpression = 566, RulePexpression = 567, 
    RuleIndicator_expr = 568, RuleFunction = 569, RuleComparisonOperator = 570, 
    RuleAssignmentOperator = 571, RuleAssignmentOperatorIncludingEqual = 572, 
    RuleArgs = 573, RuleLiteral = 574, RuleIdentifier = 575, RuleAll = 576, 
    RuleFunctionName = 577, RuleMultipart_identifier = 578, RuleMultipart_identifier_element = 579, 
    RuleIndexed_identifier = 580, RuleOpCode = 581, RuleNumber = 582, RuleFree_identifier = 583, 
    RuleContinuedIdentifier = 584, RuleIdOrKeyword = 585, RuleArgument = 586, 
    RuleSymbolicConstants = 587, RuleTarget = 588
  };

  RpgParser(antlr4::TokenStream *input);
  ~RpgParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class RContext;
  class StatementContext;
  class EndSourceBlockContext;
  class EndSourceContext;
  class EndSourceHeadContext;
  class EndSourceLineContext;
  class EndSourceLineTextContext;
  class Star_commentsContext;
  class Free_commentsContext;
  class Free_linecommentsContext;
  class CommentsContext;
  class DspecContext;
  class DspecConstantContext;
  class DatatypeContext;
  class KeywordContext;
  class Dspec_bifContext;
  class Keyword_aliasContext;
  class Keyword_alignContext;
  class Keyword_altContext;
  class Keyword_altseqContext;
  class Keyword_ascendContext;
  class Keyword_basedContext;
  class Keyword_ccsidContext;
  class Keyword_classContext;
  class Keyword_constContext;
  class Keyword_ctdataContext;
  class Keyword_datfmtContext;
  class DateSeparatorContext;
  class Keyword_descendContext;
  class Keyword_dimContext;
  class Keyword_dtaaraContext;
  class Keyword_exportContext;
  class Keyword_extContext;
  class Keyword_extfldContext;
  class Keyword_extfmtContext;
  class Keyword_extnameContext;
  class Keyword_extpgmContext;
  class Keyword_extprocContext;
  class Keyword_fromfileContext;
  class Keyword_importContext;
  class Keyword_inzContext;
  class Keyword_lenContext;
  class Keyword_likeContext;
  class Keyword_likedsContext;
  class Keyword_likefileContext;
  class Keyword_likerecContext;
  class Keyword_nooptContext;
  class Keyword_occursContext;
  class Keyword_opdescContext;
  class Keyword_optionsContext;
  class Keyword_overlayContext;
  class Keyword_packevenContext;
  class Keyword_perrcdContext;
  class Keyword_prefixContext;
  class Keyword_posContext;
  class Keyword_procptrContext;
  class Keyword_qualifiedContext;
  class Keyword_rtnparmContext;
  class Keyword_staticContext;
  class Keyword_sqltypeContext;
  class Keyword_templateContext;
  class Keyword_timfmtContext;
  class Keyword_tofileContext;
  class Keyword_valueContext;
  class Keyword_varyingContext;
  class Keyword_psdsContext;
  class Keyword_blockContext;
  class Keyword_commitContext;
  class Keyword_devidContext;
  class Keyword_extdescContext;
  class Keyword_extfileContext;
  class Keyword_extindContext;
  class Keyword_extmbrContext;
  class Keyword_formlenContext;
  class Keyword_formoflContext;
  class Keyword_ignoreContext;
  class Keyword_includeContext;
  class Keyword_inddsContext;
  class Keyword_infdsContext;
  class Keyword_infsrContext;
  class Keyword_keylocContext;
  class Keyword_maxdevContext;
  class Keyword_oflindContext;
  class Keyword_passContext;
  class Keyword_pgmnameContext;
  class Keyword_plistContext;
  class Keyword_prtctlContext;
  class Keyword_rafdataContext;
  class Keyword_recnoContext;
  class Keyword_renameContext;
  class Keyword_savedsContext;
  class Keyword_saveindContext;
  class Keyword_sfileContext;
  class Keyword_slnContext;
  class Keyword_usropnContext;
  class Keyword_diskContext;
  class Keyword_workstnContext;
  class Keyword_printerContext;
  class Keyword_specialContext;
  class Keyword_keyedContext;
  class Keyword_usageContext;
  class Like_lengthAdjustmentContext;
  class SignContext;
  class Dcl_dsContext;
  class Dcl_ds_fieldContext;
  class End_dcl_dsContext;
  class Dcl_prContext;
  class Dcl_pr_fieldContext;
  class End_dcl_prContext;
  class Dcl_piContext;
  class Dcl_pi_fieldContext;
  class End_dcl_piContext;
  class Dcl_cContext;
  class Ctl_optContext;
  class DatatypeNameContext;
  class BlockContext;
  class IfstatementContext;
  class ElseIfClauseContext;
  class ElseClauseContext;
  class CasestatementContext;
  class CasestatementendContext;
  class MonitorstatementContext;
  class BeginmonitorContext;
  class EndmonitorContext;
  class OnErrorContext;
  class SelectstatementContext;
  class OtherContext;
  class BeginselectContext;
  class WhenstatementContext;
  class WhenContext;
  class CsWHENxxContext;
  class EndselectContext;
  class BeginifContext;
  class BegindouContext;
  class BegindowContext;
  class BegindoContext;
  class ElseifstmtContext;
  class ElsestmtContext;
  class CsIFxxContext;
  class CsDOUxxContext;
  class CsDOWxxContext;
  class ComplexCondxxContext;
  class CsANDxxContext;
  class CsORxxContext;
  class ForstatementContext;
  class BeginforContext;
  class EndifContext;
  class EnddoContext;
  class EndforContext;
  class Dspec_fixedContext;
  class Ds_nameContext;
  class Ospec_fixedContext;
  class Os_fixed_pgmdesc1Context;
  class OutputConditioningOnOffIndicatorContext;
  class OutputConditioningIndicatorContext;
  class Os_fixed_pgmdesc_compoundContext;
  class Os_fixed_pgmdesc2Context;
  class Os_fixed_pgmfieldContext;
  class Ps_nameContext;
  class FspecContext;
  class FilenameContext;
  class Fs_parmContext;
  class Fs_stringContext;
  class Fs_keywordContext;
  class Fspec_fixedContext;
  class Cspec_fixedContext;
  class Cspec_continuedIndicatorsContext;
  class Cspec_blankContext;
  class Blank_specContext;
  class PiBeginContext;
  class Parm_fixedContext;
  class Pr_parm_fixedContext;
  class Pi_parm_fixedContext;
  class ProcedureContext;
  class BeginProcedureContext;
  class EndProcedureContext;
  class PsBeginContext;
  class FreeBeginProcedureContext;
  class PsEndContext;
  class FreeEndProcedureContext;
  class PrBeginContext;
  class SubroutineContext;
  class SubprocedurestatementContext;
  class BegsrContext;
  class EndsrContext;
  class CsBEGSRContext;
  class FreeBEGSRContext;
  class CsENDSRContext;
  class FreeENDSRContext;
  class OnOffIndicatorsFlagContext;
  class Cs_controlLevelContext;
  class Cs_indicatorsContext;
  class ResultIndicatorContext;
  class Cspec_fixed_sqlContext;
  class Cspec_fixed_standardContext;
  class Cspec_fixed_standard_partsContext;
  class CsACQContext;
  class CsADDContext;
  class CsADDDURContext;
  class CsALLOCContext;
  class CsANDEQContext;
  class CsANDNEContext;
  class CsANDLEContext;
  class CsANDLTContext;
  class CsANDGEContext;
  class CsANDGTContext;
  class CsBITOFFContext;
  class CsBITONContext;
  class CsCABxxContext;
  class CsCABEQContext;
  class CsCABNEContext;
  class CsCABLEContext;
  class CsCABLTContext;
  class CsCABGEContext;
  class CsCABGTContext;
  class CsCALLContext;
  class CsCALLBContext;
  class CsCALLPContext;
  class CsCASEQContext;
  class CsCASNEContext;
  class CsCASLEContext;
  class CsCASLTContext;
  class CsCASGEContext;
  class CsCASGTContext;
  class CsCASContext;
  class CsCATContext;
  class CsCHAINContext;
  class CsCHECKContext;
  class CsCHECKRContext;
  class CsCLEARContext;
  class CsCLOSEContext;
  class CsCOMMITContext;
  class CsCOMPContext;
  class CsDEALLOCContext;
  class CsDEFINEContext;
  class CsDELETEContext;
  class CsDIVContext;
  class CsDOContext;
  class CsDOUContext;
  class CsDOUEQContext;
  class CsDOUNEContext;
  class CsDOULEContext;
  class CsDOULTContext;
  class CsDOUGEContext;
  class CsDOUGTContext;
  class CsDOWContext;
  class CsDOWEQContext;
  class CsDOWNEContext;
  class CsDOWLEContext;
  class CsDOWLTContext;
  class CsDOWGEContext;
  class CsDOWGTContext;
  class CsDSPLYContext;
  class CsDUMPContext;
  class CsELSEContext;
  class CsELSEIFContext;
  class CsENDContext;
  class CsENDCSContext;
  class CsENDDOContext;
  class CsENDFORContext;
  class CsENDIFContext;
  class CsENDMONContext;
  class CsENDSLContext;
  class CsEVALContext;
  class CsEVAL_CORRContext;
  class CsEVALRContext;
  class CsEXCEPTContext;
  class CsEXFMTContext;
  class CsEXSRContext;
  class CsEXTRCTContext;
  class CsFEODContext;
  class CsFORContext;
  class ByExpressionContext;
  class StopExpressionContext;
  class CsFORCEContext;
  class CsGOTOContext;
  class CsIFContext;
  class CsIFEQContext;
  class CsIFNEContext;
  class CsIFLEContext;
  class CsIFLTContext;
  class CsIFGEContext;
  class CsIFGTContext;
  class CsINContext;
  class CsITERContext;
  class CsKLISTContext;
  class CsKFLDContext;
  class CsLEAVEContext;
  class CsLEAVESRContext;
  class CsLOOKUPContext;
  class CsMHHZOContext;
  class CsMHLZOContext;
  class CsMLHZOContext;
  class CsMLLZOContext;
  class CsMONITORContext;
  class CsMOVEContext;
  class CsMOVEAContext;
  class CsMOVELContext;
  class CsMULTContext;
  class CsMVRContext;
  class CsNEXTContext;
  class CsOCCURContext;
  class CsON_ERRORContext;
  class OnErrorCodeContext;
  class CsOPENContext;
  class CsOREQContext;
  class CsORNEContext;
  class CsORLEContext;
  class CsORLTContext;
  class CsORGEContext;
  class CsORGTContext;
  class CsOTHERContext;
  class CsOUTContext;
  class CsPARMContext;
  class CsPLISTContext;
  class CsPOSTContext;
  class CsREADContext;
  class CsREADCContext;
  class CsREADEContext;
  class CsREADPContext;
  class CsREADPEContext;
  class CsREALLOCContext;
  class CsRELContext;
  class CsRESETContext;
  class CsRETURNContext;
  class CsROLBKContext;
  class CsSCANContext;
  class CsSELECTContext;
  class CsSETGTContext;
  class CsSETLLContext;
  class CsSETOFFContext;
  class CsSETONContext;
  class CsSHTDNContext;
  class CsSORTAContext;
  class CsSQRTContext;
  class CsSUBContext;
  class CsSUBDURContext;
  class CsSUBSTContext;
  class CsTAGContext;
  class CsTESTContext;
  class CsTESTBContext;
  class CsTESTNContext;
  class CsTESTZContext;
  class CsTIMEContext;
  class CsUNLOCKContext;
  class CsUPDATEContext;
  class CsWHENContext;
  class CsWHENEQContext;
  class CsWHENNEContext;
  class CsWHENLEContext;
  class CsWHENLTContext;
  class CsWHENGEContext;
  class CsWHENGTContext;
  class CsWRITEContext;
  class CsXFOOTContext;
  class CsXLATEContext;
  class CsXML_INTOContext;
  class CsXML_SAXContext;
  class CsZ_ADDContext;
  class CsZ_SUBContext;
  class Cs_operationExtenderContext;
  class FactorContext;
  class FactorContentContext;
  class ResultTypeContext;
  class Cs_fixed_commentsContext;
  class Cspec_fixed_x2Context;
  class CsOperationAndExtendedFactor2Context;
  class Ispec_fixedContext;
  class FieldRecordRelationContext;
  class FieldIndicatorContext;
  class Is_external_recContext;
  class Is_recContext;
  class RecordIdIndicatorContext;
  class Is_external_fieldContext;
  class ControlLevelIndicatorContext;
  class MatchingFieldsIndicatorContext;
  class Hspec_fixedContext;
  class Hspec_contentContext;
  class Hs_decedit_setContext;
  class Hs_expressionContext;
  class Hs_parmContext;
  class Hs_stringContext;
  class Blank_lineContext;
  class DirectiveContext;
  class Space_directiveContext;
  class Dir_copyContext;
  class Dir_includeContext;
  class Dir_ifContext;
  class Dir_elseifContext;
  class Dir_elseContext;
  class Dir_endifContext;
  class Dir_defineContext;
  class Dir_undefineContext;
  class Dir_eofContext;
  class Beginfree_directiveContext;
  class Endfree_directiveContext;
  class CopyTextContext;
  class Trailing_wsContext;
  class Title_directiveContext;
  class Title_textContext;
  class OpContext;
  class Op_acqContext;
  class Op_callpContext;
  class Op_chainContext;
  class Op_clearContext;
  class Op_closeContext;
  class Op_commitContext;
  class Op_deallocContext;
  class Op_deleteContext;
  class Op_douContext;
  class Op_dowContext;
  class Op_dsplyContext;
  class Op_dumpContext;
  class Op_elseContext;
  class Op_elseifContext;
  class Op_enddoContext;
  class Op_endforContext;
  class Op_endifContext;
  class Op_endmonContext;
  class Op_endslContext;
  class Op_evalContext;
  class Op_evalrContext;
  class Op_eval_corrContext;
  class Op_exceptContext;
  class Op_exfmtContext;
  class Op_exsrContext;
  class Op_feodContext;
  class Op_forContext;
  class Op_forceContext;
  class Op_ifContext;
  class Op_inContext;
  class Op_iterContext;
  class Op_leaveContext;
  class Op_leavesrContext;
  class Op_monitorContext;
  class Op_nextContext;
  class Op_on_errorContext;
  class Op_openContext;
  class Op_otherContext;
  class Op_outContext;
  class Op_postContext;
  class Op_readContext;
  class Op_readcContext;
  class Op_readeContext;
  class Op_readpContext;
  class Op_readpeContext;
  class Op_relContext;
  class Op_reset2Context;
  class Op_resetContext;
  class Op_returnContext;
  class Op_rolbkContext;
  class Op_selectContext;
  class Op_setgtContext;
  class Op_setllContext;
  class Op_sortaContext;
  class Op_testContext;
  class Op_unlockContext;
  class Op_updateContext;
  class Op_whenContext;
  class Op_writeContext;
  class Op_xml_intoContext;
  class Op_xml_saxContext;
  class Search_argContext;
  class Op_codeContext;
  class BifContext;
  class OptargsContext;
  class Bif_charformatContext;
  class Bif_dateformatContext;
  class Bif_timeformatContext;
  class Bif_editccurrencyContext;
  class Bif_lookupargsContext;
  class DurationCodeContext;
  class Bif_timestampargsContext;
  class Bif_tlookupargsContext;
  class Bif_absContext;
  class Bif_addrContext;
  class Bif_allocContext;
  class Bif_bitandContext;
  class Bif_bitnotContext;
  class Bif_bitorContext;
  class Bif_bitxorContext;
  class Bif_charContext;
  class Bif_checkContext;
  class Bif_checkrContext;
  class Bif_dateContext;
  class Bif_daysContext;
  class Bif_decContext;
  class Bif_dechContext;
  class Bif_decposContext;
  class Bif_diffContext;
  class Bif_divContext;
  class Bif_editcContext;
  class Bif_editfltContext;
  class Bif_editwContext;
  class Bif_elemContext;
  class Bif_eofContext;
  class Bif_equalContext;
  class Bif_errorContext;
  class Bif_fieldsContext;
  class Bif_floatContext;
  class Bif_foundContext;
  class Bif_graphContext;
  class Bif_handlerContext;
  class Bif_hoursContext;
  class Bif_intContext;
  class Bif_inthContext;
  class Bif_kdsContext;
  class Bif_lenContext;
  class Bif_lookupContext;
  class Bif_lookupltContext;
  class Bif_lookupleContext;
  class Bif_lookupgtContext;
  class Bif_lookupgeContext;
  class Bif_minutesContext;
  class Bif_monthsContext;
  class Bif_msecondsContext;
  class Bif_nullindContext;
  class Bif_occurContext;
  class Bif_openContext;
  class Bif_paddrContext;
  class Bif_parmsContext;
  class Bif_parmnumContext;
  class Bif_reallocContext;
  class Bif_remContext;
  class Bif_replaceContext;
  class Bif_scanContext;
  class Bif_scanrplContext;
  class Bif_secondsContext;
  class Bif_shtdnContext;
  class Bif_sizeContext;
  class Bif_sqrtContext;
  class Bif_statusContext;
  class Bif_strContext;
  class Bif_subarrContext;
  class Bif_subdtContext;
  class Bif_substContext;
  class Bif_thisContext;
  class Bif_timeContext;
  class Bif_timestampContext;
  class Bif_tlookupContext;
  class Bif_tlookupltContext;
  class Bif_tlookupleContext;
  class Bif_tlookupgtContext;
  class Bif_tlookupgeContext;
  class Bif_trimContext;
  class Bif_trimlContext;
  class Bif_trimrContext;
  class Bif_ucs2Context;
  class Bif_unsContext;
  class Bif_unshContext;
  class Bif_xfootContext;
  class Bif_xlateContext;
  class Bif_xmlContext;
  class Bif_yearsContext;
  class Bif_codeContext;
  class FreeContext;
  class C_freeContext;
  class ControlContext;
  class Exec_sqlContext;
  class BaseExpressionContext;
  class IndicatorContext;
  class AssignmentExpressionContext;
  class AssignOperatorExpressionContext;
  class EvalExpressionContext;
  class SimpleExpressionContext;
  class UnaryExpressionContext;
  class ExpressionContext;
  class PexpressionContext;
  class Indicator_exprContext;
  class FunctionContext;
  class ComparisonOperatorContext;
  class AssignmentOperatorContext;
  class AssignmentOperatorIncludingEqualContext;
  class ArgsContext;
  class LiteralContext;
  class IdentifierContext;
  class AllContext;
  class FunctionNameContext;
  class Multipart_identifierContext;
  class Multipart_identifier_elementContext;
  class Indexed_identifierContext;
  class OpCodeContext;
  class NumberContext;
  class Free_identifierContext;
  class ContinuedIdentifierContext;
  class IdOrKeywordContext;
  class ArgumentContext;
  class SymbolicConstantsContext;
  class TargetContext; 

  class  RContext : public antlr4::ParserRuleContext {
  public:
    RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Dcl_prContext *> dcl_pr();
    Dcl_prContext* dcl_pr(size_t i);
    std::vector<Dcl_piContext *> dcl_pi();
    Dcl_piContext* dcl_pi(size_t i);
    std::vector<Ctl_optContext *> ctl_opt();
    Ctl_optContext* ctl_opt(size_t i);
    std::vector<SubroutineContext *> subroutine();
    SubroutineContext* subroutine(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<ProcedureContext *> procedure();
    ProcedureContext* procedure(size_t i);
    EndSourceBlockContext *endSourceBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RContext* r();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DspecContext *dspec();
    Dcl_dsContext *dcl_ds();
    Dcl_cContext *dcl_c();
    Dspec_fixedContext *dspec_fixed();
    Ospec_fixedContext *ospec_fixed();
    FspecContext *fspec();
    Fspec_fixedContext *fspec_fixed();
    BlockContext *block();
    Cspec_fixedContext *cspec_fixed();
    Blank_specContext *blank_spec();
    Cspec_fixed_sqlContext *cspec_fixed_sql();
    Ispec_fixedContext *ispec_fixed();
    Hspec_fixedContext *hspec_fixed();
    Star_commentsContext *star_comments();
    Free_linecommentsContext *free_linecomments();
    Blank_lineContext *blank_line();
    DirectiveContext *directive();
    FreeContext *free();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  EndSourceBlockContext : public antlr4::ParserRuleContext {
  public:
    EndSourceBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EndSourceContext *> endSource();
    EndSourceContext* endSource(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndSourceBlockContext* endSourceBlock();

  class  EndSourceContext : public antlr4::ParserRuleContext {
  public:
    EndSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EndSourceHeadContext *endSourceHead();
    std::vector<EndSourceLineContext *> endSourceLine();
    EndSourceLineContext* endSourceLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndSourceContext* endSource();

  class  EndSourceHeadContext : public antlr4::ParserRuleContext {
  public:
    EndSourceHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END_SOURCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndSourceHeadContext* endSourceHead();

  class  EndSourceLineContext : public antlr4::ParserRuleContext {
  public:
    EndSourceLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EndSourceLineTextContext *endSourceLineText();
    antlr4::tree::TerminalNode *EOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndSourceLineContext* endSourceLine();

  class  EndSourceLineTextContext : public antlr4::ParserRuleContext {
  public:
    EndSourceLineTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOS_Text();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndSourceLineTextContext* endSourceLineText();

  class  Star_commentsContext : public antlr4::ParserRuleContext {
  public:
    Star_commentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT_SPEC_FIXED();
    CommentsContext *comments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Star_commentsContext* star_comments();

  class  Free_commentsContext : public antlr4::ParserRuleContext {
  public:
    Free_commentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENTS();
    CommentsContext *comments();
    antlr4::tree::TerminalNode *COMMENTS_EOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Free_commentsContext* free_comments();

  class  Free_linecommentsContext : public antlr4::ParserRuleContext {
  public:
    Free_linecommentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENTS();
    CommentsContext *comments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Free_linecommentsContext* free_linecomments();

  class  CommentsContext : public antlr4::ParserRuleContext {
  public:
    CommentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENTS_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentsContext* comments();

  class  DspecContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::IdentifierContext *name = nullptr;;
    DspecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_Standalone();
    antlr4::tree::TerminalNode *FREE_SEMI();
    IdentifierContext *identifier();
    DatatypeContext *datatype();
    Free_linecommentsContext *free_linecomments();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);
    DspecConstantContext *dspecConstant();
    antlr4::tree::TerminalNode *DS_FIXED();
    Ds_nameContext *ds_name();
    antlr4::tree::TerminalNode *EXTERNAL_DESCRIPTION();
    antlr4::tree::TerminalNode *DATA_STRUCTURE_TYPE();
    antlr4::tree::TerminalNode *DEF_TYPE_S();
    antlr4::tree::TerminalNode *FROM_POSITION();
    antlr4::tree::TerminalNode *TO_POSITION();
    antlr4::tree::TerminalNode *DATA_TYPE();
    antlr4::tree::TerminalNode *DECIMAL_POSITIONS();
    antlr4::tree::TerminalNode *RESERVED();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DspecContext* dspec();

  class  DspecConstantContext : public antlr4::ParserRuleContext {
  public:
    DspecConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_FIXED();
    Ds_nameContext *ds_name();
    antlr4::tree::TerminalNode *EXTERNAL_DESCRIPTION();
    antlr4::tree::TerminalNode *DATA_STRUCTURE_TYPE();
    antlr4::tree::TerminalNode *DEF_TYPE_C();
    antlr4::tree::TerminalNode *FROM_POSITION();
    antlr4::tree::TerminalNode *TO_POSITION();
    antlr4::tree::TerminalNode *DATA_TYPE();
    antlr4::tree::TerminalNode *DECIMAL_POSITIONS();
    antlr4::tree::TerminalNode *RESERVED();
    NumberContext *number();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DspecConstantContext* dspecConstant();

  class  DatatypeContext : public antlr4::ParserRuleContext {
  public:
    DatatypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DatatypeNameContext *datatypeName();
    ArgsContext *args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatatypeContext* datatype();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Keyword_aliasContext *keyword_alias();
    Keyword_alignContext *keyword_align();
    Keyword_altContext *keyword_alt();
    Keyword_altseqContext *keyword_altseq();
    Keyword_ascendContext *keyword_ascend();
    Keyword_basedContext *keyword_based();
    Keyword_ccsidContext *keyword_ccsid();
    Keyword_classContext *keyword_class();
    Keyword_constContext *keyword_const();
    Keyword_ctdataContext *keyword_ctdata();
    Keyword_datfmtContext *keyword_datfmt();
    Keyword_descendContext *keyword_descend();
    Keyword_dimContext *keyword_dim();
    Keyword_dtaaraContext *keyword_dtaara();
    Keyword_exportContext *keyword_export();
    Keyword_extContext *keyword_ext();
    Keyword_extfldContext *keyword_extfld();
    Keyword_extfmtContext *keyword_extfmt();
    Keyword_extnameContext *keyword_extname();
    Keyword_extpgmContext *keyword_extpgm();
    Keyword_extprocContext *keyword_extproc();
    Keyword_fromfileContext *keyword_fromfile();
    Keyword_importContext *keyword_import();
    Keyword_inzContext *keyword_inz();
    Keyword_lenContext *keyword_len();
    Keyword_likeContext *keyword_like();
    Keyword_likedsContext *keyword_likeds();
    Keyword_likefileContext *keyword_likefile();
    Keyword_likerecContext *keyword_likerec();
    Keyword_nooptContext *keyword_noopt();
    Keyword_occursContext *keyword_occurs();
    Keyword_opdescContext *keyword_opdesc();
    Keyword_optionsContext *keyword_options();
    Keyword_overlayContext *keyword_overlay();
    Keyword_packevenContext *keyword_packeven();
    Keyword_perrcdContext *keyword_perrcd();
    Keyword_prefixContext *keyword_prefix();
    Keyword_posContext *keyword_pos();
    Keyword_procptrContext *keyword_procptr();
    Keyword_qualifiedContext *keyword_qualified();
    Keyword_rtnparmContext *keyword_rtnparm();
    Keyword_staticContext *keyword_static();
    Keyword_sqltypeContext *keyword_sqltype();
    Keyword_templateContext *keyword_template();
    Keyword_timfmtContext *keyword_timfmt();
    Keyword_tofileContext *keyword_tofile();
    Keyword_valueContext *keyword_value();
    Keyword_varyingContext *keyword_varying();
    Keyword_psdsContext *keyword_psds();
    Dspec_bifContext *dspec_bif();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  Dspec_bifContext : public antlr4::ParserRuleContext {
  public:
    Dspec_bifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bif_elemContext *bif_elem();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dspec_bifContext* dspec_bif();

  class  Keyword_aliasContext : public antlr4::ParserRuleContext {
  public:
    Keyword_aliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_ALIAS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_aliasContext* keyword_alias();

  class  Keyword_alignContext : public antlr4::ParserRuleContext {
  public:
    Keyword_alignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_ALIGN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_alignContext* keyword_align();

  class  Keyword_altContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *array_name = nullptr;;
    Keyword_altContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_ALT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_altContext* keyword_alt();

  class  Keyword_altseqContext : public antlr4::ParserRuleContext {
  public:
    Keyword_altseqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_ALTSEQ();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *SPLAT_NONE();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_altseqContext* keyword_altseq();

  class  Keyword_ascendContext : public antlr4::ParserRuleContext {
  public:
    Keyword_ascendContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_ASCEND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_ascendContext* keyword_ascend();

  class  Keyword_basedContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *basing_pointer_name = nullptr;;
    Keyword_basedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_BASED();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_basedContext* keyword_based();

  class  Keyword_ccsidContext : public antlr4::ParserRuleContext {
  public:
    Keyword_ccsidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_CCSID();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    NumberContext *number();
    antlr4::tree::TerminalNode *SPLAT_DFT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_ccsidContext* keyword_ccsid();

  class  Keyword_classContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *class_name = nullptr;;
    Keyword_classContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_CLASS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *SPLAT_JAVA();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_classContext* keyword_class();

  class  Keyword_constContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *constant = nullptr;;
    Keyword_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_CONST();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_constContext* keyword_const();

  class  Keyword_ctdataContext : public antlr4::ParserRuleContext {
  public:
    Keyword_ctdataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_CTDATA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_ctdataContext* keyword_ctdata();

  class  Keyword_datfmtContext : public antlr4::ParserRuleContext {
  public:
    Keyword_datfmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_DATFMT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();
    SymbolicConstantsContext *symbolicConstants();
    DateSeparatorContext *dateSeparator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_datfmtContext* keyword_datfmt();

  class  DateSeparatorContext : public antlr4::ParserRuleContext {
  public:
    DateSeparatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *FREE_DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DateSeparatorContext* dateSeparator();

  class  Keyword_descendContext : public antlr4::ParserRuleContext {
  public:
    Keyword_descendContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_DESCEND();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_descendContext* keyword_descend();

  class  Keyword_dimContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *numeric_constant = nullptr;;
    Keyword_dimContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_DIM();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_dimContext* keyword_dim();

  class  Keyword_dtaaraContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::LiteralContext *name = nullptr;;
    RpgParser::SimpleExpressionContext *nameVariable = nullptr;;
    Keyword_dtaaraContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_DTAARA();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *SPLAT_VAR();
    antlr4::tree::TerminalNode *COLON();
    LiteralContext *literal();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_dtaaraContext* keyword_dtaara();

  class  Keyword_exportContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *external_name = nullptr;;
    Keyword_exportContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXPORT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_exportContext* keyword_export();

  class  Keyword_extContext : public antlr4::ParserRuleContext {
  public:
    Keyword_extContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_extContext* keyword_ext();

  class  Keyword_extfldContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *field_name = nullptr;;
    Keyword_extfldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXTFLD();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_extfldContext* keyword_extfld();

  class  Keyword_extfmtContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *code = nullptr;;
    Keyword_extfmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXTFMT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_extfmtContext* keyword_extfmt();

  class  Keyword_extnameContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *file_name = nullptr;;
    RpgParser::SimpleExpressionContext *format_name = nullptr;;
    Keyword_extnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXTNAME();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *SPLAT_ALL();
    antlr4::tree::TerminalNode *SPLAT_INPUT();
    antlr4::tree::TerminalNode *SPLAT_OUTPUT();
    antlr4::tree::TerminalNode *SPLAT_KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_extnameContext* keyword_extname();

  class  Keyword_extpgmContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *name = nullptr;;
    Keyword_extpgmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXTPGM();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_extpgmContext* keyword_extpgm();

  class  Keyword_extprocContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *class_name = nullptr;;
    RpgParser::SimpleExpressionContext *name = nullptr;;
    Keyword_extprocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXTPROC();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    antlr4::tree::TerminalNode *SPLAT_JAVA();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_extprocContext* keyword_extproc();

  class  Keyword_fromfileContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *file_name = nullptr;;
    Keyword_fromfileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_FROMFILE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_fromfileContext* keyword_fromfile();

  class  Keyword_importContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *external_name = nullptr;;
    Keyword_importContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_IMPORT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_importContext* keyword_import();

  class  Keyword_inzContext : public antlr4::ParserRuleContext {
  public:
    Keyword_inzContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_INZ();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_inzContext* keyword_inz();

  class  Keyword_lenContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *length = nullptr;;
    Keyword_lenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_LEN();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_lenContext* keyword_len();

  class  Keyword_likeContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *name = nullptr;;
    Keyword_likeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_LIKE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *COLON();
    Like_lengthAdjustmentContext *like_lengthAdjustment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_likeContext* keyword_like();

  class  Keyword_likedsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *data_structure_name = nullptr;;
    Keyword_likedsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_LIKEDS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_likedsContext* keyword_likeds();

  class  Keyword_likefileContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *file_name = nullptr;;
    Keyword_likefileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_LIKEFILE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_likefileContext* keyword_likefile();

  class  Keyword_likerecContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *intrecname = nullptr;;
    Keyword_likerecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_LIKEREC();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SPLAT_ALL();
    antlr4::tree::TerminalNode *SPLAT_INPUT();
    antlr4::tree::TerminalNode *SPLAT_OUTPUT();
    antlr4::tree::TerminalNode *SPLAT_KEY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_likerecContext* keyword_likerec();

  class  Keyword_nooptContext : public antlr4::ParserRuleContext {
  public:
    Keyword_nooptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_NOOPT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_nooptContext* keyword_noopt();

  class  Keyword_occursContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::NumberContext *numeric_constant = nullptr;;
    Keyword_occursContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_OCCURS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    FunctionContext *function();
    IdentifierContext *identifier();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_occursContext* keyword_occurs();

  class  Keyword_opdescContext : public antlr4::ParserRuleContext {
  public:
    Keyword_opdescContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_OPDESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_opdescContext* keyword_opdesc();

  class  Keyword_optionsContext : public antlr4::ParserRuleContext {
  public:
    Keyword_optionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_OPTIONS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_optionsContext* keyword_options();

  class  Keyword_overlayContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *name = nullptr;;
    RpgParser::SimpleExpressionContext *pos = nullptr;;
    Keyword_overlayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_OVERLAY();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SPLAT_NEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_overlayContext* keyword_overlay();

  class  Keyword_packevenContext : public antlr4::ParserRuleContext {
  public:
    Keyword_packevenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PACKEVEN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_packevenContext* keyword_packeven();

  class  Keyword_perrcdContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *numeric_constant = nullptr;;
    Keyword_perrcdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PERRCD();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_perrcdContext* keyword_perrcd();

  class  Keyword_prefixContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *prefix = nullptr;;
    RpgParser::SimpleExpressionContext *nbr_of_char_replaced = nullptr;;
    Keyword_prefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PREFIX();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_prefixContext* keyword_prefix();

  class  Keyword_posContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *numeric_constant = nullptr;;
    Keyword_posContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_POS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_posContext* keyword_pos();

  class  Keyword_procptrContext : public antlr4::ParserRuleContext {
  public:
    Keyword_procptrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PROCPTR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_procptrContext* keyword_procptr();

  class  Keyword_qualifiedContext : public antlr4::ParserRuleContext {
  public:
    Keyword_qualifiedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_QUALIFIED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_qualifiedContext* keyword_qualified();

  class  Keyword_rtnparmContext : public antlr4::ParserRuleContext {
  public:
    Keyword_rtnparmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_RTNPARM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_rtnparmContext* keyword_rtnparm();

  class  Keyword_staticContext : public antlr4::ParserRuleContext {
  public:
    Keyword_staticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_STATIC();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *SPLAT_ALLTHREAD();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_staticContext* keyword_static();

  class  Keyword_sqltypeContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *id = nullptr;;
    Keyword_sqltypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_SQLTYPE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *COLON();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_sqltypeContext* keyword_sqltype();

  class  Keyword_templateContext : public antlr4::ParserRuleContext {
  public:
    Keyword_templateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_TEMPLATE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_templateContext* keyword_template();

  class  Keyword_timfmtContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *format = nullptr;;
    Keyword_timfmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_TIMFMT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_timfmtContext* keyword_timfmt();

  class  Keyword_tofileContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *file_name = nullptr;;
    RpgParser::SimpleExpressionContext *separator = nullptr;;
    Keyword_tofileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_TOFILE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_tofileContext* keyword_tofile();

  class  Keyword_valueContext : public antlr4::ParserRuleContext {
  public:
    Keyword_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_VALUE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_valueContext* keyword_value();

  class  Keyword_varyingContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *size = nullptr;;
    Keyword_varyingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_VARYING();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_varyingContext* keyword_varying();

  class  Keyword_psdsContext : public antlr4::ParserRuleContext {
  public:
    Keyword_psdsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PSDS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_psdsContext* keyword_psds();

  class  Keyword_blockContext : public antlr4::ParserRuleContext {
  public:
    Keyword_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_BLOCK();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SymbolicConstantsContext *symbolicConstants();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_blockContext* keyword_block();

  class  Keyword_commitContext : public antlr4::ParserRuleContext {
  public:
    Keyword_commitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_COMMIT();
    antlr4::tree::TerminalNode *OP_COMMIT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_commitContext* keyword_commit();

  class  Keyword_devidContext : public antlr4::ParserRuleContext {
  public:
    Keyword_devidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_DEVID();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_devidContext* keyword_devid();

  class  Keyword_extdescContext : public antlr4::ParserRuleContext {
  public:
    Keyword_extdescContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXTDESC();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_extdescContext* keyword_extdesc();

  class  Keyword_extfileContext : public antlr4::ParserRuleContext {
  public:
    Keyword_extfileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXTFILE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();
    SymbolicConstantsContext *symbolicConstants();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_extfileContext* keyword_extfile();

  class  Keyword_extindContext : public antlr4::ParserRuleContext {
  public:
    Keyword_extindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXTIND();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_extindContext* keyword_extind();

  class  Keyword_extmbrContext : public antlr4::ParserRuleContext {
  public:
    Keyword_extmbrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_EXTMBR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_extmbrContext* keyword_extmbr();

  class  Keyword_formlenContext : public antlr4::ParserRuleContext {
  public:
    Keyword_formlenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_FORMLEN();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    NumberContext *number();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_formlenContext* keyword_formlen();

  class  Keyword_formoflContext : public antlr4::ParserRuleContext {
  public:
    Keyword_formoflContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_FORMOFL();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    NumberContext *number();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_formoflContext* keyword_formofl();

  class  Keyword_ignoreContext : public antlr4::ParserRuleContext {
  public:
    Keyword_ignoreContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_IGNORE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_ignoreContext* keyword_ignore();

  class  Keyword_includeContext : public antlr4::ParserRuleContext {
  public:
    Keyword_includeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_INCLUDE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_includeContext* keyword_include();

  class  Keyword_inddsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *data_structure_name = nullptr;;
    Keyword_inddsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_INDDS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_inddsContext* keyword_indds();

  class  Keyword_infdsContext : public antlr4::ParserRuleContext {
  public:
    Keyword_infdsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_INFDS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_infdsContext* keyword_infds();

  class  Keyword_infsrContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *subr_name = nullptr;;
    Keyword_infsrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_INFSR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_infsrContext* keyword_infsr();

  class  Keyword_keylocContext : public antlr4::ParserRuleContext {
  public:
    Keyword_keylocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_KEYLOC();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    NumberContext *number();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_keylocContext* keyword_keyloc();

  class  Keyword_maxdevContext : public antlr4::ParserRuleContext {
  public:
    Keyword_maxdevContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_MAXDEV();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SymbolicConstantsContext *symbolicConstants();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_maxdevContext* keyword_maxdev();

  class  Keyword_oflindContext : public antlr4::ParserRuleContext {
  public:
    Keyword_oflindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_OFLIND();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_oflindContext* keyword_oflind();

  class  Keyword_passContext : public antlr4::ParserRuleContext {
  public:
    Keyword_passContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PASS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SymbolicConstantsContext *symbolicConstants();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_passContext* keyword_pass();

  class  Keyword_pgmnameContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *program_name = nullptr;;
    Keyword_pgmnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PGMNAME();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_pgmnameContext* keyword_pgmname();

  class  Keyword_plistContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *plist_name = nullptr;;
    Keyword_plistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PLIST();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_plistContext* keyword_plist();

  class  Keyword_prtctlContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *data_struct = nullptr;;
    Keyword_prtctlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PRTCTL();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *COLON();
    SymbolicConstantsContext *symbolicConstants();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_prtctlContext* keyword_prtctl();

  class  Keyword_rafdataContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *file_name = nullptr;;
    Keyword_rafdataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_RAFDATA();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_rafdataContext* keyword_rafdata();

  class  Keyword_recnoContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *field_name = nullptr;;
    Keyword_recnoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_RECNO();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    SimpleExpressionContext *simpleExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_recnoContext* keyword_recno();

  class  Keyword_renameContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *ext_format = nullptr;;
    RpgParser::SimpleExpressionContext *int_format = nullptr;;
    Keyword_renameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_RENAME();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_renameContext* keyword_rename();

  class  Keyword_savedsContext : public antlr4::ParserRuleContext {
  public:
    Keyword_savedsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_SAVEDS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_savedsContext* keyword_saveds();

  class  Keyword_saveindContext : public antlr4::ParserRuleContext {
  public:
    Keyword_saveindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_SAVEIND();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    NumberContext *number();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_saveindContext* keyword_saveind();

  class  Keyword_sfileContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SimpleExpressionContext *recformat = nullptr;;
    RpgParser::SimpleExpressionContext *rrnfield = nullptr;;
    Keyword_sfileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_SFILE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<SimpleExpressionContext *> simpleExpression();
    SimpleExpressionContext* simpleExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_sfileContext* keyword_sfile();

  class  Keyword_slnContext : public antlr4::ParserRuleContext {
  public:
    Keyword_slnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_SLN();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    NumberContext *number();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_slnContext* keyword_sln();

  class  Keyword_usropnContext : public antlr4::ParserRuleContext {
  public:
    Keyword_usropnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_USROPN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_usropnContext* keyword_usropn();

  class  Keyword_diskContext : public antlr4::ParserRuleContext {
  public:
    Keyword_diskContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_DISK();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *SPLAT_EXT();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_diskContext* keyword_disk();

  class  Keyword_workstnContext : public antlr4::ParserRuleContext {
  public:
    Keyword_workstnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_WORKSTN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_workstnContext* keyword_workstn();

  class  Keyword_printerContext : public antlr4::ParserRuleContext {
  public:
    Keyword_printerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_PRINTER();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    SymbolicConstantsContext *symbolicConstants();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_printerContext* keyword_printer();

  class  Keyword_specialContext : public antlr4::ParserRuleContext {
  public:
    Keyword_specialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_SPECIAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_specialContext* keyword_special();

  class  Keyword_keyedContext : public antlr4::ParserRuleContext {
  public:
    Keyword_keyedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_KEYED();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_keyedContext* keyword_keyed();

  class  Keyword_usageContext : public antlr4::ParserRuleContext {
  public:
    Keyword_usageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *KEYWORD_USAGE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<SymbolicConstantsContext *> symbolicConstants();
    SymbolicConstantsContext* symbolicConstants(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Keyword_usageContext* keyword_usage();

  class  Like_lengthAdjustmentContext : public antlr4::ParserRuleContext {
  public:
    Like_lengthAdjustmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignContext *sign();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Like_lengthAdjustmentContext* like_lengthAdjustment();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  Dcl_dsContext : public antlr4::ParserRuleContext {
  public:
    Dcl_dsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_DataStructureStart();
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> FREE_SEMI();
    antlr4::tree::TerminalNode* FREE_SEMI(size_t i);
    Keyword_likerecContext *keyword_likerec();
    Keyword_likedsContext *keyword_likeds();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);
    End_dcl_dsContext *end_dcl_ds();
    std::vector<Star_commentsContext *> star_comments();
    Star_commentsContext* star_comments(size_t i);
    std::vector<DirectiveContext *> directive();
    DirectiveContext* directive(size_t i);
    std::vector<Dcl_ds_fieldContext *> dcl_ds_field();
    Dcl_ds_fieldContext* dcl_ds_field(size_t i);
    antlr4::tree::TerminalNode *DS_FIXED();
    Ds_nameContext *ds_name();
    antlr4::tree::TerminalNode *EXTERNAL_DESCRIPTION();
    antlr4::tree::TerminalNode *DATA_STRUCTURE_TYPE();
    antlr4::tree::TerminalNode *DEF_TYPE_DS();
    antlr4::tree::TerminalNode *FROM_POSITION();
    antlr4::tree::TerminalNode *TO_POSITION();
    antlr4::tree::TerminalNode *DATA_TYPE();
    antlr4::tree::TerminalNode *DECIMAL_POSITIONS();
    antlr4::tree::TerminalNode *RESERVED();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    std::vector<Parm_fixedContext *> parm_fixed();
    Parm_fixedContext* parm_fixed(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dcl_dsContext* dcl_ds();

  class  Dcl_ds_fieldContext : public antlr4::ParserRuleContext {
  public:
    Dcl_ds_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *FREE_SEMI();
    antlr4::tree::TerminalNode *DS_SubField();
    DatatypeContext *datatype();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dcl_ds_fieldContext* dcl_ds_field();

  class  End_dcl_dsContext : public antlr4::ParserRuleContext {
  public:
    End_dcl_dsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_DataStructureEnd();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_dcl_dsContext* end_dcl_ds();

  class  Dcl_prContext : public antlr4::ParserRuleContext {
  public:
    Dcl_prContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_PrototypeStart();
    IdentifierContext *identifier();
    End_dcl_prContext *end_dcl_pr();
    std::vector<antlr4::tree::TerminalNode *> FREE_SEMI();
    antlr4::tree::TerminalNode* FREE_SEMI(size_t i);
    DatatypeContext *datatype();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);
    std::vector<Dcl_pr_fieldContext *> dcl_pr_field();
    Dcl_pr_fieldContext* dcl_pr_field(size_t i);
    Dcl_piContext *dcl_pi();
    PrBeginContext *prBegin();
    std::vector<Parm_fixedContext *> parm_fixed();
    Parm_fixedContext* parm_fixed(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dcl_prContext* dcl_pr();

  class  Dcl_pr_fieldContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::Keyword_likeContext *like = nullptr;;
    Dcl_pr_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FREE_SEMI();
    antlr4::tree::TerminalNode *DS_Parm();
    DatatypeContext *datatype();
    Keyword_likeContext *keyword_like();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dcl_pr_fieldContext* dcl_pr_field();

  class  End_dcl_prContext : public antlr4::ParserRuleContext {
  public:
    End_dcl_prContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_PrototypeEnd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_dcl_prContext* end_dcl_pr();

  class  Dcl_piContext : public antlr4::ParserRuleContext {
  public:
    Dcl_piContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_ProcedureInterfaceStart();
    IdentifierContext *identifier();
    End_dcl_piContext *end_dcl_pi();
    std::vector<antlr4::tree::TerminalNode *> FREE_SEMI();
    antlr4::tree::TerminalNode* FREE_SEMI(size_t i);
    DatatypeContext *datatype();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);
    std::vector<Dcl_pi_fieldContext *> dcl_pi_field();
    Dcl_pi_fieldContext* dcl_pi_field(size_t i);
    PiBeginContext *piBegin();
    std::vector<Pi_parm_fixedContext *> pi_parm_fixed();
    Pi_parm_fixedContext* pi_parm_fixed(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dcl_piContext* dcl_pi();

  class  Dcl_pi_fieldContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::Keyword_likeContext *like = nullptr;;
    Dcl_pi_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FREE_SEMI();
    DatatypeContext *datatype();
    antlr4::tree::TerminalNode *DS_Parm();
    Keyword_likeContext *keyword_like();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dcl_pi_fieldContext* dcl_pi_field();

  class  End_dcl_piContext : public antlr4::ParserRuleContext {
  public:
    End_dcl_piContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_ProcedureInterfaceEnd();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_dcl_piContext* end_dcl_pi();

  class  Dcl_cContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::IdentifierContext *name = nullptr;;
    Dcl_cContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_Constant();
    antlr4::tree::TerminalNode *FREE_SEMI();
    IdentifierContext *identifier();
    Keyword_constContext *keyword_const();
    LiteralContext *literal();
    antlr4::tree::TerminalNode *SPLAT_ON();
    antlr4::tree::TerminalNode *SPLAT_OFF();
    antlr4::tree::TerminalNode *SPLAT_ZEROS();
    antlr4::tree::TerminalNode *SPLAT_BLANKS();
    antlr4::tree::TerminalNode *DS_FIXED();
    Ds_nameContext *ds_name();
    antlr4::tree::TerminalNode *EXTERNAL_DESCRIPTION();
    antlr4::tree::TerminalNode *DATA_STRUCTURE_TYPE();
    antlr4::tree::TerminalNode *DEF_TYPE_C();
    antlr4::tree::TerminalNode *FROM_POSITION();
    antlr4::tree::TerminalNode *TO_POSITION();
    antlr4::tree::TerminalNode *DATA_TYPE();
    antlr4::tree::TerminalNode *DECIMAL_POSITIONS();
    antlr4::tree::TerminalNode *RESERVED();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    Dspec_bifContext *dspec_bif();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dcl_cContext* dcl_c();

  class  Ctl_optContext : public antlr4::ParserRuleContext {
  public:
    Ctl_optContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *H_SPEC();
    antlr4::tree::TerminalNode *FREE_SEMI();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ctl_optContext* ctl_opt();

  class  DatatypeNameContext : public antlr4::ParserRuleContext {
  public:
    DatatypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *DATE_();
    antlr4::tree::TerminalNode *VARCHAR();
    antlr4::tree::TerminalNode *UCS2();
    antlr4::tree::TerminalNode *VARUCS2();
    antlr4::tree::TerminalNode *GRAPH();
    antlr4::tree::TerminalNode *VARGRAPH();
    antlr4::tree::TerminalNode *IND();
    antlr4::tree::TerminalNode *PACKED();
    antlr4::tree::TerminalNode *ZONED();
    antlr4::tree::TerminalNode *BINDEC();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *UNS();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *TIME();
    antlr4::tree::TerminalNode *TIMESTAMP();
    antlr4::tree::TerminalNode *POINTER();
    antlr4::tree::TerminalNode *OBJECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatatypeNameContext* datatypeName();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EnddoContext *enddo();
    CsDOUxxContext *csDOUxx();
    CsDOWxxContext *csDOWxx();
    BegindouContext *begindou();
    BegindowContext *begindow();
    BegindoContext *begindo();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    IfstatementContext *ifstatement();
    SelectstatementContext *selectstatement();
    ForstatementContext *forstatement();
    MonitorstatementContext *monitorstatement();
    CasestatementContext *casestatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  IfstatementContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::StatementContext *statementContext = nullptr;;
    std::vector<StatementContext *> thenBody;;
    IfstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BeginifContext *beginif();
    EndifContext *endif();
    std::vector<ElseIfClauseContext *> elseIfClause();
    ElseIfClauseContext* elseIfClause(size_t i);
    ElseClauseContext *elseClause();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfstatementContext* ifstatement();

  class  ElseIfClauseContext : public antlr4::ParserRuleContext {
  public:
    ElseIfClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElseifstmtContext *elseifstmt();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseIfClauseContext* elseIfClause();

  class  ElseClauseContext : public antlr4::ParserRuleContext {
  public:
    ElseClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ElsestmtContext *elsestmt();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseClauseContext* elseClause();

  class  CasestatementContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    CasestatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CasestatementendContext *casestatementend();
    std::vector<antlr4::tree::TerminalNode *> CS_FIXED();
    antlr4::tree::TerminalNode* CS_FIXED(size_t i);
    std::vector<Cs_controlLevelContext *> cs_controlLevel();
    Cs_controlLevelContext* cs_controlLevel(size_t i);
    std::vector<CsCASEQContext *> csCASEQ();
    CsCASEQContext* csCASEQ(size_t i);
    std::vector<CsCASNEContext *> csCASNE();
    CsCASNEContext* csCASNE(size_t i);
    std::vector<CsCASLEContext *> csCASLE();
    CsCASLEContext* csCASLE(size_t i);
    std::vector<CsCASLTContext *> csCASLT();
    CsCASLTContext* csCASLT(size_t i);
    std::vector<CsCASGEContext *> csCASGE();
    CsCASGEContext* csCASGE(size_t i);
    std::vector<CsCASGTContext *> csCASGT();
    CsCASGTContext* csCASGT(size_t i);
    std::vector<CsCASContext *> csCAS();
    CsCASContext* csCAS(size_t i);
    std::vector<OnOffIndicatorsFlagContext *> onOffIndicatorsFlag();
    OnOffIndicatorsFlagContext* onOffIndicatorsFlag(size_t i);
    std::vector<Cs_indicatorsContext *> cs_indicators();
    Cs_indicatorsContext* cs_indicators(size_t i);
    std::vector<FactorContext *> factor();
    FactorContext* factor(size_t i);
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CasestatementContext* casestatement();

  class  CasestatementendContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    CasestatementendContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsENDContext *csEND();
    CsENDCSContext *csENDCS();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CasestatementendContext* casestatementend();

  class  MonitorstatementContext : public antlr4::ParserRuleContext {
  public:
    MonitorstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BeginmonitorContext *beginmonitor();
    EndmonitorContext *endmonitor();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<OnErrorContext *> onError();
    OnErrorContext* onError(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MonitorstatementContext* monitorstatement();

  class  BeginmonitorContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    BeginmonitorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Op_monitorContext *op_monitor();
    antlr4::tree::TerminalNode *FREE_SEMI();
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    CsMONITORContext *csMONITOR();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginmonitorContext* beginmonitor();

  class  EndmonitorContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    EndmonitorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Op_endmonContext *op_endmon();
    antlr4::tree::TerminalNode *FREE_SEMI();
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    CsENDMONContext *csENDMON();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndmonitorContext* endmonitor();

  class  OnErrorContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    OnErrorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    CsON_ERRORContext *csON_ERROR();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    Op_on_errorContext *op_on_error();
    antlr4::tree::TerminalNode *FREE_SEMI();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnErrorContext* onError();

  class  SelectstatementContext : public antlr4::ParserRuleContext {
  public:
    SelectstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BeginselectContext *beginselect();
    EndselectContext *endselect();
    std::vector<WhenstatementContext *> whenstatement();
    WhenstatementContext* whenstatement(size_t i);
    OtherContext *other();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectstatementContext* selectstatement();

  class  OtherContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    OtherContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    CsOTHERContext *csOTHER();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_otherContext *op_other();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OtherContext* other();

  class  BeginselectContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    BeginselectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    CsSELECTContext *csSELECT();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_selectContext *op_select();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginselectContext* beginselect();

  class  WhenstatementContext : public antlr4::ParserRuleContext {
  public:
    WhenstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CsWHENxxContext *csWHENxx();
    WhenContext *when();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenstatementContext* whenstatement();

  class  WhenContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    WhenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    CsWHENContext *csWHEN();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_whenContext *op_when();
    antlr4::tree::TerminalNode *FREE_SEMI();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhenContext* when();

  class  CsWHENxxContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    RpgParser::CsANDxxContext *andConds = nullptr;;
    RpgParser::CsORxxContext *orConds = nullptr;;
    CsWHENxxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsWHENEQContext *csWHENEQ();
    CsWHENNEContext *csWHENNE();
    CsWHENLEContext *csWHENLE();
    CsWHENLTContext *csWHENLT();
    CsWHENGEContext *csWHENGE();
    CsWHENGTContext *csWHENGT();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    std::vector<CsANDxxContext *> csANDxx();
    CsANDxxContext* csANDxx(size_t i);
    std::vector<CsORxxContext *> csORxx();
    CsORxxContext* csORxx(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsWHENxxContext* csWHENxx();

  class  EndselectContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    EndselectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsENDContext *csEND();
    CsENDSLContext *csENDSL();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_endslContext *op_endsl();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndselectContext* endselect();

  class  BeginifContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    BeginifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CsIFxxContext *csIFxx();
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    antlr4::tree::TerminalNode *OP_IF();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();
    Op_ifContext *op_if();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginifContext* beginif();

  class  BegindouContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    BegindouContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    CsDOUContext *csDOU();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_douContext *op_dou();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BegindouContext* begindou();

  class  BegindowContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    BegindowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    CsDOWContext *csDOW();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_dowContext *op_dow();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BegindowContext* begindow();

  class  BegindoContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    BegindoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    CsDOContext *csDO();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_dowContext *op_dow();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BegindoContext* begindo();

  class  ElseifstmtContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    ElseifstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    antlr4::tree::TerminalNode *OP_ELSEIF();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();
    Op_elseifContext *op_elseif();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseifstmtContext* elseifstmt();

  class  ElsestmtContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    ElsestmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    antlr4::tree::TerminalNode *OP_ELSE();
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_elseContext *op_else();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElsestmtContext* elsestmt();

  class  CsIFxxContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    RpgParser::CsANDxxContext *andConds = nullptr;;
    RpgParser::CsORxxContext *orConds = nullptr;;
    CsIFxxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsIFEQContext *csIFEQ();
    CsIFNEContext *csIFNE();
    CsIFLEContext *csIFLE();
    CsIFLTContext *csIFLT();
    CsIFGEContext *csIFGE();
    CsIFGTContext *csIFGT();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    std::vector<CsANDxxContext *> csANDxx();
    CsANDxxContext* csANDxx(size_t i);
    std::vector<CsORxxContext *> csORxx();
    CsORxxContext* csORxx(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsIFxxContext* csIFxx();

  class  CsDOUxxContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    RpgParser::CsANDxxContext *andConds = nullptr;;
    RpgParser::CsORxxContext *orConds = nullptr;;
    CsDOUxxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsDOUEQContext *csDOUEQ();
    CsDOUNEContext *csDOUNE();
    CsDOULEContext *csDOULE();
    CsDOULTContext *csDOULT();
    CsDOUGEContext *csDOUGE();
    CsDOUGTContext *csDOUGT();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    std::vector<CsANDxxContext *> csANDxx();
    CsANDxxContext* csANDxx(size_t i);
    std::vector<CsORxxContext *> csORxx();
    CsORxxContext* csORxx(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOUxxContext* csDOUxx();

  class  CsDOWxxContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    RpgParser::CsANDxxContext *andConds = nullptr;;
    RpgParser::CsORxxContext *orConds = nullptr;;
    CsDOWxxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsDOWEQContext *csDOWEQ();
    CsDOWNEContext *csDOWNE();
    CsDOWLEContext *csDOWLE();
    CsDOWLTContext *csDOWLT();
    CsDOWGEContext *csDOWGE();
    CsDOWGTContext *csDOWGT();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    std::vector<CsANDxxContext *> csANDxx();
    CsANDxxContext* csANDxx(size_t i);
    std::vector<CsORxxContext *> csORxx();
    CsORxxContext* csORxx(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOWxxContext* csDOWxx();

  class  ComplexCondxxContext : public antlr4::ParserRuleContext {
  public:
    ComplexCondxxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CsANDxxContext *csANDxx();
    CsORxxContext *csORxx();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComplexCondxxContext* complexCondxx();

  class  CsANDxxContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    CsANDxxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsANDEQContext *csANDEQ();
    CsANDNEContext *csANDNE();
    CsANDLEContext *csANDLE();
    CsANDLTContext *csANDLT();
    CsANDGEContext *csANDGE();
    CsANDGTContext *csANDGT();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsANDxxContext* csANDxx();

  class  CsORxxContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    RpgParser::CsANDxxContext *andConds = nullptr;;
    CsORxxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsOREQContext *csOREQ();
    CsORNEContext *csORNE();
    CsORLEContext *csORLE();
    CsORLTContext *csORLT();
    CsORGEContext *csORGE();
    CsORGTContext *csORGT();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    std::vector<CsANDxxContext *> csANDxx();
    CsANDxxContext* csANDxx(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsORxxContext* csORxx();

  class  ForstatementContext : public antlr4::ParserRuleContext {
  public:
    ForstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BeginforContext *beginfor();
    EndforContext *endfor();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForstatementContext* forstatement();

  class  BeginforContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    BeginforContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    CsFORContext *csFOR();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_forContext *op_for();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginforContext* beginfor();

  class  EndifContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    EndifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsENDContext *csEND();
    CsENDIFContext *csENDIF();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_endifContext *op_endif();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndifContext* endif();

  class  EnddoContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    EnddoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsENDContext *csEND();
    CsENDDOContext *csENDDO();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_enddoContext *op_enddo();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnddoContext* enddo();

  class  EndforContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    EndforContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    CsENDContext *csEND();
    CsENDFORContext *csENDFOR();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);
    Op_endforContext *op_endfor();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndforContext* endfor();

  class  Dspec_fixedContext : public antlr4::ParserRuleContext {
  public:
    Dspec_fixedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_FIXED();
    Ds_nameContext *ds_name();
    antlr4::tree::TerminalNode *EXTERNAL_DESCRIPTION();
    antlr4::tree::TerminalNode *DATA_STRUCTURE_TYPE();
    antlr4::tree::TerminalNode *DEF_TYPE();
    antlr4::tree::TerminalNode *FROM_POSITION();
    antlr4::tree::TerminalNode *TO_POSITION();
    antlr4::tree::TerminalNode *DATA_TYPE();
    antlr4::tree::TerminalNode *DECIMAL_POSITIONS();
    antlr4::tree::TerminalNode *RESERVED();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dspec_fixedContext* dspec_fixed();

  class  Ds_nameContext : public antlr4::ParserRuleContext {
  public:
    Ds_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    std::vector<antlr4::tree::TerminalNode *> CONTINUATION_NAME();
    antlr4::tree::TerminalNode* CONTINUATION_NAME(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ds_nameContext* ds_name();

  class  Ospec_fixedContext : public antlr4::ParserRuleContext {
  public:
    Ospec_fixedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OS_FIXED();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    Os_fixed_pgmdesc_compoundContext *os_fixed_pgmdesc_compound();
    antlr4::tree::TerminalNode *OS_Comments();
    Os_fixed_pgmfieldContext *os_fixed_pgmfield();
    antlr4::tree::TerminalNode *OS_RecordName();
    antlr4::tree::TerminalNode *OS_Type();
    Os_fixed_pgmdesc1Context *os_fixed_pgmdesc1();
    Os_fixed_pgmdesc2Context *os_fixed_pgmdesc2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ospec_fixedContext* ospec_fixed();

  class  Os_fixed_pgmdesc1Context : public antlr4::ParserRuleContext {
  public:
    Os_fixed_pgmdesc1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OS_FetchOverflow();
    std::vector<OutputConditioningOnOffIndicatorContext *> outputConditioningOnOffIndicator();
    OutputConditioningOnOffIndicatorContext* outputConditioningOnOffIndicator(size_t i);
    antlr4::tree::TerminalNode *OS_ExceptName();
    std::vector<antlr4::tree::TerminalNode *> OS_Space3();
    antlr4::tree::TerminalNode* OS_Space3(size_t i);
    antlr4::tree::TerminalNode *OS_RemainingSpace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Os_fixed_pgmdesc1Context* os_fixed_pgmdesc1();

  class  OutputConditioningOnOffIndicatorContext : public antlr4::ParserRuleContext {
  public:
    OutputConditioningOnOffIndicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    OutputConditioningIndicatorContext *outputConditioningIndicator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OutputConditioningOnOffIndicatorContext* outputConditioningOnOffIndicator();

  class  OutputConditioningIndicatorContext : public antlr4::ParserRuleContext {
  public:
    OutputConditioningIndicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlankIndicator();
    antlr4::tree::TerminalNode *GeneralIndicator();
    antlr4::tree::TerminalNode *FunctionKeyIndicator();
    antlr4::tree::TerminalNode *ControlLevelIndicator();
    antlr4::tree::TerminalNode *HaltIndicator();
    antlr4::tree::TerminalNode *ExternalIndicator();
    antlr4::tree::TerminalNode *OverflowIndicator();
    antlr4::tree::TerminalNode *MatchingRecordIndicator();
    antlr4::tree::TerminalNode *LastRecordIndicator();
    antlr4::tree::TerminalNode *ReturnIndicator();
    antlr4::tree::TerminalNode *FirstPageIndicator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OutputConditioningIndicatorContext* outputConditioningIndicator();

  class  Os_fixed_pgmdesc_compoundContext : public antlr4::ParserRuleContext {
  public:
    Os_fixed_pgmdesc_compoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OS_AndOr();
    std::vector<OutputConditioningOnOffIndicatorContext *> outputConditioningOnOffIndicator();
    OutputConditioningOnOffIndicatorContext* outputConditioningOnOffIndicator(size_t i);
    antlr4::tree::TerminalNode *OS_ExceptName();
    std::vector<antlr4::tree::TerminalNode *> OS_Space3();
    antlr4::tree::TerminalNode* OS_Space3(size_t i);
    antlr4::tree::TerminalNode *OS_RemainingSpace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Os_fixed_pgmdesc_compoundContext* os_fixed_pgmdesc_compound();

  class  Os_fixed_pgmdesc2Context : public antlr4::ParserRuleContext {
  public:
    Os_fixed_pgmdesc2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OS_AddDelete();
    std::vector<OutputConditioningOnOffIndicatorContext *> outputConditioningOnOffIndicator();
    OutputConditioningOnOffIndicatorContext* outputConditioningOnOffIndicator(size_t i);
    antlr4::tree::TerminalNode *OS_ExceptName();
    antlr4::tree::TerminalNode *OS_RemainingSpace();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Os_fixed_pgmdesc2Context* os_fixed_pgmdesc2();

  class  Os_fixed_pgmfieldContext : public antlr4::ParserRuleContext {
  public:
    Os_fixed_pgmfieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OS_FieldReserved();
    std::vector<OutputConditioningOnOffIndicatorContext *> outputConditioningOnOffIndicator();
    OutputConditioningOnOffIndicatorContext* outputConditioningOnOffIndicator(size_t i);
    antlr4::tree::TerminalNode *OS_FieldName();
    antlr4::tree::TerminalNode *OS_EditNames();
    antlr4::tree::TerminalNode *OS_BlankAfter();
    antlr4::tree::TerminalNode *OS_EndPosition();
    antlr4::tree::TerminalNode *OS_DataFormat();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Os_fixed_pgmfieldContext* os_fixed_pgmfield();

  class  Ps_nameContext : public antlr4::ParserRuleContext {
  public:
    Ps_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PS_NAME();
    std::vector<antlr4::tree::TerminalNode *> PS_CONTINUATION_NAME();
    antlr4::tree::TerminalNode* PS_CONTINUATION_NAME(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ps_nameContext* ps_name();

  class  FspecContext : public antlr4::ParserRuleContext {
  public:
    FspecContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FS_FreeFile();
    FilenameContext *filename();
    antlr4::tree::TerminalNode *FREE_SEMI();
    std::vector<Fs_keywordContext *> fs_keyword();
    Fs_keywordContext* fs_keyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FspecContext* fspec();

  class  FilenameContext : public antlr4::ParserRuleContext {
  public:
    FilenameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilenameContext* filename();

  class  Fs_parmContext : public antlr4::ParserRuleContext {
  public:
    Fs_parmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    Fs_stringContext *fs_string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fs_parmContext* fs_parm();

  class  Fs_stringContext : public antlr4::ParserRuleContext {
  public:
    Fs_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteralEnd();
    antlr4::tree::TerminalNode *StringLiteralStart();
    antlr4::tree::TerminalNode *HexLiteralStart();
    antlr4::tree::TerminalNode *DateLiteralStart();
    std::vector<antlr4::tree::TerminalNode *> StringContent();
    antlr4::tree::TerminalNode* StringContent(size_t i);
    std::vector<antlr4::tree::TerminalNode *> StringEscapedQuote();
    antlr4::tree::TerminalNode* StringEscapedQuote(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fs_stringContext* fs_string();

  class  Fs_keywordContext : public antlr4::ParserRuleContext {
  public:
    Fs_keywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Keyword_aliasContext *keyword_alias();
    Keyword_blockContext *keyword_block();
    Keyword_commitContext *keyword_commit();
    Keyword_datfmtContext *keyword_datfmt();
    Keyword_devidContext *keyword_devid();
    Keyword_dimContext *keyword_dim();
    Keyword_dtaaraContext *keyword_dtaara();
    Keyword_extdescContext *keyword_extdesc();
    Keyword_extfileContext *keyword_extfile();
    Keyword_extindContext *keyword_extind();
    Keyword_extmbrContext *keyword_extmbr();
    Keyword_formlenContext *keyword_formlen();
    Keyword_formoflContext *keyword_formofl();
    Keyword_ignoreContext *keyword_ignore();
    Keyword_includeContext *keyword_include();
    Keyword_inddsContext *keyword_indds();
    Keyword_infdsContext *keyword_infds();
    Keyword_infsrContext *keyword_infsr();
    Keyword_keylocContext *keyword_keyloc();
    Keyword_likefileContext *keyword_likefile();
    Keyword_maxdevContext *keyword_maxdev();
    Keyword_oflindContext *keyword_oflind();
    Keyword_passContext *keyword_pass();
    Keyword_pgmnameContext *keyword_pgmname();
    Keyword_plistContext *keyword_plist();
    Keyword_prefixContext *keyword_prefix();
    Keyword_prtctlContext *keyword_prtctl();
    Keyword_qualifiedContext *keyword_qualified();
    Keyword_rafdataContext *keyword_rafdata();
    Keyword_recnoContext *keyword_recno();
    Keyword_renameContext *keyword_rename();
    Keyword_savedsContext *keyword_saveds();
    Keyword_saveindContext *keyword_saveind();
    Keyword_sfileContext *keyword_sfile();
    Keyword_slnContext *keyword_sln();
    Keyword_staticContext *keyword_static();
    Keyword_templateContext *keyword_template();
    Keyword_timfmtContext *keyword_timfmt();
    Keyword_tofileContext *keyword_tofile();
    Keyword_usropnContext *keyword_usropn();
    Keyword_valueContext *keyword_value();
    Keyword_varyingContext *keyword_varying();
    Keyword_diskContext *keyword_disk();
    Keyword_workstnContext *keyword_workstn();
    Keyword_printerContext *keyword_printer();
    Keyword_specialContext *keyword_special();
    Keyword_keyedContext *keyword_keyed();
    Keyword_usageContext *keyword_usage();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fs_keywordContext* fs_keyword();

  class  Fspec_fixedContext : public antlr4::ParserRuleContext {
  public:
    Fspec_fixedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FS_FIXED();
    antlr4::tree::TerminalNode *FS_RecordName();
    antlr4::tree::TerminalNode *FS_Type();
    antlr4::tree::TerminalNode *FS_Designation();
    antlr4::tree::TerminalNode *FS_EndOfFile();
    antlr4::tree::TerminalNode *FS_Addution();
    antlr4::tree::TerminalNode *FS_Sequence();
    antlr4::tree::TerminalNode *FS_Format();
    antlr4::tree::TerminalNode *FS_RecordLength();
    antlr4::tree::TerminalNode *FS_Limits();
    antlr4::tree::TerminalNode *FS_LengthOfKey();
    antlr4::tree::TerminalNode *FS_RecordAddressType();
    antlr4::tree::TerminalNode *FS_Organization();
    antlr4::tree::TerminalNode *FS_Device();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *FS_Reserved();
    std::vector<Fs_keywordContext *> fs_keyword();
    Fs_keywordContext* fs_keyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fspec_fixedContext* fspec_fixed();

  class  Cspec_fixedContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    Cspec_fixedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    Cspec_fixed_standardContext *cspec_fixed_standard();
    Cspec_fixed_x2Context *cspec_fixed_x2();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cspec_fixedContext* cspec_fixed();

  class  Cspec_continuedIndicatorsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    Cspec_continuedIndicatorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cs_controlLevelContext *cs_controlLevel();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *CS_FIXED();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cspec_continuedIndicatorsContext* cspec_continuedIndicators();

  class  Cspec_blankContext : public antlr4::ParserRuleContext {
  public:
    Cspec_blankContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    std::vector<antlr4::tree::TerminalNode *> BlankIndicator();
    antlr4::tree::TerminalNode* BlankIndicator(size_t i);
    antlr4::tree::TerminalNode *BlankFlag();
    std::vector<antlr4::tree::TerminalNode *> CS_BlankFactor();
    antlr4::tree::TerminalNode* CS_BlankFactor(size_t i);
    antlr4::tree::TerminalNode *CS_OperationAndExtender_Blank();
    antlr4::tree::TerminalNode *CS_FieldLength();
    antlr4::tree::TerminalNode *CS_DecimalPositions();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cspec_blankContext* cspec_blank();

  class  Blank_specContext : public antlr4::ParserRuleContext {
  public:
    Blank_specContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_blankContext *cspec_blank();
    antlr4::tree::TerminalNode *BLANK_SPEC();
    antlr4::tree::TerminalNode *DS_FIXED();
    antlr4::tree::TerminalNode *FS_FIXED();
    antlr4::tree::TerminalNode *IS_FIXED();
    antlr4::tree::TerminalNode *OS_FIXED();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Blank_specContext* blank_spec();

  class  PiBeginContext : public antlr4::ParserRuleContext {
  public:
    PiBeginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_FIXED();
    Ds_nameContext *ds_name();
    antlr4::tree::TerminalNode *EXTERNAL_DESCRIPTION();
    antlr4::tree::TerminalNode *DATA_STRUCTURE_TYPE();
    antlr4::tree::TerminalNode *DEF_TYPE_PI();
    antlr4::tree::TerminalNode *FROM_POSITION();
    antlr4::tree::TerminalNode *TO_POSITION();
    antlr4::tree::TerminalNode *DATA_TYPE();
    antlr4::tree::TerminalNode *DECIMAL_POSITIONS();
    antlr4::tree::TerminalNode *RESERVED();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PiBeginContext* piBegin();

  class  Parm_fixedContext : public antlr4::ParserRuleContext {
  public:
    Parm_fixedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_FIXED();
    Ds_nameContext *ds_name();
    antlr4::tree::TerminalNode *EXTERNAL_DESCRIPTION();
    antlr4::tree::TerminalNode *DATA_STRUCTURE_TYPE();
    antlr4::tree::TerminalNode *DEF_TYPE_BLANK();
    antlr4::tree::TerminalNode *FROM_POSITION();
    antlr4::tree::TerminalNode *TO_POSITION();
    antlr4::tree::TerminalNode *DATA_TYPE();
    antlr4::tree::TerminalNode *DECIMAL_POSITIONS();
    antlr4::tree::TerminalNode *RESERVED();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parm_fixedContext* parm_fixed();

  class  Pr_parm_fixedContext : public antlr4::ParserRuleContext {
  public:
    Pr_parm_fixedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_FIXED();
    antlr4::tree::TerminalNode *EXTERNAL_DESCRIPTION();
    antlr4::tree::TerminalNode *DATA_STRUCTURE_TYPE();
    antlr4::tree::TerminalNode *DEF_TYPE_BLANK();
    antlr4::tree::TerminalNode *FROM_POSITION();
    antlr4::tree::TerminalNode *TO_POSITION();
    antlr4::tree::TerminalNode *DATA_TYPE();
    antlr4::tree::TerminalNode *DECIMAL_POSITIONS();
    antlr4::tree::TerminalNode *RESERVED();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    Ds_nameContext *ds_name();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pr_parm_fixedContext* pr_parm_fixed();

  class  Pi_parm_fixedContext : public antlr4::ParserRuleContext {
  public:
    Pi_parm_fixedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parm_fixedContext *parm_fixed();
    PrBeginContext *prBegin();
    std::vector<Pr_parm_fixedContext *> pr_parm_fixed();
    Pr_parm_fixedContext* pr_parm_fixed(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Pi_parm_fixedContext* pi_parm_fixed();

  class  ProcedureContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SubprocedurestatementContext *statements = nullptr;;
    ProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BeginProcedureContext *beginProcedure();
    EndProcedureContext *endProcedure();
    Dcl_piContext *dcl_pi();
    std::vector<SubprocedurestatementContext *> subprocedurestatement();
    SubprocedurestatementContext* subprocedurestatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcedureContext* procedure();

  class  BeginProcedureContext : public antlr4::ParserRuleContext {
  public:
    BeginProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PsBeginContext *psBegin();
    FreeBeginProcedureContext *freeBeginProcedure();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BeginProcedureContext* beginProcedure();

  class  EndProcedureContext : public antlr4::ParserRuleContext {
  public:
    EndProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PsEndContext *psEnd();
    FreeEndProcedureContext *freeEndProcedure();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndProcedureContext* endProcedure();

  class  PsBeginContext : public antlr4::ParserRuleContext {
  public:
    PsBeginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PS_FIXED();
    Ps_nameContext *ps_name();
    antlr4::tree::TerminalNode *PS_BEGIN();
    antlr4::tree::TerminalNode *PS_KEYWORDS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PsBeginContext* psBegin();

  class  FreeBeginProcedureContext : public antlr4::ParserRuleContext {
  public:
    FreeBeginProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_ProcedureStart();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FREE_SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FreeBeginProcedureContext* freeBeginProcedure();

  class  PsEndContext : public antlr4::ParserRuleContext {
  public:
    PsEndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PS_FIXED();
    Ps_nameContext *ps_name();
    antlr4::tree::TerminalNode *PS_END();
    antlr4::tree::TerminalNode *PS_KEYWORDS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PsEndContext* psEnd();

  class  FreeEndProcedureContext : public antlr4::ParserRuleContext {
  public:
    FreeEndProcedureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_ProcedureEnd();
    antlr4::tree::TerminalNode *FREE_SEMI();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FreeEndProcedureContext* freeEndProcedure();

  class  PrBeginContext : public antlr4::ParserRuleContext {
  public:
    PrBeginContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS_FIXED();
    Ds_nameContext *ds_name();
    antlr4::tree::TerminalNode *EXTERNAL_DESCRIPTION();
    antlr4::tree::TerminalNode *DATA_STRUCTURE_TYPE();
    antlr4::tree::TerminalNode *DEF_TYPE_PR();
    antlr4::tree::TerminalNode *FROM_POSITION();
    antlr4::tree::TerminalNode *TO_POSITION();
    antlr4::tree::TerminalNode *DATA_TYPE();
    antlr4::tree::TerminalNode *DECIMAL_POSITIONS();
    antlr4::tree::TerminalNode *RESERVED();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrBeginContext* prBegin();

  class  SubroutineContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::BegsrContext *begin = nullptr;;
    RpgParser::EndsrContext *end = nullptr;;
    SubroutineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BegsrContext *begsr();
    EndsrContext *endsr();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubroutineContext* subroutine();

  class  SubprocedurestatementContext : public antlr4::ParserRuleContext {
  public:
    SubprocedurestatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    SubroutineContext *subroutine();
    Dcl_prContext *dcl_pr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubprocedurestatementContext* subprocedurestatement();

  class  BegsrContext : public antlr4::ParserRuleContext {
  public:
    BegsrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CsBEGSRContext *csBEGSR();
    FreeBEGSRContext *freeBEGSR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BegsrContext* begsr();

  class  EndsrContext : public antlr4::ParserRuleContext {
  public:
    EndsrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CsENDSRContext *csENDSR();
    FreeENDSRContext *freeENDSR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndsrContext* endsr();

  class  CsBEGSRContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    antlr4::Token *operation = nullptr;;
    CsBEGSRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    antlr4::tree::TerminalNode *OP_BEGSR();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsBEGSRContext* csBEGSR();

  class  FreeBEGSRContext : public antlr4::ParserRuleContext {
  public:
    FreeBEGSRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_BEGSR();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FreeBEGSRContext* freeBEGSR();

  class  CsENDSRContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::OnOffIndicatorsFlagContext *indicatorsOff = nullptr;;
    RpgParser::Cs_indicatorsContext *indicators = nullptr;;
    RpgParser::FactorContext *factor1 = nullptr;;
    antlr4::Token *operation = nullptr;;
    CsENDSRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    Cs_controlLevelContext *cs_controlLevel();
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    OnOffIndicatorsFlagContext *onOffIndicatorsFlag();
    Cs_indicatorsContext *cs_indicators();
    FactorContext *factor();
    antlr4::tree::TerminalNode *OP_ENDSR();
    std::vector<Cspec_continuedIndicatorsContext *> cspec_continuedIndicators();
    Cspec_continuedIndicatorsContext* cspec_continuedIndicators(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsENDSRContext* csENDSR();

  class  FreeENDSRContext : public antlr4::ParserRuleContext {
  public:
    FreeENDSRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ENDSR();
    antlr4::tree::TerminalNode *FREE_SEMI();
    IdentifierContext *identifier();
    LiteralContext *literal();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FreeENDSRContext* freeENDSR();

  class  OnOffIndicatorsFlagContext : public antlr4::ParserRuleContext {
  public:
    OnOffIndicatorsFlagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlankFlag();
    antlr4::tree::TerminalNode *NoFlag();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnOffIndicatorsFlagContext* onOffIndicatorsFlag();

  class  Cs_controlLevelContext : public antlr4::ParserRuleContext {
  public:
    Cs_controlLevelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlankIndicator();
    antlr4::tree::TerminalNode *ControlLevel0Indicator();
    antlr4::tree::TerminalNode *ControlLevelIndicator();
    antlr4::tree::TerminalNode *LastRecordIndicator();
    antlr4::tree::TerminalNode *SubroutineIndicator();
    antlr4::tree::TerminalNode *AndIndicator();
    antlr4::tree::TerminalNode *OrIndicator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cs_controlLevelContext* cs_controlLevel();

  class  Cs_indicatorsContext : public antlr4::ParserRuleContext {
  public:
    Cs_indicatorsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlankIndicator();
    antlr4::tree::TerminalNode *GeneralIndicator();
    antlr4::tree::TerminalNode *ControlLevelIndicator();
    antlr4::tree::TerminalNode *FunctionKeyIndicator();
    antlr4::tree::TerminalNode *LastRecordIndicator();
    antlr4::tree::TerminalNode *MatchingRecordIndicator();
    antlr4::tree::TerminalNode *HaltIndicator();
    antlr4::tree::TerminalNode *ReturnIndicator();
    antlr4::tree::TerminalNode *ExternalIndicator();
    antlr4::tree::TerminalNode *OverflowIndicator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cs_indicatorsContext* cs_indicators();

  class  ResultIndicatorContext : public antlr4::ParserRuleContext {
  public:
    ResultIndicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlankIndicator();
    antlr4::tree::TerminalNode *GeneralIndicator();
    antlr4::tree::TerminalNode *ControlLevelIndicator();
    antlr4::tree::TerminalNode *FunctionKeyIndicator();
    antlr4::tree::TerminalNode *LastRecordIndicator();
    antlr4::tree::TerminalNode *MatchingRecordIndicator();
    antlr4::tree::TerminalNode *HaltIndicator();
    antlr4::tree::TerminalNode *ExternalIndicator();
    antlr4::tree::TerminalNode *OverflowIndicator();
    antlr4::tree::TerminalNode *ReturnIndicator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResultIndicatorContext* resultIndicator();

  class  Cspec_fixed_sqlContext : public antlr4::ParserRuleContext {
  public:
    Cspec_fixed_sqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_ExecSQL();
    antlr4::tree::TerminalNode *CSQL_END();
    std::vector<antlr4::tree::TerminalNode *> CSQL_TEXT();
    antlr4::tree::TerminalNode* CSQL_TEXT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cspec_fixed_sqlContext* cspec_fixed_sql();

  class  Cspec_fixed_standardContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    Cspec_fixed_standardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CsACQContext *csACQ();
    CsADDContext *csADD();
    CsADDDURContext *csADDDUR();
    CsALLOCContext *csALLOC();
    CsBITOFFContext *csBITOFF();
    CsBITONContext *csBITON();
    CsCABxxContext *csCABxx();
    CsCABEQContext *csCABEQ();
    CsCABNEContext *csCABNE();
    CsCABLEContext *csCABLE();
    CsCABLTContext *csCABLT();
    CsCABGEContext *csCABGE();
    CsCABGTContext *csCABGT();
    CsCALLContext *csCALL();
    CsCALLBContext *csCALLB();
    CsCATContext *csCAT();
    CsCHAINContext *csCHAIN();
    CsCHECKContext *csCHECK();
    CsCHECKRContext *csCHECKR();
    CsCLEARContext *csCLEAR();
    CsCLOSEContext *csCLOSE();
    CsCOMMITContext *csCOMMIT();
    CsCOMPContext *csCOMP();
    CsDEALLOCContext *csDEALLOC();
    CsDEFINEContext *csDEFINE();
    CsDELETEContext *csDELETE();
    CsDIVContext *csDIV();
    CsDOContext *csDO();
    CsDSPLYContext *csDSPLY();
    CsDUMPContext *csDUMP();
    CsEVALContext *csEVAL();
    CsEVAL_CORRContext *csEVAL_CORR();
    CsEVALRContext *csEVALR();
    CsEXCEPTContext *csEXCEPT();
    CsEXFMTContext *csEXFMT();
    CsEXSRContext *csEXSR();
    CsEXTRCTContext *csEXTRCT();
    CsFEODContext *csFEOD();
    CsFORCEContext *csFORCE();
    CsGOTOContext *csGOTO();
    CsINContext *csIN();
    CsITERContext *csITER();
    CsKLISTContext *csKLIST();
    CsLEAVEContext *csLEAVE();
    CsLEAVESRContext *csLEAVESR();
    CsLOOKUPContext *csLOOKUP();
    CsMHHZOContext *csMHHZO();
    CsMHLZOContext *csMHLZO();
    CsMLHZOContext *csMLHZO();
    CsMLLZOContext *csMLLZO();
    CsMOVEContext *csMOVE();
    CsMOVEAContext *csMOVEA();
    CsMOVELContext *csMOVEL();
    CsMULTContext *csMULT();
    CsNEXTContext *csNEXT();
    CsOCCURContext *csOCCUR();
    CsOPENContext *csOPEN();
    CsOTHERContext *csOTHER();
    CsOUTContext *csOUT();
    CsPLISTContext *csPLIST();
    CsPOSTContext *csPOST();
    CsREADContext *csREAD();
    CsREADCContext *csREADC();
    CsREADEContext *csREADE();
    CsREADPContext *csREADP();
    CsREADPEContext *csREADPE();
    CsREALLOCContext *csREALLOC();
    CsRELContext *csREL();
    CsRESETContext *csRESET();
    CsRETURNContext *csRETURN();
    CsROLBKContext *csROLBK();
    CsSCANContext *csSCAN();
    CsSETGTContext *csSETGT();
    CsSETLLContext *csSETLL();
    CsSETOFFContext *csSETOFF();
    CsSETONContext *csSETON();
    CsSHTDNContext *csSHTDN();
    CsSORTAContext *csSORTA();
    CsSQRTContext *csSQRT();
    CsSUBContext *csSUB();
    CsSUBDURContext *csSUBDUR();
    CsSUBSTContext *csSUBST();
    CsTAGContext *csTAG();
    CsTESTContext *csTEST();
    CsTESTBContext *csTESTB();
    CsTESTNContext *csTESTN();
    CsTESTZContext *csTESTZ();
    CsTIMEContext *csTIME();
    CsUNLOCKContext *csUNLOCK();
    CsUPDATEContext *csUPDATE();
    CsWRITEContext *csWRITE();
    CsXFOOTContext *csXFOOT();
    CsXLATEContext *csXLATE();
    CsXML_INTOContext *csXML_INTO();
    CsXML_SAXContext *csXML_SAX();
    CsZ_ADDContext *csZ_ADD();
    CsZ_SUBContext *csZ_SUB();
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *CS_OperationAndExtender();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cspec_fixed_standardContext* cspec_fixed_standard();

  class  Cspec_fixed_standard_partsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::FactorContext *factor2 = nullptr;;
    RpgParser::ResultTypeContext *result = nullptr;;
    antlr4::Token *len = nullptr;;
    antlr4::Token *decimalPositions = nullptr;;
    RpgParser::ResultIndicatorContext *hi = nullptr;;
    RpgParser::ResultIndicatorContext *lo = nullptr;;
    RpgParser::ResultIndicatorContext *eq = nullptr;;
    Cspec_fixed_standard_partsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FactorContext *factor();
    ResultTypeContext *resultType();
    antlr4::tree::TerminalNode *CS_FieldLength();
    antlr4::tree::TerminalNode *CS_DecimalPositions();
    std::vector<ResultIndicatorContext *> resultIndicator();
    ResultIndicatorContext* resultIndicator(size_t i);
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    Cs_fixed_commentsContext *cs_fixed_comments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cspec_fixed_standard_partsContext* cspec_fixed_standard_parts();

  class  CsACQContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsACQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ACQ();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsACQContext* csACQ();

  class  CsADDContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsADDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ADD();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsADDContext* csADD();

  class  CsADDDURContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsADDDURContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ADDDUR();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsADDDURContext* csADDDUR();

  class  CsALLOCContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsALLOCContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ALLOC();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsALLOCContext* csALLOC();

  class  CsANDEQContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsANDEQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ANDEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsANDEQContext* csANDEQ();

  class  CsANDNEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsANDNEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ANDNE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsANDNEContext* csANDNE();

  class  CsANDLEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsANDLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ANDLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsANDLEContext* csANDLE();

  class  CsANDLTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsANDLTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ANDLT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsANDLTContext* csANDLT();

  class  CsANDGEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsANDGEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ANDGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsANDGEContext* csANDGE();

  class  CsANDGTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsANDGTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ANDGT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsANDGTContext* csANDGT();

  class  CsBITOFFContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsBITOFFContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_BITOFF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsBITOFFContext* csBITOFF();

  class  CsBITONContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsBITONContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_BITON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsBITONContext* csBITON();

  class  CsCABxxContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCABxxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CABxx();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCABxxContext* csCABxx();

  class  CsCABEQContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCABEQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CABEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCABEQContext* csCABEQ();

  class  CsCABNEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCABNEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CABNE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCABNEContext* csCABNE();

  class  CsCABLEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCABLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCABLEContext* csCABLE();

  class  CsCABLTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCABLTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CABLT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCABLTContext* csCABLT();

  class  CsCABGEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCABGEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CABGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCABGEContext* csCABGE();

  class  CsCABGTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCABGTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CABGT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCABGTContext* csCABGT();

  class  CsCALLContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsCALLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CALL();
    std::vector<CsPARMContext *> csPARM();
    CsPARMContext* csPARM(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCALLContext* csCALL();

  class  CsCALLBContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsCALLBContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CALLB();
    std::vector<CsPARMContext *> csPARM();
    CsPARMContext* csPARM(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCALLBContext* csCALLB();

  class  CsCALLPContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsCALLPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_CALLP();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCALLPContext* csCALLP();

  class  CsCASEQContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCASEQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CASEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCASEQContext* csCASEQ();

  class  CsCASNEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCASNEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CASNE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCASNEContext* csCASNE();

  class  CsCASLEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCASLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CASLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCASLEContext* csCASLE();

  class  CsCASLTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCASLTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CASLT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCASLTContext* csCASLT();

  class  CsCASGEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCASGEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CASGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCASGEContext* csCASGE();

  class  CsCASGTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCASGTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CASGT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCASGTContext* csCASGT();

  class  CsCASContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCASContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CAS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCASContext* csCAS();

  class  CsCATContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsCATContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CAT();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCATContext* csCAT();

  class  CsCHAINContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsCHAINContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CHAIN();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCHAINContext* csCHAIN();

  class  CsCHECKContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsCHECKContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CHECK();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCHECKContext* csCHECK();

  class  CsCHECKRContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsCHECKRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CHECKR();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCHECKRContext* csCHECKR();

  class  CsCLEARContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCLEARContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CLEAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCLEARContext* csCLEAR();

  class  CsCLOSEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsCLOSEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_CLOSE();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCLOSEContext* csCLOSE();

  class  CsCOMMITContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsCOMMITContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_COMMIT();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCOMMITContext* csCOMMIT();

  class  CsCOMPContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsCOMPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_COMP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsCOMPContext* csCOMP();

  class  CsDEALLOCContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsDEALLOCContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DEALLOC();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDEALLOCContext* csDEALLOC();

  class  CsDEFINEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDEFINEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DEFINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDEFINEContext* csDEFINE();

  class  CsDELETEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsDELETEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DELETE();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDELETEContext* csDELETE();

  class  CsDIVContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsDIVContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DIV();
    CsMVRContext *csMVR();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDIVContext* csDIV();

  class  CsDOContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOContext* csDO();

  class  CsDOUContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsDOUContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_DOU();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOUContext* csDOU();

  class  CsDOUEQContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOUEQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOUEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOUEQContext* csDOUEQ();

  class  CsDOUNEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOUNEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOUNE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOUNEContext* csDOUNE();

  class  CsDOULEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOULEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOULE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOULEContext* csDOULE();

  class  CsDOULTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOULTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOULT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOULTContext* csDOULT();

  class  CsDOUGEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOUGEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOUGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOUGEContext* csDOUGE();

  class  CsDOUGTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOUGTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOUGT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOUGTContext* csDOUGT();

  class  CsDOWContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsDOWContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_DOW();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOWContext* csDOW();

  class  CsDOWEQContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOWEQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOWEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOWEQContext* csDOWEQ();

  class  CsDOWNEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOWNEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOWNE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOWNEContext* csDOWNE();

  class  CsDOWLEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOWLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOWLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOWLEContext* csDOWLE();

  class  CsDOWLTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOWLTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOWLT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOWLTContext* csDOWLT();

  class  CsDOWGEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOWGEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOWGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOWGEContext* csDOWGE();

  class  CsDOWGTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsDOWGTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DOWGT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDOWGTContext* csDOWGT();

  class  CsDSPLYContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsDSPLYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DSPLY();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDSPLYContext* csDSPLY();

  class  CsDUMPContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsDUMPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_DUMP();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsDUMPContext* csDUMP();

  class  CsELSEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsELSEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsELSEContext* csELSE();

  class  CsELSEIFContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsELSEIFContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ELSEIF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsELSEIFContext* csELSEIF();

  class  CsENDContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsENDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsENDContext* csEND();

  class  CsENDCSContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsENDCSContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ENDCS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsENDCSContext* csENDCS();

  class  CsENDDOContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsENDDOContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ENDDO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsENDDOContext* csENDDO();

  class  CsENDFORContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsENDFORContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ENDFOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsENDFORContext* csENDFOR();

  class  CsENDIFContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsENDIFContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ENDIF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsENDIFContext* csENDIF();

  class  CsENDMONContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsENDMONContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ENDMON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsENDMONContext* csENDMON();

  class  CsENDSLContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsENDSLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ENDSL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsENDSLContext* csENDSL();

  class  CsEVALContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::AssignmentOperatorIncludingEqualContext *operator1 = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsEVALContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetContext *target();
    antlr4::tree::TerminalNode *OP_EVAL();
    AssignmentOperatorIncludingEqualContext *assignmentOperatorIncludingEqual();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsEVALContext* csEVAL();

  class  CsEVAL_CORRContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsEVAL_CORRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_EVAL_CORR();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsEVAL_CORRContext* csEVAL_CORR();

  class  CsEVALRContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsEVALRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_EVALR();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsEVALRContext* csEVALR();

  class  CsEXCEPTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsEXCEPTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_EXCEPT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsEXCEPTContext* csEXCEPT();

  class  CsEXFMTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsEXFMTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_EXFMT();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsEXFMTContext* csEXFMT();

  class  CsEXSRContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsEXSRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_EXSR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsEXSRContext* csEXSR();

  class  CsEXTRCTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsEXTRCTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_EXTRCT();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsEXTRCTContext* csEXTRCT();

  class  CsFEODContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsFEODContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_FEOD();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsFEODContext* csFEOD();

  class  CsFORContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsFORContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OP_FOR();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *EQUAL();
    Cs_operationExtenderContext *cs_operationExtender();
    antlr4::tree::TerminalNode *FREE_BY();
    ByExpressionContext *byExpression();
    StopExpressionContext *stopExpression();
    antlr4::tree::TerminalNode *FREE_TO();
    antlr4::tree::TerminalNode *FREE_DOWNTO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsFORContext* csFOR();

  class  ByExpressionContext : public antlr4::ParserRuleContext {
  public:
    ByExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ByExpressionContext* byExpression();

  class  StopExpressionContext : public antlr4::ParserRuleContext {
  public:
    StopExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StopExpressionContext* stopExpression();

  class  CsFORCEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsFORCEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_FORCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsFORCEContext* csFORCE();

  class  CsGOTOContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsGOTOContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_GOTO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsGOTOContext* csGOTO();

  class  CsIFContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsIFContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_IF();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsIFContext* csIF();

  class  CsIFEQContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsIFEQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_IFEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsIFEQContext* csIFEQ();

  class  CsIFNEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsIFNEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_IFNE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsIFNEContext* csIFNE();

  class  CsIFLEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsIFLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_IFLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsIFLEContext* csIFLE();

  class  CsIFLTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsIFLTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_IFLT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsIFLTContext* csIFLT();

  class  CsIFGEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsIFGEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_IFGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsIFGEContext* csIFGE();

  class  CsIFGTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsIFGTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_IFGT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsIFGTContext* csIFGT();

  class  CsINContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsINContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_IN();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsINContext* csIN();

  class  CsITERContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsITERContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ITER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsITERContext* csITER();

  class  CsKLISTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsKLISTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_KLIST();
    std::vector<CsKFLDContext *> csKFLD();
    CsKFLDContext* csKFLD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsKLISTContext* csKLIST();

  class  CsKFLDContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsKFLDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    std::vector<antlr4::tree::TerminalNode *> BlankIndicator();
    antlr4::tree::TerminalNode* BlankIndicator(size_t i);
    antlr4::tree::TerminalNode *BlankFlag();
    antlr4::tree::TerminalNode *CS_BlankFactor();
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_KFLD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsKFLDContext* csKFLD();

  class  CsLEAVEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsLEAVEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_LEAVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsLEAVEContext* csLEAVE();

  class  CsLEAVESRContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsLEAVESRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_LEAVESR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsLEAVESRContext* csLEAVESR();

  class  CsLOOKUPContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsLOOKUPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_LOOKUP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsLOOKUPContext* csLOOKUP();

  class  CsMHHZOContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsMHHZOContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_MHHZO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsMHHZOContext* csMHHZO();

  class  CsMHLZOContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsMHLZOContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_MHLZO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsMHLZOContext* csMHLZO();

  class  CsMLHZOContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsMLHZOContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_MLHZO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsMLHZOContext* csMLHZO();

  class  CsMLLZOContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsMLLZOContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_MLLZO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsMLLZOContext* csMLLZO();

  class  CsMONITORContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsMONITORContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_MONITOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsMONITORContext* csMONITOR();

  class  CsMOVEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsMOVEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_MOVE();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsMOVEContext* csMOVE();

  class  CsMOVEAContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsMOVEAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_MOVEA();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsMOVEAContext* csMOVEA();

  class  CsMOVELContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsMOVELContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_MOVEL();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsMOVELContext* csMOVEL();

  class  CsMULTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsMULTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_MULT();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsMULTContext* csMULT();

  class  CsMVRContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsMVRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    std::vector<antlr4::tree::TerminalNode *> BlankIndicator();
    antlr4::tree::TerminalNode* BlankIndicator(size_t i);
    antlr4::tree::TerminalNode *BlankFlag();
    antlr4::tree::TerminalNode *CS_BlankFactor();
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_MVR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsMVRContext* csMVR();

  class  CsNEXTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsNEXTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_NEXT();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsNEXTContext* csNEXT();

  class  CsOCCURContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsOCCURContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_OCCUR();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsOCCURContext* csOCCUR();

  class  CsON_ERRORContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsON_ERRORContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ON_ERROR();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    std::vector<OnErrorCodeContext *> onErrorCode();
    OnErrorCodeContext* onErrorCode(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsON_ERRORContext* csON_ERROR();

  class  OnErrorCodeContext : public antlr4::ParserRuleContext {
  public:
    OnErrorCodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    NumberContext *number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnErrorCodeContext* onErrorCode();

  class  CsOPENContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsOPENContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_OPEN();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsOPENContext* csOPEN();

  class  CsOREQContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsOREQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_OREQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsOREQContext* csOREQ();

  class  CsORNEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsORNEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ORNE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsORNEContext* csORNE();

  class  CsORLEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsORLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ORLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsORLEContext* csORLE();

  class  CsORLTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsORLTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ORLT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsORLTContext* csORLT();

  class  CsORGEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsORGEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ORGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsORGEContext* csORGE();

  class  CsORGTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsORGTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ORGT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsORGTContext* csORGT();

  class  CsOTHERContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsOTHERContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_OTHER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsOTHERContext* csOTHER();

  class  CsOUTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsOUTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_OUT();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsOUTContext* csOUT();

  class  CsPARMContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::FactorContext *factor1 = nullptr;;
    antlr4::Token *operation = nullptr;;
    CsPARMContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FIXED();
    std::vector<antlr4::tree::TerminalNode *> BlankIndicator();
    antlr4::tree::TerminalNode* BlankIndicator(size_t i);
    antlr4::tree::TerminalNode *BlankFlag();
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    FactorContext *factor();
    antlr4::tree::TerminalNode *OP_PARM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsPARMContext* csPARM();

  class  CsPLISTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsPLISTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_PLIST();
    std::vector<CsPARMContext *> csPARM();
    CsPARMContext* csPARM(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsPLISTContext* csPLIST();

  class  CsPOSTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsPOSTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_POST();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsPOSTContext* csPOST();

  class  CsREADContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsREADContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_READ();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsREADContext* csREAD();

  class  CsREADCContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsREADCContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_READC();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsREADCContext* csREADC();

  class  CsREADEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsREADEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_READE();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsREADEContext* csREADE();

  class  CsREADPContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsREADPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_READP();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsREADPContext* csREADP();

  class  CsREADPEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsREADPEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_READPE();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsREADPEContext* csREADPE();

  class  CsREALLOCContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsREALLOCContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_REALLOC();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsREALLOCContext* csREALLOC();

  class  CsRELContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsRELContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_REL();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsRELContext* csREL();

  class  CsRESETContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsRESETContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_RESET();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsRESETContext* csRESET();

  class  CsRETURNContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsRETURNContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_RETURN();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();
    C_freeContext *c_free();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsRETURNContext* csRETURN();

  class  CsROLBKContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsROLBKContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_ROLBK();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsROLBKContext* csROLBK();

  class  CsSCANContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsSCANContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SCAN();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSCANContext* csSCAN();

  class  CsSELECTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsSELECTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SELECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSELECTContext* csSELECT();

  class  CsSETGTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsSETGTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SETGT();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSETGTContext* csSETGT();

  class  CsSETLLContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsSETLLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SETLL();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSETLLContext* csSETLL();

  class  CsSETOFFContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsSETOFFContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SETOFF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSETOFFContext* csSETOFF();

  class  CsSETONContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsSETONContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SETON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSETONContext* csSETON();

  class  CsSHTDNContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsSHTDNContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SHTDN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSHTDNContext* csSHTDN();

  class  CsSORTAContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsSORTAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_SORTA();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSORTAContext* csSORTA();

  class  CsSQRTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsSQRTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SQRT();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSQRTContext* csSQRT();

  class  CsSUBContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsSUBContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SUB();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSUBContext* csSUB();

  class  CsSUBDURContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsSUBDURContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SUBDUR();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSUBDURContext* csSUBDUR();

  class  CsSUBSTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsSUBSTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_SUBST();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsSUBSTContext* csSUBST();

  class  CsTAGContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsTAGContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_TAG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsTAGContext* csTAG();

  class  CsTESTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsTESTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_TEST();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsTESTContext* csTEST();

  class  CsTESTBContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsTESTBContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_TESTB();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsTESTBContext* csTESTB();

  class  CsTESTNContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsTESTNContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_TESTN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsTESTNContext* csTESTN();

  class  CsTESTZContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsTESTZContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_TESTZ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsTESTZContext* csTESTZ();

  class  CsTIMEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsTIMEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_TIME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsTIMEContext* csTIME();

  class  CsUNLOCKContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsUNLOCKContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_UNLOCK();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsUNLOCKContext* csUNLOCK();

  class  CsUPDATEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsUPDATEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_UPDATE();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsUPDATEContext* csUPDATE();

  class  CsWHENContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsWHENContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_WHEN();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsWHENContext* csWHEN();

  class  CsWHENEQContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsWHENEQContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_WHENEQ();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsWHENEQContext* csWHENEQ();

  class  CsWHENNEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsWHENNEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_WHENNE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsWHENNEContext* csWHENNE();

  class  CsWHENLEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsWHENLEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_WHENLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsWHENLEContext* csWHENLE();

  class  CsWHENLTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsWHENLTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_WHENLT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsWHENLTContext* csWHENLT();

  class  CsWHENGEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsWHENGEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_WHENGE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsWHENGEContext* csWHENGE();

  class  CsWHENGTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    CsWHENGTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_WHENGT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsWHENGTContext* csWHENGT();

  class  CsWRITEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsWRITEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_WRITE();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsWRITEContext* csWRITE();

  class  CsXFOOTContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsXFOOTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_XFOOT();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsXFOOTContext* csXFOOT();

  class  CsXLATEContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsXLATEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_XLATE();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsXLATEContext* csXLATE();

  class  CsXML_INTOContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsXML_INTOContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_XML_INTO();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsXML_INTOContext* csXML_INTO();

  class  CsXML_SAXContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    CsXML_SAXContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_XML_SAX();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsXML_SAXContext* csXML_SAX();

  class  CsZ_ADDContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsZ_ADDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_Z_ADD();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsZ_ADDContext* csZ_ADD();

  class  CsZ_SUBContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsZ_SUBContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cspec_fixed_standard_partsContext *cspec_fixed_standard_parts();
    antlr4::tree::TerminalNode *OP_Z_SUB();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsZ_SUBContext* csZ_SUB();

  class  Cs_operationExtenderContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *extender = nullptr;;
    antlr4::Token *extender2 = nullptr;;
    antlr4::Token *extender3 = nullptr;;
    antlr4::Token *extender4 = nullptr;;
    Cs_operationExtenderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<antlr4::tree::TerminalNode *> CS_OperationAndExtender();
    antlr4::tree::TerminalNode* CS_OperationAndExtender(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cs_operationExtenderContext* cs_operationExtender();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::FactorContentContext *content = nullptr;;
    RpgParser::FactorContentContext *content2 = nullptr;;
    RpgParser::SymbolicConstantsContext *constant2 = nullptr;;
    RpgParser::SymbolicConstantsContext *constant = nullptr;;
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FactorContentContext *> factorContent();
    FactorContentContext* factorContent(size_t i);
    antlr4::tree::TerminalNode *COLON();
    SymbolicConstantsContext *symbolicConstants();
    antlr4::tree::TerminalNode *CS_BlankFactor();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContext* factor();

  class  FactorContentContext : public antlr4::ParserRuleContext {
  public:
    FactorContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FactorContent();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FactorContentContext* factorContent();

  class  ResultTypeContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::SymbolicConstantsContext *constant = nullptr;;
    ResultTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FactorContent();
    antlr4::tree::TerminalNode *COLON();
    SymbolicConstantsContext *symbolicConstants();
    antlr4::tree::TerminalNode *CS_BlankFactor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResultTypeContext* resultType();

  class  Cs_fixed_commentsContext : public antlr4::ParserRuleContext {
  public:
    Cs_fixed_commentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CS_FixedComments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cs_fixed_commentsContext* cs_fixed_comments();

  class  Cspec_fixed_x2Context : public antlr4::ParserRuleContext {
  public:
    RpgParser::C_freeContext *fixedexpression = nullptr;;
    Cspec_fixed_x2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CsOperationAndExtendedFactor2Context *csOperationAndExtendedFactor2();
    C_freeContext *c_free();
    antlr4::tree::TerminalNode *C_FREE_NEWLINE();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cspec_fixed_x2Context* cspec_fixed_x2();

  class  CsOperationAndExtendedFactor2Context : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *operation = nullptr;;
    RpgParser::Cs_operationExtenderContext *operationExtender = nullptr;;
    CsOperationAndExtendedFactor2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_CALLP();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CsOperationAndExtendedFactor2Context* csOperationAndExtendedFactor2();

  class  Ispec_fixedContext : public antlr4::ParserRuleContext {
  public:
    Ispec_fixedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS_FIXED();
    antlr4::tree::TerminalNode *IS_FileName();
    Is_external_fieldContext *is_external_field();
    antlr4::tree::TerminalNode *IFD_DATA_ATTR();
    antlr4::tree::TerminalNode *IFD_DATETIME_SEP();
    antlr4::tree::TerminalNode *IFD_DATA_FORMAT();
    antlr4::tree::TerminalNode *IFD_FIELD_LOCATION();
    antlr4::tree::TerminalNode *IFD_DECIMAL_POSITIONS();
    antlr4::tree::TerminalNode *IFD_FIELD_NAME();
    antlr4::tree::TerminalNode *IFD_CONTROL_LEVEL();
    antlr4::tree::TerminalNode *IFD_MATCHING_FIELDS();
    FieldRecordRelationContext *fieldRecordRelation();
    std::vector<FieldIndicatorContext *> fieldIndicator();
    FieldIndicatorContext* fieldIndicator(size_t i);
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    Is_external_recContext *is_external_rec();
    Is_recContext *is_rec();
    antlr4::tree::TerminalNode *IFD_COMMENTS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ispec_fixedContext* ispec_fixed();

  class  FieldRecordRelationContext : public antlr4::ParserRuleContext {
  public:
    FieldRecordRelationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlankIndicator();
    antlr4::tree::TerminalNode *GeneralIndicator();
    antlr4::tree::TerminalNode *ControlLevelIndicator();
    antlr4::tree::TerminalNode *MatchingRecordIndicator();
    antlr4::tree::TerminalNode *ExternalIndicator();
    antlr4::tree::TerminalNode *HaltIndicator();
    antlr4::tree::TerminalNode *ReturnIndicator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldRecordRelationContext* fieldRecordRelation();

  class  FieldIndicatorContext : public antlr4::ParserRuleContext {
  public:
    FieldIndicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BlankIndicator();
    antlr4::tree::TerminalNode *GeneralIndicator();
    antlr4::tree::TerminalNode *ControlLevelIndicator();
    antlr4::tree::TerminalNode *HaltIndicator();
    antlr4::tree::TerminalNode *ExternalIndicator();
    antlr4::tree::TerminalNode *ReturnIndicator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldIndicatorContext* fieldIndicator();

  class  Is_external_recContext : public antlr4::ParserRuleContext {
  public:
    Is_external_recContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS_ExtRecordReserved();
    ResultIndicatorContext *resultIndicator();
    antlr4::tree::TerminalNode *WS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Is_external_recContext* is_external_rec();

  class  Is_recContext : public antlr4::ParserRuleContext {
  public:
    Is_recContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IS_Sequence();
    antlr4::tree::TerminalNode *IS_Number();
    antlr4::tree::TerminalNode *IS_Option();
    RecordIdIndicatorContext *recordIdIndicator();
    antlr4::tree::TerminalNode *IS_RecordIdCode();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Is_recContext* is_rec();

  class  RecordIdIndicatorContext : public antlr4::ParserRuleContext {
  public:
    RecordIdIndicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GeneralIndicator();
    antlr4::tree::TerminalNode *HaltIndicator();
    antlr4::tree::TerminalNode *ControlLevelIndicator();
    antlr4::tree::TerminalNode *LastRecordIndicator();
    antlr4::tree::TerminalNode *ExternalIndicator();
    antlr4::tree::TerminalNode *ReturnIndicator();
    antlr4::tree::TerminalNode *BlankIndicator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordIdIndicatorContext* recordIdIndicator();

  class  Is_external_fieldContext : public antlr4::ParserRuleContext {
  public:
    Is_external_fieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF_Name();
    antlr4::tree::TerminalNode *IF_FieldName();
    ControlLevelIndicatorContext *controlLevelIndicator();
    MatchingFieldsIndicatorContext *matchingFieldsIndicator();
    std::vector<ResultIndicatorContext *> resultIndicator();
    ResultIndicatorContext* resultIndicator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Is_external_fieldContext* is_external_field();

  class  ControlLevelIndicatorContext : public antlr4::ParserRuleContext {
  public:
    ControlLevelIndicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ControlLevelIndicator();
    antlr4::tree::TerminalNode *BlankIndicator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlLevelIndicatorContext* controlLevelIndicator();

  class  MatchingFieldsIndicatorContext : public antlr4::ParserRuleContext {
  public:
    MatchingFieldsIndicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MatchingRecordIndicator();
    antlr4::tree::TerminalNode *BlankIndicator();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MatchingFieldsIndicatorContext* matchingFieldsIndicator();

  class  Hspec_fixedContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::Hspec_contentContext *content = nullptr;;
    Hspec_fixedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HS_FIXED();
    Hspec_contentContext *hspec_content();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hspec_fixedContext* hspec_fixed();

  class  Hspec_contentContext : public antlr4::ParserRuleContext {
  public:
    Hspec_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Hspec_contentContext() = default;
    void copyFrom(Hspec_contentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SetDeceditContext : public Hspec_contentContext {
  public:
    SetDeceditContext(Hspec_contentContext *ctx);

    Hs_decedit_setContext *hs_decedit_set();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HspecExpressionsContext : public Hspec_contentContext {
  public:
    HspecExpressionsContext(Hspec_contentContext *ctx);

    std::vector<Hs_expressionContext *> hs_expression();
    Hs_expressionContext* hs_expression(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Hspec_contentContext* hspec_content();

  class  Hs_decedit_setContext : public antlr4::ParserRuleContext {
  public:
    Hs_decedit_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HS_DECEDIT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    Hs_parmContext *hs_parm();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hs_decedit_setContext* hs_decedit_set();

  class  Hs_expressionContext : public antlr4::ParserRuleContext {
  public:
    Hs_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<Hs_parmContext *> hs_parm();
    Hs_parmContext* hs_parm(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hs_expressionContext* hs_expression();

  class  Hs_parmContext : public antlr4::ParserRuleContext {
  public:
    Hs_parmContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    Hs_stringContext *hs_string();
    SymbolicConstantsContext *symbolicConstants();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hs_parmContext* hs_parm();

  class  Hs_stringContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *stringcontentToken = nullptr;;
    std::vector<antlr4::Token *> content;;
    antlr4::Token *stringescapedquoteToken = nullptr;;
    antlr4::Token *_tset8132 = nullptr;;
    Hs_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteralStart();
    antlr4::tree::TerminalNode *StringLiteralEnd();
    std::vector<antlr4::tree::TerminalNode *> StringContent();
    antlr4::tree::TerminalNode* StringContent(size_t i);
    std::vector<antlr4::tree::TerminalNode *> StringEscapedQuote();
    antlr4::tree::TerminalNode* StringEscapedQuote(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Hs_stringContext* hs_string();

  class  Blank_lineContext : public antlr4::ParserRuleContext {
  public:
    Blank_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BLANK_LINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Blank_lineContext* blank_line();

  class  DirectiveContext : public antlr4::ParserRuleContext {
  public:
    DirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIRECTIVE();
    antlr4::tree::TerminalNode *EOL();
    antlr4::tree::TerminalNode *EOF();
    Beginfree_directiveContext *beginfree_directive();
    Endfree_directiveContext *endfree_directive();
    Title_directiveContext *title_directive();
    antlr4::tree::TerminalNode *DIR_EJECT();
    Space_directiveContext *space_directive();
    antlr4::tree::TerminalNode *DIR_SET();
    antlr4::tree::TerminalNode *DIR_RESTORE();
    Dir_copyContext *dir_copy();
    Dir_includeContext *dir_include();
    Dir_eofContext *dir_eof();
    Dir_defineContext *dir_define();
    Dir_undefineContext *dir_undefine();
    Dir_ifContext *dir_if();
    Dir_elseifContext *dir_elseif();
    Dir_elseContext *dir_else();
    Dir_endifContext *dir_endif();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectiveContext* directive();

  class  Space_directiveContext : public antlr4::ParserRuleContext {
  public:
    Space_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_SPACE();
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Space_directiveContext* space_directive();

  class  Dir_copyContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::CopyTextContext *library = nullptr;;
    RpgParser::CopyTextContext *file = nullptr;;
    RpgParser::CopyTextContext *member = nullptr;;
    Dir_copyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_COPY();
    std::vector<CopyTextContext *> copyText();
    CopyTextContext* copyText(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIR_Slash();
    antlr4::tree::TerminalNode* DIR_Slash(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dir_copyContext* dir_copy();

  class  Dir_includeContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::CopyTextContext *library = nullptr;;
    RpgParser::CopyTextContext *file = nullptr;;
    RpgParser::CopyTextContext *member = nullptr;;
    Dir_includeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_INCLUDE();
    std::vector<CopyTextContext *> copyText();
    CopyTextContext* copyText(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIR_Slash();
    antlr4::tree::TerminalNode* DIR_Slash(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dir_includeContext* dir_include();

  class  Dir_ifContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *noot = nullptr;;
    Dir_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_IF();
    antlr4::tree::TerminalNode *DIR_DEFINED();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    CopyTextContext *copyText();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *DIR_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dir_ifContext* dir_if();

  class  Dir_elseifContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *noot = nullptr;;
    Dir_elseifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_ELSEIF();
    antlr4::tree::TerminalNode *DIR_DEFINED();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    CopyTextContext *copyText();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *DIR_NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dir_elseifContext* dir_elseif();

  class  Dir_elseContext : public antlr4::ParserRuleContext {
  public:
    Dir_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dir_elseContext* dir_else();

  class  Dir_endifContext : public antlr4::ParserRuleContext {
  public:
    Dir_endifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_ENDIF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dir_endifContext* dir_endif();

  class  Dir_defineContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;;
    Dir_defineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_DEFINE();
    antlr4::tree::TerminalNode *DIR_OtherText();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dir_defineContext* dir_define();

  class  Dir_undefineContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;;
    Dir_undefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_UNDEFINE();
    antlr4::tree::TerminalNode *DIR_OtherText();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dir_undefineContext* dir_undefine();

  class  Dir_eofContext : public antlr4::ParserRuleContext {
  public:
    Dir_eofContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dir_eofContext* dir_eof();

  class  Beginfree_directiveContext : public antlr4::ParserRuleContext {
  public:
    Beginfree_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_FREE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Beginfree_directiveContext* beginfree_directive();

  class  Endfree_directiveContext : public antlr4::ParserRuleContext {
  public:
    Endfree_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_ENDFREE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Endfree_directiveContext* endfree_directive();

  class  CopyTextContext : public antlr4::ParserRuleContext {
  public:
    CopyTextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_OtherText();
    antlr4::tree::TerminalNode *StringLiteralStart();
    antlr4::tree::TerminalNode *StringContent();
    antlr4::tree::TerminalNode *StringLiteralEnd();
    antlr4::tree::TerminalNode *DIR_NOT();
    antlr4::tree::TerminalNode *DIR_DEFINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CopyTextContext* copyText();

  class  Trailing_wsContext : public antlr4::ParserRuleContext {
  public:
    Trailing_wsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_FREE_OTHER_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Trailing_wsContext* trailing_ws();

  class  Title_directiveContext : public antlr4::ParserRuleContext {
  public:
    Title_directiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIR_TITLE();
    std::vector<Title_textContext *> title_text();
    Title_textContext* title_text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Title_directiveContext* title_directive();

  class  Title_textContext : public antlr4::ParserRuleContext {
  public:
    Title_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *DIR_OtherText();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Title_textContext* title_text();

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Op_acqContext *op_acq();
    Op_callpContext *op_callp();
    Op_chainContext *op_chain();
    Op_clearContext *op_clear();
    Op_closeContext *op_close();
    Op_commitContext *op_commit();
    Op_deallocContext *op_dealloc();
    Op_deleteContext *op_delete();
    Op_dsplyContext *op_dsply();
    Op_dumpContext *op_dump();
    Op_evalContext *op_eval();
    Op_evalrContext *op_evalr();
    Op_eval_corrContext *op_eval_corr();
    Op_exceptContext *op_except();
    Op_exfmtContext *op_exfmt();
    Op_exsrContext *op_exsr();
    Op_feodContext *op_feod();
    Op_forceContext *op_force();
    Op_inContext *op_in();
    Op_iterContext *op_iter();
    Op_leaveContext *op_leave();
    Op_leavesrContext *op_leavesr();
    Op_nextContext *op_next();
    Op_openContext *op_open();
    Op_outContext *op_out();
    Op_postContext *op_post();
    Op_readContext *op_read();
    Op_readcContext *op_readc();
    Op_readeContext *op_reade();
    Op_readpContext *op_readp();
    Op_readpeContext *op_readpe();
    Op_relContext *op_rel();
    Op_resetContext *op_reset();
    Op_reset2Context *op_reset2();
    Op_returnContext *op_return();
    Op_rolbkContext *op_rolbk();
    Op_setgtContext *op_setgt();
    Op_setllContext *op_setll();
    Op_sortaContext *op_sorta();
    Op_testContext *op_test();
    Op_unlockContext *op_unlock();
    Op_updateContext *op_update();
    Op_writeContext *op_write();
    Op_xml_intoContext *op_xml_into();
    Op_xml_saxContext *op_xml_sax();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpContext* op();

  class  Op_acqContext : public antlr4::ParserRuleContext {
  public:
    Op_acqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ACQ();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_acqContext* op_acq();

  class  Op_callpContext : public antlr4::ParserRuleContext {
  public:
    Op_callpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *OP_CALLP();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_callpContext* op_callp();

  class  Op_chainContext : public antlr4::ParserRuleContext {
  public:
    Op_chainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_CHAIN();
    Search_argContext *search_arg();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_chainContext* op_chain();

  class  Op_clearContext : public antlr4::ParserRuleContext {
  public:
    Op_clearContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_CLEAR();
    ExpressionContext *expression();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_clearContext* op_clear();

  class  Op_closeContext : public antlr4::ParserRuleContext {
  public:
    Op_closeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_CLOSE();
    IdentifierContext *identifier();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_closeContext* op_close();

  class  Op_commitContext : public antlr4::ParserRuleContext {
  public:
    Op_commitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_COMMIT();
    Cs_operationExtenderContext *cs_operationExtender();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_commitContext* op_commit();

  class  Op_deallocContext : public antlr4::ParserRuleContext {
  public:
    Op_deallocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_DEALLOC();
    IdentifierContext *identifier();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_deallocContext* op_dealloc();

  class  Op_deleteContext : public antlr4::ParserRuleContext {
  public:
    Op_deleteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_DELETE();
    IdentifierContext *identifier();
    Cs_operationExtenderContext *cs_operationExtender();
    Search_argContext *search_arg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_deleteContext* op_delete();

  class  Op_douContext : public antlr4::ParserRuleContext {
  public:
    Op_douContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_DOU();
    Indicator_exprContext *indicator_expr();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_douContext* op_dou();

  class  Op_dowContext : public antlr4::ParserRuleContext {
  public:
    Op_dowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_DOW();
    Indicator_exprContext *indicator_expr();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_dowContext* op_dow();

  class  Op_dsplyContext : public antlr4::ParserRuleContext {
  public:
    Op_dsplyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_DSPLY();
    Cs_operationExtenderContext *cs_operationExtender();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_dsplyContext* op_dsply();

  class  Op_dumpContext : public antlr4::ParserRuleContext {
  public:
    Op_dumpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_DUMP();
    Cs_operationExtenderContext *cs_operationExtender();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_dumpContext* op_dump();

  class  Op_elseContext : public antlr4::ParserRuleContext {
  public:
    Op_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_elseContext* op_else();

  class  Op_elseifContext : public antlr4::ParserRuleContext {
  public:
    Op_elseifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ELSEIF();
    Indicator_exprContext *indicator_expr();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_elseifContext* op_elseif();

  class  Op_enddoContext : public antlr4::ParserRuleContext {
  public:
    Op_enddoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ENDDO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_enddoContext* op_enddo();

  class  Op_endforContext : public antlr4::ParserRuleContext {
  public:
    Op_endforContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ENDFOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_endforContext* op_endfor();

  class  Op_endifContext : public antlr4::ParserRuleContext {
  public:
    Op_endifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ENDIF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_endifContext* op_endif();

  class  Op_endmonContext : public antlr4::ParserRuleContext {
  public:
    Op_endmonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ENDMON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_endmonContext* op_endmon();

  class  Op_endslContext : public antlr4::ParserRuleContext {
  public:
    Op_endslContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ENDSL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_endslContext* op_endsl();

  class  Op_evalContext : public antlr4::ParserRuleContext {
  public:
    Op_evalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EvalExpressionContext *evalExpression();
    antlr4::tree::TerminalNode *OP_EVAL();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_evalContext* op_eval();

  class  Op_evalrContext : public antlr4::ParserRuleContext {
  public:
    Op_evalrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_EVALR();
    AssignmentExpressionContext *assignmentExpression();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_evalrContext* op_evalr();

  class  Op_eval_corrContext : public antlr4::ParserRuleContext {
  public:
    Op_eval_corrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_EVAL_CORR();
    AssignmentExpressionContext *assignmentExpression();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_eval_corrContext* op_eval_corr();

  class  Op_exceptContext : public antlr4::ParserRuleContext {
  public:
    Op_exceptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_EXCEPT();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_exceptContext* op_except();

  class  Op_exfmtContext : public antlr4::ParserRuleContext {
  public:
    Op_exfmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_EXFMT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_exfmtContext* op_exfmt();

  class  Op_exsrContext : public antlr4::ParserRuleContext {
  public:
    Op_exsrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_EXSR();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_exsrContext* op_exsr();

  class  Op_feodContext : public antlr4::ParserRuleContext {
  public:
    Op_feodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_FEOD();
    IdentifierContext *identifier();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_feodContext* op_feod();

  class  Op_forContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *indexname = nullptr;;
    RpgParser::ExpressionContext *startvalue = nullptr;;
    RpgParser::ExpressionContext *increment = nullptr;;
    RpgParser::ExpressionContext *limit = nullptr;;
    Op_forContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_FOR();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *FREE_BY();
    antlr4::tree::TerminalNode *FREE_TO();
    antlr4::tree::TerminalNode *FREE_DOWNTO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_forContext* op_for();

  class  Op_forceContext : public antlr4::ParserRuleContext {
  public:
    Op_forceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_FORCE();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_forceContext* op_force();

  class  Op_ifContext : public antlr4::ParserRuleContext {
  public:
    Op_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_IF();
    ExpressionContext *expression();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_ifContext* op_if();

  class  Op_inContext : public antlr4::ParserRuleContext {
  public:
    Op_inContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_IN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_inContext* op_in();

  class  Op_iterContext : public antlr4::ParserRuleContext {
  public:
    Op_iterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ITER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_iterContext* op_iter();

  class  Op_leaveContext : public antlr4::ParserRuleContext {
  public:
    Op_leaveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_LEAVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_leaveContext* op_leave();

  class  Op_leavesrContext : public antlr4::ParserRuleContext {
  public:
    Op_leavesrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_LEAVESR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_leavesrContext* op_leavesr();

  class  Op_monitorContext : public antlr4::ParserRuleContext {
  public:
    Op_monitorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_MONITOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_monitorContext* op_monitor();

  class  Op_nextContext : public antlr4::ParserRuleContext {
  public:
    Op_nextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_NEXT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    LiteralContext *literal();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_nextContext* op_next();

  class  Op_on_errorContext : public antlr4::ParserRuleContext {
  public:
    Op_on_errorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ON_ERROR();
    std::vector<OnErrorCodeContext *> onErrorCode();
    OnErrorCodeContext* onErrorCode(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_on_errorContext* op_on_error();

  class  Op_openContext : public antlr4::ParserRuleContext {
  public:
    Op_openContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_OPEN();
    IdentifierContext *identifier();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_openContext* op_open();

  class  Op_otherContext : public antlr4::ParserRuleContext {
  public:
    Op_otherContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_OTHER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_otherContext* op_other();

  class  Op_outContext : public antlr4::ParserRuleContext {
  public:
    Op_outContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_OUT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_outContext* op_out();

  class  Op_postContext : public antlr4::ParserRuleContext {
  public:
    Op_postContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_POST();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_postContext* op_post();

  class  Op_readContext : public antlr4::ParserRuleContext {
  public:
    Op_readContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_READ();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_readContext* op_read();

  class  Op_readcContext : public antlr4::ParserRuleContext {
  public:
    Op_readcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_READC();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_readcContext* op_readc();

  class  Op_readeContext : public antlr4::ParserRuleContext {
  public:
    Op_readeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_READE();
    Search_argContext *search_arg();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_readeContext* op_reade();

  class  Op_readpContext : public antlr4::ParserRuleContext {
  public:
    Op_readpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_READP();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_readpContext* op_readp();

  class  Op_readpeContext : public antlr4::ParserRuleContext {
  public:
    Op_readpeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_READPE();
    Search_argContext *search_arg();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_readpeContext* op_readpe();

  class  Op_relContext : public antlr4::ParserRuleContext {
  public:
    Op_relContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_REL();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    LiteralContext *literal();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_relContext* op_rel();

  class  Op_reset2Context : public antlr4::ParserRuleContext {
  public:
    Op_reset2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_RESET();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    Cs_operationExtenderContext *cs_operationExtender();
    antlr4::tree::TerminalNode *MULT_NOSPACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_reset2Context* op_reset2();

  class  Op_resetContext : public antlr4::ParserRuleContext {
  public:
    Op_resetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_RESET();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_resetContext* op_reset();

  class  Op_returnContext : public antlr4::ParserRuleContext {
  public:
    Op_returnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_RETURN();
    Cs_operationExtenderContext *cs_operationExtender();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_returnContext* op_return();

  class  Op_rolbkContext : public antlr4::ParserRuleContext {
  public:
    Op_rolbkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ROLBK();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_rolbkContext* op_rolbk();

  class  Op_selectContext : public antlr4::ParserRuleContext {
  public:
    Op_selectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_SELECT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_selectContext* op_select();

  class  Op_setgtContext : public antlr4::ParserRuleContext {
  public:
    Op_setgtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_SETGT();
    Search_argContext *search_arg();
    IdentifierContext *identifier();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_setgtContext* op_setgt();

  class  Op_setllContext : public antlr4::ParserRuleContext {
  public:
    Op_setllContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_SETLL();
    Search_argContext *search_arg();
    IdentifierContext *identifier();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_setllContext* op_setll();

  class  Op_sortaContext : public antlr4::ParserRuleContext {
  public:
    Op_sortaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_SORTA();
    IdentifierContext *identifier();
    Bif_subarrContext *bif_subarr();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_sortaContext* op_sorta();

  class  Op_testContext : public antlr4::ParserRuleContext {
  public:
    Op_testContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_TEST();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_testContext* op_test();

  class  Op_unlockContext : public antlr4::ParserRuleContext {
  public:
    Op_unlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_UNLOCK();
    IdentifierContext *identifier();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_unlockContext* op_unlock();

  class  Op_updateContext : public antlr4::ParserRuleContext {
  public:
    Op_updateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_UPDATE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();
    Bif_fieldsContext *bif_fields();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_updateContext* op_update();

  class  Op_whenContext : public antlr4::ParserRuleContext {
  public:
    Op_whenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_WHEN();
    Indicator_exprContext *indicator_expr();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_whenContext* op_when();

  class  Op_writeContext : public antlr4::ParserRuleContext {
  public:
    Op_writeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_WRITE();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_writeContext* op_write();

  class  Op_xml_intoContext : public antlr4::ParserRuleContext {
  public:
    Op_xml_intoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_XML_INTO();
    IdentifierContext *identifier();
    ExpressionContext *expression();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_xml_intoContext* op_xml_into();

  class  Op_xml_saxContext : public antlr4::ParserRuleContext {
  public:
    Op_xml_saxContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_XML_SAX();
    Bif_handlerContext *bif_handler();
    Bif_xmlContext *bif_xml();
    Cs_operationExtenderContext *cs_operationExtender();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_xml_saxContext* op_xml_sax();

  class  Search_argContext : public antlr4::ParserRuleContext {
  public:
    Search_argContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    ArgsContext *args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Search_argContext* search_arg();

  class  Op_codeContext : public antlr4::ParserRuleContext {
  public:
    Op_codeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP_ACQ();
    antlr4::tree::TerminalNode *OP_BEGSR();
    antlr4::tree::TerminalNode *OP_CALLP();
    antlr4::tree::TerminalNode *OP_CHAIN();
    antlr4::tree::TerminalNode *OP_CLEAR();
    antlr4::tree::TerminalNode *OP_CLOSE();
    antlr4::tree::TerminalNode *OP_COMMIT();
    antlr4::tree::TerminalNode *OP_DEALLOC();
    antlr4::tree::TerminalNode *OP_DELETE();
    antlr4::tree::TerminalNode *OP_DSPLY();
    antlr4::tree::TerminalNode *OP_DUMP();
    antlr4::tree::TerminalNode *OP_ENDSR();
    antlr4::tree::TerminalNode *OP_EVAL();
    antlr4::tree::TerminalNode *OP_EVALR();
    antlr4::tree::TerminalNode *OP_EVAL_CORR();
    antlr4::tree::TerminalNode *OP_EXCEPT();
    antlr4::tree::TerminalNode *OP_EXFMT();
    antlr4::tree::TerminalNode *OP_EXSR();
    antlr4::tree::TerminalNode *OP_FEOD();
    antlr4::tree::TerminalNode *OP_FORCE();
    antlr4::tree::TerminalNode *OP_IN();
    antlr4::tree::TerminalNode *OP_ITER();
    antlr4::tree::TerminalNode *OP_LEAVE();
    antlr4::tree::TerminalNode *OP_LEAVESR();
    antlr4::tree::TerminalNode *OP_NEXT();
    antlr4::tree::TerminalNode *OP_OPEN();
    antlr4::tree::TerminalNode *OP_OTHER();
    antlr4::tree::TerminalNode *OP_OUT();
    antlr4::tree::TerminalNode *OP_POST();
    antlr4::tree::TerminalNode *OP_READ();
    antlr4::tree::TerminalNode *OP_READC();
    antlr4::tree::TerminalNode *OP_READE();
    antlr4::tree::TerminalNode *OP_READP();
    antlr4::tree::TerminalNode *OP_READPE();
    antlr4::tree::TerminalNode *OP_REL();
    antlr4::tree::TerminalNode *OP_RESET();
    antlr4::tree::TerminalNode *OP_RETURN();
    antlr4::tree::TerminalNode *OP_ROLBK();
    antlr4::tree::TerminalNode *OP_SELECT();
    antlr4::tree::TerminalNode *OP_SETGT();
    antlr4::tree::TerminalNode *OP_SETLL();
    antlr4::tree::TerminalNode *OP_SORTA();
    antlr4::tree::TerminalNode *OP_TEST();
    antlr4::tree::TerminalNode *OP_UNLOCK();
    antlr4::tree::TerminalNode *OP_UPDATE();
    antlr4::tree::TerminalNode *OP_WHEN();
    antlr4::tree::TerminalNode *OP_WRITE();
    antlr4::tree::TerminalNode *OP_XML_INTO();
    antlr4::tree::TerminalNode *OP_XML_SAX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_codeContext* op_code();

  class  BifContext : public antlr4::ParserRuleContext {
  public:
    BifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bif_absContext *bif_abs();
    Bif_addrContext *bif_addr();
    Bif_allocContext *bif_alloc();
    Bif_bitandContext *bif_bitand();
    Bif_bitnotContext *bif_bitnot();
    Bif_bitorContext *bif_bitor();
    Bif_bitxorContext *bif_bitxor();
    Bif_charContext *bif_char();
    Bif_checkContext *bif_check();
    Bif_checkrContext *bif_checkr();
    Bif_dateContext *bif_date();
    Bif_daysContext *bif_days();
    Bif_decContext *bif_dec();
    Bif_dechContext *bif_dech();
    Bif_decposContext *bif_decpos();
    Bif_diffContext *bif_diff();
    Bif_divContext *bif_div();
    Bif_editcContext *bif_editc();
    Bif_editfltContext *bif_editflt();
    Bif_editwContext *bif_editw();
    Bif_elemContext *bif_elem();
    Bif_eofContext *bif_eof();
    Bif_equalContext *bif_equal();
    Bif_errorContext *bif_error();
    Bif_fieldsContext *bif_fields();
    Bif_floatContext *bif_float();
    Bif_foundContext *bif_found();
    Bif_graphContext *bif_graph();
    Bif_handlerContext *bif_handler();
    Bif_hoursContext *bif_hours();
    Bif_intContext *bif_int();
    Bif_inthContext *bif_inth();
    Bif_kdsContext *bif_kds();
    Bif_lenContext *bif_len();
    Bif_lookupContext *bif_lookup();
    Bif_lookupltContext *bif_lookuplt();
    Bif_lookupleContext *bif_lookuple();
    Bif_lookupgtContext *bif_lookupgt();
    Bif_lookupgeContext *bif_lookupge();
    Bif_minutesContext *bif_minutes();
    Bif_monthsContext *bif_months();
    Bif_msecondsContext *bif_mseconds();
    Bif_nullindContext *bif_nullind();
    Bif_occurContext *bif_occur();
    Bif_openContext *bif_open();
    Bif_paddrContext *bif_paddr();
    Bif_parmsContext *bif_parms();
    Bif_parmnumContext *bif_parmnum();
    Bif_reallocContext *bif_realloc();
    Bif_remContext *bif_rem();
    Bif_replaceContext *bif_replace();
    Bif_scanContext *bif_scan();
    Bif_scanrplContext *bif_scanrpl();
    Bif_secondsContext *bif_seconds();
    Bif_shtdnContext *bif_shtdn();
    Bif_sizeContext *bif_size();
    Bif_sqrtContext *bif_sqrt();
    Bif_statusContext *bif_status();
    Bif_strContext *bif_str();
    Bif_subarrContext *bif_subarr();
    Bif_subdtContext *bif_subdt();
    Bif_substContext *bif_subst();
    Bif_thisContext *bif_this();
    Bif_timeContext *bif_time();
    Bif_timestampContext *bif_timestamp();
    Bif_tlookupContext *bif_tlookup();
    Bif_tlookupltContext *bif_tlookuplt();
    Bif_tlookupleContext *bif_tlookuple();
    Bif_tlookupgtContext *bif_tlookupgt();
    Bif_tlookupgeContext *bif_tlookupge();
    Bif_trimContext *bif_trim();
    Bif_trimlContext *bif_triml();
    Bif_trimrContext *bif_trimr();
    Bif_ucs2Context *bif_ucs2();
    Bif_unsContext *bif_uns();
    Bif_unshContext *bif_unsh();
    Bif_xfootContext *bif_xfoot();
    Bif_xlateContext *bif_xlate();
    Bif_xmlContext *bif_xml();
    Bif_yearsContext *bif_years();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BifContext* bif();

  class  OptargsContext : public antlr4::ParserRuleContext {
  public:
    OptargsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptargsContext* optargs();

  class  Bif_charformatContext : public antlr4::ParserRuleContext {
  public:
    Bif_charformatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolicConstantsContext *symbolicConstants();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_charformatContext* bif_charformat();

  class  Bif_dateformatContext : public antlr4::ParserRuleContext {
  public:
    Bif_dateformatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolicConstantsContext *symbolicConstants();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_dateformatContext* bif_dateformat();

  class  Bif_timeformatContext : public antlr4::ParserRuleContext {
  public:
    Bif_timeformatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolicConstantsContext *symbolicConstants();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_timeformatContext* bif_timeformat();

  class  Bif_editccurrencyContext : public antlr4::ParserRuleContext {
  public:
    Bif_editccurrencyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPLAT_ASTFILL();
    antlr4::tree::TerminalNode *SPLAT_CURSYM();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_editccurrencyContext* bif_editccurrency();

  class  Bif_lookupargsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *arg = nullptr;;
    RpgParser::ExpressionContext *array = nullptr;;
    RpgParser::ExpressionContext *startindex = nullptr;;
    RpgParser::ExpressionContext *numberelements = nullptr;;
    Bif_lookupargsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_lookupargsContext* bif_lookupargs();

  class  DurationCodeContext : public antlr4::ParserRuleContext {
  public:
    DurationCodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPLAT_D();
    antlr4::tree::TerminalNode *SPLAT_H();
    antlr4::tree::TerminalNode *SPLAT_HOURS();
    antlr4::tree::TerminalNode *SPLAT_DAYS();
    antlr4::tree::TerminalNode *SPLAT_M();
    antlr4::tree::TerminalNode *SPLAT_MINUTES();
    antlr4::tree::TerminalNode *SPLAT_MONTHS();
    antlr4::tree::TerminalNode *SPLAT_MN();
    antlr4::tree::TerminalNode *SPLAT_MS();
    antlr4::tree::TerminalNode *SPLAT_MSECONDS();
    antlr4::tree::TerminalNode *SPLAT_S();
    antlr4::tree::TerminalNode *SPLAT_SECONDS();
    antlr4::tree::TerminalNode *SPLAT_Y();
    antlr4::tree::TerminalNode *SPLAT_YEARS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DurationCodeContext* durationCode();

  class  Bif_timestampargsContext : public antlr4::ParserRuleContext {
  public:
    Bif_timestampargsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPLAT_ISO();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_timestampargsContext* bif_timestampargs();

  class  Bif_tlookupargsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *arg = nullptr;;
    RpgParser::ExpressionContext *searchtable = nullptr;;
    RpgParser::ExpressionContext *alttable = nullptr;;
    Bif_tlookupargsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_tlookupargsContext* bif_tlookupargs();

  class  Bif_absContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numericexpression = nullptr;;
    Bif_absContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_ABS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_absContext* bif_abs();

  class  Bif_addrContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *variable = nullptr;;
    antlr4::Token *stardata = nullptr;;
    Bif_addrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_ADDR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SPLAT_DATA();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_addrContext* bif_addr();

  class  Bif_allocContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *num = nullptr;;
    Bif_allocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_ALLOC();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_allocContext* bif_alloc();

  class  Bif_bitandContext : public antlr4::ParserRuleContext {
  public:
    Bif_bitandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_BITAND();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_bitandContext* bif_bitand();

  class  Bif_bitnotContext : public antlr4::ParserRuleContext {
  public:
    Bif_bitnotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_BITNOT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_bitnotContext* bif_bitnot();

  class  Bif_bitorContext : public antlr4::ParserRuleContext {
  public:
    Bif_bitorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_BITOR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_bitorContext* bif_bitor();

  class  Bif_bitxorContext : public antlr4::ParserRuleContext {
  public:
    Bif_bitxorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_BITXOR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_bitxorContext* bif_bitxor();

  class  Bif_charContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::Bif_charformatContext *format = nullptr;;
    Bif_charContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_CHAR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *COLON();
    Bif_charformatContext *bif_charformat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_charContext* bif_char();

  class  Bif_checkContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *comparator = nullptr;;
    RpgParser::ExpressionContext *base = nullptr;;
    RpgParser::ExpressionContext *start = nullptr;;
    Bif_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_CHECK();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_checkContext* bif_check();

  class  Bif_checkrContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *comparator = nullptr;;
    RpgParser::ExpressionContext *base = nullptr;;
    RpgParser::ExpressionContext *start = nullptr;;
    Bif_checkrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_CHECKR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_checkrContext* bif_checkr();

  class  Bif_dateContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::Bif_dateformatContext *dateformat = nullptr;;
    Bif_dateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_DATE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    Bif_dateformatContext *bif_dateformat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_dateContext* bif_date();

  class  Bif_daysContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numberexpression = nullptr;;
    Bif_daysContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_DAYS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_daysContext* bif_days();

  class  Bif_decContext : public antlr4::ParserRuleContext {
  public:
    Bif_decContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_DEC();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_decContext* bif_dec();

  class  Bif_dechContext : public antlr4::ParserRuleContext {
  public:
    Bif_dechContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_DECH();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_dechContext* bif_dech();

  class  Bif_decposContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numericexpression = nullptr;;
    Bif_decposContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_DECPOS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_decposContext* bif_decpos();

  class  Bif_diffContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *op1 = nullptr;;
    RpgParser::ExpressionContext *op2 = nullptr;;
    RpgParser::DurationCodeContext *format = nullptr;;
    Bif_diffContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_DIFF();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    DurationCodeContext *durationCode();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_diffContext* bif_diff();

  class  Bif_divContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numerator = nullptr;;
    RpgParser::ExpressionContext *denominator = nullptr;;
    Bif_divContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_DIV();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_divContext* bif_div();

  class  Bif_editcContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numeric = nullptr;;
    RpgParser::ExpressionContext *editcode = nullptr;;
    RpgParser::Bif_editccurrencyContext *currency = nullptr;;
    Bif_editcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_EDITC();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Bif_editccurrencyContext *bif_editccurrency();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_editcContext* bif_editc();

  class  Bif_editfltContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numericexpression = nullptr;;
    Bif_editfltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_EDITFLT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_editfltContext* bif_editflt();

  class  Bif_editwContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numeric = nullptr;;
    RpgParser::ExpressionContext *editword = nullptr;;
    Bif_editwContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_EDITW();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_editwContext* bif_editw();

  class  Bif_elemContext : public antlr4::ParserRuleContext {
  public:
    Bif_elemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_ELEM();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_elemContext* bif_elem();

  class  Bif_eofContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::IdentifierContext *filenameident = nullptr;;
    Bif_eofContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_EOF();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_eofContext* bif_eof();

  class  Bif_equalContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::IdentifierContext *filenameident = nullptr;;
    Bif_equalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_EQUAL();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_equalContext* bif_equal();

  class  Bif_errorContext : public antlr4::ParserRuleContext {
  public:
    Bif_errorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_ERROR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_errorContext* bif_error();

  class  Bif_fieldsContext : public antlr4::ParserRuleContext {
  public:
    Bif_fieldsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_FIELDS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_fieldsContext* bif_fields();

  class  Bif_floatContext : public antlr4::ParserRuleContext {
  public:
    Bif_floatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_FLOAT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_floatContext* bif_float();

  class  Bif_foundContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::IdentifierContext *filenameident = nullptr;;
    Bif_foundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_FOUND();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_foundContext* bif_found();

  class  Bif_graphContext : public antlr4::ParserRuleContext {
  public:
    Bif_graphContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_GRAPH();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *COLON();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_graphContext* bif_graph();

  class  Bif_handlerContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *handlingprocedure = nullptr;;
    RpgParser::ExpressionContext *communicationarea = nullptr;;
    Bif_handlerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_HANDLER();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_handlerContext* bif_handler();

  class  Bif_hoursContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numberexpression = nullptr;;
    Bif_hoursContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_HOURS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_hoursContext* bif_hours();

  class  Bif_intContext : public antlr4::ParserRuleContext {
  public:
    Bif_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_INT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_intContext* bif_int();

  class  Bif_inthContext : public antlr4::ParserRuleContext {
  public:
    Bif_inthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_INTH();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_inthContext* bif_inth();

  class  Bif_kdsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *datastructure = nullptr;;
    RpgParser::ExpressionContext *numkeys = nullptr;;
    Bif_kdsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_KDS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_kdsContext* bif_kds();

  class  Bif_lenContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *starmax = nullptr;;
    Bif_lenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_LEN();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SPLAT_MAX();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_lenContext* bif_len();

  class  Bif_lookupContext : public antlr4::ParserRuleContext {
  public:
    Bif_lookupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_LOOKUP();
    Bif_lookupargsContext *bif_lookupargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_lookupContext* bif_lookup();

  class  Bif_lookupltContext : public antlr4::ParserRuleContext {
  public:
    Bif_lookupltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_LOOKUPLT();
    Bif_lookupargsContext *bif_lookupargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_lookupltContext* bif_lookuplt();

  class  Bif_lookupleContext : public antlr4::ParserRuleContext {
  public:
    Bif_lookupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_LOOKUPLE();
    Bif_lookupargsContext *bif_lookupargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_lookupleContext* bif_lookuple();

  class  Bif_lookupgtContext : public antlr4::ParserRuleContext {
  public:
    Bif_lookupgtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_LOOKUPGT();
    Bif_lookupargsContext *bif_lookupargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_lookupgtContext* bif_lookupgt();

  class  Bif_lookupgeContext : public antlr4::ParserRuleContext {
  public:
    Bif_lookupgeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_LOOKUPGE();
    Bif_lookupargsContext *bif_lookupargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_lookupgeContext* bif_lookupge();

  class  Bif_minutesContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *minutes = nullptr;;
    Bif_minutesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_MINUTES();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_minutesContext* bif_minutes();

  class  Bif_monthsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numberexpression = nullptr;;
    Bif_monthsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_MONTHS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_monthsContext* bif_months();

  class  Bif_msecondsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numberexpression = nullptr;;
    Bif_msecondsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_MSECONDS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_msecondsContext* bif_mseconds();

  class  Bif_nullindContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::IdentifierContext *fieldname = nullptr;;
    Bif_nullindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_NULLIND();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_nullindContext* bif_nullind();

  class  Bif_occurContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::IdentifierContext *dsnname = nullptr;;
    Bif_occurContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_OCCUR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_occurContext* bif_occur();

  class  Bif_openContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::IdentifierContext *filenameident = nullptr;;
    Bif_openContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_OPEN();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_openContext* bif_open();

  class  Bif_paddrContext : public antlr4::ParserRuleContext {
  public:
    Bif_paddrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_PADDR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_paddrContext* bif_paddr();

  class  Bif_parmsContext : public antlr4::ParserRuleContext {
  public:
    Bif_parmsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_PARMS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_parmsContext* bif_parms();

  class  Bif_parmnumContext : public antlr4::ParserRuleContext {
  public:
    Bif_parmnumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_PARMNUM();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_parmnumContext* bif_parmnum();

  class  Bif_reallocContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::IdentifierContext *ptr = nullptr;;
    RpgParser::ExpressionContext *num = nullptr;;
    Bif_reallocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_REALLOC();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    IdentifierContext *identifier();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_reallocContext* bif_realloc();

  class  Bif_remContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numerator = nullptr;;
    RpgParser::ExpressionContext *denominator = nullptr;;
    Bif_remContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_REM();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_remContext* bif_rem();

  class  Bif_replaceContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *replacement = nullptr;;
    RpgParser::ExpressionContext *source = nullptr;;
    RpgParser::ExpressionContext *start = nullptr;;
    RpgParser::ExpressionContext *length = nullptr;;
    Bif_replaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_REPLACE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_replaceContext* bif_replace();

  class  Bif_scanContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *searcharg = nullptr;;
    RpgParser::ExpressionContext *source = nullptr;;
    RpgParser::ExpressionContext *start = nullptr;;
    Bif_scanContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_SCAN();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_scanContext* bif_scan();

  class  Bif_scanrplContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *scanstring = nullptr;;
    RpgParser::ExpressionContext *replacement = nullptr;;
    RpgParser::ExpressionContext *source = nullptr;;
    RpgParser::ExpressionContext *start = nullptr;;
    RpgParser::ExpressionContext *length = nullptr;;
    Bif_scanrplContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_SCANRPL();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_scanrplContext* bif_scanrpl();

  class  Bif_secondsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numberexpression = nullptr;;
    Bif_secondsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_SECONDS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_secondsContext* bif_seconds();

  class  Bif_shtdnContext : public antlr4::ParserRuleContext {
  public:
    Bif_shtdnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_SHTDN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_shtdnContext* bif_shtdn();

  class  Bif_sizeContext : public antlr4::ParserRuleContext {
  public:
    Bif_sizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_SIZE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *SPLAT_ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_sizeContext* bif_size();

  class  Bif_sqrtContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numeric = nullptr;;
    Bif_sqrtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_SQRT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_sqrtContext* bif_sqrt();

  class  Bif_statusContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::IdentifierContext *filenameident = nullptr;;
    Bif_statusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_STATUS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_statusContext* bif_status();

  class  Bif_strContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *basingpointer = nullptr;;
    RpgParser::ExpressionContext *maxlength = nullptr;;
    Bif_strContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_STR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_strContext* bif_str();

  class  Bif_subarrContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *array = nullptr;;
    RpgParser::ExpressionContext *start = nullptr;;
    RpgParser::ExpressionContext *numberelements = nullptr;;
    Bif_subarrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_SUBARR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_subarrContext* bif_subarr();

  class  Bif_subdtContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *value = nullptr;;
    RpgParser::DurationCodeContext *format = nullptr;;
    Bif_subdtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_SUBDT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();
    DurationCodeContext *durationCode();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_subdtContext* bif_subdt();

  class  Bif_substContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *string = nullptr;;
    RpgParser::ExpressionContext *start = nullptr;;
    RpgParser::ExpressionContext *length = nullptr;;
    Bif_substContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_SUBST();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_substContext* bif_subst();

  class  Bif_thisContext : public antlr4::ParserRuleContext {
  public:
    Bif_thisContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_THIS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_thisContext* bif_this();

  class  Bif_timeContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::Bif_timeformatContext *timeformat = nullptr;;
    Bif_timeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_TIME();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    Bif_timeformatContext *bif_timeformat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_timeContext* bif_time();

  class  Bif_timestampContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::Bif_timestampargsContext *format = nullptr;;
    Bif_timestampContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_TIMESTAMP();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    Bif_timestampargsContext *bif_timestampargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_timestampContext* bif_timestamp();

  class  Bif_tlookupContext : public antlr4::ParserRuleContext {
  public:
    Bif_tlookupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_TLOOKUP();
    Bif_tlookupargsContext *bif_tlookupargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_tlookupContext* bif_tlookup();

  class  Bif_tlookupltContext : public antlr4::ParserRuleContext {
  public:
    Bif_tlookupltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_TLOOKUPLT();
    Bif_tlookupargsContext *bif_tlookupargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_tlookupltContext* bif_tlookuplt();

  class  Bif_tlookupleContext : public antlr4::ParserRuleContext {
  public:
    Bif_tlookupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_TLOOKUPLE();
    Bif_tlookupargsContext *bif_tlookupargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_tlookupleContext* bif_tlookuple();

  class  Bif_tlookupgtContext : public antlr4::ParserRuleContext {
  public:
    Bif_tlookupgtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_TLOOKUPGT();
    Bif_tlookupargsContext *bif_tlookupargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_tlookupgtContext* bif_tlookupgt();

  class  Bif_tlookupgeContext : public antlr4::ParserRuleContext {
  public:
    Bif_tlookupgeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_TLOOKUPGE();
    Bif_tlookupargsContext *bif_tlookupargs();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_tlookupgeContext* bif_tlookupge();

  class  Bif_trimContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *string = nullptr;;
    RpgParser::ExpressionContext *trimcharacters = nullptr;;
    Bif_trimContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_TRIM();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_trimContext* bif_trim();

  class  Bif_trimlContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *string = nullptr;;
    RpgParser::ExpressionContext *trimcharacters = nullptr;;
    Bif_trimlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_TRIML();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_trimlContext* bif_triml();

  class  Bif_trimrContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *string = nullptr;;
    RpgParser::ExpressionContext *trimcharacters = nullptr;;
    Bif_trimrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_TRIMR();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_trimrContext* bif_trimr();

  class  Bif_ucs2Context : public antlr4::ParserRuleContext {
  public:
    Bif_ucs2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_UCS2();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_ucs2Context* bif_ucs2();

  class  Bif_unsContext : public antlr4::ParserRuleContext {
  public:
    Bif_unsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_UNS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_unsContext* bif_uns();

  class  Bif_unshContext : public antlr4::ParserRuleContext {
  public:
    Bif_unshContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_UNSH();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_unshContext* bif_unsh();

  class  Bif_xfootContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *arrayexpression = nullptr;;
    Bif_xfootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_XFOOT();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_xfootContext* bif_xfoot();

  class  Bif_xlateContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *from = nullptr;;
    RpgParser::ExpressionContext *to = nullptr;;
    RpgParser::ExpressionContext *string = nullptr;;
    RpgParser::ExpressionContext *startpos = nullptr;;
    Bif_xlateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_XLATE();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_xlateContext* bif_xlate();

  class  Bif_xmlContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *xmldocument = nullptr;;
    RpgParser::ExpressionContext *options = nullptr;;
    Bif_xmlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_XML();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_xmlContext* bif_xml();

  class  Bif_yearsContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::ExpressionContext *numberexpression = nullptr;;
    Bif_yearsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_YEARS();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_yearsContext* bif_years();

  class  Bif_codeContext : public antlr4::ParserRuleContext {
  public:
    Bif_codeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BIF_ABS();
    antlr4::tree::TerminalNode *BIF_ADDR();
    antlr4::tree::TerminalNode *BIF_ALLOC();
    antlr4::tree::TerminalNode *BIF_BITAND();
    antlr4::tree::TerminalNode *BIF_BITNOT();
    antlr4::tree::TerminalNode *BIF_BITOR();
    antlr4::tree::TerminalNode *BIF_BITXOR();
    antlr4::tree::TerminalNode *BIF_CHAR();
    antlr4::tree::TerminalNode *BIF_CHECK();
    antlr4::tree::TerminalNode *BIF_CHECKR();
    antlr4::tree::TerminalNode *BIF_DATE();
    antlr4::tree::TerminalNode *BIF_DAYS();
    antlr4::tree::TerminalNode *BIF_DEC();
    antlr4::tree::TerminalNode *BIF_DECH();
    antlr4::tree::TerminalNode *BIF_DECPOS();
    antlr4::tree::TerminalNode *BIF_DIFF();
    antlr4::tree::TerminalNode *BIF_DIV();
    antlr4::tree::TerminalNode *BIF_EDITC();
    antlr4::tree::TerminalNode *BIF_EDITFLT();
    antlr4::tree::TerminalNode *BIF_EDITW();
    antlr4::tree::TerminalNode *BIF_ELEM();
    antlr4::tree::TerminalNode *BIF_EOF();
    antlr4::tree::TerminalNode *BIF_EQUAL();
    antlr4::tree::TerminalNode *BIF_ERROR();
    antlr4::tree::TerminalNode *BIF_FIELDS();
    antlr4::tree::TerminalNode *BIF_FLOAT();
    antlr4::tree::TerminalNode *BIF_FOUND();
    antlr4::tree::TerminalNode *BIF_GRAPH();
    antlr4::tree::TerminalNode *BIF_HANDLER();
    antlr4::tree::TerminalNode *BIF_HOURS();
    antlr4::tree::TerminalNode *BIF_INT();
    antlr4::tree::TerminalNode *BIF_INTH();
    antlr4::tree::TerminalNode *BIF_KDS();
    antlr4::tree::TerminalNode *BIF_LEN();
    antlr4::tree::TerminalNode *BIF_LOOKUP();
    antlr4::tree::TerminalNode *BIF_LOOKUPLT();
    antlr4::tree::TerminalNode *BIF_LOOKUPLE();
    antlr4::tree::TerminalNode *BIF_LOOKUPGT();
    antlr4::tree::TerminalNode *BIF_LOOKUPGE();
    antlr4::tree::TerminalNode *BIF_MINUTES();
    antlr4::tree::TerminalNode *BIF_MONTHS();
    antlr4::tree::TerminalNode *BIF_MSECONDS();
    antlr4::tree::TerminalNode *BIF_NULLIND();
    antlr4::tree::TerminalNode *BIF_OCCUR();
    antlr4::tree::TerminalNode *BIF_OPEN();
    antlr4::tree::TerminalNode *BIF_PADDR();
    antlr4::tree::TerminalNode *BIF_PARMS();
    antlr4::tree::TerminalNode *BIF_PARMNUM();
    antlr4::tree::TerminalNode *BIF_REALLOC();
    antlr4::tree::TerminalNode *BIF_REM();
    antlr4::tree::TerminalNode *BIF_REPLACE();
    antlr4::tree::TerminalNode *BIF_SCAN();
    antlr4::tree::TerminalNode *BIF_SCANRPL();
    antlr4::tree::TerminalNode *BIF_SECONDS();
    antlr4::tree::TerminalNode *BIF_SHTDN();
    antlr4::tree::TerminalNode *BIF_SIZE();
    antlr4::tree::TerminalNode *BIF_SQRT();
    antlr4::tree::TerminalNode *BIF_STATUS();
    antlr4::tree::TerminalNode *BIF_STR();
    antlr4::tree::TerminalNode *BIF_SUBARR();
    antlr4::tree::TerminalNode *BIF_SUBDT();
    antlr4::tree::TerminalNode *BIF_SUBST();
    antlr4::tree::TerminalNode *BIF_THIS();
    antlr4::tree::TerminalNode *BIF_TIME();
    antlr4::tree::TerminalNode *BIF_TIMESTAMP();
    antlr4::tree::TerminalNode *BIF_TLOOKUP();
    antlr4::tree::TerminalNode *BIF_TLOOKUPLT();
    antlr4::tree::TerminalNode *BIF_TLOOKUPLE();
    antlr4::tree::TerminalNode *BIF_TLOOKUPGT();
    antlr4::tree::TerminalNode *BIF_TLOOKUPGE();
    antlr4::tree::TerminalNode *BIF_TRIM();
    antlr4::tree::TerminalNode *BIF_TRIML();
    antlr4::tree::TerminalNode *BIF_TRIMR();
    antlr4::tree::TerminalNode *BIF_UCS2();
    antlr4::tree::TerminalNode *BIF_UNS();
    antlr4::tree::TerminalNode *BIF_UNSH();
    antlr4::tree::TerminalNode *BIF_XFOOT();
    antlr4::tree::TerminalNode *BIF_XLATE();
    antlr4::tree::TerminalNode *BIF_XML();
    antlr4::tree::TerminalNode *BIF_YEARS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Bif_codeContext* bif_code();

  class  FreeContext : public antlr4::ParserRuleContext {
  public:
    FreeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exec_sqlContext *exec_sql();
    BaseExpressionContext *baseExpression();
    antlr4::tree::TerminalNode *FREE_SEMI();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FreeContext* free();

  class  C_freeContext : public antlr4::ParserRuleContext {
  public:
    C_freeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exec_sqlContext *exec_sql();
    ExpressionContext *expression();
    Free_linecommentsContext *free_linecomments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  C_freeContext* c_free();

  class  ControlContext : public antlr4::ParserRuleContext {
  public:
    ControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpCodeContext *opCode();
    Indicator_exprContext *indicator_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlContext* control();

  class  Exec_sqlContext : public antlr4::ParserRuleContext {
  public:
    Exec_sqlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXEC_SQL();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<antlr4::tree::TerminalNode *> WORDS();
    antlr4::tree::TerminalNode* WORDS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Exec_sqlContext* exec_sql();

  class  BaseExpressionContext : public antlr4::ParserRuleContext {
  public:
    BaseExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpContext *op();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseExpressionContext* baseExpression();

  class  IndicatorContext : public antlr4::ParserRuleContext {
  public:
    IndicatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPLAT_IN();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    BaseExpressionContext *baseExpression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IndicatorContext* indicator();

  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleExpressionContext *simpleExpression();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  AssignOperatorExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignOperatorExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleExpressionContext *simpleExpression();
    AssignmentOperatorContext *assignmentOperator();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignOperatorExpressionContext* assignOperatorExpression();

  class  EvalExpressionContext : public antlr4::ParserRuleContext {
  public:
    EvalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentExpressionContext *assignmentExpression();
    AssignOperatorExpressionContext *assignOperatorExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EvalExpressionContext* evalExpression();

  class  SimpleExpressionContext : public antlr4::ParserRuleContext {
  public:
    SimpleExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();
    BifContext *bif();
    IdentifierContext *identifier();
    NumberContext *number();
    LiteralContext *literal();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleExpressionContext* simpleExpression();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignContext *sign();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    NumberContext *number();
    PexpressionContext *pexpression();
    UnaryExpressionContext *unaryExpression();
    IndicatorContext *indicator();
    FunctionContext *function();
    IdentifierContext *identifier();
    LiteralContext *literal();
    BifContext *bif();
    antlr4::tree::TerminalNode *EXP();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *MULT_NOSPACE();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *EQUAL();
    AssignmentOperatorContext *assignmentOperator();
    ComparisonOperatorContext *comparisonOperator();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  PexpressionContext : public antlr4::ParserRuleContext {
  public:
    PexpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PexpressionContext* pexpression();

  class  Indicator_exprContext : public antlr4::ParserRuleContext {
  public:
    Indicator_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Indicator_exprContext* indicator_expr();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionNameContext *functionName();
    ArgsContext *args();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  ComparisonOperatorContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *NE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorContext* comparisonOperator();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CPLUS();
    antlr4::tree::TerminalNode *CMINUS();
    antlr4::tree::TerminalNode *CMULT();
    antlr4::tree::TerminalNode *CDIV();
    antlr4::tree::TerminalNode *CEXP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  AssignmentOperatorIncludingEqualContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorIncludingEqualContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CPLUS();
    antlr4::tree::TerminalNode *CMINUS();
    antlr4::tree::TerminalNode *CMULT();
    antlr4::tree::TerminalNode *CDIV();
    antlr4::tree::TerminalNode *CEXP();
    antlr4::tree::TerminalNode *EQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorIncludingEqualContext* assignmentOperatorIncludingEqual();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *content = nullptr;;
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteralEnd();
    antlr4::tree::TerminalNode *StringLiteralStart();
    antlr4::tree::TerminalNode *HexLiteralStart();
    antlr4::tree::TerminalNode *DateLiteralStart();
    antlr4::tree::TerminalNode *TimeLiteralStart();
    antlr4::tree::TerminalNode *TimeStampLiteralStart();
    antlr4::tree::TerminalNode *UCS2LiteralStart();
    antlr4::tree::TerminalNode *GraphicLiteralStart();
    std::vector<antlr4::tree::TerminalNode *> StringContent();
    antlr4::tree::TerminalNode* StringContent(size_t i);
    std::vector<antlr4::tree::TerminalNode *> StringEscapedQuote();
    antlr4::tree::TerminalNode* StringEscapedQuote(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PlusOrMinus();
    antlr4::tree::TerminalNode* PlusOrMinus(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Free_identifierContext *free_identifier();
    Multipart_identifierContext *multipart_identifier();
    AllContext *all();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  AllContext : public antlr4::ParserRuleContext {
  public:
    AllContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolicConstantsContext *symbolicConstants();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllContext* all();

  class  FunctionNameContext : public antlr4::ParserRuleContext {
  public:
    FunctionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Free_identifierContext *free_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionNameContext* functionName();

  class  Multipart_identifierContext : public antlr4::ParserRuleContext {
  public:
    RpgParser::Multipart_identifier_elementContext *multipart_identifier_elementContext = nullptr;;
    std::vector<Multipart_identifier_elementContext *> elements;;
    Multipart_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Multipart_identifier_elementContext *> multipart_identifier_element();
    Multipart_identifier_elementContext* multipart_identifier_element(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FREE_DOT();
    antlr4::tree::TerminalNode* FREE_DOT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multipart_identifierContext* multipart_identifier();

  class  Multipart_identifier_elementContext : public antlr4::ParserRuleContext {
  public:
    Multipart_identifier_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Free_identifierContext *free_identifier();
    Indexed_identifierContext *indexed_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multipart_identifier_elementContext* multipart_identifier_element();

  class  Indexed_identifierContext : public antlr4::ParserRuleContext {
  public:
    Indexed_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Free_identifierContext *free_identifier();
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ARRAY_REPEAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Indexed_identifierContext* indexed_identifier();

  class  OpCodeContext : public antlr4::ParserRuleContext {
  public:
    OpCodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Free_identifierContext *free_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpCodeContext* opCode();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *MINUS();
    std::vector<antlr4::tree::TerminalNode *> NumberPart();
    antlr4::tree::TerminalNode* NumberPart(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  Free_identifierContext : public antlr4::ParserRuleContext {
  public:
    Free_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ContinuedIdentifierContext *continuedIdentifier();
    IdOrKeywordContext *idOrKeyword();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *FREE_BY();
    antlr4::tree::TerminalNode *FREE_TO();
    antlr4::tree::TerminalNode *FREE_DOWNTO();
    Op_codeContext *op_code();
    antlr4::tree::TerminalNode *MULT_NOSPACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Free_identifierContext* free_identifier();

  class  ContinuedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ContinuedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdOrKeywordContext *> idOrKeyword();
    IdOrKeywordContext* idOrKeyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CONTINUATION();
    antlr4::tree::TerminalNode* CONTINUATION(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinuedIdentifierContext* continuedIdentifier();

  class  IdOrKeywordContext : public antlr4::ParserRuleContext {
  public:
    IdOrKeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *KEYWORD_ALIAS();
    antlr4::tree::TerminalNode *KEYWORD_ALIGN();
    antlr4::tree::TerminalNode *KEYWORD_ALT();
    antlr4::tree::TerminalNode *KEYWORD_ALTSEQ();
    antlr4::tree::TerminalNode *KEYWORD_ASCEND();
    antlr4::tree::TerminalNode *KEYWORD_BASED();
    antlr4::tree::TerminalNode *KEYWORD_CCSID();
    antlr4::tree::TerminalNode *KEYWORD_CLASS();
    antlr4::tree::TerminalNode *KEYWORD_CONST();
    antlr4::tree::TerminalNode *KEYWORD_CTDATA();
    antlr4::tree::TerminalNode *KEYWORD_DATFMT();
    antlr4::tree::TerminalNode *KEYWORD_DESCEND();
    antlr4::tree::TerminalNode *KEYWORD_DIM();
    antlr4::tree::TerminalNode *KEYWORD_DTAARA();
    antlr4::tree::TerminalNode *KEYWORD_EXPORT();
    antlr4::tree::TerminalNode *KEYWORD_EXT();
    antlr4::tree::TerminalNode *KEYWORD_EXTFLD();
    antlr4::tree::TerminalNode *KEYWORD_EXTFMT();
    antlr4::tree::TerminalNode *KEYWORD_EXTNAME();
    antlr4::tree::TerminalNode *KEYWORD_EXTPGM();
    antlr4::tree::TerminalNode *KEYWORD_EXTPROC();
    antlr4::tree::TerminalNode *KEYWORD_FROMFILE();
    antlr4::tree::TerminalNode *KEYWORD_IMPORT();
    antlr4::tree::TerminalNode *KEYWORD_INZ();
    antlr4::tree::TerminalNode *KEYWORD_LEN();
    antlr4::tree::TerminalNode *KEYWORD_LIKE();
    antlr4::tree::TerminalNode *KEYWORD_LIKEDS();
    antlr4::tree::TerminalNode *KEYWORD_LIKEFILE();
    antlr4::tree::TerminalNode *KEYWORD_LIKEREC();
    antlr4::tree::TerminalNode *KEYWORD_NOOPT();
    antlr4::tree::TerminalNode *KEYWORD_OCCURS();
    antlr4::tree::TerminalNode *KEYWORD_OPDESC();
    antlr4::tree::TerminalNode *KEYWORD_OPTIONS();
    antlr4::tree::TerminalNode *KEYWORD_OVERLAY();
    antlr4::tree::TerminalNode *KEYWORD_PACKEVEN();
    antlr4::tree::TerminalNode *KEYWORD_PERRCD();
    antlr4::tree::TerminalNode *KEYWORD_PREFIX();
    antlr4::tree::TerminalNode *KEYWORD_POS();
    antlr4::tree::TerminalNode *KEYWORD_PROCPTR();
    antlr4::tree::TerminalNode *KEYWORD_QUALIFIED();
    antlr4::tree::TerminalNode *KEYWORD_RTNPARM();
    antlr4::tree::TerminalNode *KEYWORD_STATIC();
    antlr4::tree::TerminalNode *KEYWORD_TEMPLATE();
    antlr4::tree::TerminalNode *KEYWORD_TIMFMT();
    antlr4::tree::TerminalNode *KEYWORD_TOFILE();
    antlr4::tree::TerminalNode *KEYWORD_VALUE();
    antlr4::tree::TerminalNode *KEYWORD_VARYING();
    antlr4::tree::TerminalNode *KEYWORD_BLOCK();
    antlr4::tree::TerminalNode *KEYWORD_COMMIT();
    antlr4::tree::TerminalNode *KEYWORD_DEVID();
    antlr4::tree::TerminalNode *KEYWORD_EXTDESC();
    antlr4::tree::TerminalNode *KEYWORD_EXTFILE();
    antlr4::tree::TerminalNode *KEYWORD_EXTIND();
    antlr4::tree::TerminalNode *KEYWORD_EXTMBR();
    antlr4::tree::TerminalNode *KEYWORD_FORMLEN();
    antlr4::tree::TerminalNode *KEYWORD_FORMOFL();
    antlr4::tree::TerminalNode *KEYWORD_IGNORE();
    antlr4::tree::TerminalNode *KEYWORD_INCLUDE();
    antlr4::tree::TerminalNode *KEYWORD_INDDS();
    antlr4::tree::TerminalNode *KEYWORD_INFDS();
    antlr4::tree::TerminalNode *KEYWORD_INFSR();
    antlr4::tree::TerminalNode *KEYWORD_KEYLOC();
    antlr4::tree::TerminalNode *KEYWORD_MAXDEV();
    antlr4::tree::TerminalNode *KEYWORD_OFLIND();
    antlr4::tree::TerminalNode *KEYWORD_PASS();
    antlr4::tree::TerminalNode *KEYWORD_PGMNAME();
    antlr4::tree::TerminalNode *KEYWORD_PLIST();
    antlr4::tree::TerminalNode *KEYWORD_PRTCTL();
    antlr4::tree::TerminalNode *KEYWORD_RAFDATA();
    antlr4::tree::TerminalNode *KEYWORD_RECNO();
    antlr4::tree::TerminalNode *KEYWORD_RENAME();
    antlr4::tree::TerminalNode *KEYWORD_SAVEDS();
    antlr4::tree::TerminalNode *KEYWORD_SAVEIND();
    antlr4::tree::TerminalNode *KEYWORD_SFILE();
    antlr4::tree::TerminalNode *KEYWORD_SLN();
    antlr4::tree::TerminalNode *KEYWORD_USROPN();
    antlr4::tree::TerminalNode *KEYWORD_DISK();
    antlr4::tree::TerminalNode *KEYWORD_WORKSTN();
    antlr4::tree::TerminalNode *KEYWORD_PRINTER();
    antlr4::tree::TerminalNode *KEYWORD_SPECIAL();
    antlr4::tree::TerminalNode *KEYWORD_KEYED();
    antlr4::tree::TerminalNode *KEYWORD_USAGE();
    antlr4::tree::TerminalNode *KEYWORD_PSDS();
    antlr4::tree::TerminalNode *UDATE();
    antlr4::tree::TerminalNode *UMONTH();
    antlr4::tree::TerminalNode *UYEAR();
    antlr4::tree::TerminalNode *UDAY();
    DatatypeNameContext *datatypeName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdOrKeywordContext* idOrKeyword();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  SymbolicConstantsContext : public antlr4::ParserRuleContext {
  public:
    SymbolicConstantsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPLAT_ALL();
    antlr4::tree::TerminalNode *SPLAT_NONE();
    antlr4::tree::TerminalNode *SPLAT_NO();
    antlr4::tree::TerminalNode *SPLAT_YES();
    antlr4::tree::TerminalNode *SPLAT_ILERPG();
    antlr4::tree::TerminalNode *SPLAT_COMPAT();
    antlr4::tree::TerminalNode *SPLAT_CRTBNDRPG();
    antlr4::tree::TerminalNode *SPLAT_CRTRPGMOD();
    antlr4::tree::TerminalNode *SPLAT_VRM();
    antlr4::tree::TerminalNode *SPLAT_ALLG();
    antlr4::tree::TerminalNode *SPLAT_ALLU();
    antlr4::tree::TerminalNode *SPLAT_ALLTHREAD();
    antlr4::tree::TerminalNode *SPLAT_ALLX();
    antlr4::tree::TerminalNode *SPLAT_BLANKS();
    antlr4::tree::TerminalNode *SPLAT_CANCL();
    antlr4::tree::TerminalNode *SPLAT_CYMD();
    antlr4::tree::TerminalNode *SPLAT_CMDY();
    antlr4::tree::TerminalNode *SPLAT_CDMY();
    antlr4::tree::TerminalNode *SPLAT_MDY();
    antlr4::tree::TerminalNode *SPLAT_DMY();
    antlr4::tree::TerminalNode *SPLAT_DFT();
    antlr4::tree::TerminalNode *SPLAT_YMD();
    antlr4::tree::TerminalNode *SPLAT_JUL();
    antlr4::tree::TerminalNode *SPLAT_INPUT();
    antlr4::tree::TerminalNode *SPLAT_OUTPUT();
    antlr4::tree::TerminalNode *SPLAT_ISO();
    antlr4::tree::TerminalNode *SPLAT_KEY();
    antlr4::tree::TerminalNode *SPLAT_NEXT();
    antlr4::tree::TerminalNode *SPLAT_USA();
    antlr4::tree::TerminalNode *SPLAT_EUR();
    antlr4::tree::TerminalNode *SPLAT_JIS();
    antlr4::tree::TerminalNode *SPLAT_JAVA();
    antlr4::tree::TerminalNode *SPLAT_DATE();
    antlr4::tree::TerminalNode *SPLAT_DAY();
    antlr4::tree::TerminalNode *SPlAT_DETC();
    antlr4::tree::TerminalNode *SPLAT_DETL();
    antlr4::tree::TerminalNode *SPLAT_DTAARA();
    antlr4::tree::TerminalNode *SPLAT_END();
    antlr4::tree::TerminalNode *SPLAT_ENTRY();
    antlr4::tree::TerminalNode *SPLAT_EQUATE();
    antlr4::tree::TerminalNode *SPLAT_EXTDFT();
    antlr4::tree::TerminalNode *SPLAT_EXT();
    antlr4::tree::TerminalNode *SPLAT_FILE();
    antlr4::tree::TerminalNode *SPLAT_GETIN();
    antlr4::tree::TerminalNode *SPLAT_HIVAL();
    antlr4::tree::TerminalNode *SPLAT_INIT();
    antlr4::tree::TerminalNode *SPLAT_INDICATOR();
    antlr4::tree::TerminalNode *SPLAT_INZSR();
    antlr4::tree::TerminalNode *SPLAT_IN();
    antlr4::tree::TerminalNode *SPLAT_JOBRUN();
    antlr4::tree::TerminalNode *SPLAT_JOB();
    antlr4::tree::TerminalNode *SPLAT_LDA();
    antlr4::tree::TerminalNode *SPLAT_LIKE();
    antlr4::tree::TerminalNode *SPLAT_LONGJUL();
    antlr4::tree::TerminalNode *SPLAT_LOVAL();
    antlr4::tree::TerminalNode *SPLAT_MONTH();
    antlr4::tree::TerminalNode *SPLAT_NOIND();
    antlr4::tree::TerminalNode *SPLAT_NOKEY();
    antlr4::tree::TerminalNode *SPLAT_NULL();
    antlr4::tree::TerminalNode *SPLAT_OFL();
    antlr4::tree::TerminalNode *SPLAT_ON();
    antlr4::tree::TerminalNode *SPLAT_ONLY();
    antlr4::tree::TerminalNode *SPLAT_OFF();
    antlr4::tree::TerminalNode *SPLAT_PDA();
    antlr4::tree::TerminalNode *SPLAT_PLACE();
    antlr4::tree::TerminalNode *SPLAT_PSSR();
    antlr4::tree::TerminalNode *SPLAT_ROUTINE();
    antlr4::tree::TerminalNode *SPLAT_START();
    antlr4::tree::TerminalNode *SPLAT_SYS();
    antlr4::tree::TerminalNode *SPLAT_TERM();
    antlr4::tree::TerminalNode *SPLAT_TOTC();
    antlr4::tree::TerminalNode *SPLAT_TOTL();
    antlr4::tree::TerminalNode *SPLAT_USER();
    antlr4::tree::TerminalNode *SPLAT_VAR();
    antlr4::tree::TerminalNode *SPLAT_YEAR();
    antlr4::tree::TerminalNode *SPLAT_ZEROS();
    antlr4::tree::TerminalNode *SPLAT_HMS();
    antlr4::tree::TerminalNode *SPLAT_INLR();
    antlr4::tree::TerminalNode *SPLAT_INOF();
    antlr4::tree::TerminalNode *SPLAT_DATA();
    antlr4::tree::TerminalNode *SPLAT_ASTFILL();
    antlr4::tree::TerminalNode *SPLAT_CURSYM();
    antlr4::tree::TerminalNode *SPLAT_MAX();
    antlr4::tree::TerminalNode *SPLAT_LOCK();
    antlr4::tree::TerminalNode *SPLAT_PROGRAM();
    antlr4::tree::TerminalNode *SPLAT_D();
    antlr4::tree::TerminalNode *SPLAT_DAYS();
    antlr4::tree::TerminalNode *SPLAT_H();
    antlr4::tree::TerminalNode *SPLAT_HOURS();
    antlr4::tree::TerminalNode *SPLAT_M();
    antlr4::tree::TerminalNode *SPLAT_MINUTES();
    antlr4::tree::TerminalNode *SPLAT_MONTHS();
    antlr4::tree::TerminalNode *SPLAT_MN();
    antlr4::tree::TerminalNode *SPLAT_MS();
    antlr4::tree::TerminalNode *SPLAT_MSECONDS();
    antlr4::tree::TerminalNode *SPLAT_S();
    antlr4::tree::TerminalNode *SPLAT_SECONDS();
    antlr4::tree::TerminalNode *SPLAT_Y();
    antlr4::tree::TerminalNode *SPLAT_YEARS();
    antlr4::tree::TerminalNode *SPLAT_EXTDESC();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SymbolicConstantsContext* symbolicConstants();

  class  TargetContext : public antlr4::ParserRuleContext {
  public:
    TargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TargetContext() = default;
    void copyFrom(TargetContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  GlobalIndicatorTargetContext : public TargetContext {
  public:
    GlobalIndicatorTargetContext(TargetContext *ctx);

    antlr4::tree::TerminalNode *SPLAT_IN();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  QualifiedTargetContext : public TargetContext {
  public:
    QualifiedTargetContext(TargetContext *ctx);

    RpgParser::IdOrKeywordContext *container = nullptr;
    RpgParser::IdOrKeywordContext *field = nullptr;
    RpgParser::IdOrKeywordContext *fieldName = nullptr;
    antlr4::tree::TerminalNode *FREE_DOT();
    std::vector<IdOrKeywordContext *> idOrKeyword();
    IdOrKeywordContext* idOrKeyword(size_t i);
    antlr4::tree::TerminalNode *DOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IndicatorTargetContext : public TargetContext {
  public:
    IndicatorTargetContext(TargetContext *ctx);

    antlr4::Token *indic = nullptr;
    antlr4::tree::TerminalNode *SPLAT_INDICATOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SimpleTargetContext : public TargetContext {
  public:
    SimpleTargetContext(TargetContext *ctx);

    RpgParser::IdOrKeywordContext *name = nullptr;
    IdOrKeywordContext *idOrKeyword();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IndexedTargetContext : public TargetContext {
  public:
    IndexedTargetContext(TargetContext *ctx);

    RpgParser::TargetContext *base = nullptr;
    RpgParser::ExpressionContext *index = nullptr;
    antlr4::tree::TerminalNode *OPEN_PAREN();
    antlr4::tree::TerminalNode *CLOSE_PAREN();
    TargetContext *target();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubstTargetContext : public TargetContext {
  public:
    SubstTargetContext(TargetContext *ctx);

    Bif_substContext *bif_subst();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TargetContext* target();
  TargetContext* target(int precedence);

  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool targetSempred(TargetContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpprpg
