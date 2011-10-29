/***************************************************************
 * Name:      vragen_lijstMain.cpp
 * Purpose:   Code for Application Frame
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

#include "vragen_lijstMain.h"
#include <wx/wx.h>

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


vragen_lijstFrame::vragen_lijstFrame(wxFrame *frame)
    : GUIFrame(frame)
{
#if wxUSE_STATUSBAR
    statusBar->SetStatusText(_("Hello Code::Blocks user!"), 0);
    statusBar->SetStatusText(wxbuildinfo(short_f), 1);
#endif
}

vragen_lijstFrame::~vragen_lijstFrame()
{
}


wxString vragen[6]=
{
    "Dit is de eerste vraag: \nWie is de koningin van Nederland?",
    "Dit is de tweede vraag: \nWaar ligt Nederland?",
    "Dit is de derde vraag: \nHoeveel voedsel produceert de wereld (per dag)?",
    "Dit is de vierde vraag: \nHoeveel mensen wonen er op de wereld?",
    "Dit is de laaste vraag: \nWat is de staats schuld van Amirika?",
    "lol"
};
wxString antwordenL[6]=
{
    "Beatrix",
    "In Azie",
    "Genoeg om wel 9 miljard mensen te voeden",
    "7 miljard mensen",
    "9 miljoen euro",
    "ol"
};
wxString antwordenR[6]=
{
    "Maxima",
    "In Europa",
    "Genoeg om wel 11 miljard mensen te voeden",
    "8 miljard mensen",
    "9 miljard euro",
    "lo"
};
int teller=0;


void vragen_lijstFrame::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void vragen_lijstFrame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}

void vragen_lijstFrame::OnAbout(wxCommandEvent &event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}




void vragen_lijstFrame::Onvraag_1Click( wxCommandEvent& event)
{
    vraag1->SetValue(vragen[teller]);
    Antwoord2->SetLabel(antwordenL[teller]);
    Antwoord3->SetLabel(antwordenR[teller]);
}

void vragen_lijstFrame::OnAntwoord2Click( wxCommandEvent& event )
{
    if (teller==3||teller==0)
    {
        wxMessageBox("je had het goed!!!!!!","goed");
        teller=teller+1;

    }

    else
    {
        wxMessageBox("je had het fout!!!!!!","fout");
        teller=0;
    }
    if (teller==5)
    {
        Destroy();
    }
    vraag1->SetValue(vragen[teller]);
    Antwoord2->SetLabel(antwordenL[teller]);
    Antwoord3->SetLabel(antwordenR[teller]);
}

void vragen_lijstFrame::OnAntwoord3Click( wxCommandEvent& event )
{
    if (teller==3||teller==0)
     {
        wxMessageBox("je had het fout!!!!!!","fout");
        teller=0;
     }
    else
    {

        wxMessageBox("je had het goed!!!!!!","goed");
        teller=teller+1;

    }
    if (teller==5)
    {
        Destroy();
    }
    vraag1->SetValue(vragen[teller]);
    Antwoord2->SetLabel(antwordenL[teller]);
    Antwoord3->SetLabel(antwordenR[teller]);


}












































