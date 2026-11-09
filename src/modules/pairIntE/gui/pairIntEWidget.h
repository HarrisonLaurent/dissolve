// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2026 Team Dissolve and contributors

#pragma once

#include "modules/pairIntE/gui/ui_pairIntEWidget.h"
#include "modules/widget.h"

// Forward Declarations
class PairIntEModule;
class DataViewer;

// Module Widget
class PairIntEModuleWidget : public ModuleWidget
{
    // All Qt declarations derived from QObject must include this macro
    Q_OBJECT

    private:
    // Associated Module
    PairIntEModule *module_;

    public:
    PairIntEModuleWidget(QWidget *parent, PairIntEModule *module, Dissolve &dissolve);

    /*
     * UI
     */
    private:
    // Main form declaration
    Ui::PairIntEModuleWidget ui_;
    // DataViewers contained within this widget
    DataViewer *rdfGraph_, *angleGraph_, *dAngleGraph_;

    public:
    // Update controls within widget
    void updateControls(const Flags<ModuleWidget::UpdateFlags> &updateFlags = {}) override;
};
