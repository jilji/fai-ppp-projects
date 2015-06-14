///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	_menuBar = new wxMenuBar( 0 );
	_menuFile = new wxMenu();
	wxMenuItem* _menuNewGame;
	_menuNewGame = new wxMenuItem( _menuFile, wxID_ANY, wxString( _("New Game") ) + wxT('\t') + wxT("F2"), wxEmptyString, wxITEM_NORMAL );
	_menuFile->Append( _menuNewGame );
	
	_menuFile->AppendSeparator();
	
	wxMenuItem* _menuFileExit;
	_menuFileExit = new wxMenuItem( _menuFile, wxID_EXIT, wxString( _("E&xit") ) + wxT('\t') + wxT("Alt+X"), wxEmptyString, wxITEM_NORMAL );
	_menuFile->Append( _menuFileExit );
	
	_menuBar->Append( _menuFile, _("&File") ); 
	
	this->SetMenuBar( _menuBar );
	
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	_pongBackground = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	_pongBackground->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxPanel* _panel1;
	_panel1 = new wxPanel( _pongBackground, wxID_ANY, wxDefaultPosition, wxSize( 10,-1 ), wxNO_BORDER|wxTAB_TRAVERSAL );
	_panel1->SetForegroundColour( wxColour( 0, 0, 0 ) );
	_panel1->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	_panel1->SetMinSize( wxSize( 10,-1 ) );
	_panel1->SetMaxSize( wxSize( 10,-1 ) );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	_racquetPlayer = new wxPanel( _panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	_racquetPlayer->SetForegroundColour( wxColour( 255, 255, 255 ) );
	_racquetPlayer->SetBackgroundColour( wxColour( 255, 255, 255 ) );
	_racquetPlayer->SetMinSize( wxSize( -1,56 ) );
	_racquetPlayer->SetMaxSize( wxSize( -1,56 ) );
	
	bSizer6->Add( _racquetPlayer, 1, wxEXPAND | wxALL, 1 );
	
	
	_panel1->SetSizer( bSizer6 );
	_panel1->Layout();
	bSizer2->Add( _panel1, 1, wxEXPAND | wxALL, 0 );
	
	wxPanel* _panel2;
	_panel2 = new wxPanel( _pongBackground, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
	_panel2->SetForegroundColour( wxColour( 0, 0, 0 ) );
	_panel2->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	_scorePlayer = new wxStaticText( _panel2, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	_scorePlayer->Wrap( -1 );
	_scorePlayer->SetFont( wxFont( 20, 70, 90, 90, false, wxEmptyString ) );
	_scorePlayer->SetForegroundColour( wxColour( 255, 255, 255 ) );
	
	bSizer4->Add( _scorePlayer, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	
	_panel2->SetSizer( bSizer4 );
	_panel2->Layout();
	bSizer4->Fit( _panel2 );
	bSizer2->Add( _panel2, 1, wxEXPAND | wxALL, 5 );
	
	wxStaticLine* _sidesSplitter;
	_sidesSplitter = new wxStaticLine( _pongBackground, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL|wxLI_VERTICAL|wxNO_BORDER );
	_sidesSplitter->SetForegroundColour( wxColour( 255, 255, 255 ) );
	
	bSizer2->Add( _sidesSplitter, 0, wxEXPAND | wxALL, 5 );
	
	wxPanel* _panel3;
	_panel3 = new wxPanel( _pongBackground, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
	_panel3->SetForegroundColour( wxColour( 0, 0, 0 ) );
	_panel3->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	_scoreAi = new wxStaticText( _panel3, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	_scoreAi->Wrap( -1 );
	_scoreAi->SetFont( wxFont( 20, 70, 90, 90, false, wxEmptyString ) );
	_scoreAi->SetForegroundColour( wxColour( 255, 255, 255 ) );
	
	bSizer5->Add( _scoreAi, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	
	_panel3->SetSizer( bSizer5 );
	_panel3->Layout();
	bSizer5->Fit( _panel3 );
	bSizer2->Add( _panel3, 1, wxEXPAND | wxALL, 5 );
	
	wxPanel* _panel4;
	_panel4 = new wxPanel( _pongBackground, wxID_ANY, wxDefaultPosition, wxSize( 10,-1 ), wxTAB_TRAVERSAL );
	_panel4->SetForegroundColour( wxColour( 0, 0, 0 ) );
	_panel4->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	_panel4->SetMinSize( wxSize( 10,-1 ) );
	_panel4->SetMaxSize( wxSize( 10,-1 ) );
	
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );
	
	_racquetAi = new wxPanel( _panel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	_racquetAi->SetForegroundColour( wxColour( 255, 255, 255 ) );
	_racquetAi->SetBackgroundColour( wxColour( 255, 255, 255 ) );
	_racquetAi->SetMinSize( wxSize( -1,56 ) );
	_racquetAi->SetMaxSize( wxSize( -1,56 ) );
	
	bSizer61->Add( _racquetAi, 1, wxEXPAND | wxALL, 1 );
	
	
	_panel4->SetSizer( bSizer61 );
	_panel4->Layout();
	bSizer2->Add( _panel4, 1, wxEXPAND | wxALL, 0 );
	
	_ball = new wxPanel( _pongBackground, wxID_ANY, wxPoint( 50,50 ), wxSize( 10,10 ), wxTAB_TRAVERSAL );
	_ball->SetForegroundColour( wxColour( 255, 255, 255 ) );
	_ball->SetBackgroundColour( wxColour( 255, 255, 255 ) );
	_ball->Hide();
	_ball->SetMinSize( wxSize( 10,10 ) );
	_ball->SetMaxSize( wxSize( 10,10 ) );
	
	bSizer2->Add( _ball, 0, wxFIXED_MINSIZE, 5 );
	
	
	_pongBackground->SetSizer( bSizer2 );
	_pongBackground->Layout();
	bSizer2->Fit( _pongBackground );
	mainSizer->Add( _pongBackground, 1, wxEXPAND | wxALL, 0 );
	
	
	this->SetSizer( mainSizer );
	this->Layout();
	_statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	_gameTimer.SetOwner( this, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Connect( _menuNewGame->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnNewGameClick ) );
	this->Connect( _menuFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
	this->Connect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( MainFrameBase::OnTimerTick ) );
}

MainFrameBase::~MainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnNewGameClick ) );
	this->Disconnect( wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
	this->Disconnect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( MainFrameBase::OnTimerTick ) );
	
}
