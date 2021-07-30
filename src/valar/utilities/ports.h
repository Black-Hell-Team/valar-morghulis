#ifndef _PORTS_H_
# define PORTS
#include <windows.h>

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
#endif /* PORTS */
