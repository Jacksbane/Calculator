#include "Main.h"


Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator")
{
	display = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(360, 30));
	one = new wxButton(this, wxID_ANY, "1", wxPoint(10, 140), wxSize(60, 40));
	two = new wxButton(this, wxID_ANY, "2", wxPoint(70, 140), wxSize(60, 40));
	three = new wxButton(this, wxID_ANY, "3", wxPoint(130, 140), wxSize(60, 40));
	four = new wxButton(this, wxID_ANY, "4", wxPoint(10, 100), wxSize(60, 40));
	five = new wxButton(this, wxID_ANY, "5", wxPoint(70, 100), wxSize(60, 40));
	six = new wxButton(this, wxID_ANY, "6", wxPoint(130, 100), wxSize(60, 40));
	seven = new wxButton(this, wxID_ANY, "7", wxPoint(10, 60), wxSize(60, 40));
	eight = new wxButton(this, wxID_ANY, "8", wxPoint(70, 60), wxSize(60, 40));
	nine = new wxButton(this, wxID_ANY, "9", wxPoint(130, 60), wxSize(60, 40));
	zero = new wxButton(this, wxID_ANY, "0", wxPoint(70, 180), wxSize(60, 40));
	plus = new wxButton(this, wxID_ANY, "+", wxPoint(130, 180), wxSize(60, 40));
	minus = new wxButton(this, wxID_ANY, "-", wxPoint(190, 140), wxSize(60, 40));
	times = new wxButton(this, wxID_ANY, "*", wxPoint(190, 100), wxSize(60, 40));
	divide = new wxButton(this, wxID_ANY, "/", wxPoint(190, 60), wxSize(60, 40));
	mod = new wxButton(this, wxID_ANY, "%", wxPoint(250, 60), wxSize(60, 40));
	binary = new wxButton(this, wxID_ANY, "Bin", wxPoint(10, 40), wxSize(60, 20));
	decimel = new wxButton(this, wxID_ANY, "Dec", wxPoint(70, 40), wxSize(60, 20));
	hex = new wxButton(this, wxID_ANY, "Hex", wxPoint(130, 40), wxSize(60, 20));
	neg = new wxButton(this, wxID_ANY, "+/-", wxPoint(10, 180), wxSize(60, 40));
	equals = new wxButton(this, wxID_ANY, "=", wxPoint(190, 180), wxSize(60, 40));
	clear = new wxButton(this, wxID_ANY, "C", wxPoint(190, 40), wxSize(60, 20));

}

Main::~Main()
{

}