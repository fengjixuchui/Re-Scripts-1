/*

  [Script Output]
 
  FileName : hvix64__10.0.18362.418.exe
  MD5      : 6160A030C46765EC393D9FA2A34A2696
  SHA-1    : 5E42AD82116A0FBF2C252E8580A5F19E063A0F37
 
 
  Behrooz Abbassi @rceninja
 
*/

typedef enum _Hv_CURRENT_VMCS_OFFSETS_ENUM
{
    /*[0]*/ Hv_VMCS_OFFSET_HOST_ES_SEL                     = 0x0008,
    /*[1]*/ Hv_VMCS_OFFSET_HOST_CS_SEL                     = 0x000A,
    /*[2]*/ Hv_VMCS_OFFSET_HOST_SS_SEL                     = 0x000C,
    /*[3]*/ Hv_VMCS_OFFSET_HOST_DS_SEL                     = 0x000E,
    /*[4]*/ Hv_VMCS_OFFSET_HOST_FS_SEL                     = 0x0010,
    /*[5]*/ Hv_VMCS_OFFSET_HOST_GS_SEL                     = 0x0012,
    /*[6]*/ Hv_VMCS_OFFSET_HOST_TR_SEL                     = 0x0014,
    /*[7]*/ Hv_VMCS_OFFSET_HOST_PAT                        = 0x0018,
    /*[8]*/ Hv_VMCS_OFFSET_HOST_EFER                       = 0x0020,
    /*[9]*/ Hv_VMCS_OFFSET_HOST_CR0                        = 0x0028,
    /*[10]*/ Hv_VMCS_OFFSET_HOST_CR3                       = 0x0030,
    /*[11]*/ Hv_VMCS_OFFSET_HOST_CR4                       = 0x0038,
    /*[12]*/ Hv_VMCS_OFFSET_HOST_SYSENTER_ESP              = 0x0040,
    /*[13]*/ Hv_VMCS_OFFSET_HOST_SYSENTER_EIP              = 0x0048,
    /*[14]*/ Hv_VMCS_OFFSET_HOST_RIP                       = 0x0050,
    /*[15]*/ Hv_VMCS_OFFSET_SYSENTER_CS                    = 0x0058,
    /*[16]*/ Hv_VMCS_OFFSET_CTRL_PIN_EXEC                  = 0x005C,
    /*[17]*/ Hv_VMCS_OFFSET_CTRL_EXIT                      = 0x0060,
    /*[18]*/ Hv_VMCS_OFFSET_CTRL_PROC_EXEC2                = 0x0064,
    /*[19]*/ Hv_VMCS_OFFSET_CTRL_IO_BITMAP_A               = 0x0068,
    /*[20]*/ Hv_VMCS_OFFSET_CTRL_IO_BITMAP_B               = 0x0070,
    /*[21]*/ Hv_VMCS_OFFSET_CTRL_MSR_BITMAP                = 0x0078,
    /*[22]*/ Hv_VMCS_OFFSET_GUEST_ES_SEL                   = 0x0080,
    /*[23]*/ Hv_VMCS_OFFSET_GUEST_CS_SEL                   = 0x0082,
    /*[24]*/ Hv_VMCS_OFFSET_GUEST_SS_SEL                   = 0x0084,
    /*[25]*/ Hv_VMCS_OFFSET_GUEST_DS_SEL                   = 0x0086,
    /*[26]*/ Hv_VMCS_OFFSET_GUEST_FS_SEL                   = 0x0088,
    /*[27]*/ Hv_VMCS_OFFSET_GUEST_GS_SEL                   = 0x008A,
    /*[28]*/ Hv_VMCS_OFFSET_GUEST_LDTR_SEL                 = 0x008C,
    /*[29]*/ Hv_VMCS_OFFSET_GUEST_TR_SEL                   = 0x008E,
    /*[30]*/ Hv_VMCS_OFFSET_GUEST_ES_LIMIT                 = 0x0090,
    /*[31]*/ Hv_VMCS_OFFSET_GUEST_CS_LIMIT                 = 0x0094,
    /*[32]*/ Hv_VMCS_OFFSET_GUEST_SS_LIMIT                 = 0x0098,
    /*[33]*/ Hv_VMCS_OFFSET_GUEST_DS_LIMIT                 = 0x009C,
    /*[34]*/ Hv_VMCS_OFFSET_GUEST_FS_LIMIT                 = 0x00A0,
    /*[35]*/ Hv_VMCS_OFFSET_GUEST_GS_LIMIT                 = 0x00A4,
    /*[36]*/ Hv_VMCS_OFFSET_GUEST_LDTR_LIMIT               = 0x00A8,
    /*[37]*/ Hv_VMCS_OFFSET_GUEST_TR_LIMIT                 = 0x00AC,
    /*[38]*/ Hv_VMCS_OFFSET_GUEST_GDTR_LIMIT               = 0x00B0,
    /*[39]*/ Hv_VMCS_OFFSET_GUEST_IDTR_LIMIT               = 0x00B4,
    /*[40]*/ Hv_VMCS_OFFSET_GUEST_ES_ACCESS_RIGHTS         = 0x00B8,
    /*[41]*/ Hv_VMCS_OFFSET_GUEST_CS_ACCESS_RIGHTS         = 0x00BC,
    /*[42]*/ Hv_VMCS_OFFSET_GUEST_SS_ACCESS_RIGHTS         = 0x00C0,
    /*[43]*/ Hv_VMCS_OFFSET_GUEST_DS_ACCESS_RIGHTS         = 0x00C4,
    /*[44]*/ Hv_VMCS_OFFSET_GUEST_FS_ACCESS_RIGHTS         = 0x00C8,
    /*[45]*/ Hv_VMCS_OFFSET_GUEST_GS_ACCESS_RIGHTS         = 0x00CC,
    /*[46]*/ Hv_VMCS_OFFSET_GUEST_LDTR_ACCESS_RIGHTS       = 0x00D0,
    /*[47]*/ Hv_VMCS_OFFSET_GUEST_TR_ACCESS_RIGHTS         = 0x00D4,
    /*[48]*/ Hv_VMCS_OFFSET_GUEST_ES_BASE                  = 0x00D8,
    /*[49]*/ Hv_VMCS_OFFSET_GUEST_CS_BASE                  = 0x00E0,
    /*[50]*/ Hv_VMCS_OFFSET_GUEST_SS_BASE                  = 0x00E8,
    /*[51]*/ Hv_VMCS_OFFSET_GUEST_DS_BASE                  = 0x00F0,
    /*[52]*/ Hv_VMCS_OFFSET_GUEST_FS_BASE                  = 0x00F8,
    /*[53]*/ Hv_VMCS_OFFSET_GUEST_GS_BASE                  = 0x0100,
    /*[54]*/ Hv_VMCS_OFFSET_GUEST_LDTR_BASE                = 0x0108,
    /*[55]*/ Hv_VMCS_OFFSET_GUEST_TR_BASE                  = 0x0110,
    /*[56]*/ Hv_VMCS_OFFSET_GUEST_GDTR_BASE                = 0x0118,
    /*[57]*/ Hv_VMCS_OFFSET_GUEST_IDTR_BASE                = 0x0120,
    /*[58]*/ Hv_VMCS_OFFSET_CTRL_VMEXIT_MSR_STORE          = 0x0140,
    /*[59]*/ Hv_VMCS_OFFSET_CTRL_VMEXIT_MSR_LOAD           = 0x0148,
    /*[60]*/ Hv_VMCS_OFFSET_CTRL_VMENTRY_MSR_LOAD          = 0x0150,
    /*[61]*/ Hv_VMCS_OFFSET_CTRL_EXIT_MSR_STORE_COUNT      = 0x0184,
    /*[62]*/ Hv_VMCS_OFFSET_CTRL_EXIT_MSR_LOAD_COUNT       = 0x0188,
    /*[63]*/ Hv_VMCS_OFFSET_CTRL_ENTRY_MSR_LOAD_COUNT      = 0x018C,
    /*[64]*/ Hv_VMCS_OFFSET_CTRL_TSC_OFFSET                = 0x0190,
    /*[65]*/ Hv_VMCS_OFFSET_CTRL_VAPIC_PAGEADDR            = 0x0198,
    /*[66]*/ Hv_VMCS_OFFSET_GUEST_VMCS_LINK_PTR            = 0x01A0,
    /*[67]*/ Hv_VMCS_OFFSET_GUEST_DEBUGCTL                 = 0x01A8,
    /*[68]*/ Hv_VMCS_OFFSET_GUEST_PAT                      = 0x01B0,
    /*[69]*/ Hv_VMCS_OFFSET_GUEST_EFER                     = 0x01B8,
    /*[70]*/ Hv_VMCS_OFFSET_GUEST_PDPTE0                   = 0x01C0,
    /*[71]*/ Hv_VMCS_OFFSET_GUEST_PDPTE1                   = 0x01C8,
    /*[72]*/ Hv_VMCS_OFFSET_GUEST_PDPTE2                   = 0x01D0,
    /*[73]*/ Hv_VMCS_OFFSET_GUEST_PDPTE3                   = 0x01D8,
    /*[74]*/ Hv_VMCS_OFFSET_GUEST_PENDING_DEBUG_EXCEPTIONS = 0x01E0,
    /*[75]*/ Hv_VMCS_OFFSET_GUEST_SYSENTER_ESP             = 0x01E8,
    /*[76]*/ Hv_VMCS_OFFSET_GUEST_SYSENTER_EIP             = 0x01F0,
    /*[77]*/ Hv_VMCS_OFFSET_GUEST_ACTIVITY_STATE           = 0x01F8,
    /*[78]*/ Hv_VMCS_OFFSET_GUEST_SYSENTER_CS              = 0x01FC,
    /*[79]*/ Hv_VMCS_OFFSET_CTRL_CR0_MASK                  = 0x0200,
    /*[80]*/ Hv_VMCS_OFFSET_CTRL_CR4_MASK                  = 0x0208,
    /*[81]*/ Hv_VMCS_OFFSET_CTRL_CR0_READ_SHADOW           = 0x0210,
    /*[82]*/ Hv_VMCS_OFFSET_CTRL_CR4_READ_SHADOW           = 0x0218,
    /*[83]*/ Hv_VMCS_OFFSET_GUEST_CR0                      = 0x0220,
    /*[84]*/ Hv_VMCS_OFFSET_GUEST_CR3                      = 0x0228,
    /*[85]*/ Hv_VMCS_OFFSET_GUEST_CR4                      = 0x0230,
    /*[86]*/ Hv_VMCS_OFFSET_GUEST_DR7                      = 0x0238,
    /*[87]*/ Hv_VMCS_OFFSET_HOST_FS_BASE                   = 0x0240,
    /*[88]*/ Hv_VMCS_OFFSET_HOST_GS_BASE                   = 0x0248,
    /*[89]*/ Hv_VMCS_OFFSET_HOST_TR_BASE                   = 0x0250,
    /*[90]*/ Hv_VMCS_OFFSET_HOST_GDTR_BASE                 = 0x0258,
    /*[91]*/ Hv_VMCS_OFFSET_HOST_IDTR_BASE                 = 0x0260,
    /*[92]*/ Hv_VMCS_OFFSET_HOST_RSP                       = 0x0268,
    /*[93]*/ Hv_VMCS_OFFSET_CTRL_EPTP                      = 0x0270,
    /*[94]*/ Hv_VMCS_OFFSET_CTRL_VPID                      = 0x0278,
    /*[95]*/ Hv_VMCS_OFFSET_GUEST_PHYS_ADDR                = 0x02A8,
    /*[96]*/ Hv_VMCS_OFFSET_VM_INSTR_ERROR                 = 0x02B0,
    /*[97]*/ Hv_VMCS_OFFSET_EXIT_REASON                    = 0x02B4,
    /*[98]*/ Hv_VMCS_OFFSET_EXIT_INTERRUPTION_INFO         = 0x02B8,
    /*[99]*/ Hv_VMCS_OFFSET_EXIT_INTERRUPTION_ERROR_CODE   = 0x02BC,
    /*[100]*/ Hv_VMCS_OFFSET_IDT_VECTORING_INFO            = 0x02C0,
    /*[101]*/ Hv_VMCS_OFFSET_IDT_VECTORING_ERROR_CODE      = 0x02C4,
    /*[102]*/ Hv_VMCS_OFFSET_EXIT_INSTR_LENGTH             = 0x02C8,
    /*[103]*/ Hv_VMCS_OFFSET_EXIT_INSTR_INFO               = 0x02CC,
    /*[104]*/ Hv_VMCS_OFFSET_EXIT_QUALIFICATION            = 0x02D0,
    /*[105]*/ Hv_VMCS_OFFSET_EXIT_GUEST_LINEAR_ADDR        = 0x02F8,
    /*[106]*/ Hv_VMCS_OFFSET_GUEST_RSP                     = 0x0300,
    /*[107]*/ Hv_VMCS_OFFSET_GUEST_RFLAGS                  = 0x0308,
    /*[108]*/ Hv_VMCS_OFFSET_GUEST_INTERRUPTIBILITY_STATE  = 0x0310,
    /*[109]*/ Hv_VMCS_OFFSET_CTRL_PROC_EXEC                = 0x0314,
    /*[110]*/ Hv_VMCS_OFFSET_CTRL_EXCEPTION_BITMAP         = 0x0318,
    /*[111]*/ Hv_VMCS_OFFSET_CTRL_ENTRY                    = 0x031C,
    /*[112]*/ Hv_VMCS_OFFSET_CTRL_ENTRY_INTERRUPTION_INFO  = 0x0320,
    /*[113]*/ Hv_VMCS_OFFSET_CTRL_ENTRY_EXCEPTION_ERRCODE  = 0x0324,
    /*[114]*/ Hv_VMCS_OFFSET_CTRL_ENTRY_INSTR_LENGTH       = 0x0328,
    /*[115]*/ Hv_VMCS_OFFSET_CTRL_TPR_THRESHOLD            = 0x032C,
    /*[116]*/ Hv_VMCS_OFFSET_GUEST_RIP                     = 0x0330,
    /*[117]*/ Hv_VMCS_Unknown_0                            = 0x0338,
    /*[118]*/ Hv_VMCS_OFFSET_GUEST_BNDCFGS                 = 0x0380,
    /*[119]*/ Hv_VMCS_OFFSET_CTRL_XSS_EXITING_BITMAP       = 0x03C0,
    /*[120]*/ Hv_VMCS_OFFSET_CTRL_ENCLS_EXITING_BITMAP     = 0x03C8,

} Hv_CURRENT_VMCS_OFFSETS_ENUM;


typedef struct _Hv_CURRENT_VMCS_OFFSETS_STRUCT
{
    /*0x0000*/ _BYTE  Unknown_0[8];
    /*0x0008*/ _WORD  Hv_VMCS_OFFSET_HOST_ES_SEL;
    /*0x000A*/ _WORD  Hv_VMCS_OFFSET_HOST_CS_SEL;
    /*0x000C*/ _WORD  Hv_VMCS_OFFSET_HOST_SS_SEL;
    /*0x000E*/ _WORD  Hv_VMCS_OFFSET_HOST_DS_SEL;
    /*0x0010*/ _WORD  Hv_VMCS_OFFSET_HOST_FS_SEL;
    /*0x0012*/ _WORD  Hv_VMCS_OFFSET_HOST_GS_SEL;
    /*0x0014*/ _DWORD Hv_VMCS_OFFSET_HOST_TR_SEL;
    /*0x0018*/ _QWORD Hv_VMCS_OFFSET_HOST_PAT;
    /*0x0020*/ _QWORD Hv_VMCS_OFFSET_HOST_EFER;
    /*0x0028*/ _QWORD Hv_VMCS_OFFSET_HOST_CR0;
    /*0x0030*/ _QWORD Hv_VMCS_OFFSET_HOST_CR3;
    /*0x0038*/ _QWORD Hv_VMCS_OFFSET_HOST_CR4;
    /*0x0040*/ _QWORD Hv_VMCS_OFFSET_HOST_SYSENTER_ESP;
    /*0x0048*/ _QWORD Hv_VMCS_OFFSET_HOST_SYSENTER_EIP;
    /*0x0050*/ _QWORD Hv_VMCS_OFFSET_HOST_RIP;
    /*0x0058*/ _DWORD Hv_VMCS_OFFSET_SYSENTER_CS;
    /*0x005C*/ _DWORD Hv_VMCS_OFFSET_CTRL_PIN_EXEC;
    /*0x0060*/ _DWORD Hv_VMCS_OFFSET_CTRL_EXIT;
    /*0x0064*/ _DWORD Hv_VMCS_OFFSET_CTRL_PROC_EXEC2;
    /*0x0068*/ _QWORD Hv_VMCS_OFFSET_CTRL_IO_BITMAP_A;
    /*0x0070*/ _QWORD Hv_VMCS_OFFSET_CTRL_IO_BITMAP_B;
    /*0x0078*/ _QWORD Hv_VMCS_OFFSET_CTRL_MSR_BITMAP;
    /*0x0080*/ _WORD  Hv_VMCS_OFFSET_GUEST_ES_SEL;
    /*0x0082*/ _WORD  Hv_VMCS_OFFSET_GUEST_CS_SEL;
    /*0x0084*/ _WORD  Hv_VMCS_OFFSET_GUEST_SS_SEL;
    /*0x0086*/ _WORD  Hv_VMCS_OFFSET_GUEST_DS_SEL;
    /*0x0088*/ _WORD  Hv_VMCS_OFFSET_GUEST_FS_SEL;
    /*0x008A*/ _WORD  Hv_VMCS_OFFSET_GUEST_GS_SEL;
    /*0x008C*/ _WORD  Hv_VMCS_OFFSET_GUEST_LDTR_SEL;
    /*0x008E*/ _WORD  Hv_VMCS_OFFSET_GUEST_TR_SEL;
    /*0x0090*/ _DWORD Hv_VMCS_OFFSET_GUEST_ES_LIMIT;
    /*0x0094*/ _DWORD Hv_VMCS_OFFSET_GUEST_CS_LIMIT;
    /*0x0098*/ _DWORD Hv_VMCS_OFFSET_GUEST_SS_LIMIT;
    /*0x009C*/ _DWORD Hv_VMCS_OFFSET_GUEST_DS_LIMIT;
    /*0x00A0*/ _DWORD Hv_VMCS_OFFSET_GUEST_FS_LIMIT;
    /*0x00A4*/ _DWORD Hv_VMCS_OFFSET_GUEST_GS_LIMIT;
    /*0x00A8*/ _DWORD Hv_VMCS_OFFSET_GUEST_LDTR_LIMIT;
    /*0x00AC*/ _DWORD Hv_VMCS_OFFSET_GUEST_TR_LIMIT;
    /*0x00B0*/ _DWORD Hv_VMCS_OFFSET_GUEST_GDTR_LIMIT;
    /*0x00B4*/ _DWORD Hv_VMCS_OFFSET_GUEST_IDTR_LIMIT;
    /*0x00B8*/ _DWORD Hv_VMCS_OFFSET_GUEST_ES_ACCESS_RIGHTS;
    /*0x00BC*/ _DWORD Hv_VMCS_OFFSET_GUEST_CS_ACCESS_RIGHTS;
    /*0x00C0*/ _DWORD Hv_VMCS_OFFSET_GUEST_SS_ACCESS_RIGHTS;
    /*0x00C4*/ _DWORD Hv_VMCS_OFFSET_GUEST_DS_ACCESS_RIGHTS;
    /*0x00C8*/ _DWORD Hv_VMCS_OFFSET_GUEST_FS_ACCESS_RIGHTS;
    /*0x00CC*/ _DWORD Hv_VMCS_OFFSET_GUEST_GS_ACCESS_RIGHTS;
    /*0x00D0*/ _DWORD Hv_VMCS_OFFSET_GUEST_LDTR_ACCESS_RIGHTS;
    /*0x00D4*/ _DWORD Hv_VMCS_OFFSET_GUEST_TR_ACCESS_RIGHTS;
    /*0x00D8*/ _QWORD Hv_VMCS_OFFSET_GUEST_ES_BASE;
    /*0x00E0*/ _QWORD Hv_VMCS_OFFSET_GUEST_CS_BASE;
    /*0x00E8*/ _QWORD Hv_VMCS_OFFSET_GUEST_SS_BASE;
    /*0x00F0*/ _QWORD Hv_VMCS_OFFSET_GUEST_DS_BASE;
    /*0x00F8*/ _QWORD Hv_VMCS_OFFSET_GUEST_FS_BASE;
    /*0x0100*/ _QWORD Hv_VMCS_OFFSET_GUEST_GS_BASE;
    /*0x0108*/ _QWORD Hv_VMCS_OFFSET_GUEST_LDTR_BASE;
    /*0x0110*/ _QWORD Hv_VMCS_OFFSET_GUEST_TR_BASE;
    /*0x0118*/ _QWORD Hv_VMCS_OFFSET_GUEST_GDTR_BASE;
    /*0x0120*/ _QWORD Hv_VMCS_OFFSET_GUEST_IDTR_BASE;
    _BYTE             Unknown_1[24];
    /*0x0140*/ _QWORD Hv_VMCS_OFFSET_CTRL_VMEXIT_MSR_STORE;
    /*0x0148*/ _QWORD Hv_VMCS_OFFSET_CTRL_VMEXIT_MSR_LOAD;
    /*0x0150*/ _QWORD Hv_VMCS_OFFSET_CTRL_VMENTRY_MSR_LOAD;
    _BYTE             Unknown_2[44];
    /*0x0184*/ _DWORD Hv_VMCS_OFFSET_CTRL_EXIT_MSR_STORE_COUNT;
    /*0x0188*/ _DWORD Hv_VMCS_OFFSET_CTRL_EXIT_MSR_LOAD_COUNT;
    /*0x018C*/ _DWORD Hv_VMCS_OFFSET_CTRL_ENTRY_MSR_LOAD_COUNT;
    /*0x0190*/ _QWORD Hv_VMCS_OFFSET_CTRL_TSC_OFFSET;
    /*0x0198*/ _QWORD Hv_VMCS_OFFSET_CTRL_VAPIC_PAGEADDR;
    /*0x01A0*/ _QWORD Hv_VMCS_OFFSET_GUEST_VMCS_LINK_PTR;
    /*0x01A8*/ _QWORD Hv_VMCS_OFFSET_GUEST_DEBUGCTL;
    /*0x01B0*/ _QWORD Hv_VMCS_OFFSET_GUEST_PAT;
    /*0x01B8*/ _QWORD Hv_VMCS_OFFSET_GUEST_EFER;
    /*0x01C0*/ _QWORD Hv_VMCS_OFFSET_GUEST_PDPTE0;
    /*0x01C8*/ _QWORD Hv_VMCS_OFFSET_GUEST_PDPTE1;
    /*0x01D0*/ _QWORD Hv_VMCS_OFFSET_GUEST_PDPTE2;
    /*0x01D8*/ _QWORD Hv_VMCS_OFFSET_GUEST_PDPTE3;
    /*0x01E0*/ _QWORD Hv_VMCS_OFFSET_GUEST_PENDING_DEBUG_EXCEPTIONS;
    /*0x01E8*/ _QWORD Hv_VMCS_OFFSET_GUEST_SYSENTER_ESP;
    /*0x01F0*/ _QWORD Hv_VMCS_OFFSET_GUEST_SYSENTER_EIP;
    /*0x01F8*/ _DWORD Hv_VMCS_OFFSET_GUEST_ACTIVITY_STATE;
    /*0x01FC*/ _DWORD Hv_VMCS_OFFSET_GUEST_SYSENTER_CS;
    /*0x0200*/ _QWORD Hv_VMCS_OFFSET_CTRL_CR0_MASK;
    /*0x0208*/ _QWORD Hv_VMCS_OFFSET_CTRL_CR4_MASK;
    /*0x0210*/ _QWORD Hv_VMCS_OFFSET_CTRL_CR0_READ_SHADOW;
    /*0x0218*/ _QWORD Hv_VMCS_OFFSET_CTRL_CR4_READ_SHADOW;
    /*0x0220*/ _QWORD Hv_VMCS_OFFSET_GUEST_CR0;
    /*0x0228*/ _QWORD Hv_VMCS_OFFSET_GUEST_CR3;
    /*0x0230*/ _QWORD Hv_VMCS_OFFSET_GUEST_CR4;
    /*0x0238*/ _QWORD Hv_VMCS_OFFSET_GUEST_DR7;
    /*0x0240*/ _QWORD Hv_VMCS_OFFSET_HOST_FS_BASE;
    /*0x0248*/ _QWORD Hv_VMCS_OFFSET_HOST_GS_BASE;
    /*0x0250*/ _QWORD Hv_VMCS_OFFSET_HOST_TR_BASE;
    /*0x0258*/ _QWORD Hv_VMCS_OFFSET_HOST_GDTR_BASE;
    /*0x0260*/ _QWORD Hv_VMCS_OFFSET_HOST_IDTR_BASE;
    /*0x0268*/ _QWORD Hv_VMCS_OFFSET_HOST_RSP;
    /*0x0270*/ _QWORD Hv_VMCS_OFFSET_CTRL_EPTP;
    /*0x0278*/ _QWORD Hv_VMCS_OFFSET_CTRL_VPID;
    _BYTE             Unknown_3[40];
    /*0x02A8*/ _QWORD Hv_VMCS_OFFSET_GUEST_PHYS_ADDR;
    /*0x02B0*/ _DWORD Hv_VMCS_OFFSET_VM_INSTR_ERROR;
    /*0x02B4*/ _DWORD Hv_VMCS_OFFSET_EXIT_REASON;
    /*0x02B8*/ _DWORD Hv_VMCS_OFFSET_EXIT_INTERRUPTION_INFO;
    /*0x02BC*/ _DWORD Hv_VMCS_OFFSET_EXIT_INTERRUPTION_ERROR_CODE;
    /*0x02C0*/ _DWORD Hv_VMCS_OFFSET_IDT_VECTORING_INFO;
    /*0x02C4*/ _DWORD Hv_VMCS_OFFSET_IDT_VECTORING_ERROR_CODE;
    /*0x02C8*/ _DWORD Hv_VMCS_OFFSET_EXIT_INSTR_LENGTH;
    /*0x02CC*/ _DWORD Hv_VMCS_OFFSET_EXIT_INSTR_INFO;
    /*0x02D0*/ _DWORD Hv_VMCS_OFFSET_EXIT_QUALIFICATION;
    _BYTE             Unknown_4[36];
    /*0x02F8*/ _QWORD Hv_VMCS_OFFSET_EXIT_GUEST_LINEAR_ADDR;
    /*0x0300*/ _QWORD Hv_VMCS_OFFSET_GUEST_RSP;
    /*0x0308*/ _QWORD Hv_VMCS_OFFSET_GUEST_RFLAGS;
    /*0x0310*/ _DWORD Hv_VMCS_OFFSET_GUEST_INTERRUPTIBILITY_STATE;
    /*0x0314*/ _DWORD Hv_VMCS_OFFSET_CTRL_PROC_EXEC;
    /*0x0318*/ _DWORD Hv_VMCS_OFFSET_CTRL_EXCEPTION_BITMAP;
    /*0x031C*/ _DWORD Hv_VMCS_OFFSET_CTRL_ENTRY;
    /*0x0320*/ _DWORD Hv_VMCS_OFFSET_CTRL_ENTRY_INTERRUPTION_INFO;
    /*0x0324*/ _DWORD Hv_VMCS_OFFSET_CTRL_ENTRY_EXCEPTION_ERRCODE;
    /*0x0328*/ _DWORD Hv_VMCS_OFFSET_CTRL_ENTRY_INSTR_LENGTH;
    /*0x032C*/ _DWORD Hv_VMCS_OFFSET_CTRL_TPR_THRESHOLD;
    /*0x0330*/ _QWORD Hv_VMCS_OFFSET_GUEST_RIP;
    /*0x0338*/ _QWORD Hv_VMCS_Unknown_0;
    _BYTE             Unknown_5[64];
    /*0x0380*/ _QWORD Hv_VMCS_OFFSET_GUEST_BNDCFGS;
    _BYTE             Unknown_6[56];
    /*0x03C0*/ _QWORD Hv_VMCS_OFFSET_CTRL_XSS_EXITING_BITMAP;
    /*0x03C8*/ _QWORD Hv_VMCS_OFFSET_CTRL_ENCLS_EXITING_BITMAP;
} _Hv_CURRENT_VMCS_OFFSETS_STRUCT;