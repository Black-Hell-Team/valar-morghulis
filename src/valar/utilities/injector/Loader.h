#ifndef _LOADER_H_
#define LOADER 

// Get process id 
DWORD GprocessId(const std::tstring& Name);

// LDR ENTRY
enum LDR_ENTRY {
    khash32dll = 0x6A4ABC5B,
    ndllhash = 0x3CFA685D,
    vallochash = 0x91AFCA54
};

VOID DLLbase;
VOID EntryPoint;
typedef unsigned long SizeOfImage;
typedef unsigned long Flags;

#endif /* LOADER */
