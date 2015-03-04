#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "time.h"
#include "conio.h"

#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#include <Windows.h>

#include "wx/wx.h"

using namespace std;

bool MyApp::OnInit() {
    MyFrame *frame = new MyFrame(wxT("HelloWorld"), wxPoint(200, 99), wxSize(600, 400));
    frame->Show(true);
    return true;
}