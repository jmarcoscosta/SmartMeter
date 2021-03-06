typedef enum {

    // Registers located in DSP data memory RAM

    ADE_AIGAIN = 0x4380,
    ADE_AVGAIN,
    ADE_BIGAIN,
    ADE_BVGAIN,
    ADE_CIGAIN,
    ADE_CVGAIN,
    ADE_NIGAIN,
    ADE_DICOEFF = 0x4388,
    
    ADE_APGAIN,
    ADE_AWATTOS,
    ADE_BPGAIN,
    ADE_BWATTOS,
    ADE_CPGAIN, 
    ADE_CPWATTOS,
    ADE_AIRMSOS,
    ADE_AVRMSOS,
    ADE_BIRMSOS,
    ADE_BVRMSOS,
    ADE_CIRMSOS,
    ADE_CVRMSOS,  
    ADE_NIRMSOS, 
    ADE_HPGAIN = 0x4398,
    ADE_ISUMLVL, 
    ADE_VLEVEL = 0x439F,

    ADE_AFWATTOS = 0x43A2,
    ADE_BFWATTOS,
    ADE_CFWATTOS,
    ADE_AFVAROS,
    ADE_BFVAROS,
    ADE_CFVAROS,
    ADE_AFIRMSOS,
    ADE_BFIRMSOS,
    ADE_CFIRMSOS,
    ADE_AFVRMSOS,
    ADE_BFVRMSOS,
    ADE_CFVRMSOS,
    ADE_HXWATTOS,
    ADE_HYWATTOS,
    ADE_HZWATTOS,
    ADE_HXVAROS,
    ADE_HYVAROS,
    ADE_HZVAROS,
    ADE_HXIRMSOS,
    ADE_HYIRMSOS,
    ADE_HZIRMSOS,
    ADE_HXVRMSOS,
    ADE_HYVRMSOS,
    ADE_HZVRMSOS,

    ADE_AIRMS = 0X43C0,
    ADE_AVRMS,
    ADE_BIRMS,
    ADE_BVRMS,
    ADE_CIRMS,
    ADE_CVRMS,
    ADE_NIRMS,
    ADE_ISUM,

    // Internal DSP memory RAM registers

    ADE_RUN = 0xE228,

    // Billable registers
    ADE_AWATTHR = 0xE400,
    ADE_BWATTHR,
    ADE_CWATTHR,
    ADE_AFWATTHR,
    ADE_BFWATTHR,
    ADE_CFWATTHR,
    ADE_AFVARHR = 0xE409,
    ADE_BFVARHR,
    ADE_CFVARHR,
    ADE_AVAHR,
    ADE_BVAHR,
    ADE_CVAHR,

    // Configuration and power quality registers
    ADE_IPEAK = 0xE500, 
    ADE_VPEAK,
    ADE_STATUS0,
    ADE_STATUS1,
    ADE_AIMAV,
    ADE_BIMAV,
    ADE_CIMAV,
    ADE_OILVL,
    ADE_OVLVL,
    ADE_SAGLVL,
    ADE_MASK0,
    ADE_MASK1,
    ADE_IAWV,
    ADE_IBWV,
    ADE_ICWV,
    ADE_INWV,
    ADE_VAWV, 
    ADE_BVWV,
    ADE_VCWV,
    ADE_AWATT,
    ADE_BWATT,
    ADE_CWATT,
    ADE_AVA = 0xE519,
    ADE_BVA,
    ADE_CVA,
    ADE_CHECKSUM, 
    ADE_VNOM,
    ADE_LAST_RWDATA32 = 0xE5FF,
    ADE_PHSTATUS,
    ADE_ANGLE0,
    ADE_ANGLE1,
    ADE_ANGLE2,
    ADE_PHNOLOAD = 0xE608,
    ADE_LINECYC = 0xE60C,
    ADE_ZXTOUT,
    ADE_COMPMODE,
    ADE_Gain,
    ADE_CFMODE,
    ADE_CF1DEN,
    ADE_CF2DEN,
    ADE_CF3DEN,
    ADE_APHCAL,
    ADE_BPHCAL,
    ADE_CPHCAL,
    ADE_PHSIGN,
    ADE_CONFIG,
    ADE_MMODE = 0xE700,
    ADE_ACCMODE,
    ADE_LCYCMODE,
    ADE_PEAKCYC,
    ADE_SAGCYC,
    ADE_CFCYC,
    ADE_HSDC_CFG,
    ADE_Version,

    ADE_LAST_RWDATA8 = 0xE7FD,
    ADE_FVRMS = 0xE880,
    ADE_FIRMS,
    ADE_FWATT,
    ADE_FVAR,
    ADE_FVA,
    ADE_FPF,
    ADE_VTHD,
    ADE_ITHD,
    ADE_HXVRMS,
    ADE_HXIRMS,
    ADE_HXWATT,
    ADE_HXVAR,
    ADE_HXVA,
    ADE_HXPF,
    ADE_HXVHD,
    ADE_HXIHD,
    ADE_HYVRMS,
    ADE_HYIRMS,
    ADE_HYWATT,
    ADE_HYVAR,
    ADE_HYVA,
    ADE_HYPF,
    ADE_HYVHD,
    ADE_HYIHD,
    ADE_HZVRMS,
    ADE_HZIRMS,
    ADE_HZWATT,
    ADE_HZVAR,
    ADE_HZVA,
    ADE_HZPF,
    ADE_HZVHD,
    ADE_HZIHD,
    ADE_HCONFIG = 0xE900,
    ADE_APF = 0xE902,
    ADE_BPF,
    ADE_CPF,
    ADE_APERIOD,
    ADE_BPERIOD,
    ADE_CPERIOD,
    ADE_APNOLOAD,
    ADE_VARNOLOAD,
    ADE_VANOLOAD,
    ADE_LAST_ADD = 0xE9FE,
    ADE_LAST_RWDATA16,
    ADE_CONFIG3 = 0xEA00,
    ADE_LAST_OP,
    ADE_WTHR,
    ADE_VARTHR,
    ADE_VATHR,
    ADE_HX = 0xEA08,
    ADE_HY,
    ADE_HZ,
    ADE_LPOILVL = 0xEC00,
    ADE_CONFIG2

} ade_reg_t;
