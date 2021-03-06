/********************************************
**
** Copyright 2016 JustCode Justyna Kulinska
**
** This file is part of Resto.
**
** Resto is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** any later version.
**
** Resto is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Resto; if not, write to the Free Software
** Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
**
********************************************/

#ifndef SAVEMANAGER_H
#define SAVEMANAGER_H

#include <QObject>

class BackupManager;

/*!
 * \brief Class to save state.
 */
class SaveManager final : public QObject
{
    Q_OBJECT
public:

    SaveManager(BackupManager &manager, QObject *parent = 0);

    void initialize();
    bool save();

    QString savePath() const;

private:
    static const QLatin1String sc_saveName;

    BackupManager &m_backupManager;
};

#endif // SAVEMANAGER_H
