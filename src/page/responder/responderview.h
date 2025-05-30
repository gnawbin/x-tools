﻿/***************************************************************************************************
 * Copyright 2023-2025 x-tools-author(x-tools@outlook.com). All rights reserved.
 *
 * The file is encoded using "utf8 with bom", it is a part of xTools project.
 *
 * xTools is licensed according to the terms in the file LICENCE(GPL V3) in the root of the source
 * code directory.
 **************************************************************************************************/
#pragma once

#include "page/common/tableview.h"

class ResponderModel;
class ResponderView : public TableView
{
    Q_OBJECT
public:
    explicit ResponderView(QWidget *parent = nullptr);
    ~ResponderView();

    void inputBytes(const QByteArray &bytes) override;

protected:
    QList<int> textItemColumns() const override;

private:
    ResponderModel *m_tableModel{nullptr};
};
