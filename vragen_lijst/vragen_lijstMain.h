/***************************************************************
 * Name:      vragen_lijstMain.h
 * Purpose:   Defines Application Frame
 * Author:    Tom ploeg (tploeg@zernike.nl)
 * Created:   2011-10-29
 * Copyright: Tom ploeg (www.stichting-scn.nl)
 * License:
 **************************************************************/

#ifndef VRAGEN_LIJSTMAIN_H
#define VRAGEN_LIJSTMAIN_H



#include "vragen_lijstApp.h"


#include "GUIFrame.h"

class vragen_lijstFrame: public GUIFrame
{
    public:
        vragen_lijstFrame(wxFrame *frame);
        ~vragen_lijstFrame();
    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnAbout(wxCommandEvent& event);
        virtual void Onvraag_1Click( wxCommandEvent& event);
        virtual void OnAntwoord2Click( wxCommandEvent& event );
        virtual void OnAntwoord3Click( wxCommandEvent& event );
};

#endif // VRAGEN_LIJSTMAIN_H
