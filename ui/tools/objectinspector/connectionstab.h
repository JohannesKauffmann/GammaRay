/*
  connectionstab.h

  This file is part of GammaRay, the Qt application inspection and
  manipulation tool.

  Copyright (C) 2014-2022 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com
  Author: Volker Krause <volker.krause@kdab.com>

  Licensees holding valid commercial KDAB GammaRay licenses may use this file in
  accordance with GammaRay Commercial License Agreement provided with the Software.

  Contact info@kdab.com if any conditions of this licensing are not clear to you.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef GAMMARAY_CONNECTIONSTAB_H
#define GAMMARAY_CONNECTIONSTAB_H

#include <QWidget>

namespace GammaRay {
class ConnectionsExtensionInterface;
class PropertyWidget;
namespace Ui {
class ConnectionsTab;
}

class ConnectionsTab : public QWidget
{
    Q_OBJECT
public:
    explicit ConnectionsTab(PropertyWidget *parent = nullptr);
    ~ConnectionsTab() override;

private slots:
    void inboundContextMenu(const QPoint &pos);
    void outboundContextMenu(const QPoint &pos);

private:
    QScopedPointer<Ui::ConnectionsTab> ui;
    ConnectionsExtensionInterface *m_interface;
};
}

#endif // GAMMARAY_CONNECTIONSTAB_H
