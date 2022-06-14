#pragma once

#include "wx/wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();

public:

	wxTextCtrl* display = nullptr;
	wxButton* one = nullptr;
	wxButton* two = nullptr;
	wxButton* three = nullptr;
	wxButton* four = nullptr;
	wxButton* five = nullptr;
	wxButton* six = nullptr;
	wxButton* seven = nullptr;
	wxButton* eight = nullptr;
	wxButton* nine = nullptr;
	wxButton* zero = nullptr;
	wxButton* plus = nullptr;
	wxButton* minus = nullptr;
	wxButton* times = nullptr;
	wxButton* divide = nullptr;
	wxButton* mod = nullptr;
	wxButton* binary = nullptr;
	wxButton* decimel = nullptr;
	wxButton* hex = nullptr;
	wxButton* neg = nullptr;
	wxButton* equals = nullptr;
	wxButton* clear = nullptr;

};

