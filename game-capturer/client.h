#include <stdio.h>
#include <tchar.h>

#include <stdio.h>
#include <tchar.h>
#include <process.h>
#include <new>
#include <sal.h>
#include <initguid.h>
#include <ndsupport.h>
#include <ndstatus.h>

#include <dxgi-capturer.h>

#include "window.h"
#include "channel.h"

class Client
{
protected:
    IND2Adapter *adapter;
    HANDLE adapter_file;
    ND2_ADAPTER_INFO adapter_info = {0};
    IND2CompletionQueue *cq;
    IND2Listener *listener;
    struct sockaddr_in local_addr;

public:
    Client(const struct sockaddr_in &local_addr);
    void run(Window *windows, size_t count, sockaddr_in &remote_addr);
    void save_frame(char *buffer);
    void wait();
    ~Client()
    {
        // if (m_pBuf != nullptr)
        //{
        //     HeapFree(GetProcessHeap(), 0, m_pBuf);
        // }

        // if (m_pTmpBuf != nullptr)
        //{
        //     free(m_pTmpBuf);
        // }
    }

protected:
};