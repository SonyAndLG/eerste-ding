/***************************************************************
 * Name:      vragen_lijstApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Tom ploeg (tploeg@zernike.nl)
 * Created:   2011-10-29
 * Copyright: Tom ploeg (www.stichting-scn.nl)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "vragen_lijstApp.h"
#include "vragen_lijstMain.h"

IMPLEMENT_APP(vragen_lijstApp);

bool vragen_lijstApp::OnInit()
{
    vragen_lijstFrame* frame = new vragen_lijstFrame(0L);
    
    frame->Show();
    
    return true;
}
