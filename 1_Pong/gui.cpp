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
	
	m_menuBar = new wxMenuBar( 0 );
	m_menuFile = new wxMenu();
	wxMenuItem* menuNewGame;
	menuNewGame = new wxMenuItem( m_menuFile, wxID_ANY, wxString( _("New Game") ) + wxT('\t') + wxT("F2"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( menuNewGame );
	
	m_menuFile->AppendSeparator();
	
	wxMenuItem* menuFileExit;
	menuFileExit = new wxMenuItem( m_menuFile, wxID_EXIT, wxString( _("E&xit") ) + wxT('\t') + wxT("Alt+X"), wxEmptyString, wxITEM_NORMAL );
	m_menuFile->Append( menuFileExit );
	
	m_menuBar->Append( m_menuFile, _("&File") ); 
	
	this->SetMenuBar( m_menuBar );
	
	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );
	
	_pongBackground = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	_pongBackground->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	_padPathMine = new wxPanel( _pongBackground, wxID_ANY, wxDefaultPosition, wxSize( 10,-1 ), wxNO_BORDER|wxTAB_TRAVERSAL );
	_padPathMine->SetForegroundColour( wxColour( 0, 0, 0 ) );
	_padPathMine->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	_padPathMine->SetMinSize( wxSize( 10,-1 ) );
	_padPathMine->SetMaxSize( wxSize( 10,-1 ) );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	_padMine = new wxPanel( _padPathMine, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	_padMine->SetForegroundColour( wxColour( 255, 255, 255 ) );
	_padMine->SetBackgroundColour( wxColour( 255, 255, 255 ) );
	_padMine->SetMinSize( wxSize( -1,50 ) );
	_padMine->SetMaxSize( wxSize( -1,50 ) );
	
	bSizer6->Add( _padMine, 1, wxEXPAND | wxALL, 1 );
	
	
	_padPathMine->SetSizer( bSizer6 );
	_padPathMine->Layout();
	bSizer2->Add( _padPathMine, 1, wxEXPAND | wxALL, 0 );
	
	m_panel2 = new wxPanel( _pongBackground, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
	m_panel2->SetForegroundColour( wxColour( 0, 0, 0 ) );
	m_panel2->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	_scoreMine = new wxStaticText( m_panel2, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	_scoreMine->Wrap( -1 );
	_scoreMine->SetFont( wxFont( 20, 70, 90, 90, false, wxEmptyString ) );
	_scoreMine->SetForegroundColour( wxColour( 255, 255, 255 ) );
	
	bSizer4->Add( _scoreMine, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	
	m_panel2->SetSizer( bSizer4 );
	m_panel2->Layout();
	bSizer4->Fit( m_panel2 );
	bSizer2->Add( m_panel2, 1, wxEXPAND | wxALL, 5 );
	
	m_staticline1 = new wxStaticLine( _pongBackground, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL|wxLI_VERTICAL|wxNO_BORDER );
	m_staticline1->SetForegroundColour( wxColour( 255, 255, 255 ) );
	
	bSizer2->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	m_panel3 = new wxPanel( _pongBackground, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
	m_panel3->SetForegroundColour( wxColour( 0, 0, 0 ) );
	m_panel3->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	_scoreAi = new wxStaticText( m_panel3, wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	_scoreAi->Wrap( -1 );
	_scoreAi->SetFont( wxFont( 20, 70, 90, 90, false, wxEmptyString ) );
	_scoreAi->SetForegroundColour( wxColour( 255, 255, 255 ) );
	
	bSizer5->Add( _scoreAi, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	
	m_panel3->SetSizer( bSizer5 );
	m_panel3->Layout();
	bSizer5->Fit( m_panel3 );
	bSizer2->Add( m_panel3, 1, wxEXPAND | wxALL, 5 );
	
	_padPathAi = new wxPanel( _pongBackground, wxID_ANY, wxDefaultPosition, wxSize( 10,-1 ), wxTAB_TRAVERSAL );
	_padPathAi->SetForegroundColour( wxColour( 0, 0, 0 ) );
	_padPathAi->SetBackgroundColour( wxColour( 0, 0, 0 ) );
	_padPathAi->SetMinSize( wxSize( 10,-1 ) );
	_padPathAi->SetMaxSize( wxSize( 10,-1 ) );
	
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );
	
	_padAi = new wxPanel( _padPathAi, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	_padAi->SetForegroundColour( wxColour( 255, 255, 255 ) );
	_padAi->SetBackgroundColour( wxColour( 255, 255, 255 ) );
	_padAi->SetMinSize( wxSize( -1,50 ) );
	_padAi->SetMaxSize( wxSize( -1,50 ) );
	
	bSizer61->Add( _padAi, 1, wxEXPAND | wxALL, 1 );
	
	
	_padPathAi->SetSizer( bSizer61 );
	_padPathAi->Layout();
	bSizer2->Add( _padPathAi, 1, wxEXPAND | wxALL, 0 );
	
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
	m_statusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	m_gameTimer.SetOwner( this, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Connect( menuNewGame->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnNewGameClick ) );
	this->Connect( menuFileExit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
	_pongBackground->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( MainFrameBase::pongBackgroundOnEnterWindow ), NULL, this );
	_pongBackground->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( MainFrameBase::pongBackgroundOnLeaveWindow ), NULL, this );
	_padPathMine->Connect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	_padMine->Connect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	m_panel2->Connect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	m_panel3->Connect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	_padPathAi->Connect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	_padAi->Connect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	this->Connect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( MainFrameBase::OnTimerTick ) );
}

MainFrameBase::~MainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnNewGameClick ) );
	this->Disconnect( wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MainFrameBase::OnExitClick ) );
	_pongBackground->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( MainFrameBase::pongBackgroundOnEnterWindow ), NULL, this );
	_pongBackground->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( MainFrameBase::pongBackgroundOnLeaveWindow ), NULL, this );
	_padPathMine->Disconnect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	_padMine->Disconnect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	m_panel2->Disconnect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	m_panel3->Disconnect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	_padPathAi->Disconnect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	_padAi->Disconnect( wxEVT_MOTION, wxMouseEventHandler( MainFrameBase::pongBackgroundOnMotion ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( MainFrameBase::OnTimerTick ) );
	
}
