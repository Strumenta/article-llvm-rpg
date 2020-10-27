
// Generated from src/antlr/RpgLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpprpg {


class  RpgLexer : public antlr4::Lexer {
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
    HS_CONTINUATION = 753
  };

  enum {
    DirectiveTitle = 1, DirectiveMode = 2, SKIP_REMAINING_WS = 3, EndOfSourceMode = 4, 
    OpCode = 5, FREE = 6, NumberContinuation = 7, FixedOpCodes = 8, FREE_ENDED = 9, 
    InStringMode = 10, InDoubleStringMode = 11, EatCommentLinesPlus = 12, 
    EatCommentLines = 13, InFactorStringMode = 14, FIXED_CommentMode = 15, 
    FIXED_CommentMode_HIDDEN = 16, SQL_MODE = 17, FIXED_ProcedureSpec = 18, 
    FIXED_DefSpec = 19, CONTINUATION_ELIPSIS = 20, FIXED_FileSpec = 21, 
    FIXED_OutputSpec = 22, FIXED_OutputSpec_PGM1 = 23, FIXED_OutputSpec_PGMFIELD = 24, 
    FIXED_CalcSpec = 25, FixedOpExtender = 26, FixedOpExtender2 = 27, FreeOpExtender = 28, 
    FreeOpExtender2 = 29, OnOffIndicatorMode = 30, IndicatorMode = 31, FIXED_CalcSpec_SQL = 32, 
    FIXED_CalcSpec_SQL_Comments = 33, FIXED_CalcSpec_X2 = 34, FIXED_InputSpec = 35, 
    FIXED_I_EXT_FIELD_SPEC = 36, FIXED_I_EXT_REC_SPEC = 37, FIXED_I_FIELD_SPEC = 38, 
    HeaderSpecMode = 39
  };

  RpgLexer(antlr4::CharStream *input);
  ~RpgLexer();


  private:
    	int lastTokenType = 0;
  public:
  bool isEndOfToken() {

    		bool b = false;
    	    switch(_input->LA(1)) {
              case 32:
    	        case ';':
    	        case '(':
                  b = true;
                  break;

    	    }
    		//std::string s = " ;(";
    		//printf("isEndOfToken: '%d' -> %d\n",_input->LA(1),b);
    		return   b;
      	}
      void emit(std::unique_ptr<antlr4::Token> t) {
    		token = std::move(t);
          lastTokenType = token->getType();
    	}
    	int getLastTokenType() {
    		return lastTokenType;
    	}
  	std::string cpptrim(const std::string &s) {
  		auto start = s.begin();
  		while (start != s.end() && /*std::isspace(*start)*/ *start == ' ') {
  			start++;
  		}

  		auto end = s.end();
  		do {
  			end--;
  		} while (std::distance(start, end) > 0 && /*std::isspace(*end)*/ *end == ' ');

  		return std::string(start, end + 1);
  	}

  	bool contains(std::vector<size_t> &v,size_t k) {
  		return std::find(v.begin(), v.end(), k) != v.end();
  	}

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void DIR_EOLAction(antlr4::RuleContext *context, size_t actionIndex);
  void FREE_CONTAction(antlr4::RuleContext *context, size_t actionIndex);
  void C_FREE_CONTINUATION_DOTSAction(antlr4::RuleContext *context, size_t actionIndex);
  void D_FREE_CONTINUATION_DOTSAction(antlr4::RuleContext *context, size_t actionIndex);
  void StringEscapedQuoteAction(antlr4::RuleContext *context, size_t actionIndex);
  void COMMENTS_TEXTAction(antlr4::RuleContext *context, size_t actionIndex);
  void PS_NAMEAction(antlr4::RuleContext *context, size_t actionIndex);
  void PS_CONTINUATION_NAMEAction(antlr4::RuleContext *context, size_t actionIndex);
  void CONTINUATION_NAMEAction(antlr4::RuleContext *context, size_t actionIndex);
  void NAMEAction(antlr4::RuleContext *context, size_t actionIndex);
  void CS_OperationExtenderCloseAction(antlr4::RuleContext *context, size_t actionIndex);
  void CS_FixedOperationExtender2CloseAction(antlr4::RuleContext *context, size_t actionIndex);
  void CSQL_ENDAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool END_SOURCESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LEAD_WS5Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool LEAD_WS5_CommentsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_SPECSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool COMMENT_SPEC_FIXEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DS_FIXEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_FIXEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_FIXEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FIXEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_ExecSQLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_FIXEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PS_FIXEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool HS_FIXEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BLANK_LINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BLANK_SPEC_LINE1Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BLANK_SPEC_LINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool COMMENTSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EMPTY_LINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIRECTIVESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_FREESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_ENDFREESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_TITLESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_EJECTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_SPACESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_SETSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_RESTORESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_COPYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_INCLUDESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_EOFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_DEFINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_UNDEFINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_IFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_ELSESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_ELSEIFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DIR_ENDIFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NEXT_ARRAYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ACQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_BEGSRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_CALLPSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_CHAINSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_CLEARSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_CLOSESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_COMMITSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_DEALLOCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_DELETESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_DOUSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_DOWSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_DSPLYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_DUMPSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ELSESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ELSEIFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ENDDOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ENDFORSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ENDIFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ENDMONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ENDSLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ENDSRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_EVALSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_EVALRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_EVAL_CORRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_EXCEPTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_EXFMTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_EXSRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_FEODSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_FORSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_FORCESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_IFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_INSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ITERSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_LEAVESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_LEAVESRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_MONITORSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_NEXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ON_ERRORSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_OPENSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_OTHERSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_OUTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_POSTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_READSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_READCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_READESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_READPSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_READPESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_RELSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_RESETSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_RETURNSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_ROLBKSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_SELECTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_SETGTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_SETLLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_SORTASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_TESTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_UNLOCKSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_UPDATESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_WHENSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_WRITESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_XML_INTOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OP_XML_SAXSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_COMMENTS80Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_DSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_HSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_HOURSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_DAYSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_MSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_MINUTESSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_MNSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_MSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_MSECONDSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_SSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_SECONDSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_YSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool SPLAT_YEARSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool KEYWORD_SQLTYPESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool ARRAY_REPEATSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MULT_NOSPACESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool MULTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_NUMBER_CONTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_COMMENTSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_CONTINUATIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool C_FREE_CONTINUATION_DOTSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool D_FREE_CONTINUATION_DOTSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool C_FREE_CONTINUATIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool D_FREE_CONTINUATIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool F_FREE_CONTINUATIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_LEAD_WS5Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_LEAD_WS5_CommentsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_FREE_SPECSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool C_FREE_NEWLINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool O_FREE_NEWLINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool D_FREE_NEWLINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool F_FREE_NEWLINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_NEWLINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool StringContentSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FIXED_FREE_STRING_CONTINUATIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FIXED_FREE_STRING_CONTINUATION_MINUSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_STRING_CONTINUATIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FREE_STRING_CONTINUATION_MINUSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EatCommentLines_WhiteSpaceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EatCommentLines_StarCommentSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FIXED_FREE_STRING_CONTINUATION_Part2Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool InFactor_StringContentSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool InFactor_StringEscapedQuoteSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool InFactor_StringLiteralEndSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool InFactor_EndFactorSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PS_NAMESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PS_RESERVED1Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PS_BEGINSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PS_ENDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PS_RESERVED2Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PS_KEYWORDSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool PS_WS80Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BLANK_SPECSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CONTINUATION_NAMESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NAMESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool EXTERNAL_DESCRIPTIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DATA_STRUCTURE_TYPESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEF_TYPE_CSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEF_TYPE_PISempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEF_TYPE_PRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEF_TYPE_DSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEF_TYPE_SSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEF_TYPE_BLANKSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DEF_TYPESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FROM_POSITIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool TO_POSITIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DATA_TYPESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool DECIMAL_POSITIONSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool RESERVEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool D_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool D_COMMENTS80Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CE_COMMENTS80Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CE_D_SPEC_FIXEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CE_P_SPEC_FIXEDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_RecordNameSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_TypeSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_DesignationSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_EndOfFileSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_AddutionSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_SequenceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_FormatSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_RecordLengthSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_LimitsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_LengthOfKeySempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_RecordAddressTypeSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_OrganizationSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_DeviceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_ReservedSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool FS_WhiteSpaceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_RecordNameSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_FieldReservedSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_TypeSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_AddDeleteSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_FetchOverflowSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_ExceptNameSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_Space3Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_RemainingSpaceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool O1_ExceptNameSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool O1_RemainingSpaceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_FieldNameSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_EditNamesSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_BlankAfterSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_Reserved1Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_EndPositionSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool OS_DataFormatSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ALLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_NONESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ILERPGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_CRTBNDRPGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_CRTRPGMODSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_VRMSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ALLGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ALLUSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ALLXSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_BLANKSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_CANCLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_CYMDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_CMDYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_CDMYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_MDYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_DMYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_YMDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_JULSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ISOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_USASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_EURSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_JISSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_DATESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_DAYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_DETCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_DETLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_DTAARASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ENDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ENTRYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_EQUATESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_EXTDFTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_EXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_FILESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_GETINSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_HIVALSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_INITSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_INDICATORSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_INZSRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_INSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_JOBRUNSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_JOBSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_LDASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_LIKESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_LONGJULSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_LOVALSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_MONTHSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_NOINDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_NOKEYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_NULLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_OFLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_OFFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_PDASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_PLACESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_PSSRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ROUTINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_STARTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_SYSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_TERMSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_TOTCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_TOTLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_USERSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_VARSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_YEARSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_ZEROSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_HMSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_INLRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_INOFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_DSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_DAYSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_HSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_HOURSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_MINUTESSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_MONTHSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_MSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_MNSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_MSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_MSECONDSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_SECONDSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_YEARSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor1_SPLAT_YSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ALLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_NONESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ILERPGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_CRTBNDRPGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_CRTRPGMODSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_VRMSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ALLGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ALLUSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ALLXSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_BLANKSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_CANCLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_CYMDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_CMDYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_CDMYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_MDYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_DMYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_YMDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_JULSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ISOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_USASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_EURSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_JISSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_DATESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_DAYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_DETCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_DETLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_DTAARASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ENDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ENTRYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_EQUATESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_EXTDFTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_EXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_FILESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_GETINSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_HIVALSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_INITSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_INDICATORSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_INZSRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_INSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_JOBRUNSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_JOBSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_LDASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_LIKESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_LONGJULSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_LOVALSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_MONTHSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_NOINDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_NOKEYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_NULLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_OFLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_OFFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_PDASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_PLACESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_PSSRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ROUTINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_STARTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_SYSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_TERMSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_TOTCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_TOTLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_USERSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_VARSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_YEARSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_ZEROSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_HMSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_INLRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_INOFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_DSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_DAYSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_HSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_HOURSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_MINUTESSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_MONTHSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_MSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_MNSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_MSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_MSECONDSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_SECONDSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_YEARSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Factor2_SPLAT_YSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_DSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_DAYSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_HSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_HOURSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_MINUTESSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_MONTHSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_MSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_MNSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_MSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_MSECONDSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_SECONDSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_YEARSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_YSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Result_SPLAT_SSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_BlankFactorSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_BlankFactor_EOLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FactorWsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FactorWs2Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FactorContentHexLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FactorContentDateLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FactorContentTimeLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FactorContentGraphicLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FactorContentUCS2LiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FactorContentStringLiteralSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FactorContentSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_ResultContentSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FactorColonSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_OperationAndExtender_BlankSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_OperationAndExtender_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ACQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ADDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ADDDURSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ALLOCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ANDEQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ANDNESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ANDLESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ANDLTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ANDGESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ANDGTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ANDxxSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_BEGSRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_BITOFFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_BITONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CABxxSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CABEQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CABNESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CABLESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CABLTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CABGESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CABGTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CALLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CALLBSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CALLPSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CASEQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CASNESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CASLESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CASLTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CASGESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CASGTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CASSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CATSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CHAINSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CHECKSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CHECKRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CLEARSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_CLOSESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_COMMITSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_COMPSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DEALLOCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DEFINESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DELETESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DIVSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOUSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOUEQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOUNESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOULESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOULTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOUGESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOUGTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOWSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOWEQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOWNESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOWLESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOWLTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOWGESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DOWGTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DSPLYSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_DUMPSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ELSESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ELSEIFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ENDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ENDCSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ENDDOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ENDFORSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ENDIFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ENDMONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ENDSLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ENDSRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_EVALSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_EVALRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_EVAL_CORRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_EXCEPTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_EXFMTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_EXSRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_EXTRCTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_FEODSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_FORSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_FORCESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_GOTOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_IFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_IFEQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_IFNESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_IFLESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_IFLTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_IFGESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_IFGTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_INSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ITERSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_KFLDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_KLISTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_LEAVESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_LEAVESRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_LOOKUPSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_MHHZOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_MHLZOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_MLHZOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_MLLZOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_MONITORSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_MOVESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_MOVEASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_MOVELSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_MULTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_MVRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_NEXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_OCCURSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ON_ERRORSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_OPENSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_OREQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ORNESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ORLESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ORLTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ORGESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ORGTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_OTHERSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_OUTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_PARMSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_PLISTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_POSTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_READSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_READCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_READESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_READPSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_READPESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_REALLOCSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_RELSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_RESETSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_RETURNSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_ROLBKSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SCANSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SELECTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SETGTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SETLLSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SETOFFSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SETONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SORTASempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SHTDNSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SQRTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SUBSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SUBDURSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_SUBSTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_TAGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_TESTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_TESTBSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_TESTNSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_TESTZSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_TIMESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_UNLOCKSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_UPDATESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_WHENSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_WHENEQSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_WHENNESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_WHENLESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_WHENLTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_WHENGESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_WHENGTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_WRITESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_XFOOTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_XLATESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_XML_INTOSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_XML_SAXSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_Z_ADDSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_Operation_Z_SUBSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_OperationAndExtenderSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_OperationExtenderOpenSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_OperationExtenderCloseSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FieldLengthSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_DecimalPositionsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_WhiteSpaceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_CommentsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FixedCommentsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FixedOperationAndExtender_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FixedOperationExtenderOpenSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FixedOperationExtenderReturnSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FixedOperationAndExtender2_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FixedOperationAndExtender2Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FixedOperationExtender2CloseSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CS_FixedOperationExtender2ReturnSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool NewLineIndicatorSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CSQL_EMPTY_TEXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CSQL_TEXTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CSQL_LEADBLANKSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CSQL_LEADWSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CSQLC_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool CSQLC_CommentsSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool C2_FACTOR2_CONTSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool C2_FACTOR2Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool C2_OTHERSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_BLANK_SPECSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_FileNameSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_FieldReservedSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_ExtFieldReservedSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_LogicalRelationshipSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_ExtRecordReservedSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_SequenceSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_NumberSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_OptionSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_RecordIdCodeSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IS_COMMENTSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IF_NameSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IF_ReservedSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IF_FieldNameSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IF_Reserved2Sempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IF_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IR_WSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IFD_DATA_ATTRSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IFD_DATETIME_SEPSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IFD_DATA_FORMATSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IFD_FIELD_LOCATIONSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IFD_DECIMAL_POSITIONSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IFD_FIELD_NAMESempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IFD_CONTROL_LEVELSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IFD_MATCHING_FIELDSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IFD_BLANKSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool IFD_COMMENTSSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpprpg
