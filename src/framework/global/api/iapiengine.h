/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2024 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef MUSE_API_IAPIENGINE_H
#define MUSE_API_IAPIENGINE_H

#include <QJSValue>
#include <QObject>
#include "modularity/ioc.h"

namespace muse::api {
class IApiEngine
{
public:
    virtual ~IApiEngine() = default;

    virtual const modularity::ContextPtr& iocContext() const = 0;
    virtual QJSValue newQObject(QObject* o) = 0;
    virtual QJSValue newObject() = 0;
    virtual QJSValue newArray(size_t length = 0) = 0;
};
}

#endif // MU_EXTENSIONS_IAPIENGINE_H
