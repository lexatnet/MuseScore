/////////////////////////////////////////////////////////////////////////////
// Authors:     Laurent Pugin and Rodolfo Zitellini
// Created:     2014
// Copyright (c) Authors and others. All rights reserved.
//
// Code generated using a modified version of libmei
// by Andrew Hankinson, Alastair Porter, and Others
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// NOTE: this file was generated with the Verovio libmei version and
// should not be edited because changes will be lost.
/////////////////////////////////////////////////////////////////////////////

#ifndef __LIBMEI_ATT_CLASSES_H__
#define __LIBMEI_ATT_CLASSES_H__

//----------------------------------------------------------------------------

namespace libmei {

enum AttClassId {
    ATT_CLASS_min = 0,
    ATT_ARPEGLOG,
    ATT_BEAMSECONDARY,
    ATT_BEATRPTLOG,
    ATT_CUTOUT,
    ATT_EXPANDABLE,
    ATT_GRACEGRPLOG,
    ATT_GRACED,
    ATT_HAIRPINLOG,
    ATT_HARPPEDALLOG,
    ATT_MEASURELOG,
    ATT_NUMBERPLACEMENT,
    ATT_NUMBERED,
    ATT_OCTAVELOG,
    ATT_PEDALLOG,
    ATT_TREMFORM,
    ATT_TREMMEASURED,
    ATT_MORDENTLOG,
    ATT_ORNAMENTACCID,
    ATT_TURNLOG,
    ATT_EXTSYMAUTH,
    ATT_EXTSYMNAMES,
    ATT_FINGGRPLOG,
    ATT_ACCIDENTALGES,
    ATT_ATTACKING,
    ATT_NOTEGES,
    ATT_ORNAMENTACCIDGES,
    ATT_SOUNDLOCATION,
    ATT_HARMLOG,
    ATT_CHANNELIZED,
    ATT_INSTRUMENTIDENT,
    ATT_MIDIINSTRUMENT,
    ATT_MIDITEMPO,
    ATT_MIDIVALUE,
    ATT_MIDIVALUE2,
    ATT_MIDIVELOCITY,
    ATT_TIMEBASE,
    ATT_ACCIDLOG,
    ATT_ACCIDENTAL,
    ATT_ARTICULATION,
    ATT_AUGMENTDOTS,
    ATT_CALENDARED,
    ATT_CLEFLOG,
    ATT_CLEFSHAPE,
    ATT_CLEFFINGLOG,
    ATT_COLOR,
    ATT_CUE,
    ATT_CURVATURE,
    ATT_DATAPOINTING,
    ATT_DATABLE,
    ATT_DURATIONADDITIVE,
    ATT_DURATIONLOG,
    ATT_DURATIONRATIO,
    ATT_EXTENDER,
    ATT_FORMEWORK,
    ATT_HORIZONTALALIGN,
    ATT_KEYSIGDEFAULTLOG,
    ATT_LABELLED,
    ATT_LANG,
    ATT_LAYERIDENT,
    ATT_LINELOC,
    ATT_LINEREND,
    ATT_LINERENDBASE,
    ATT_MEIVERSION,
    ATT_METERCONFORMANCEBAR,
    ATT_METERSIGDEFAULTLOG,
    ATT_MMTEMPO,
    ATT_NINTEGER,
    ATT_NNUMBERLIKE,
    ATT_NAME,
    ATT_OCTAVE,
    ATT_OCTAVEDISPLACEMENT,
    ATT_PITCH,
    ATT_PLACEMENTRELEVENT,
    ATT_PLACEMENTRELSTAFF,
    ATT_PLIST,
    ATT_REPEATMARKLOG,
    ATT_SCALABLE,
    ATT_STAFFDEFLOG,
    ATT_STAFFGROUPINGSYM,
    ATT_STAFFIDENT,
    ATT_STARTENDID,
    ATT_STARTID,
    ATT_STEMS,
    ATT_SYLLOG,
    ATT_TEMPOLOG,
    ATT_TEXTRENDITION,
    ATT_TIMESTAMPLOG,
    ATT_TIMESTAMP2LOG,
    ATT_TRANSPOSITION,
    ATT_TUNING,
    ATT_TYPED,
    ATT_TYPOGRAPHY,
    ATT_VERTICALALIGN,
    ATT_VISUALOFFSETHO,
    ATT_VISUALOFFSETVO,
    ATT_VISUALOFFSET2HO,
    ATT_VISUALOFFSET2VO,
    ATT_VOLTAGROUPINGSYM,
    ATT_WHITESPACE,
    ATT_WIDTH,
    ATT_STRINGTAB,
    ATT_STRINGTABPOSITION,
    ATT_STRINGTABTUNING,
    ATT_ARPEGVIS,
    ATT_BEATRPTVIS,
    ATT_CHORDVIS,
    ATT_FERMATAVIS,
    ATT_HAIRPINVIS,
    ATT_HARMVIS,
    ATT_MULTIRESTVIS,
    ATT_PBVIS,
    ATT_PEDALVIS,
    ATT_SBVIS,
    ATT_SECTIONVIS,
    ATT_SPACEVIS,
    ATT_STAFFGRPVIS,
    ATT_TUPLETVIS,
    ATT_CLASS_max
};

} // namespace libmei

#endif // __LIBMEI_ATT_CLASSES_H__
