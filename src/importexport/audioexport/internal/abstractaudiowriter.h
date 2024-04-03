/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
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
#ifndef MU_IMPORTEXPORT_ABSTRACTAUDIOWRITER_H
#define MU_IMPORTEXPORT_ABSTRACTAUDIOWRITER_H

#include "async/asyncable.h"
#include "modularity/ioc.h"
#include "audio/iplayback.h"
#include "iaudioexportconfiguration.h"
#include "context/iglobalcontext.h"
#include "playback/iplaybackcontroller.h"

#include "project/inotationwriter.h"

namespace mu::iex::audioexport {
class AbstractAudioWriter : public project::INotationWriter, public async::Asyncable
{
    INJECT(muse::audio::IPlayback, playback)
    INJECT(IAudioExportConfiguration, configuration)
    INJECT(context::IGlobalContext, globalContext)
    INJECT(playback::IPlaybackController, playbackController)

public:
    std::vector<UnitType> supportedUnitTypes() const override;
    bool supportsUnitType(UnitType unitType) const override;

    Ret write(notation::INotationPtr notation, io::IODevice& dstDevice, const Options& options = Options()) override;
    Ret writeList(const notation::INotationPtrList& notations, io::IODevice& dstDevice, const Options& options = Options()) override;

    mu::Progress* progress() override;
    void abort() override;

protected:
    Ret doWriteAndWait(notation::INotationPtr notation, io::IODevice& dstDevice, const muse::audio::SoundTrackFormat& format);

private:
    UnitType unitTypeFromOptions(const Options& options) const;

    mu::Progress m_progress;
    bool m_isCompleted = false;
    Ret m_writeRet;
};
}

#endif // MU_IMPORTEXPORT_ABSTRACTAUDIOWRITER_H
