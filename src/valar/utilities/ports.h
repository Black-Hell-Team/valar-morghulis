#ifndef _PORTS_H_
# define PORTS
#include <Windows.h>

VOID 
QuemuProcess(){
    const TCHAR* qProcess[]{
        TEXT("qemu-ga.exe"),
    };
}

VOID
VMWareProcess(){
    const TCHAR* vProcess[]{
        TEXT("vmtoolsd.exe"),
        TEXT("vmwaretray.exe"),
        TEXT("vmwareuser.exe"),
        TEXT("VGAuthService.exe"),
        TEXT("vmacthlp.exe"),
    };
}

VOID
VBoxProcess(){
    const TCHAR* vbProcess[]{
        TEXT("vboxservice.exe"),
        TEXT("vboxtray.exe"),
    };
}

VOID 
VMWareMac(){
    CHAR *BlockListMac[] = {
        "00:50:56",
        "00:1C:14",
        "00:0C:29",
        "00:05:69",
    };
}
#endif /* PORTS */
