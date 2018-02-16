#pragma once

#include <QWidget>
#include "ui_TileSetter.h"

class TileSetter : public QDialog {
	Q_OBJECT

public:
	TileSetter(QWidget *parent = Q_NULLPTR);
	~TileSetter();


private:
	void add_tile();
	void remove_tile();
	void shift_left();
	void shift_right();
	void save_tiles();
	void update_available_tiles();

	Ui::TileSetter ui;

	QButtonGroup* selected_group = new QButtonGroup;
	QButtonGroup* available_group = new QButtonGroup;

	FlowLayout* selected_layout = new FlowLayout;
	FlowLayout* available_layout = new FlowLayout;
};